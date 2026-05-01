using UnrealBuildTool;

public class TheiaClientTarget : TargetRules
{
	public TheiaClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("Theia");
	}
}
