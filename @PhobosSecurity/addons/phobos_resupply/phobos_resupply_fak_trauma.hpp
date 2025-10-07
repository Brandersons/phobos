class phobos_resupply_fak_trauma : phobos_resupply_box_base
{
    displayName = "[BT] Trauma Kit";
    author = "Brandersons";
    ace_cargo_size = 0.5;
    scope = 2;
    scopeCurator = 2;
    model = "\A3\Structures_F_Heli\Items\Luggage\PlasticCase_01_medium_F.p3d";
    editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_PlasticCase_01_medium_olive_F.jpg";
    hiddenSelections[] = {"Camo","Camo2"};
    hiddenSelectionsTextures[] =
    {
        "a3\Props_F_Enoch\Military\Supplies\Data\PlasticCase_01_olive_CO.paa",
        "phobos_resupply\data\box_medical.paa"
    };
    class TransportItems
    {
        class xx_ACE_elasticBandage
        {
            name = "ACE_elasticBandage";
            count = 40;
        };
        class xx_ACE_quikclot
        {
            name = "ACE_quikclot";
            count = 40;
        };
        class xx_ACE_epinephrine
        {
            name = "ACE_epinephrine";
            count = 20;
        };
        class xx_ACE_morphine
        {
            name = "ACE_morphine";
            count = 20;
        };
        class xx_ACE_splint
        {
            name = "ACE_splint";
            count = 20;
        };
        class xx_ACE_salineIV
        {
            name = "ACE_salineIV";
            count = 15;
        };
        class xx_ACE_salineIV_250
        {
            name = "ACE_salineIV_250";
            count = 15;
        };
        class xx_ACE_salineIV_500
        {
            name = "ACE_salineIV_500";
            count = 15;
        };
        class xx_ACE_adenosine
        {
            name = "ACE_adenosine";
            count = 10;
        };
        class xx_ACE_packingBandage
        {
            name = "ACE_packingBandage";
            count = 40;
        };
        class xx_ACE_fieldDressing
        {
            name = "ACE_fieldDressing";
            count = 40;
        };
        class xx_ACE_bodyBag
        {
            name = "ACE_bodyBag";
            count = 10;
        };
        class xx_ACE_Tourniquet
        {
            name = "ACE_Tourniquet";
            count = 10;
        };
        class xx_kat_amiodarone
        {
            name = "kat_amiodarone";
            count = 10;
        };
        class xx_kat_atropine
        {
            name = "kat_atropine";
            count = 10;
        };
        class xx_ACE_CableeTie
        {
            name = "ACE_CableTie";
            count = 15;
        };
        class xx_kat_larynx
        {
            name = "kat_larynx";
            count = 20;
        };
        class xx_kat_guedel
        {
            name = "kat_guedel";
            count = 10;
        };
        class xx_kat_chestSeal
        {
            name = "kat_chestSeal";
            count = 15;
        };
        class xx_kat_naloxone
        {
            name = "kat_naloxone";
            count = 5;
        };
        class xx_kat_TXA
        {
            name = "kat_TXA";
            count = 5;
        };
    };
};