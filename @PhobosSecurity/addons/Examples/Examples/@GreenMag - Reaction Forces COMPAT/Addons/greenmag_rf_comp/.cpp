class CfgPatches
{
	class greenmag_rf_comp
	{
		units[]={};
		weapons[]=
		{
			"greenmag_rf_comp_ammo_127x55_basic_1Rnd",
			"greenmag_rf_comp_ammo_127x55_basic_30Rnd",
			"greenmag_rf_comp_ammo_127x55_basic_60Rnd",
			"greenmag_rf_comp_ammo_50AE_basic_1Rnd",
			"greenmag_rf_comp_ammo_50AE_basic_30Rnd",
			"greenmag_rf_comp_ammo_50AE_basic_60Rnd"
		};
		requiredVersion=1.9400001;
		requiredAddons[]=
		{
			"greenmag_main"
		};
		author="Brandersons";
		version="1.0.0.17";
		versionStr="1.0.0.17";
		versionAr[]={1,0,0,17};
	};
};
class CfgWeapons
{
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;
	class greenmag_core_1Rnd;
	class greenmag_core_10Rnd;
	class greenmag_core_20Rnd;
	class greenmag_core_30Rnd;
	class greenmag_core_40Rnd;
	class greenmag_core_50Rnd;
	class greenmag_core_60Rnd;

	class phobos_greenmag_ammo_intermediate_30: greenmag_core_30Rnd
	{
		displayName="5.56mm NATO Ammunition (30 Rounds)";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		greenmag_ammotype="greenmag_rf_comp_ammo_50AE_basic_1Rnd";
	};



class CfgMagazines
{
	class CA_Magazine;
	class phobos_magazines_556x45_30rnd_t: CA_Magazine
	{
		greenmag_canSpeedload=1;
		greenmag_needBelt=0;
		greenmag_ammo="greenmag_rf_comp_ammo_127x55_basic_1Rnd";
		greenmag_basicammo="greenmag_rf_comp_ammo_127x55_basic_1Rnd";
	};
	class 7Rnd_50AE_mag_RF: CA_Magazine
	{
		greenmag_canSpeedload=1;
		greenmag_needBelt=0;
		greenmag_ammo="greenmag_rf_comp_ammo_50AE_basic_1Rnd";
		greenmag_basicammo="greenmag_rf_comp_ammo_50AE_basic_1Rnd";
	};
};
