// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UC_Rifle : ModuleRules
{
	public UC_Rifle(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;  // 프리컴파일 header
        PublicIncludePaths.Add(ModuleDirectory);          // 속성창에  ./;

        PublicDependencyModuleNames.Add("Core");          // #pragma comment(lib, "SystemDLL.lib")
        PublicDependencyModuleNames.Add("CoreUObject");
        PublicDependencyModuleNames.Add("Engine");
        PublicDependencyModuleNames.Add("InputCore");


       // PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
