// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "CAnimNotifyState_Equip.generated.h"

/**
 * 
 */
UCLASS()
class UC_RIFLE_API UCAnimNotifyState_Equip : public UAnimNotifyState
{
	GENERATED_BODY()
public:
	/** UAnimNotifyState
    * Implementable event to get a custom name for the notify
    */
	// UFUNCTION(BlueprintNativeEvent)    : C++���� ������ �ϰ�, �������� �������Ͽ� ���
	// 	  FString GetNotifyName() const;
	//     GetNotifyName_Implementation()
	FString GetNotifyName_Implementation() const override;
	void    NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
	void    NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;
};
