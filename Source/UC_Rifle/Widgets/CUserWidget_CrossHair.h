// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CUserWidget_CrossHair.generated.h"

/**
 *  ABP처럼, 만들때 Parent을 지정한다
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
	TArray<class UBorder*>  Borders;     // TBLR에 border저장
	TArray<FVector2D>       Alignments;  // TBLR에 border저장
private:
	float  Radius;
	float  MaxRadius;
private:
	enum class EDirection
	{
		Top=0, Bottom,Left,Right,Max
	};
};
