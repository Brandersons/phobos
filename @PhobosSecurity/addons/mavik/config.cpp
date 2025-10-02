#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class Mavic_Core
	{
		name = "DJI Mavic 3";
		author = "$STR_Mavic_Author";
		requiredVersion = 2.18;
		requiredAddons[] = {"A3_Data_F_Decade_Loadorder","cba_settings","phobos_core"};
		units[] = {
			"Mavic_3_OPF","Mavic_3_BLU","Mavic_3_IND","Mavic_3_CIV",
			"Mavic_3T_OPF","Mavic_3T_BLU","Mavic_3T_IND","Mavic_3T_CIV",
			"Mavic_3N_OPF","Mavic_3N_BLU","Mavic_3N_IND","Mavic_3N_CIV",
			"Mavic_3X_OPF","Mavic_3X_BLU","Mavic_3X_IND","Mavic_3X_CIV",
			"phobos_mavic_3n", "phobos_mavic_3x"
		};
		weapons[] =
		{
			"ItemMavic3","ItemMavic3T","ItemMavic3N","ItemMavic3X",
			"phobos_mavic_3n_item", "phobos_mavic_3x_item"
		};
	};
};

#include "EventHandlers.hpp"
#include "CfgFunctions.hpp"
#include "CfgVehicles.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "CfgSounds.hpp"
#include "RscTitles.hpp"