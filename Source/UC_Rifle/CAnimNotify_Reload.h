

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "CAnimNotify_Reload.generated.h"

UENUM()
enum class ERoadActionType : uint8
{
	Eject,Spawn,Load,End
};

UCLASS()
class UC_RIFLE_API UCAnimNotify_Reload : public UAnimNotify
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditAnywhere, Category = "Action")
		ERoadActionType ActionType;

public:
	FString GetNotifyName_Implementation() const override;
	void    Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;
};
