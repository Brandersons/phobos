class CfgPatches
{
	class phobos_core
	{
		name="[Phobos] Core";
		author="Brandersons";
		url="";
		requiredAddons[]=
		{
			"3DEN",
			"A3_Characters_F"
		};
		requiredVersion= 0.01;
		units[]={};
		weapons[]={};
		magazines[]={};
	};
};

class CfgFactionClasses
{
    class phobos_faction
    {
        displayName = "[Phobos] Phobos Security";
        priority = 1;
        side = 1;
        icon = "";
    };
};

class CfgEditorCategories
{
    class phobos_faction_edcat
    {
        displayName = "[Phobos] Phobos Security";
    };
    class phobos_faction_edcat_objects
    {
        displayName = "[Phobos] Objects";
    };
};

class CfgEditorSubcategories
{
    // These are the categories for units and vehicles
    class phobos_faction_edsubcat_antiair
    {
        displayName = "[Phobos] Anti-Air";
    };
    class phobos_faction_edsubcat_apc
    {
        displayName = "[Phobos] APCs";
    };
    class phobos_faction_edsubcat_artillery
    {
        displayName = "[Phobos] Artillery";
    };
    class phobos_faction_edsubcat_boats
    {
        displayName = "[Phobos] Boats";
    };
    class phobos_faction_edsubcat_carscovert
    {
        displayName = "[Phobos] Cars (Covert)";
    };
    class phobos_faction_edsubcat_carsovert
    {
        displayName = "[Phobos] Cars (Overt)";
    };
    class phobos_faction_edsubcat_drones
    {
        displayName = "[Phobos] Drones";
    };
    class phobos_faction_edsubcat_helicopters
    {
        displayName = "[Phobos] Helicopters";
    };
    class phobos_faction_edsubcat_ifvs
    {
        displayName = "[Phobos] IFVs";
    };
    class phobos_faction_edsubcat_men
    {
        displayName = "[Phobos] Men";
    };
    class phobos_faction_edsubcat_menutility
    {
        displayName = "[Phobos] Men (Utility)";
    };
    class phobos_faction_edsubcat_mraps
    {
        displayName = "[Phobos] MRAPs";
    };
    class phobos_faction_edsubcat_planes
    {
        displayName = "[Phobos] Planes";
    };
    class phobos_faction_edsubcat_players
    {
        displayName = "[Phobos] Players";
    };
    class phobos_faction_edsubcat_tanks
    {
        displayName = "[Phobos] Tanks";
    };
    class phobos_faction_edsubcat_trucks
    {
        displayName = "[Phobos] Trucks";
    };
    class phobos_faction_edsubcat_turrets
    {
        displayName = "[Phobos] Turrets";
    };
    class phobos_faction_edsubcat_utility
    {
        displayName = "[Phobos] Utility";
    };
    class phobos_faction_edsubcat_vtols
    {
        displayName = "[Phobos] VTOLs";
    };
    // These are the categories for objects and compositions
    class phobos_faction_edsubcat_props
    {
        displayName = "[Phobos] Props";
    };
    class phobos_faction_edsubcat_supplies
    {
        displayName = "[Phobos] Supplies";
    };
    class phobos_faction_edsubcat_utilities
    {
        displayName = "[Phobos] Utilities";
    };
};