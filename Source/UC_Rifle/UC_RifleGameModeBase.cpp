// Copyright Epic Games, Inc. All Rights Reserved.

#include "UC_RifleGameModeBase.h"
#include "Global.h"

AUC_RifleGameModeBase::AUC_RifleGameModeBase()
{
	//Class'/Script/UC_Rifle.CPlayer'
	// Class�ΰ��� ���۷��� ������ _C�� �ٿ��ش�
	CHelpers::GetClass<APawn>(&DefaultPawnClass, "Blueprint'/Game/Player/BP_CPlayer.BP_CPlayer_C'");

}