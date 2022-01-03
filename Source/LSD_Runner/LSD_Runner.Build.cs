// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LSD_Runner : ModuleRules
{
	public LSD_Runner(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
