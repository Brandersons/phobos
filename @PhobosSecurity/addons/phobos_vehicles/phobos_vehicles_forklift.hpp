class UK3CB_C_Forklift;

class phobos_vehicles_forklift : UK3CB_C_Forklift
{    
    displayName = "[Phobos] Logistics Mobility Vehicle (FLT)";
    author = "Brandersons";
    faction = "phobos_faction";
    side = 1;
    editorSubcategory = "phobos_faction_edsubcat_utility";
    crew = "B_Soldier_F";
    typicalCargo[] = {"B_Soldier_F"};
    editorPreview = "UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_Forklift\data\ui\UK3CB_C_Forklift.jpg";
    icon = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\ui\icomap_m270_ca.paa";
    scope = 2;
    scopeCurator = 2;
    tf_hasLRradio = 0;
    tfar_hasintercom = 0;
    hiddenSelections[] = {"camo","camo1","camo2"};
    hiddenSelectionsTextures[] =
    {
        "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_Forklift\data\forklift_ladder_mil_grn_co.paa",
        "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_Forklift\data\forklift_mil_grn_co.paa",
        "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_Forklift\data\forklift_extra_co.paa"
    };
    class TextureSources
    {
        class phobos_olive
        {
            displayName = "[Phobos] Olive";
            author = "Brandersons";
            textures[] =
            {
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_Forklift\data\forklift_ladder_mil_grn_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_Forklift\data\forklift_mil_grn_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_Forklift\data\forklift_extra_co.paa"
            };
            factions[] = {};
        };
        class phobos_orange
        {
            displayName = "[Phobos] Orange";
            author = "Brandersons";
            textures[] =
            {
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_Forklift\data\forklift_ladder_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_Forklift\data\forklift_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_Forklift\data\forklift_extra_co.paa"
            };
            factions[] = {};
        };
    };
    class transportBackpacks {};
    class transportItems {};
    class transportMagazines {};
    class transportWeapons {};
    ace_rearm_defaultSupply = 1200;
    ace_refuel_fuelCargo = 3000;
    ace_repair_canRepair = 1;
};