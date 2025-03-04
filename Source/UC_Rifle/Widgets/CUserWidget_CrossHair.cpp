// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/CUserWidget_CrossHair.h"
#include "Global.h"
#include "Blueprint/WidgetTree.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/Border.h"

void UCUserWidget_CrossHair::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	UCanvasPanel* panel = Cast<UCanvasPanel>(this->WidgetTree->RootWidget);
	CheckNull(panel);
	//TArray<AActor*> hitResults;

	TArray<UWidget*> widgets = panel->GetAllChildren();
	for (UWidget* widget : widgets)
	{
		UBorder* border = Cast<UBorder>(widget);
		if (!!border)
		{
			// Widget을 선택후 우측에 디테일창에서 항목
			Borders.Add(border);  // TArray<UBoder*> Borders;
			UCanvasPanelSlot* slot = UWidgetLayoutLibrary::SlotAsCanvasSlot(border);
			Alignments.Add(slot->GetAlignment());
		}
	}
	if (1)
	{
		for (int32 i = 0; i < Borders.Num(); i++)
		{

			CLog::Log(Borders[i]->GetName());
			CLog::Log(Alignments[i].ToString());
		}
	}

}
void UCUserWidget_CrossHair::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	float minimum = 0.0f;
	float maximum = 0.0f;

	for (int32 i = 0; i < (int32)EDirection::Max; i++)
	{
		if (i == (int32)EDirection::Top)
			{
				minimum = Alignments[i].Y;
				maximum = Alignments[i].Y + MaxRadius;
			}
		else if(i == (int32)EDirection::Bottom)
			{

				minimum = Alignments[i].Y;
				maximum = Alignments[i].Y - MaxRadius;
			}
		else if (i == (int32)EDirection::Left)
			{
				minimum = Alignments[i].X;
				maximum = Alignments[i].X + MaxRadius;

			}
		else
			{
				minimum = Alignments[i].X;
				maximum = Alignments[i].X - MaxRadius;

			}

	    // i가 TOP,BOTTOM........
		// Top기준  : 1.5, max 1.5+2.0
		// Lerp(1.5,3.5,0.0) --> 1.5
		// float Lerp(float start, float end, float amount)
		//{
		//	return start + (end - start) * amount;
		//}
	    float value = FMath::Lerp<float>(minimum, maximum, Radius);
		UCanvasPanelSlot* slot = UWidgetLayoutLibrary::SlotAsCanvasSlot(Borders[i]);

		switch ((EDirection)i)
		{
		case EDirection::Top:
		case EDirection::Bottom:
			slot->SetAlignment(FVector2D(Alignments[i].X, value));
			break;
		case EDirection::Left:
		case EDirection::Right:
			slot->SetAlignment(FVector2D(value, Alignments[i].Y));
			break;
		}	
	}
}

void UCUserWidget_CrossHair::UpdateSpreadRange(float InRadius, float InMaxRadius)
{
	Radius     = InRadius;
	MaxRadius = InMaxRadius;
}
