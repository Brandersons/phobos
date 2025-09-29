class UK3CB_ION_B_Desert_SUV_Armed;
class UK3CB_ION_B_Desert_SUV_Armoured;

class phobos_vehicles_suv_armed : UK3CB_ION_B_Desert_SUV_Armed
{    
    displayName = "[Phobos] Chevrolet Suburban (M134)";
    author = "Brandersons";
    faction = "phobos_faction";
    side = 1;
    editorSubcategory = "phobos_faction_edsubcat_carscovert";
    crew = "B_Soldier_F";
    typicalCargo[] = {"B_Soldier_F"};
    editorpreview = "UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_suv\data\ui\UK3CB_SUV_Armed.jpg";
    icon = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_suv\data\ui\icon_suv_minigun_ca.paa";
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
        "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_suv\data\suv_body_co.paa",
        "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_suv\data\armoredsuv_body_co.paa"
    };
    class TextureSources
    {
        class phobos_black
        {
            displayName = "[Phobos] Black";
            author = "Brandersons";
            textures[] =
            {
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_suv\data\suv_body_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_suv\data\armoredsuv_body_co.paa"
            };
            factions[] = {};
        };
        class phobos_olive
        {
            displayName = "[Phobos] Olive";
            author = "Brandersons";
            textures[] =
            {
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_suv\data\suv_body_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_suv\data\armoredsuv_body_green_co.paa"
            };
            factions[] = {};
        };
        class phobos_sand
        {
            displayName = "[Phobos] Sand";
            author = "Brandersons";
            textures[] =
            {
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_suv\data\suv_body_co.paa",
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_suv\data\armoredsuv_body_tan_co.paa"
            };
            factions[] = {};
        };
    };
    class transportBackpacks {};
    class transportItems {};
    class transportMagazines {};
    class transportWeapons {};
};
class phobos_vehicles_suv_armoured : UK3CB_ION_B_Desert_SUV_Armoured
{    
    displayName = "[Phobos] Chevrolet Suburban (Armoured)";
    author = "Brandersons";
    faction = "phobos_faction";
    side = 1;
    editorSubcategory = "phobos_faction_edsubcat_carscovert";
    crew = "B_Soldier_F";
    typicalCargo[] = {"B_Soldier_F"};
    editorpreview = "UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_suv\data\ui\UK3CB_C_SUV.jpg";
    icon = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_suv\data\ui\icon_suv_ca.paa";
    scope = 2;
    scopeCurator = 2;
    tf_hasLRradio = 1;
    tf_isolatedAmount = 0.3;
    tf_RadioType = "TFAR_rt1523g";
    tf_range = 20000;
    tfar_hasintercom = 1;
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] =
    {
        "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_suv\data\suv_body_co.paa"
    };
    class TextureSources
    {
        class phobos_black
        {
            displayName = "[Phobos] Black";
            author = "Brandersons";
            textures[] =
            {
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_suv\data\suv_body_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\data\lightbar_co.paa"
            };
            factions[] = {};
        };
        class phobos_olive
        {
            displayName = "[Phobos] Olive";
            author = "Brandersons";
            textures[] =
            {
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_suv\data\suv_body_green_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\data\lightbar_co.paa"
            };
            factions[] = {};
        };
        class phobos_sand
        {
            displayName = "[Phobos] Sand";
            author = "Brandersons";
            textures[] =
            {
                "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_suv\data\suv_body_tan_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\data\lightbar_co.paa"
            };
            factions[] = {};
        };
    };
    class transportBackpacks {};
    class transportItems {};
    class transportMagazines {};
    class transportWeapons {};
};