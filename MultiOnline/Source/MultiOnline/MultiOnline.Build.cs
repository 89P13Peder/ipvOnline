// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MultiOnline : ModuleRules
{
	public MultiOnline(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"MultiOnline",
			"MultiOnline/Variant_Platforming",
			"MultiOnline/Variant_Platforming/Animation",
			"MultiOnline/Variant_Combat",
			"MultiOnline/Variant_Combat/AI",
			"MultiOnline/Variant_Combat/Animation",
			"MultiOnline/Variant_Combat/Gameplay",
			"MultiOnline/Variant_Combat/Interfaces",
			"MultiOnline/Variant_Combat/UI",
			"MultiOnline/Variant_SideScrolling",
			"MultiOnline/Variant_SideScrolling/AI",
			"MultiOnline/Variant_SideScrolling/Gameplay",
			"MultiOnline/Variant_SideScrolling/Interfaces",
			"MultiOnline/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
