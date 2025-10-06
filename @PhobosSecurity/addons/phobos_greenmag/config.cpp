class CfgPatches
{
	class phobos_greenmag_compat
	{
		units[]={};
		weapons[]=
		{
			"phobos_greenmag_pistol_1rnd",
			"phobos_greenmag_pistol_50rnd",
			"phobos_greenmag_intermediate_1rnd",
			"phobos_greenmag_intermediate_50rnd",
			"phobos_greenmag_large_1rnd",
			"phobos_greenmag_large_50rnd"
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
	#include "phobos_greenmag_ammoboxes.hpp"
};

class CfgMagazines
{
	class CA_Magazine;
	// pistol caliber ammo
	#include "phobos_greenmag_pistol.hpp"
	// intermediate caliber ammo
	#include "phobos_greenmag_intermediate.hpp"
	// large caliber ammo
	#include "phobos_greenmag_large.hpp"
};