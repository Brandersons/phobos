class CfgPatches
{
    class phobos_units
    {
        name = "phobos_units";
        units[] =
        {
            "phobos_units_soldier_12a",
            "phobos_units_soldier_12b",
            "phobos_units_soldier_12c",
            "phobos_units_soldier_12d",
            "phobos_units_soldier_12marine",
            "phobos_units_soldier_12marksman",
            "phobos_units_soldier_12sig",
            "phobos_units_soldier_31a",
            "phobos_units_soldier_31b",
            "phobos_units_soldier_31gpmg",
            "phobos_units_soldier_31marine",
            "phobos_units_soldier_31marksman",
            "phobos_units_soldier_31medic",
            "phobos_units_soldier_31pointman",
            "phobos_units_soldier_31sig",
            "phobos_units_soldier_311ic",
            "phobos_units_soldier_312ic",
            "phobos_units_soldier_zeus"
        };
        weapons[] =
        {
            "bt_weapons_l403a1",
            "rhsusf_weap_glock17g4",
            "SCM_Virtus_Assaulter_1_Belt",
            "SCM_Fast_B_2"
        };
        requiredVersion = 0.1;
        addonRootClass = "phobos_core";
        requiredAddons[] =
        {
            "bt_core",
            "A3_Characters_F"
        };
    };
};

class CfgVehicles
{   
    // this is the base soldier class for all bt soldiers, do not change this unless necessary
    class B_Soldier_base_F;
    class phobos_units_soldier_base : B_Soldier_base_F
    {
        scope = 1;
        side = 1;
        displayName = "43 Commando Base Soldier";
        faction = "bt_faction_bt";
        editorSubcategory = "bt_faction_edcat_men";
        author = "LCpl. BT";
        cost = 100000;
        camouflage = 1.4;
        sensitivity = 2.5;
        threat[] = {1,0.1,0.1};
        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
        faceType = "Man_A3";
        glassesEnabled = 0;
        uniformClass = "SCM_G4_T_uniform";
        linkedItems[] =
        {
            "SCM_Virtus_Assaulter_1_Belt",
            "SCM_Fast_B_2",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "TFAR_rf7800str"
        };
        respawnLinkedItems[] =
        {
            "SCM_Virtus_Assaulter_1_Belt",
            "SCM_Fast_B_2",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "TFAR_rf7800str"
        };
        weapons[] =
        {
            "Throw",
            "Put",
            "Binocular"
        };
        respawnWeapons[] =
        {
            "Throw",
            "Put",
            "Binocular"
        };
        items[] = {};
        respawnitems[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
        // this is what handles putting the items into the loadout
        class EventHandlers
        {
            init = "\
                private _unit = _this select 0; \
                {_unit addPrimaryWeaponItem _x;} forEach getArray (configFile >> 'CfgVehicles' >> typeOf _unit >> 'loadoutitems' >> 'loadedmagazineprimary'); \
                {_unit addHandgunItem _x;} forEach getArray (configFile >> 'CfgVehicles' >> typeOf _unit >> 'loadoutitems' >> 'loadedmagazinesecondary'); \
                {_unit removeItemFromUniform _x;} forEach uniformItems _unit; \
                {_unit removeItemFromVest _x;} forEach vestItems _unit; \
                {_unit removeItemFromBackpack _x;} forEach backpackItems _unit; \
                {_unit addItemToUniform _x;} forEach getArray (configFile >> 'CfgVehicles' >> typeOf _unit >> 'loadoutitems' >> 'itemsuniform'); \
                {_unit addItemToVest _x;} forEach getArray (configFile >> 'CfgVehicles' >> typeOf _unit >> 'loadoutitems' >> 'itemsvest'); \
                {_unit addItemToBackpack _x;} forEach getArray (configFile >> 'CfgVehicles' >> typeOf _unit >> 'loadoutitems' >> 'itemsbackpack'); \
                _unit setVariable ['kitname', getText (configFile >> 'CfgVehicles' >> typeOf _unit >> 'displayName')];\
            ";
            respawn = "\
                private _unit = _this select 0; \
                _unit setUnitLoadout (player getVariable ['ENH_SavedLoadout', []]); \
            ";
        };
    };

    // here is an example soldier class, copy and paste this and change the values to create a new soldier
    // give your class a unique name using the format phobos_units_soldier_<name>
    // you will also have to update bt_qm_menu_dialog.hpp to add that loadout to the qm menu
    class phobos_units_soldier_example : phobos_units_soldier_base
    {
        // Set this to 2 to make it show in 3den, as this example is in the live mod it'll be set to 1 to hide it in 3den
        scope = 1;

        // the name of the soldier in 3den and in game
        displayName = "[BT] Example Soldier";

