class RHS_C130J;
class RHS_C130J_Cargo;

class phobos_vehicles_c130 : RHS_C130J
{
    displayName = "[Phobos] C-130";
    author = "Brandersons";
    faction = "phobos_faction";
    side = 1;
    editorSubcategory = "phobos_faction_edsubcat_planes";
    crew = "B_Soldier_F";
    typicalCargo[] = {"B_Soldier_F"};
    editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_C130J.paa";
    icon = "\rhsusf\addons\rhsusf_a2port_air\data\mapico\icon_c130j_CA.paa";
    scope = 2;
    scopeCurator = 2;
    tf_hasLRradio = 0;
    tfar_hasintercom = 0;
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] =
    {
        "rhsusf\addons\rhsusf_a2port_air\c130j\data\c130j_body_co.paa",
        "rhsusf\addons\rhsusf_a2port_air\c130j\data\c130j_wings_co.paa"
    };
    class TextureSources
    {
        class phobos_olive
        {
            displayName = "[Phobos] Olive";
            author = "Brandersons";
            textures[] =
            {
                "rhsusf\addons\rhsusf_a2port_air\c130j\data\c130j_body_co.paa",
                "rhsusf\addons\rhsusf_a2port_air\c130j\data\c130j_wings_co.paa"
            };
            factions[] = {};
        };
    };
    class transportBackpacks {};
    class transportItems {};
    class transportMagazines {};
    class transportWeapons {};
};
class phobos_vehicles_c130_cargo : RHS_C130J_Cargo
{
    displayName = "[Phobos] C-130 (Cargo)";
    author = "Brandersons";
    faction = "phobos_faction";
    side = 1;
    editorSubcategory = "phobos_faction_edsubcat_planes";
    crew = "B_Soldier_F";
    typicalCargo[] = {"B_Soldier_F"};
    editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_C130J.paa";
    icon = "\rhsusf\addons\rhsusf_a2port_air\data\mapico\icon_c130j_CA.paa";
    scope = 2;
    scopeCurator = 2;
    tf_hasLRradio = 0;
    tfar_hasintercom = 0;
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] =
    {
        "rhsusf\addons\rhsusf_a2port_air\c130j\data\c130j_body_co.paa",
        "rhsusf\addons\rhsusf_a2port_air\c130j\data\c130j_wings_co.paa"
    };
    class TextureSources
    {
        class phobos_olive
        {
            displayName = "[Phobos] Olive";
            author = "Brandersons";
            textures[] =
            {
                "rhsusf\addons\rhsusf_a2port_air\c130j\data\c130j_body_co.paa",
                "rhsusf\addons\rhsusf_a2port_air\c130j\data\c130j_wings_co.paa"
            };
            factions[] = {};
        };
    };
    class transportBackpacks {};
    class transportItems {};
    class transportMagazines {};
    class transportWeapons {};
};