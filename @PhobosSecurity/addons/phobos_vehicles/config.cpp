class CfgPatches
{
	class phobos_vehicles
	{
		name="[Phobos] Vehicles";
		author="Brandersons";
        url="brandersons.com";
        addonRootClass = "phobos_core";
		requiredAddons[]=
		{
            "phobos_core"
		};
		requiredVersion= 0.01;
		units[]=
        {
            "phobos_vehicles_forklift",
            "phobos_vehicles_ah6m",
            "phobos_vehicles_mh6m",
            "phobos_vehicles_c130",
            "phobos_vehicles_c130_cargo",
            "phobos_vehicles_lav_25",
            "phobos_vehicles_lav_hq",
            "phobos_vehicles_mh60_dap",
            "phobos_vehicles_stryker_apc",
            "phobos_vehicles_stryker_plow",
            "phobos_vehicles_stryker_atgm",
            "phobos_vehicles_stryker_mgs",
            "phobos_vehicles_suv_armed",
            "phobos_vehicles_suv_armoured",
            "phobos_vehicles_t810_transportopen",
            "phobos_vehicles_t810_transportcovered",
            "phobos_vehicles_t810_ammo",
            "phobos_vehicles_t810_fuel",
            "phobos_vehicles_t810_recovery",
            "phobos_vehicles_t810_repair",
            "phobos_vehicles_t810_mlrs",
            "phobos_vehicles_t810_zu23",
            "phobos_vehicles_v22",
            "phobos_vehicles_v22_cargo",
            "phobos_vehicles_m270_avenger",
            "phobos_vehicles_m270_transport",
            "phobos_vehicles_m270_cargo",
            "phobos_vehicles_m270_mlrs_cluster",
            "phobos_vehicles_m270_mlrs_he"
        };
		weapons[]={};
		magazines[]={};
	};
};

class CfgVehicles
{
    #include "phobos_vehicles_ah6.hpp"
    #include "phobos_vehicles_c130.hpp"
    #include "phobos_vehicles_forklift.hpp"
    #include "phobos_vehicles_lav.hpp"
    #include "phobos_vehicles_m270.hpp"
    #include "phobos_vehicles_mh60.hpp"
    #include "phobos_vehicles_stryker.hpp"
    #include "phobos_vehicles_suv.hpp"
    #include "phobos_vehicles_t810.hpp"
    #include "phobos_vehicles_v22.hpp"
};