        // the sub category of the soldier in the editor
        editorSubcategory = "bt_faction_edsubcat_playersqm";

        // who made the config for this soldier
        author = "LCpl. BT";

        // the relative threat of the soldier against soft, air and armoured enemies respectively
        threat[] = {1, 0.1, 0.1};

        // medic level, 0 = no medic, 1 = medic, 2 = doctor
        attendant = 0;

        // engineer level, 0 = no engineer, 1 = engineer, 2 = advanced engineer
        engineer = 0;
        
        // the uniform the soldier will spawn with
        uniform = "SCM_G4_T_uniform";

        // the backpack the soldier will spawn with
        backpack = "SCM_AVS_1000_Radio";

        // the weapons the soldier will spawn with, this has to include "Put" and "Throw" at a minimum and should ideally include "Binocular" or some other binoculars classname
        // the primary weapon must show up first
        // the secondary weapon must show up second
        // yes this is wrong on my configs I am going to change it later
        weapons[] = {
            "bt_weapons_l403a1",
            "rhsusf_weap_glock17g4",
            "Put",
            "Throw",
            "Rangefinder"
        };

        // this should be the same as weapons[]
        respawnWeapons[] =
        {
            "bt_weapons_l403a1",
            "rhsusf_weap_glock17g4",
            "Put",
            "Throw",
            "Rangefinder"
        };

        // the items which will be added and equipped, does not include weapons, uniform or backpack
        linkedItems[] =
        {
            "SCM_Virtus_Assaulter_1_Belt",
            "SCM_Fast_B_2",
            "ItemMap",
            "ItemCompass",
            "TFAR_microdagr",
            "TFAR_anprc152"
        };

        // this should be the same as linkedItems[]
        respawnLinkedItems[] =
        {
            "SCM_Virtus_Assaulter_1_Belt",
            "SCM_Fast_B_2",
            "ItemMap",
            "ItemCompass",
            "TFAR_microdagr",
            "TFAR_anprc152"
        };

        // this is where you set up what items get added to the various parts of the loadout
        // this is very non standard but is required for the qm menu to load the items into the correct inventory locations
        class loadoutitems
        {
            // if you want a magazine to be loaded by default, you need to add it here
            loadedmagazineprimary[] = {"Scotts_bt_EMAG_Magpul_M855A1_EPR"};
            loadedmagazinesecondary[] = {"UK3CB_BAF_9_17Rnd"};

            // all the items to be added to the uniform
            // this must be a comma seperated list whith each item showing up as many times as you want it to be in the loadout
            // you cannot use a c++ macro for this unfortunately
            itemsuniform[] =
            {
                "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie",
                "ACE_Canteen",
                "ACE_Flashlight_XL50",
                "ACE_MapTools",
                "ItemcTabHCam",
                "ItemAndroid",
                "ACE_EHP",
                "ACE_splint",
                "ACE_Tourniquet", "ACE_Tourniquet", "ACE_Tourniquet", "ACE_Tourniquet",
                "ACE_MRE_BeefStew", "ACE_MRE_BeefStew"
            };

            // all the items to be added to the vest
            // this must be a comma seperated list whith each item showing up as many times as you want it to be in the loadout
            // you cannot use a c++ macro for this unfortunately
            itemsvest[] =
            {
                "rhs_mag_m67", "rhs_mag_m67",
                "UK3CB_BAF_SmokeShell", "UK3CB_BAF_SmokeShell",
                "UK3CB_BAF_SmokeShellPurple", "UK3CB_BAF_SmokeShellPurple", "UK3CB_BAF_SmokeShellPurple",
                "UK3CB_BAF_SmokeShellBlue", "UK3CB_BAF_SmokeShellBlue", "UK3CB_BAF_SmokeShellBlue",
                "UK3CB_BAF_SmokeShellRed", "UK3CB_BAF_SmokeShellRed", "UK3CB_BAF_SmokeShellRed",
                "UK3CB_BAF_SmokeShellGreen", "UK3CB_BAF_SmokeShellGreen", "UK3CB_BAF_SmokeShellGreen",
                "Scotts_bt_EMAG_Magpul_M855A1_EPR", "Scotts_bt_EMAG_Magpul_M855A1_EPR", "Scotts_bt_EMAG_Magpul_M855A1_EPR", "Scotts_bt_EMAG_Magpul_M855A1_EPR",
                "Scotts_bt_EMAG_M855A1_EPR_IR_Dim", "Scotts_bt_EMAG_M855A1_EPR_IR_Dim",
                "Scotts_bt_EMAG_M855A1_EPR_Tracer", "Scotts_bt_EMAG_M855A1_EPR_Tracer",
                "UK3CB_BAF_9_17Rnd", "UK3CB_BAF_9_17Rnd"
            };

