class CfgPatches
{
    class phobos_resupply
    {
        units[]={};
        weapons[]={};
        requiredVersion=1.9400001;
        requiredAddons[]={};
        author="Brandersons";
        version="1.0.0.17";
        versionStr="1.0.0.17";
        versionAr[]={1,0,0,17};
    };
};

class CfgVehicles
{
    class NATO_Box_Base;
    class phobos_resupply_box_base : NATO_Box_Base
    {
        displayname = "Supply Box Base";
        author = "Brandersons";
        scope = 0;
        scopeCurator = 0;
        model = "\A3\weapons_F\AmmoBoxes\AmmoBox_F";
        hiddenSelections[] = {"Camo_Signs","Camo"};
        hiddenSelectionsTextures[] = {"A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};
        icon = "iconCrateAmmo";
        editorCategory = "phobos_faction_edcat_objects";
        editorSubcategory = "phobos_faction_edsubcat_supplies";
        editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_WpsLaunch_F.jpg";
        side = 3;
        mapSize = 2;
        transportMaxWeapons = 10;
        transportMaxMagazines = 50;
        transportMaxItems = 50;
        class TransportMagazines{};
        class TransportWeapons{};
        class TransportItems{};
    };
    // resupply type definitions
    // box = misc plastic case
    // fak = medical kit
    // launchers = NATO launcher crate architype
    // tin = boxed ammo for 1x soldier of that role
    #include "phobos_resupply_box_breaching.hpp"
    #include "phobos_resupply_box_demo.hpp"
    #include "phobos_resupply_box_ration.hpp"
    #include "phobos_resupply_box_wirecutter.hpp"
    #include "phobos_resupply_fak_ifak.hpp"
    #include "phobos_resupply_fak_trauma.hpp"
    #include "phobos_resupply_launcher_law.hpp"
    #include "phobos_resupply_launcher_maaws.hpp"
    #include "phobos_resupply_tin_marksman.hpp"
    #include "phobos_resupply_tin_rifleman.hpp"
    #include "phobos_resupply_tin_smg.hpp"
};