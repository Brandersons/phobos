class phobos_logistics_box_ration : phobos_resupply_box_base
{
    displayName = "[BT] Rations";
    author = "Brandersons";
    ace_cargo_size = 1;
    scope = 2;
    scopeCurator = 2;
    model = "\A3\Props_F_Orange\Humanitarian\Supplies\PaperBox_01_small_closed_F.p3d";
    editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_PaperBox_01_small_closed_brown_F.jpg";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] =
    {
        "\A3\Props_F_Orange\Humanitarian\Supplies\Data\PaperBox_01_small_brown_CO.paa"
    };
    class TransportItems
    {
        class xx_ACE_Canteen
        {
            name = "ACE_Canteen";
            count = 20;
        };
        class xx_ACE_MRE_BeefStew
        {
            name = "ACE_MRE_BeefStew";
            count = 20;
        };
    };
};