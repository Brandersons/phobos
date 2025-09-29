class UK3CB_KRG_B_M270_Avenger;
class UK3CB_KRG_B_M270_Transport;
class UK3CB_KRG_B_M270_Carrier;
class UK3CB_B_M270_MLRS_Cluster_WDL;
class UK3CB_B_M270_MLRS_HE_WDL;

class phobos_vehicles_m270_avenger : UK3CB_KRG_B_M270_Avenger
{    
    displayName = "[Phobos] M270 (Avenger)";
    author = "Brandersons";
    faction = "phobos_faction";
    side = 1;
    editorSubcategory = "phobos_faction_edsubcat_antiair";
    crew = "B_Soldier_F";
    typicalCargo[] = {"B_Soldier_F"};
    editorpreview = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\ui\UK3CB_DES_M270_Avenger.jpg";
    icon = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\ui\icomap_m270_ca.paa";
    scope = 2;
    scopeCurator = 2;
    tf_hasLRradio = 1;
    tf_isolatedAmount = 0.3;
    tf_RadioType = "TFAR_rt1523g";
    tf_range = 20000;
    tfar_hasintercom = 1;
    hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
    hiddenSelectionsTextures[] =
    {
        "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mlrs_hull_olive_co.paa",
        "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\m998a2_avenger_1_olive_co.paa",
        "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\m998a2_avenger_3_co.paa",
        "a3\armor_f\data\camonet_nato_green_co.paa"
    };
    class TextureSources
    {
        class phobos_black
        {
            displayName = "[Phobos] Black";
            author = "Brandersons";
            textures[] =
            {
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mlrs_hull_olive_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\m998a2_avenger_1_olive_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\m998a2_avenger_3_co.paa",
                "a3\armor_f\data\camonet_nato_green_co.paa"
            };
            factions[] = {};
        };
        class phobos_olive
        {
            displayName = "[Phobos] Olive";
            author = "Brandersons";
            textures[] =
            {
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mlrs_hull_olive_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\m998a2_avenger_1_olive_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\m998a2_avenger_3_co.paa",
                "a3\armor_f\data\camonet_nato_green_co.paa"
            };
            factions[] = {};
        };
        class phobos_sand
        {
            displayName = "[Phobos] Sand";
            author = "Brandersons";
            textures[] =
            {
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mlrs_hull_desert_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\m998a2_avenger_1_des_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\m998a2_avenger_3_des_co.paa",
                "a3\armor_f\data\camonet_nato_desert_co.paa"
            };
            factions[] = {};
        };
    };
    class transportBackpacks {};
    class transportItems {};
    class transportMagazines {};
    class transportWeapons {};
};
class phobos_vehicles_m270_transport : UK3CB_KRG_B_M270_Transport
{    
    displayName = "[Phobos] M270 (Transport)";
    author = "Brandersons";
    faction = "phobos_faction";
    side = 1;
    editorSubcategory = "phobos_faction_edsubcat_trucks";
    crew = "B_Soldier_F";
    typicalCargo[] = {"B_Soldier_F"};
    editorpreview = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\ui\UK3CB_DES_M270_Transport.jpg";
    icon = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\ui\icomap_m270_ca.paa";
    scope = 2;
    scopeCurator = 2;
    tf_hasLRradio = 1;
    tf_isolatedAmount = 0.3;
    tf_RadioType = "TFAR_rt1523g";
    tf_range = 20000;
    tfar_hasintercom = 1;
    hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5"};
    hiddenSelectionsTextures[] =
    {
        "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mlrs_hull_olive_co.paa",
        "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mtvr_body2_co.paa",
        "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mtvr_interier_co.paa",
        "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mtvr_tarp_co.paa",
        "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mtvr_apk_back_co.paa"
    };
    class TextureSources
    {
        class phobos_black
        {
            displayName = "[Phobos] Black";
            author = "Brandersons";
            textures[] =
            {
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mlrs_hull_olive_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mtvr_body2_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mtvr_interier_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mtvr_tarp_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mtvr_apk_back_co.paa"
            };
            factions[] = {};
        };
        class phobos_olive
        {
            displayName = "[Phobos] Olive";
            author = "Brandersons";
            textures[] =
            {
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mlrs_hull_olive_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mtvr_body2_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mtvr_interier_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mtvr_tarp_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mtvr_apk_back_co.paa"
            };
            factions[] = {};
        };
        class phobos_sand
        {
            displayName = "[Phobos] Sand";
            author = "Brandersons";
            textures[] =
            {
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mlrs_hull_desert_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mtvr_body2_desert_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mtvr_interier_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mtvr_tarp_des_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mtvr_apk_back_des_co.paa"
            };
            factions[] = {};
        };
    };
    class transportBackpacks {};
    class transportItems {};
    class transportMagazines {};
    class transportWeapons {};
};
class phobos_vehicles_m270_cargo : UK3CB_KRG_B_M270_Carrier
{    
    displayName = "[Phobos] M270 (Cargo)";
    author = "Brandersons";
    faction = "phobos_faction";
    side = 1;
    editorSubcategory = "phobos_faction_edsubcat_trucks";
    crew = "B_Soldier_F";
    typicalCargo[] = {"B_Soldier_F"};
    editorpreview = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\ui\UK3CB_DES_M270_Carrier.jpg";
    icon = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\ui\icomap_m270_ca.paa";
    scope = 2;
    scopeCurator = 2;
    tf_hasLRradio = 1;
    tf_isolatedAmount = 0.3;
    tf_RadioType = "TFAR_rt1523g";
    tf_range = 20000;
    tfar_hasintercom = 1;
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] =
    {
        "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mlrs_hull_woodland_co.paa"
    };
    class TextureSources
    {
        class phobos_black
        {
            displayName = "[Phobos] Black";
            author = "Brandersons";
            textures[] =
            {
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mlrs_hull_woodland_co.paa"
            };
            factions[] = {};
        };
        class phobos_olive
        {
            displayName = "[Phobos] Olive";
            author = "Brandersons";
            textures[] =
            {
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mlrs_hull_woodland_co.paa"
            };
            factions[] = {};
        };
        class phobos_sand
        {
            displayName = "[Phobos] Sand";
            author = "Brandersons";
            textures[] =
            {
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mlrs_hull_desert_co.paa"
            };
            factions[] = {};
        };
    };
    class transportBackpacks {};
    class transportItems {};
    class transportMagazines {};
    class transportWeapons {};
};
class phobos_vehicles_m270_mlrs_cluster : UK3CB_B_M270_MLRS_Cluster_WDL
{    
    displayName = "[Phobos] M270 (Cluster)";
    author = "Brandersons";
    faction = "phobos_faction";
    side = 1;
    editorSubcategory = "phobos_faction_edsubcat_artillery";
    crew = "B_Soldier_F";
    typicalCargo[] = {"B_Soldier_F"};
    editorpreview = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\ui\UK3CB_WDL_M270_MLRS.jpg";
    icon = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\ui\icomap_m270_ca.paa";
    scope = 2;
    scopeCurator = 2;
    tf_hasLRradio = 1;
    tf_isolatedAmount = 0.3;
    tf_RadioType = "TFAR_rt1523g";
    tf_range = 20000;
    tfar_hasintercom = 1;
    hiddenSelections[] = {"camo","camo1"};
    hiddenSelectionsTextures[] =
    {
        "rhsusf\addons\rhsusf_himars\data\m142_rear_co.paa",
        "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mlrs_hull_olive_co.paa"
    };
    class TextureSources
    {
        class phobos_black
        {
            displayName = "[Phobos] Black";
            author = "Brandersons";
            textures[] =
            {
                "rhsusf\addons\rhsusf_himars\data\m142_rear_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mlrs_hull_olive_co.paa"
            };
            factions[] = {};
        };
        class phobos_olive
        {
            displayName = "[Phobos] Olive";
            author = "Brandersons";
            textures[] =
            {
                "rhsusf\addons\rhsusf_himars\data\m142_rear_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mlrs_hull_olive_co.paa"
            };
            factions[] = {};
        };
        class phobos_sand
        {
            displayName = "[Phobos] Sand";
            author = "Brandersons";
            textures[] =
            {
                "rhsusf\addons\rhsusf_himars\data\m142_rear_d_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mlrs_hull_desert_co.paa"
            };
            factions[] = {};
        };
    };
    class transportBackpacks {};
    class transportItems {};
    class transportMagazines {};
    class transportWeapons {};
};
class phobos_vehicles_m270_mlrs_he : UK3CB_B_M270_MLRS_HE_WDL
{    
    displayName = "[Phobos] M270 (HE)";
    author = "Brandersons";
    faction = "phobos_faction";
    side = 1;
    editorSubcategory = "phobos_faction_edsubcat_artillery";
    crew = "B_Soldier_F";
    typicalCargo[] = {"B_Soldier_F"};
    editorpreview = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\ui\UK3CB_WDL_M270_MLRS.jpg";
    icon = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\ui\icomap_m270_ca.paa";
    scope = 2;
    scopeCurator = 2;
    tf_hasLRradio = 1;
    tf_isolatedAmount = 0.3;
    tf_RadioType = "TFAR_rt1523g";
    tf_range = 20000;
    tfar_hasintercom = 1;
    hiddenSelections[] = {"camo","camo1"};
    hiddenSelectionsTextures[] =
    {
        "rhsusf\addons\rhsusf_himars\data\m142_rear_co.paa",
        "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mlrs_hull_olive_co.paa"
    };
    class TextureSources
    {
        class phobos_black
        {
            displayName = "[Phobos] Black";
            author = "Brandersons";
            textures[] =
            {
                "rhsusf\addons\rhsusf_himars\data\m142_rear_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mlrs_hull_olive_co.paa"
            };
            factions[] = {};
        };
        class phobos_olive
        {
            displayName = "[Phobos] Olive";
            author = "Brandersons";
            textures[] =
            {
                "rhsusf\addons\rhsusf_himars\data\m142_rear_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mlrs_hull_olive_co.paa"
            };
            factions[] = {};
        };
        class phobos_sand
        {
            displayName = "[Phobos] Sand";
            author = "Brandersons";
            textures[] =
            {
                "rhsusf\addons\rhsusf_himars\data\m142_rear_d_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_M270\data\mlrs_hull_desert_co.paa"
            };
            factions[] = {};
        };
    };
    class transportBackpacks {};
    class transportItems {};
    class transportMagazines {};
    class transportWeapons {};
};