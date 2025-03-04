// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CUserWidget_CrossHair.generated.h"

/**
 *  ABPó��, ���鶧 Parent�� �����Ѵ�
 */
UCLASS()
class UC_RIFLE_API UCUserWidget_CrossHair : public UUserWidget
{
	GENERATED_BODY()
protected:
	void NativeOnInitialized() override;
	void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
public:
	void UpdateSpreadRange(float InRadius, float InMaxRadius);
//
//  Canvas
//    Border
//      Image
private:
	TArray<class UBorder*>  Borders;     // TBLR�� border����
	TArray<FVector2D>       Alignments;  // TBLR�� border����
private:
	float  Radius;
	float  MaxRadius;
private:
	enum class EDirection
	{
		Top=0, Bottom,Left,Right,Max
	};
};
