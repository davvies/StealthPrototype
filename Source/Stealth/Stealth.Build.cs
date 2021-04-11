// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Stealth : ModuleRules
{
	public Stealth(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "AIModule","GameplayTasks",
			"CoreUObject", "Engine", "NavigationSystem", "InputCore", "HeadMountedDisplay" });
	}
}
