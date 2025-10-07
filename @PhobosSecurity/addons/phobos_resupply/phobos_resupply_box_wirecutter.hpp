class phobos_resupply_box_wirecutter : phobos_resupply_box_base
{
    displayName = "[BT] Wirecutters";
    author = "Brandersons";
    ace_cargo_size = 1;
    scope = 2;
    scopeCurator = 2;
    model = "\A3\Structures_F_Heli\Items\Luggage\PlasticCase_01_small_F.p3d";
    editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_PlasticCase_01_small_olive_F.jpg";
    hiddenSelections[] = {"Camo","Camo2"};
    hiddenSelectionsTextures[] =
    {
        "a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_olive_CO.paa"
    };
    class TransportItems
    {
        class xx_ACE_wirecutter
        {
            name = "ACE_wirecutter";
            count = 4;
        };
    };
};