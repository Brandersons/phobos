class phobos_resupply_box_breaching : phobos_resupply_box_base
{
    displayName = "[BT] Breaching Equipment";
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
    class TransportMagazines
    {
        class xx_tsp_breach_package_mag
        {
            magazine = "tsp_breach_package_mag";
            count = 5;
        };
        class xx_tsp_breach_popper_mag
        {
            magazine = "tsp_breach_popper_mag";
            count = 5;
        };
    };
};