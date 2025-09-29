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
            "phobos_vehicles_forklift"
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
    #include "phobos_vehicles_mh60.hpp"
    #include "phobos_vehicles_stryker.hpp"
    #include "phobos_vehicles_suv.hpp"
    #include "phobos_vehicles_t810.hpp"
    #include "phobos_vehicles_v22.hpp"
};