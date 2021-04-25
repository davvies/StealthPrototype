#pragma once

#include "Runtime/Core/Public/UObject/NameTypes.h"
#include "Runtime/Core/Public/Containers/UnrealString.h"

namespace KEY_METADATA { //Blackboard key data

	 TCHAR const* const target_location = TEXT("TargetLocation"); //radius location
	 TCHAR const* const player_visible = TEXT("PlayerVisible"); //used for trailing the player
	 TCHAR const* const pawn_target = TEXT("PrimaryCharacter"); //actor reference for players locaiton

}


