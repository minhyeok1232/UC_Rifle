// Copyright Epic Games, Inc. All Rights Reserved.

#include "UC_RifleGameModeBase.h"
#include "Global.h"

AUC_RifleGameModeBase::AUC_RifleGameModeBase()
{
	//Class'/Script/UC_Rifle.CPlayer'
	// Class인경우는 레퍼런스 복사후 _C를 붙여준다
	CHelpers::GetClass<APawn>(&DefaultPawnClass, "Blueprint'/Game/Player/BP_CPlayer.BP_CPlayer_C'");

}