            // all the items to be added to the backpack
            // this must be a comma seperated list whith each item showing up as many times as you want it to be in the loadout
            // you cannot use a c++ macro for this unfortunately
            itemsbackpack[] =
            {
                "ACE_EntrenchingTool",
                "ACE_epinephrine",
                "ACE_morphine",
                "ACE_bodyBag",
                "ACE_Painkillers",
                "kat_chestseal",
                "kat_guedel",
                "SCM_PVS31_C_WP",
                "UK3CB_BAF_H_Beret_RM_Bootneck",
                "Scotts_bt_EMAG_Magpul_M855A1_EPR", "Scotts_bt_EMAG_Magpul_M855A1_EPR", "Scotts_bt_EMAG_Magpul_M855A1_EPR",
                "Scotts_bt_EMAG_M855A1_EPR_Tracer", "Scotts_bt_EMAG_M855A1_EPR_Tracer", "Scotts_bt_EMAG_M855A1_EPR_Tracer",
                "Scotts_bt_EMAG_M855A1_EPR_IR_Dim", "Scotts_bt_EMAG_M855A1_EPR_IR_Dim", "Scotts_bt_EMAG_M855A1_EPR_IR_Dim",
                "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item",
                "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage",
                "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage",
                "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot"
            };
        };
    };

    // player loadouts
    #include "\phobos_units\loadouts\12a.hpp"
    #include "\phobos_units\loadouts\12b.hpp"
    #include "\phobos_units\loadouts\12c.hpp"
    #include "\phobos_units\loadouts\12d.hpp"
    #include "\phobos_units\loadouts\12marine.hpp"
    #include "\phobos_units\loadouts\12marksman.hpp"
    #include "\phobos_units\loadouts\12sig.hpp"
    #include "\phobos_units\loadouts\31a.hpp"
    #include "\phobos_units\loadouts\31b.hpp"
    #include "\phobos_units\loadouts\31gpmg.hpp"
    #include "\phobos_units\loadouts\31marine.hpp"
    #include "\phobos_units\loadouts\31marksman.hpp"
    #include "\phobos_units\loadouts\31medic.hpp"
    #include "\phobos_units\loadouts\31pointman.hpp"
    #include "\phobos_units\loadouts\31sig.hpp"
    #include "\phobos_units\loadouts\311ic.hpp"
    #include "\phobos_units\loadouts\312ic.hpp"
    #include "\phobos_units\loadouts\zeus.hpp"

    //npc loadouts

    class phobos_units_npc_welldeckcrew : phobos_units_soldier_base
    {
        scope = 2;
        displayName = "Well Deck Crew";
        editorSubcategory = "bt_faction_edsubcat_men"
        author = "LCpl. BT";
        uniformClass = "U_B_GEN_Commander_F";
        backpack = "";
        weapons[] = {};
        respawnWeapons[] = {};
        magazines[]={};
        respawnMagazines[]={};
        linkedItems[]=
        {
            "H_Construction_earprot_yellow_F",
            "V_Safety_yellow_F"
        };
        respawnlinkedItems[]=
        {
            "H_Construction_earprot_yellow_F",
            "V_Safety_yellow_F"
        };
        items[]={};
        respawnItems[]={};
    };
    class phobos_units_npc_rifleman : phobos_units_soldier_base
    {
        scope = 2;
        displayName = "Rifleman";
        editorSubcategory = "bt_faction_edsubcat_men"
        author = "LCpl. BT";
        uniformClass = "";
        backpack = "";
        weapons[] = {};
        respawnWeapons[] = {};
        magazines[]={};
        respawnMagazines[]={};
        linkedItems[]=
        {
            "H_Construction_earprot_yellow_F",
            "V_Safety_yellow_F"
        };
        respawnlinkedItems[]=
        {
            "H_Construction_earprot_yellow_F",
            "V_Safety_yellow_F"
        };
        items[]={};
        respawnItems[]={};
    };
};

class CfgGroups {
    class West {
        class bt_faction_edcat
        {
            name = "[BT] 43 Commando";
            class bt_faction_group_infantry
            {
                name = "Infantry";
                // below here is where you set up the groups and the soldiers in them
                // remember that arrays start at 0, not 1
                class bt_faction_group_12ab
                {
                    name = "1-2 A/B";
                    faction = "bt_faction";
                    editorCategory = "bt_faction_edcat";
			        editorSubcategory = "bt_faction_edsubcat_infantry";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    side = 1;
                    scope = 2;

