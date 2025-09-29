class RHS_MELB_AH6M;
class RHS_MELB_MH6M;

class phobos_vehicles_ah6m : RHS_MELB_AH6M
{    
    displayName = "[Phobos] AH-6M Little Bird";
    author = "Brandersons";
    faction = "phobos_faction";
    side = 1;
    editorSubcategory = "phobos_faction_edsubcat_helicopters";
    crew = "B_Soldier_F";
    typicalCargo[] = {"B_Soldier_F"};
    editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_MELB_AH6M.paa";
    icon = "rhsusf\addons\rhsusf_melb\Data\ui\map_melb_ah_6m_l_ca.paa";
    scope = 2;
    scopeCurator = 2;
    tf_hasLRradio = 1;
    tf_isolatedAmount = 0.3;
    tf_RadioType = "TFAR_rt1523g";
    tf_range = 20000;
    tfar_hasintercom = 1;
    hiddenSelections[] = {"camo1","d_SN"};
    hiddenSelectionsTextures[] =
    {
        "rhsusf\addons\rhsusf_melb\data\melb_ext_co.paa",
        "rhsusf\addons\rhsusf_melb\data\decals\SN\blank_ca.paa"
    };
    class TextureSources
    {
        class phobos_black
        {
            displayName = "[Phobos] Black";
            author = "Brandersons";
            textures[] =
            {
                "rhsusf\addons\rhsusf_melb\data\melb_ext_co.paa",
                "rhsusf\addons\rhsusf_melb\data\decals\SN\blank_ca.paa"
            };
            factions[] = {};
        };
        class phobos_olive
        {
            displayName = "[Phobos] Olive";
            author = "Brandersons";
            textures[] =
            {
                "rhsusf\addons\rhsusf_melb\data\melb_ext_co.paa",
                "rhsusf\addons\rhsusf_melb\data\decals\SN\blank_ca.paa"
            };
            factions[] = {};
        };
        class phobos_sand
        {
            displayName = "[Phobos] Sand";
            author = "Brandersons";
            textures[] =
            {
                "rhsusf\addons\rhsusf_melb\data\melb_ext_co.paa",
                "rhsusf\addons\rhsusf_melb\data\decals\SN\blank_ca.paa"
            };
            factions[] = {};
        };
    };
    class transportBackpacks {};
    class transportItems {};
    class transportMagazines {};
    class transportWeapons {};
};
class phobos_vehicles_mh6m : RHS_MELB_MH6M
{    
    displayName = "[Phobos] MH-6M Little Bird";
    author = "Brandersons";
    faction = "phobos_faction";
    side = 1;
    editorSubcategory = "phobos_faction_edsubcat_helicopters";
    crew = "B_Soldier_F";
    typicalCargo[] = {"B_Soldier_F"};
    editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_MELB_MH6M.paa";
    icon = "rhsusf\addons\rhsusf_melb\Data\ui\map_melb_ah_6m_l_ca.paa";
    scope = 2;
    scopeCurator = 2;
    tf_hasLRradio = 1;
    tf_isolatedAmount = 0.3;
    tf_RadioType = "TFAR_rt1523g";
    tf_range = 20000;
    tfar_hasintercom = 1;
    hiddenSelections[] = {"camo1","d_SN"};
    hiddenSelectionsTextures[] =
    {
        "rhsusf\addons\rhsusf_melb\data\melb_ext_co.paa",
        "rhsusf\addons\rhsusf_melb\data\decals\SN\blank_ca.paa"
    };
    class TextureSources
    {
        class phobos_black
        {
            displayName = "[Phobos] Black";
            author = "Brandersons";
            textures[] =
            {
                "rhsusf\addons\rhsusf_melb\data\melb_ext_co.paa",
                "rhsusf\addons\rhsusf_melb\data\decals\SN\blank_ca.paa"
            };
            factions[] = {};
        };
        class phobos_olive
        {
            displayName = "[Phobos] Olive";
            author = "Brandersons";
            textures[] =
            {
                "rhsusf\addons\rhsusf_melb\data\melb_ext_co.paa",
                "rhsusf\addons\rhsusf_melb\data\decals\SN\blank_ca.paa"
            };
            factions[] = {};
        };
        class phobos_sand
        {
            displayName = "[Phobos] Sand";
            author = "Brandersons";
            textures[] =
            {
                "rhsusf\addons\rhsusf_melb\data\melb_ext_co.paa",
                "rhsusf\addons\rhsusf_melb\data\decals\SN\blank_ca.paa"
            };
            factions[] = {};
        };
    };
    class transportBackpacks {};
    class transportItems {};
    class transportMagazines {};
    class transportWeapons {};
};