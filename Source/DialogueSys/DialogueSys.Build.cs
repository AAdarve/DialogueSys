// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DialogueSys : ModuleRules
{
	public DialogueSys(ReadOnlyTargetRules Target) : base(Target)
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
			"DialogueSys",
			"DialogueSys/Variant_Platforming",
			"DialogueSys/Variant_Platforming/Animation",
			"DialogueSys/Variant_Combat",
			"DialogueSys/Variant_Combat/AI",
			"DialogueSys/Variant_Combat/Animation",
			"DialogueSys/Variant_Combat/Gameplay",
			"DialogueSys/Variant_Combat/Interfaces",
			"DialogueSys/Variant_Combat/UI",
			"DialogueSys/Variant_SideScrolling",
			"DialogueSys/Variant_SideScrolling/AI",
			"DialogueSys/Variant_SideScrolling/Gameplay",
			"DialogueSys/Variant_SideScrolling/Interfaces",
			"DialogueSys/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