                    class Unit0
                    {
                        side = 1;
                        vehicle = "phobos_units_soldier_12a";
                        rank = "LIEUTENANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "phobos_units_soldier_12b";
                        rank = "SERGEANT";
                        position[] = {0,-2,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "phobos_units_soldier_12sig";
                        rank = "CORPORAL";
                        position[] = {0,-4,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "phobos_units_soldier_31marine";
                        rank = "PRIVATE";
                        position[] = {0,-6,0};
                    };
                };
                class bt_faction_group_12cd
                {
                    name = "1-2 C/D";
                    faction = "bt_faction";
                    editorCategory = "bt_faction_edcat";
			        editorSubcategory = "bt_faction_edsubcat_infantry";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    side = 1;
                    scope = 2;

                    class Unit0
                    {
                        side = 1;
                        vehicle = "phobos_units_soldier_12c";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "phobos_units_soldier_12marine";
                        rank = "PRIVATE";
                        position[] = {0,-2,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "phobos_units_soldier_12d";
                        rank = "CORPORAL";
                        position[] = {0,-4,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "phobos_units_soldier_31marine";
                        rank = "PRIVATE";
                        position[] = {0,-6,0};
                    };
                };
                class bt_faction_group_31ab
                {
                    name = "3-1 A/B";
                    faction = "bt_faction";
                    editorCategory = "bt_faction_edcat";
			        editorSubcategory = "bt_faction_edsubcat_infantry";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    side = 1;
                    scope = 2;

                    class Unit0
                    {
                        side = 1;
                        vehicle = "phobos_units_soldier_31a";
                        rank = "LIEUTENANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "phobos_units_soldier_31b";
                        rank = "SERGEANT";
                        position[] = {0,-2,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "phobos_units_soldier_31sig";
                        rank = "CORPORAL";
                        position[] = {0,-4,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "phobos_units_soldier_31medic";
                        rank = "PRIVATE";
                        position[] = {0,-6,0};
                    };
                };
                class bt_faction_group_31cd
                {
                    name = "3-1 C/D";
                    faction = "bt_faction";
                    editorCategory = "bt_faction_edcat";
			        editorSubcategory = "bt_faction_edsubcat_infantry";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    side = 1;
                    scope = 2;

                    class Unit0
                    {
                        side = 1;
                        vehicle = "phobos_units_soldier_311ic";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "phobos_units_soldier_31pointman";
                        rank = "PRIVATE";
                        position[] = {0,-2,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "phobos_units_soldier_31marine";
                        rank = "PRIVATE";
                        position[] = {0,-4,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "phobos_units_soldier_312ic";
                        rank = "CORPORAL";
                        position[] = {0,-6,0};
                    };
                    class Unit4
                    {
                        side = 1;
                        vehicle = "phobos_units_soldier_31marine";
                        rank = "PRIVATE";
                        position[] = {0,-8,0};
                    };
                    class Unit5
                    {
                        side = 1;
                        vehicle = "phobos_units_soldier_31medic";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class bt_faction_group_31ef
                {
                    name = "3-1 E/F";
                    faction = "bt_faction";
                    editorCategory = "bt_faction_edcat";
			        editorSubcategory = "bt_faction_edsubcat_infantry";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    side = 1;
                    scope = 2;

                    class Unit0
                    {
                        side = 1;
                        vehicle = "phobos_units_soldier_311ic";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "phobos_units_soldier_31pointman";
                        rank = "PRIVATE";
                        position[] = {0,-2,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "phobos_units_soldier_31marine";
                        rank = "PRIVATE";
                        position[] = {0,-4,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "phobos_units_soldier_312ic";
                        rank = "CORPORAL";
                        position[] = {0,-6,0};
                    };
                    class Unit4
                    {
                        side = 1;
                        vehicle = "phobos_units_soldier_31marine";
                        rank = "PRIVATE";
                        position[] = {0,-8,0};
                    };
                    class Unit5
                    {
                        side = 1;
                        vehicle = "phobos_units_soldier_31medic";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class bt_faction_group_31ij
                {
                    name = "3-1 I/J";
                    faction = "bt_faction";
                    editorCategory = "bt_faction_edcat";
			        editorSubcategory = "bt_faction_edsubcat_infantry";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    side = 1;
                    scope = 2;

                    class Unit0
                    {
                        side = 1;
                        vehicle = "phobos_units_soldier_311ic";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "phobos_units_soldier_31gpmg";
                        rank = "PRIVATE";
                        position[] = {0,-2,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "phobos_units_soldier_31gpmg";
                        rank = "PRIVATE";
                        position[] = {0,-4,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "phobos_units_soldier_312ic";
                        rank = "PRIVATE";
                        position[] = {0,-6,0};
                    };
                    class Unit4
                    {
                        side = 1;
                        vehicle = "phobos_units_soldier_31marksman";
                        rank = "PRIVATE";
                        position[] = {0,-8,0};
                    };
                    class Unit5
                    {
                        side = 1;
                        vehicle = "phobos_units_soldier_31medic";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
            };
        };
    };
};