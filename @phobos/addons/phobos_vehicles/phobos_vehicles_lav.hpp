class UK3CB_AAF_B_LAV25;
class UK3CB_AAF_B_LAV25_HQ;

class phobos_vehicles_lav_25 : UK3CB_AAF_B_LAV25
{    
    displayName = "[Phobos] LAV-25";
    author = "Brandersons";
    faction = "phobos_faction";
    side = 1;
    editorSubcategory = "phobos_faction_edsubcat_ifvs";
    crew = "B_Soldier_F";
    typicalCargo[] = {"B_Soldier_F"};
    editorpreview = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\ui\UK3CB_B_LAV25_CW_US.jpg";
    icon = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\ui\icon_lav25_ca.paa";
    scope = 2;
    scopeCurator = 2;
    tf_hasLRradio = 1;
    tf_isolatedAmount = 0.3;
    tf_RadioType = "TFAR_rt1523g";
    tf_range = 20000;
    tfar_hasintercom = 1;
    hiddenSelections[] = {"camo1","camo2","camo3","camo5","camo6"};
    hiddenSelectionsTextures[] =
    {
        "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lavbody_oli_co.paa",
        "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lavbody2_oli_co.paa",
        "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lavalfa_oli_ca.paa",
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\equipment\us_backpacks_co.paa",
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\equipment\cied_dome_wdl_co.paa"
    };
    class TextureSources
    {
        class phobos_black
        {
            displayName = "[Phobos] Black";
            author = "Brandersons";
            textures[] =
            {
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lavbody_oli_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lavbody2_oli_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lavalfa_oli_ca.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\equipment\us_backpacks_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\equipment\cied_dome_wdl_co.paa"
            };
            factions[] = {};
        };
        class phobos_olive
        {
            displayName = "[Phobos] Olive";
            author = "Brandersons";
            textures[] =
            {
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lavbody_oli_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lavbody2_oli_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lavalfa_oli_ca.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\equipment\us_backpacks_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\equipment\cied_dome_wdl_co.paa"
            };
            factions[] = {};
        };
        class phobos_sand
        {
            displayName = "[Phobos] Sand";
            author = "Brandersons";
            textures[] =
            {
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lavbody_des_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lavbody2_des_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lavalfa_des_ca.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\equipment\us_des_backpacks_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\equipment\cied_dome_des_co.paa"
            };
            factions[] = {};
        };
    };
    class transportBackpacks {};
    class transportItems {};
    class transportMagazines {};
    class transportWeapons {};
    ace_vehicle_damage_canHaveFireRing = 0;
    ace_vehicle_damage_detonationDuringFireProb = 0.1;
    ace_vehicle_damage_engineDetonationProb = 0;
    ace_vehicle_damage_engineFireProb = 0.2;
    ace_vehicle_damage_hullDetonationProb = 0;
    ace_vehicle_damage_hullFireProb = 0;
    ace_vehicle_damage_turretDetonationProb = 0.1;
    ace_vehicle_damage_turretFireProb = 0.2;
};
class phobos_vehicles_lav_hq : UK3CB_AAF_B_LAV25_HQ
{    
    displayName = "[Phobos] LAV-C2";
    author = "Brandersons";
    faction = "phobos_faction";
    side = 1;
    editorSubcategory = "phobos_faction_edsubcat_apc";
    crew = "B_Soldier_F";
    typicalCargo[] = {"B_Soldier_F"};
    editorpreview = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\ui\UK3CB_B_LAV25_HQ_CW_US.jpg";
    icon = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\ui\icon_lav25_hq_ca.paa";
    scope = 2;
    scopeCurator = 2;
    tf_hasLRradio = 1;
    tf_isolatedAmount = 0.3;
    tf_RadioType = "TFAR_rt1523g";
    tf_range = 20000;
    tfar_hasintercom = 1;
    hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6"};
    hiddenSelectionsTextures[] =
    {
        "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lavbody_oli_co.paa",
        "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lavbody2_oli_co.paa",
        "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lavalfa_oli_ca.paa",
        "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lav_hq_oli_co.paa",
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\equipment\us_backpacks_co.paa",
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\equipment\cied_dome_wdl_co.paa"
    };
    class TextureSources
    {
        class phobos_black
        {
            displayName = "[Phobos] Black";
            author = "Brandersons";
            textures[] =
            {
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lavbody_oli_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lavbody2_oli_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lavalfa_oli_ca.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lav_hq_oli_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\equipment\us_backpacks_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\equipment\cied_dome_wdl_co.paa"
            };
            factions[] = {};
        };
        class phobos_olive
        {
            displayName = "[Phobos] Olive";
            author = "Brandersons";
            textures[] =
            {
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lavbody_oli_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lavbody2_oli_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lavalfa_oli_ca.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lav_hq_oli_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\equipment\us_backpacks_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\equipment\cied_dome_wdl_co.paa"
            };
            factions[] = {};
        };
        class phobos_sand
        {
            displayName = "[Phobos] Sand";
            author = "Brandersons";
            textures[] =
            {
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lavbody_des_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lavbody2_des_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lavalfa_des_ca.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lav_hq_des_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\equipment\us_des_backpacks_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\equipment\cied_dome_des_co.paa"
            };
            factions[] = {};
        };
    };
    class transportBackpacks {};
    class transportItems {};
    class transportMagazines {};
    class transportWeapons {};
    ace_vehicle_damage_canHaveFireRing = 0;
    ace_vehicle_damage_detonationDuringFireProb = 0.1;
    ace_vehicle_damage_engineDetonationProb = 0;
    ace_vehicle_damage_engineFireProb = 0.2;
    ace_vehicle_damage_hullDetonationProb = 0;
    ace_vehicle_damage_hullFireProb = 0;
    ace_vehicle_damage_turretDetonationProb = 0.1;
    ace_vehicle_damage_turretFireProb = 0.2;
};