using UnrealBuildTool;

public class TresGameEditor : ModuleRules {
    public TresGameEditor(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AnimGraphRuntime",
            "AnimGraph",
            "AnimationCore",
            "BonamikRt",
            "BlueprintGraph",
            "Core",
            "CoreUObject",
            "CriWareRuntime",
            "Engine",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
            "KBDRt",
			"KineDriverRt",
            "Mercuna",
            "Mercuna3DMovement",
            "MovieScene",
            "MovieSceneTracks",
            "RenderCore",
            "Renderer",
            "SQEXSEAD",
            "SQEXSEADEd",
            "ScaleformUI",
            "Slate",
            "SlateCore",
            "TresGame",
            "UMG",
			"UnrealEd",
        });
		
		
		PrivateDependencyModuleNames.AddRange(new string[] { "AnimGraph", "BlueprintGraph", "UnrealEd", "AnimGraphRuntime"});
    }
}
