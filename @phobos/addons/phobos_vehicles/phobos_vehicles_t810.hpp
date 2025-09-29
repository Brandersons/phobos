class UK3CB_ION_B_Desert_T810_Open;
class UK3CB_ION_B_Desert_T810_Closed;
class UK3CB_ION_B_Desert_T810_Reammo;
class UK3CB_ION_B_Desert_T810_Refuel;
class UK3CB_ION_B_Desert_T810_Recovery;
class UK3CB_ION_B_Desert_T810_Repair;
class UK3CB_LDF_O_T810_MLRS;
class UK3CB_LDF_O_T810_ZU23;

class phobos_vehicles_t810_transportopen : UK3CB_ION_B_Desert_T810_Open
{    
    displayName = "[Phobos] T-810 Transport (Open)";
    author = "Brandersons";
    faction = "phobos_faction";
    editorSubcategory = "phobos_faction_edsubcat_trucks";
    crew = "B_Soldier_F";
    typicalCargo[] = {"B_Soldier_F"};
    editorPreview = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_t810\data\ui\UK3CB_T810_Transport_Open_ION.jpg";
    icon = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_t810\data\ui\Icon_T810_CA.paa";
    scope = 2;
    scopeCurator = 2;
    tf_hasLRradio = 1;
    tf_isolatedAmount = 0.3;
    tf_RadioType = "TFAR_rt1523g";
    tf_range = 20000;
    tfar_hasintercom = 1;
    hiddenSelections[] = {"Camo1","Camo2","Camo3","decals"};
    hiddenSelectionsTextures[] =
    {
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_cabin_co.paa",
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_bed_co.paa",
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_undercarriage_co.paa",
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\decals\blank_ca.paa"
    };
    class TextureSources
    {
        class phobos_black
        {
            displayName = "[Phobos] Black";
            author = "Brandersons";
            textures[] =
            {
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_cabin_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_bed_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_undercarriage_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\decals\blank_ca.paa"
            };
            factions[] = {};
        };
        class phobos_olive
        {
            displayName = "[Phobos] Olive";
            author = "Brandersons";
            textures[] =
            {
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_cabin_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_bed_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_undercarriage_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\decals\blank_ca.paa"
            };
            factions[] = {};
        };
        class phobos_sand
        {
            displayName = "[Phobos] Sand";
            author = "Brandersons";
            textures[] =
            {
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_cabin_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_bed_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_undercarriage_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\decals\blank_ca.paa"
            };
            factions[] = {};
        };
    };
    class transportBackpacks {};
    class transportItems {};
    class transportMagazines {};
    class transportWeapons {};
};
class phobos_vehicles_t810_transportcovered : UK3CB_ION_B_Desert_T810_Closed
{    
    displayName = "[Phobos] T-810 Transport (Covered)";
    author = "Brandersons";
    faction = "phobos_faction";
    editorSubcategory = "phobos_faction_edsubcat_trucks";
    crew = "B_Soldier_F";
    typicalCargo[] = {"B_Soldier_F"};
    editorPreview = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_t810\data\ui\UK3CB_T810_Transport_Closed_ION.jpg";
    icon = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_t810\data\ui\Icon_T810_CA.paa";
    scope = 2;
    scopeCurator = 2;
    tf_hasLRradio = 1;
    tf_isolatedAmount = 0.3;
    tf_RadioType = "TFAR_rt1523g";
    tf_range = 20000;
    tfar_hasintercom = 1;
    hiddenSelections[] = {"Camo1","Camo2","Camo3","decals"};
    hiddenSelectionsTextures[] =
    {
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_cabin_co.paa",
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_bed_co.paa",
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_undercarriage_co.paa",
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\decals\blank_ca.paa"
    };
    class TextureSources
    {
        class phobos_black
        {
            displayName = "[Phobos] Black";
            author = "Brandersons";
            textures[] =
            {
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_cabin_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_bed_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_undercarriage_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\decals\blank_ca.paa"
            };
            factions[] = {};
        };
        class phobos_olive
        {
            displayName = "[Phobos] Olive";
            author = "Brandersons";
            textures[] =
            {
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_cabin_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_bed_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_undercarriage_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\decals\blank_ca.paa"
            };
            factions[] = {};
        };
        class phobos_sand
        {
            displayName = "[Phobos] Sand";
            author = "Brandersons";
            textures[] =
            {
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_cabin_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_bed_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_undercarriage_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\decals\blank_ca.paa"
            };
            factions[] = {};
        };
    };
    class transportBackpacks {};
    class transportItems {};
    class transportMagazines {};
    class transportWeapons {};
};
class phobos_vehicles_t810_ammo : UK3CB_ION_B_Desert_T810_Reammo
{    
    displayName = "[Phobos] T-810 (Ammo)";
    author = "Brandersons";
    faction = "phobos_faction";
    editorSubcategory = "phobos_faction_edsubcat_trucks";
    crew = "B_Soldier_F";
    typicalCargo[] = {"B_Soldier_F"};
    editorPreview = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_t810\data\ui\UK3CB_T810_Reammo_ION.jpg";
    icon = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_t810\data\ui\Icon_T810_CA.paa";
    scope = 2;
    scopeCurator = 2;
    tf_hasLRradio = 1;
    tf_isolatedAmount = 0.3;
    tf_RadioType = "TFAR_rt1523g";
    tf_range = 20000;
    tfar_hasintercom = 1;
    hiddenSelections[] = {"Camo1","Camo2","Camo3","decals"};
    hiddenSelectionsTextures[] =
    {
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_cabin_co.paa",
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_bed_co.paa",
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_undercarriage_co.paa",
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\decals\blank_ca.paa"
    };
    class TextureSources
    {
        class phobos_black
        {
            displayName = "[Phobos] Black";
            author = "Brandersons";
            textures[] =
            {
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_cabin_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_bed_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_undercarriage_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\decals\blank_ca.paa"
            };
            factions[] = {};
        };
        class phobos_olive
        {
            displayName = "[Phobos] Olive";
            author = "Brandersons";
            textures[] =
            {
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_cabin_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_bed_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_undercarriage_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\decals\blank_ca.paa"
            };
            factions[] = {};
        };
        class phobos_sand
        {
            displayName = "[Phobos] Sand";
            author = "Brandersons";
            textures[] =
            {
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_cabin_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_bed_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_undercarriage_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\decals\blank_ca.paa"
            };
            factions[] = {};
        };
    };
    class transportBackpacks {};
    class transportItems {};
    class transportMagazines {};
    class transportWeapons {};
};
class phobos_vehicles_t810_fuel : UK3CB_ION_B_Desert_T810_Refuel
{    
    displayName = "[Phobos] T-810 (Fuel)";
    author = "Brandersons";
    faction = "phobos_faction";
    editorSubcategory = "phobos_faction_edsubcat_trucks";
    crew = "B_Soldier_F";
    typicalCargo[] = {"B_Soldier_F"};
    editorPreview = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_t810\data\ui\UK3CB_T810_Refuel_ION.jpg";
    icon = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_t810\data\ui\Icon_T810_CA.paa";
    scope = 2;
    scopeCurator = 2;
    tf_hasLRradio = 1;
    tf_isolatedAmount = 0.3;
    tf_RadioType = "TFAR_rt1523g";
    tf_range = 20000;
    tfar_hasintercom = 1;
    hiddenSelections[] = {"Camo1","Camo2","Camo3","decals"};
    hiddenSelectionsTextures[] =
    {
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_cabin_co.paa",
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_t810_fueltank_co.paa",
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_undercarriage_co.paa",
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\decals\blank_ca.paa"
    };
    class TextureSources
    {
        class phobos_black
        {
            displayName = "[Phobos] Black";
            author = "Brandersons";
            textures[] =
            {
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_cabin_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_t810_fueltank_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_undercarriage_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\decals\blank_ca.paa"
            };
            factions[] = {};
        };
        class phobos_olive
        {
            displayName = "[Phobos] Olive";
            author = "Brandersons";
            textures[] =
            {
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_cabin_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_t810_fueltank_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_undercarriage_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\decals\blank_ca.paa"
            };
            factions[] = {};
        };
        class phobos_sand
        {
            displayName = "[Phobos] Sand";
            author = "Brandersons";
            textures[] =
            {
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_cabin_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_t810_fueltank_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_undercarriage_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\decals\blank_ca.paa"
            };
            factions[] = {};
        };
    };
    class transportBackpacks {};
    class transportItems {};
    class transportMagazines {};
    class transportWeapons {};
};
class phobos_vehicles_t810_recovery : UK3CB_ION_B_Desert_T810_Recovery
{    
    displayName = "[Phobos] T-810 (Recovery)";
    author = "Brandersons";
    faction = "phobos_faction";
    editorSubcategory = "phobos_faction_edsubcat_trucks";
    crew = "B_Soldier_F";
    typicalCargo[] = {"B_Soldier_F"};
    editorPreview = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_t810\data\ui\UK3CB_T810_Recovery_ION.jpg";
    icon = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_t810\data\ui\Icon_T810_CA.paa";
    scope = 2;
    scopeCurator = 2;
    tf_hasLRradio = 1;
    tf_isolatedAmount = 0.3;
    tf_RadioType = "TFAR_rt1523g";
    tf_range = 20000;
    tfar_hasintercom = 1;
    hiddenSelections[] = {"Camo1","Camo2","Camo3","decals"};
    hiddenSelectionsTextures[] =
    {
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_cabin_co.paa",
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_bed_co.paa",
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_undercarriage_co.paa",
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\decals\blank_ca.paa"
    };
    class TextureSources
    {
        class phobos_black
        {
            displayName = "[Phobos] Black";
            author = "Brandersons";
            textures[] =
            {
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_cabin_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_bed_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_undercarriage_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\decals\blank_ca.paa"
            };
            factions[] = {};
        };
        class phobos_olive
        {
            displayName = "[Phobos] Olive";
            author = "Brandersons";
            textures[] =
            {
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_cabin_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_bed_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_undercarriage_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\decals\blank_ca.paa"
            };
            factions[] = {};
        };
        class phobos_sand
        {
            displayName = "[Phobos] Sand";
            author = "Brandersons";
            textures[] =
            {
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_cabin_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_bed_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_undercarriage_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\decals\blank_ca.paa"
            };
            factions[] = {};
        };
    };
    class transportBackpacks {};
    class transportItems {};
    class transportMagazines {};
    class transportWeapons {};
};
class phobos_vehicles_t810_repair : UK3CB_ION_B_Desert_T810_Repair
{    
    displayName = "[Phobos] T-810 (Repair)";
    author = "Brandersons";
    faction = "phobos_faction";
    editorSubcategory = "phobos_faction_edsubcat_trucks";
    crew = "B_Soldier_F";
    typicalCargo[] = {"B_Soldier_F"};
    editorPreview = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_t810\data\ui\UK3CB_T810_Repair_ION.jpg";
    icon = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_t810\data\ui\Icon_T810_CA.paa";
    scope = 2;
    scopeCurator = 2;
    side = 1;
    tf_hasLRradio = 1;
    tf_isolatedAmount = 0.3;
    tf_RadioType = "TFAR_rt1523g";
    tf_range = 20000;
    tfar_hasintercom = 1;
    hiddenSelections[] = {"Camo1","Camo2","Camo3","decals"};
    hiddenSelectionsTextures[] =
    {
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_cabin_co.paa",
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_bed_co.paa",
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_undercarriage_co.paa",
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\decals\blank_ca.paa"
    };
    class TextureSources
    {
        class phobos_black
        {
            displayName = "[Phobos] Black";
            author = "Brandersons";
            textures[] =
            {
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_cabin_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_bed_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_undercarriage_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\decals\blank_ca.paa"
            };
            factions[] = {};
        };
        class phobos_olive
        {
            displayName = "[Phobos] Olive";
            author = "Brandersons";
            textures[] =
            {
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_cabin_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_bed_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_undercarriage_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\decals\blank_ca.paa"
            };
            factions[] = {};
        };
        class phobos_sand
        {
            displayName = "[Phobos] Sand";
            author = "Brandersons";
            textures[] =
            {
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_cabin_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_bed_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_undercarriage_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\decals\blank_ca.paa"
            };
            factions[] = {};
        };
    };
    class transportBackpacks {};
    class transportItems {};
    class transportMagazines {};
    class transportWeapons {};
};
class phobos_vehicles_t810_mlrs : UK3CB_LDF_O_T810_MLRS
{    
    displayName = "[Phobos] T-810 (MLRS)";
    author = "Brandersons";
    faction = "phobos_faction";
    editorSubcategory = "phobos_faction_edsubcat_artillery";
    crew = "B_Soldier_F";
    typicalCargo[] = {"B_Soldier_F"};
    editorPreview = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_t810\data\ui\UK3CB_T810_Transport_Closed_ION.jpg";
    icon = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_t810\data\ui\Icon_T810_CA.paa";
    scope = 2;
    scopeCurator = 2;
    side = 1;
    tf_hasLRradio = 1;
    tf_isolatedAmount = 0.3;
    tf_RadioType = "TFAR_rt1523g";
    tf_range = 20000;
    tfar_hasintercom = 1;
    hiddenSelections[] = {"camo1","camo2","camo3","camo4","decals"};
    hiddenSelectionsTextures[] =
    {
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_cabin_co.paa",
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_bed_co.paa",
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_undercarriage_co.paa",
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\t810_bm21_co.paa",
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\decals\blank_ca.paa"
    };
    class TextureSources
    {
        class phobos_black
        {
            displayName = "[Phobos] Black";
            author = "Brandersons";
            textures[] =
            {
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_cabin_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_bed_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_undercarriage_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\t810_bm21_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\decals\blank_ca.paa"
            };
            factions[] = {};
            
        };
        class phobos_olive
        {
            displayName = "[Phobos] Olive";
            author = "Brandersons";
            textures[] =
            {
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_cabin_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_bed_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_undercarriage_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\t810_bm21_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\decals\blank_ca.paa"
            };
            factions[] = {};
        };
        class phobos_sand
        {
            displayName = "[Phobos] Sand";
            author = "Brandersons";
            textures[] =
            {
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_cabin_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_bed_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_undercarriage_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\t810_bm21_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\decals\blank_ca.paa"
            };
            factions[] = {};
        };
    };
    class transportBackpacks {};
    class transportItems {};
    class transportMagazines {};
    class transportWeapons {};
};
class phobos_vehicles_t810_zu23 : UK3CB_LDF_O_T810_ZU23
{    
    displayName = "[Phobos] T-810 (ZU-23)";
    author = "Brandersons";
    faction = "phobos_faction";
    editorSubcategory = "phobos_faction_edsubcat_antiair";
    crew = "B_Soldier_F";
    typicalCargo[] = {"B_Soldier_F"};
    editorPreview = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_t810\data\ui\UK3CB_T810_Transport_Closed_ION.jpg";
    icon = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_t810\data\ui\Icon_T810_CA.paa";
    scope = 2;
    scopeCurator = 2;
    side = 1;
    tf_hasLRradio = 1;
    tf_isolatedAmount = 0.3;
    tf_RadioType = "TFAR_rt1523g";
    tf_range = 20000;
    tfar_hasintercom = 1;
    hiddenSelections[] = {"Camo1","Camo2","Camo3","decals"};
    hiddenSelectionsTextures[] =
    {
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_cabin_co.paa",
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_bed_co.paa",
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_undercarriage_co.paa",
        "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\decals\blank_ca.paa"
    };
    class TextureSources
    {
        class phobos_black
        {
            displayName = "[Phobos] Black";
            author = "Brandersons";
            textures[] =
            {
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_cabin_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_bed_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_undercarriage_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\decals\blank_ca.paa"
            };
            factions[] = {};
        };
        class phobos_olive
        {
            displayName = "[Phobos] Olive";
            author = "Brandersons";
            textures[] =
            {
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_cabin_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_bed_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_undercarriage_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\decals\blank_ca.paa"
            };
            factions[] = {};
        };
        class phobos_sand
        {
            displayName = "[Phobos] Sand";
            author = "Brandersons";
            textures[] =
            {
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_cabin_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_bed_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\ion_undercarriage_co.paa",
                "\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_t810\data\decals\blank_ca.paa"
            };
            factions[] = {};
        };
    };
    class transportBackpacks {};
    class transportItems {};
    class transportMagazines {};
    class transportWeapons {};
};