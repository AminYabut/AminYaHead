// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AminYaHead : ModuleRules
{
	public AminYaHead(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
