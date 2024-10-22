class CfgPatches
{
	class YOUR_CLASSNAME
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class StaticObj_concrete_panel_125: HouseNoDestruct
	{
		scope=0;
		model="YOURMOD\DIRECTORY\TO\concrete_panel_125.p3d";
	};
};
