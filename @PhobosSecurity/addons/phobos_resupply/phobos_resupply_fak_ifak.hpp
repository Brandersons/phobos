class phobos_resupply_fak_ifak : phobos_resupply_box_base
{
    displayName = "[BT] Individiual First Aid Kit (IFAK)";
    author = "Brandersons";
    ace_cargo_size = 0.2;
    scope = 2;
    scopeCurator = 2;
    model = "\a3\Weapons_F\Ammo\mag_FirstAidkit.p3d";
    editorPreview = "\A3\Weapons_F\Items\data\UI\gear_FirstAidKit_CA.paa";
    class TransportItems
    {
        class xx_ACE_elasticBandage
        {
            name = "ACE_elasticBandage";
            count = 4;
        };
        class xx_ACE_packingBandage
        {
            name = "ACE_packingBandage";
            count = 4;
        };
        class xx_ACE_quikclot
        {
            name = "ACE_quikclot";
            count = 4;
        };
        class xx_ACE_painkillers
        {
            name = "ACE_painkillers";
            count = 1;
        };
        class xx_kat_epinephrineIV
        {
            name = "kat_epinephrineIV";
            count = 2;
        };
        class xx_ACE_splint
        {
            name = "ACE_splint";
            count = 2;
        };
        class xx_ACE_tourniquet
        {
            name = "ACE_tourniquet";
            count = 4;
        };
        class xx_ACE_morphine
        {
            name = "ACE_morphine";
            count = 2;
        };
        class xx_kat_chestSeal
        {
            name = "kat_chestSeal";
            count = 2;
        };
        class xx_kat_guedel
        {
            name = "kat_guedel";
            count = 2;
        };
        class xx_ACE_EarPlugs
        {
            name = "ACE_EarPlugs";
            count = 1;
        };
    };
};