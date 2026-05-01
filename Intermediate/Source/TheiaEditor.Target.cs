using UnrealBuildTool;

public class TheiaEditorTarget : TargetRules
{
	public TheiaEditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("Theia");
	}
}
