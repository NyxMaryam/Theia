using UnrealBuildTool;

public class TheiaServerTarget : TargetRules
{
	public TheiaServerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Server;
		ExtraModuleNames.Add("Theia");
	}
}
