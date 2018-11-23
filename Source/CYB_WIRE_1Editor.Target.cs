// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class CYB_WIRE_1EditorTarget : TargetRules
{
	public CYB_WIRE_1EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("CYB_WIRE_1");
	}
}
