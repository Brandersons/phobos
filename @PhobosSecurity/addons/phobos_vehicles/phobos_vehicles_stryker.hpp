class rhsusf_stryker_m1127_m2_wd;
class rhsusf_stryker_m1132_m2_wd;
class rhsusf_stryker_m1134_wd;
class m1128_mgs_b;

class phobos_vehicles_stryker_apc : rhsusf_stryker_m1127_m2_wd
{    
    displayName = "[Phobos] Stryker (M2/LRAS3)";
    author = "Brandersons";
    faction = "phobos_faction";
    side = 1;
    editorSubcategory = "phobos_faction_edsubcat_apc";
    crew = "B_Soldier_F";
    typicalCargo[] = {"B_Soldier_F"};
    editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_stryker_m1127_m2_wd.paa";
    icon = "\A3\armor_f_gamma\APC_Wheeled_03\Data\UI\map_APC_Wheeled_03_CA.paa";
    scope = 2;
    scopeCurator = 2;
    tf_hasLRradio = 1;
    tf_isolatedAmount = 0.3;
    tf_RadioType = "TFAR_rt1523g";
    tf_range = 20000;
    tfar_hasintercom = 1;
    hiddenSelections[] = {"Camo_1","Camo_2","Camo_3","Camo_4","Camo_5","camo_6","camo_lras","Camo_Acc","Camo_AccA","Camo_DUKE","Camo_fc01","Camo_fc02","Camo_wc01","Camo_wc02","callsign1","callsign2","callsign3","callsign4","dec_hull","BFT_screen"};
    hiddenSelectionsTextures[] =
    {
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_co.paa",
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_co.paa",
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_co.paa",
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_co.paa",
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_co.paa",
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_M1127_co.paa",
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_LRAS3_CO.paa",
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_co.paa",
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_ca.paa",
        "rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_wd_co.paa",
        "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
        "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
        "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
        "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa"
    };
    class TextureSources
    {
        class phobos_black
        {
            displayName = "[Phobos] Black";
            author = "Brandersons";
            textures[] =
            {
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_M1127_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_LRAS3_CO.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_ca.paa",
                "rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_wd_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa"
            };
            factions[] = {};
        };
        class phobos_olive
        {
            displayName = "[Phobos] Olive";
            author = "Brandersons";
            textures[] =
            {
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_M1127_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_LRAS3_CO.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_ca.paa",
                "rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_wd_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa"
            };
            factions[] = {};
        };
        class phobos_sand
        {
            displayName = "[Phobos] Sand";
            author = "Brandersons";
            textures[] =
            {
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_d_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_d_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_d_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_d_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_d_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_M1127_des_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_LRAS3_d_CO.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_ca.paa",
                "rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_c_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa"
            };
            factions[] = {};
        };
    };
    class transportBackpacks {};
    class transportItems {};
    class transportMagazines {};
    class transportWeapons {};
};
class phobos_vehicles_stryker_plow : rhsusf_stryker_m1132_m2_wd
{    
    displayName = "[Phobos] Stryker (M2/Plow)";
    author = "Brandersons";
    faction = "phobos_faction";
    side = 1;
    editorSubcategory = "phobos_faction_edsubcat_apc";
    crew = "B_Soldier_F";
    typicalCargo[] = {"B_Soldier_F"};
    editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_stryker_m1132_m2_wd.paa";
    icon = "\A3\armor_f_gamma\APC_Wheeled_03\Data\UI\map_APC_Wheeled_03_CA.paa";
    scope = 2;
    scopeCurator = 2;
    tf_hasLRradio = 1;
    tf_isolatedAmount = 0.3;
    tf_RadioType = "TFAR_rt1523g";
    tf_range = 20000;
    tfar_hasintercom = 1;
    hiddenSelections[] = {"Camo_1","Camo_2","Camo_3","Camo_4","Camo_5","camo_6","Camo_Acc","Camo_AccA","Camo_DUKE","Camo_fc01","Camo_fc02","Camo_wc01","Camo_wc02","callsign1","callsign2","callsign3","callsign4","dec_hull","BFT_screen"};
    hiddenSelectionsTextures[] =
    {
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_co.paa",
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_co.paa",
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_co.paa",
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_co.paa",
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_co.paa",
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1132_co.paa",
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_co.paa",
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_ca.paa",
        "rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_wd_co.paa",
        "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
        "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
        "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
        "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa"
    };
    class TextureSources
    {
        class phobos_black
        {
            displayName = "[Phobos] Black";
            author = "Brandersons";
            textures[] =
            {
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1132_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_ca.paa",
                "rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_wd_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa"
            };
            factions[] = {};
        };
        class phobos_olive
        {
            displayName = "[Phobos] Olive";
            author = "Brandersons";
            textures[] =
            {
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1132_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_ca.paa",
                "rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_wd_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa"
            };
            factions[] = {};
        };
        class phobos_sand
        {
            displayName = "[Phobos] Sand";
            author = "Brandersons";
            textures[] =
            {
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_d_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_d_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_d_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_d_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_d_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1132_d_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_ca.paa",
                "rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_c_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa"
            };
            factions[] = {};
        };
    };
    class transportBackpacks {};
    class transportItems {};
    class transportMagazines {};
    class transportWeapons {};
};
class phobos_vehicles_stryker_atgm : rhsusf_stryker_m1134_wd
{    
    displayName = "[Phobos] Stryker (ATGM)";
    author = "Brandersons";
    faction = "phobos_faction";
    side = 1;
    editorSubcategory = "phobos_faction_edsubcat_tanks";
    crew = "B_Soldier_F";
    typicalCargo[] = {"B_Soldier_F"};
    editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_stryker_m1134_wd.paa";
    icon = "\A3\armor_f_gamma\APC_Wheeled_03\Data\UI\map_APC_Wheeled_03_CA.paa";
    scope = 2;
    scopeCurator = 2;
    tf_hasLRradio = 1;
    tf_isolatedAmount = 0.3;
    tf_RadioType = "TFAR_rt1523g";
    tf_range = 20000;
    tfar_hasintercom = 1;
    hiddenSelections[] = {"Camo_1","Camo_2","Camo_3","Camo_4","Camo_5","camo_6","camo_7","Camo_Acc","Camo_AccA","Camo_DUKE","Camo_fc01","Camo_fc02","Camo_wc01","Camo_wc02","callsign1","callsign2","callsign3","callsign4","dec_hull","BFT_screen"};
    hiddenSelectionsTextures[] =
    {
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_co.paa",
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_co.paa",
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_co.paa",
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_co.paa",
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_co.paa",
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1134_co.paa",
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1134_int_co.paa",
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_co.paa",
        "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_ca.paa",
        "rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_wd_co.paa",
        "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
        "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
        "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
        "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa"
    };
    class TextureSources
    {
        class phobos_black
        {
            displayName = "[Phobos] Black";
            author = "Brandersons";
            textures[] =
            {
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1134_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1134_int_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_ca.paa",
                "rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_wd_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa"
            };
            factions[] = {};
        };
        class phobos_olive
        {
            displayName = "[Phobos] Olive";
            author = "Brandersons";
            textures[] =
            {
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1134_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1134_int_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_ca.paa",
                "rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_wd_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa"
            };
            factions[] = {};
        };
        class phobos_sand
        {
            displayName = "[Phobos] Sand";
            author = "Brandersons";
            textures[] =
            {
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_d_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_d_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_d_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_d_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_d_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1134_d_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1134_int_d_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_co.paa",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_ca.paa",
                "rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_c_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa"
            };
            factions[] = {};
        };
    };
    class transportBackpacks {};
    class transportItems {};
    class transportMagazines {};
    class transportWeapons {};
};
class phobos_vehicles_stryker_mgs : m1128_mgs_b
{    
    displayName = "[Phobos] Stryker (MGS)";
    author = "Brandersons";
    faction = "phobos_faction";
    side = 1;
    editorSubcategory = "phobos_faction_edsubcat_tanks";
    crew = "B_Soldier_F";
    typicalCargo[] = {"B_Soldier_F"};
    editorPreview = "\mgs\data\ui\mgs_prew_b.jpg";
    icon = "\mgs\data\ui\mgs_top.paa";
    scope = 2;
    scopeCurator = 2;
    tf_hasLRradio = 1;
    tf_isolatedAmount = 0.3;
    tf_RadioType = "TFAR_rt1523g";
    tf_range = 20000;
    tfar_hasintercom = 1;
    hiddenSelections[] = {"camo1","camo2","camo3"};
    hiddenSelectionsTextures[] =
    {
        "mgs\data\body_green_co.paa",
        "mgs\data\turret_green_co.paa",
        "mgs\data\gun_green_co.paa"
    };
    class TextureSources
    {
        class phobos_black
        {
            displayName = "[Phobos] Black";
            author = "Brandersons";
            textures[] =
            {
                "mgs\data\body_black_co.paa",
                "mgs\data\turret_black_co.paa",
                "mgs\data\gun_black_co.paa"
            };
            factions[] = {};
        };
        class phobos_olive
        {
            displayName = "[Phobos] Olive";
            author = "Brandersons";
            textures[] =
            {
                "mgs\data\body_green_co.paa",
                "mgs\data\turret_green_co.paa",
                "mgs\data\gun_green_co.paa"
            };
            factions[] = {};
        };
        class phobos_sand
        {
            displayName = "[Phobos] Sand";
            author = "Brandersons";
            textures[] =
            {
                "mgs\data\body_sand1_co.paa",
                "mgs\data\turret_sand1_co.paa",
                "mgs\data\gun_sand1_co.paa"
            };
            factions[] = {};
        };
    };
    class transportBackpacks {};
    class transportItems {};
    class transportMagazines {};
    class transportWeapons {};
};