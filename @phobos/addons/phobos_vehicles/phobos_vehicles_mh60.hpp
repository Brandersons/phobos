class vtx_MH60M_DAP_MLASS;

class phobos_vehicles_mh60_dap : vtx_MH60M_DAP_MLASS
{    
    displayName = "[Phobos] MH-60 DAP";
    author = "Brandersons";
    faction = "phobos_faction";
    side = 1;
    editorSubcategory = "phobos_faction_edsubcat_helicopters";
    crew = "B_Soldier_F";
    typicalCargo[] = {"B_Soldier_F"};
    editorPreview = "z\vtx\addons\MH60M\Data\Preview\vtx_MH60M_DAP.jpg";
    icon = "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\air\UK3CB_Factions_Vehicles_Osprey\data\ui\icon_osprey_ca.paa";
    scope = 2;
    scopeCurator = 2;
    tf_hasLRradio = 1;
    tf_isolatedAmount = 0.3;
    tf_RadioType = "TFAR_rt1523g";
    tf_range = 20000;
    tfar_hasintercom = 1;
    hiddenSelections[] = {"emmisive_overhead","emmisive_frontDash","emmisive_pedestal","emmisive_ralt","emmisive_altp","emmisive_alt","emmisive_ias","emmisive_hdg","MAP_MFD1","MAP_MFD2","MAP_MFD3","MAP_MFD4","MAP_OVERLAY1","MAP_OVERLAY2","MAP_OVERLAY3","MAP_OVERLAY4","Exterrior_Hull","Exterrior_Misc","Exterrior_Tail","markings","left_num_1","left_num_2","right_num_1","right_num_2","Fuel_Probe","Mlass","emmisive_goarnd","emmisive_hvr","emmisive_fms","emmisive_cpld","emmisive_vs"};
    hiddenSelectionsTextures[] =
    {
        "","","","","","","","","","","","","","","","",
        "z\vtx\addons\UH60\Data\Exterior\Hull Main_co.paa",
        "z\vtx\addons\UH60\Data\Exterior\Misc_co.paa",
        "z\vtx\addons\UH60\Data\Exterior\Hull Tail_co.paa",
        "","","","","",
        "z\vtx\addons\UH60\Data\FuelProbe\Fuel_probe_co.paa",
        "z\vtx\addons\MH60M\Data\Mlass_co.paa",
        "","","","",""
    };
    class TextureSources
    {
        class phobos_black
        {
            displayName = "[Phobos] Black";
            author = "Brandersons";
            textures[] =
            {
                "","","","","","","","","","","","","","","","",
                "z\vtx\addons\UH60\Data\Exterior\Hull Main_co.paa",
                "z\vtx\addons\UH60\Data\Exterior\Misc_co.paa",
                "z\vtx\addons\UH60\Data\Exterior\Hull Tail_co.paa",
                "","","","","",
                "z\vtx\addons\UH60\Data\FuelProbe\Fuel_probe_co.paa",
                "z\vtx\addons\MH60M\Data\Mlass_co.paa",
                "","","","",""
            };
            factions[] = {};
        };
        class phobos_olive
        {
            displayName = "[Phobos] Olive";
            author = "Brandersons";
            textures[] =
            {
                "","","","","","","","","","","","","","","","",
                "z\vtx\addons\UH60\Data\Exterior\Hull Main_co.paa",
                "z\vtx\addons\UH60\Data\Exterior\Misc_co.paa",
                "z\vtx\addons\UH60\Data\Exterior\Hull Tail_co.paa",
                "","","","","",
                "z\vtx\addons\UH60\Data\FuelProbe\Fuel_probe_co.paa",
                "z\vtx\addons\MH60M\Data\Mlass_co.paa",
                "","","","",""
            };
            factions[] = {};
        };
        class phobos_sand
        {
            displayName = "[Phobos] Sand";
            author = "Brandersons";
            textures[] =
            {
                "","","","","","","","","","","","","","","","",
                "phobos_vehicles\data\mh60_dirty_main.paa",
                "phobos_vehicles\data\mh60_dirty_misc.paa",
                "phobos_vehicles\data\mh60_dirty_tail.paa",
                "a3\ui_f\data\IGUI\Cfg\Targeting\Empty_ca.paa",
                "","","","",
                "z\vtx\addons\MH60M\data\Fuel_probe_co.paa",
                "z\vtx\addons\MH60M\Data\Mlass_co.paa",
                "","","","",""
            };
            factions[] = {};
        };
        class phobos_snow
        {
            displayName = "[Phobos] Snow";
            author = "Brandersons";
            textures[] =
            {
                "","","","","","","","","","","","","","","","",
                "z\vtx\addons\MH60S\data\mh60s_main_co.paa",
                "z\vtx\addons\MH60S\data\mh60s_misc_co.paa",
                "z\vtx\addons\MH60S\data\mh60s_tail_co.paa",
                "","","","","",
                "z\vtx\addons\UH60\Data\FuelProbe\Fuel_probe_co.paa",
                "z\vtx\addons\MH60M\Data\Mlass_co.paa",
                "","","","",""
            };
            factions[] = {};
        };
        class phobos_test
        {
            displayName = "[Phobos] Test";
            author = "Brandersons";
            textures[] =
            {
                "","","","","","","","","","","","","","","","",
                "phobos_core\data\red.paa",
                "phobos_core\data\green.paa",
                "phobos_core\data\blue.paa",
                "a3\ui_f\data\IGUI\Cfg\Targeting\Empty_ca.paa",
                "","","","",
                "z\vtx\addons\MH60M\data\Fuel_probe_co.paa",
                "z\vtx\addons\MH60M\Data\Mlass_co.paa",
                "","","","",""
            };
            factions[] = {};
        };
    };
    class transportBackpacks {};
    class transportItems {};
    class transportMagazines {};
    class transportWeapons {};
    class Components
    {
        class TransportPylonsComponent
        {
            uiPicture="z\vtx\addons\MH60M\Data\UI\vtx_mh60m_dap_3den_ca.paa";
            class Pylons
            {
                class pylons1
                {
                    attachment="VTX_M230_Chaingun_L";
                    priority=5;
                    hardpoints[]=
                    {
                        "VTX_ST_L",
                        "RHS_HP_ATAS"
                    };
                    UIposition[]={0.55000001,0.41};
                };
                class pylons2: pylons1
                {
                    attachment="VTX_PylonRack_M261_M229";
                    mirroredMissilePos=1;
                    hardpoints[]=
                    {
                        "VTX_ST_R",
                        "RHS_HP_ATAS"
                    };
                    UIposition[]={0.12,0.41};
                };
                class pylons3: pylons1
                {
                    UIposition[]={0.58999997,0.47};
                    hardpoints[]=
                    {
                        "VTX_ST_L",
                        "RHS_HP_ATAS"
                    };
                    attachment="VTX_4Rnd_ACE_Hellfire_AGM114K";
                };
                class pylons4: pylons2
                {
                    UIposition[]={0.079999998,0.47};
                    hardpoints[]=
                    {
                        "VTX_ST_R",
                        "RHS_HP_ATAS"
                    };
                    attachment="VTX_4Rnd_ACE_Hellfire_AGM114K";
                };
            };
            class Presets
            {
                class Empty
                {
                    displayName="Empty";
                    attachment[]={};
                };
                class Default
                {
                    displayName="Default";
                    attachment[]=
                    {
                        "VTX_M230_Chaingun_L",
                        "VTX_PylonRack_M261_M229",
                        ""
                    };
                };
                class Interdiction
                {
                    displayName="30mm + APKWS";
                    attachment[]=
                    {
                        "VTX_M230_Chaingun_L",
                        "VTX_PylonRack_M261_APKWS",
                        ""
                    };
                };
                class Rocket
                {
                    displayName="Rocket";
                    attachment[]=
                    {
                        "VTX_PylonRack_M261_M229",
                        "VTX_PylonRack_M261_M229",
                        ""
                    };
                };
                class APKWS
                {
                    displayName="APKWS";
                    attachment[]=
                    {
                        "VTX_PylonRack_M261_APKWS",
                        "VTX_PylonRack_M261_APKWS",
                        ""
                    };
                };
                class Hellfire
                {
                    displayName="Hellfire";
                    attachment[]=
                    {
                        "VTX_4Rnd_ACE_Hellfire_AGM114K",
                        "VTX_4Rnd_ACE_Hellfire_AGM114K",
                        ""
                    };
                };
                class MixedGuided
                {
                    displayName="APKWS + Hellfire";
                    attachment[]=
                    {
                        "VTX_PylonRack_M261_APKWS",
                        "VTX_4Rnd_ACE_Hellfire_AGM114K",
                        ""
                    };
                };
            };
        };
    };
};