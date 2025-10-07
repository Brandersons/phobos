class phobos_resupply_tin_smg : phobos_resupply_box_base
{
    displayName = "[BT] Ammo Tin (SMG)";
    author = "Brandersons";
    scope = 2;
    scopeCurator = 2;
    model = "\A3\Structures_F_EPB\Items\Military\Ammobox_rounds_F.p3d";
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Ammobox_rounds_F.jpg";
    hiddenSelections[] = {"Camo","Camo2"};
    hiddenSelectionsTextures[] =
    {
        "a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_olive_CO.paa"
    };
    class TransportWeapons
    {
        class xx_phobos_greenmag_pistol_600rnd
        {
            name = "phobos_greenmag_pistol_60rnd";
            count = 5;
        };
    };
};