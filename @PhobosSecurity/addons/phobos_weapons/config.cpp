class CfgPatches
{
    class phobos_weapons
    {
        name = "phobos_weapons";
        units[] = {};
        weapons[] =
        {
            "phobos_weapons_p90_black"
        };
        magazines[] =
        {
            "phobos_mag_57x28_ss190",
            "phobos_mag_57x28_ss190_t"
        };
        requiredVersion = 0.1;
        addonRootClass = "phobos_core";
        requiredAddons[] = {};
    };
};

class cfgAmmo
{
    #include "phobos_weapons_ammo_57x28.hpp"
    class B_570x28_Ball;
    class phobos_ammo_57x28_ss190 : B_570x28_Ball
    {
        // vanilla data
        author = "Brandersons";
        airFriction = -0.002619;
        caliber = 1.6;
        deflecting = 20;
        hit = 10;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        typicalSpeed = 716;

        // ACE ballistics data
        ACE_caliber = 5.7;
        ACE_bulletLength = 28;
        ACE_bulletMass = 2.592;
        ACE_muzzleVelocityVariationSD = 0.35;
        ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
        ACE_ballisticCoefficients[] = {0.084};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {716,776};
        ACE_barrelLengths[] = {264,407};

        // Tracer
        tracerScale = 0;
        tracerStartTime = -1;
        tracerEndTime = 2;
    };
    class phobos_ammo_570x28_ss190_t : phobos_ammo_57x28_ss190
    {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
};

class cfgMagazines
{
    class 50Rnd_570x28_SMG_03;
    class phobos_mag_57x28_ss190 : 50Rnd_570x28_SMG_03
    {
        ammo = "phobos_ammo_57x28_ss190";
        count = 50;
        displayName = "5.7mm 50Rnd Mag";
        descriptionShort = "Caliber: 5.7mm<br />Rounds: 50<br />Used in: P90";
        initSpeed = 716;
        mass = 11;
        picture = "\a3\weapons_f_mod\data\m_adr97mag_ca.paa";
        tracersEvery = 0;
        lastRoundsTracer = 5;
    };
    class phobos_mag_57x28_ss190_t : 50Rnd_570x28_SMG_03
    {
        ammo = "phobos_ammo_570x28_ss190";
        count = 50;
        displayName = "5.7mm 50Rnd Mag (TE4)";
        descriptionShort = "Caliber: 5.7mm<br />Rounds: 50<br />Used in: P90";
        initSpeed = 716;
        mass = 11;
        picture = "\a3\weapons_f_mod\data\m_adr97mag_ca.paa";
        tracersEvery = 4;
        lastRoundsTracer = 5;
    };
};

class cfgWeapons
{
    class SMG_03C_BASE;
    class phobos_weapons_p90_base: SMG_03C_BASE
    {
        author = "Bohemia Interactive";
        displayName = "[Phobos] P90 (Base)";
        scope = 1;
        scopeCurator = 1;
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"a3\weapons_f_mod\smgs\smg_03\data\body_black_co.paa"};
        model = "\A3\Weapons_F_Mod\SMGs\SMG_03\SMG_03C_TR.p3d";
        picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_c_tr_black_ca.paa";
        magazines[] =
        {
            "phobos_mag_57x28_ss190",
            "phobos_mag_57x28_ss190_t"
        };
        class WeaponSlotsInfo
        {
            mass = 56;
            class CowsSlot
            {
                iconPosition[] = {0.4,0.3};
                iconScale = 0.2;
                class compatibleItems
                {
                    JCA_optic_ACOG_black = 1;
                    JCA_optic_ACOG_olive = 1;
                    JCA_optic_ACOG_sand = 1;
                    JCA_optic_AHO_black = 1;
                    JCA_optic_AHO_olive = 1;
                    JCA_optic_AHO_sand = 1;
                    JCA_optic_AICO_black = 1;
                    JCA_optic_AICO_olive = 1;
                    JCA_optic_AICO_sand = 1;
                    JCA_optic_ARO_black = 1;
                    JCA_optic_ARO_olive = 1;
                    JCA_optic_ARO_sand = 1;
                    JCA_optic_CRBS_black = 1;
                    JCA_optic_CRBS_olive = 1;
                    JCA_optic_CRBS_sand = 1;
                    JCA_optic_CRO_black = 1;
                    JCA_optic_CRO_olive = 1;
                    JCA_optic_CRO_sand = 1;
                    JCA_optic_ICO_black = 1;
                    JCA_optic_ICO_olive = 1;
                    JCA_optic_ICO_sand = 1;
                    JCA_optic_IHO_black = 1;
                    JCA_optic_IHO_black_magnifier = 1;
                    JCA_optic_IHO_olive = 1;
                    JCA_optic_IHO_olive_magnifier = 1;
                    JCA_optic_IHO_sand = 1;
                    JCA_optic_IHO_sand_magnifier = 1;
                    JCA_optic_MRO_black = 1;
                    JCA_optic_MROS_olive = 1;
                    JCA_optic_MROS_olive_magnifier = 1;
                    JCA_optic_MROS_sand = 1;
                    JCA_optic_MROS_sand_magnifier = 1;
                    JCA_optic_MROS_black = 1;
                    JCA_optic_MROS_black_magnifier = 1;
                };
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                displayName = "Optics Slot";
                iconPicture = "\a3\weapons_f\Data\ui\attachment_top";
                iconPinpoint = "Bottom";
                scope = 0;
            };
            class MuzzleSlot
            {
                iconPosition[] = {0,0.5};
                iconScale = 0.25;
                class compatibleItems
                {
                    JCA_muzzle_snds_9MM_enhanced_black = 1;
                    JCA_muzzle_snds_9MM_enhanced_olive = 1;
                    JCA_muzzle_snds_9MM_enhanced_sand = 1;
                    JCA_muzzle_snds_MP5_black = 1;
                    JCA_muzzle_snds_MP5_olive = 1;
                    JCA_muzzle_snds_MP5_sand = 1;
                    JCA_muzzle_snds_9MM_tactical_black = 1;
                    JCA_muzzle_snds_9MM_tactical_olive = 1;
                    JCA_muzzle_snds_9MM_tactical_sand = 1;
                };
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
                iconPinpoint = "Center";
                access = 1;
                scope = 0;
            };
            class PointerSlot
            {
                iconPosition[] = {0.33,0.37};
                iconScale = 0.25;
                class compatibleItems
                {
                    JCA_acc_LaserModule_black_Pointer = 1;
                    JCA_acc_LaserModule_olive_Pointer = 1;
                    JCA_acc_LaserModule_sand_Pointer = 1;
                    JCA_acc_flashlight_tactical_black = 1;
                    JCA_acc_flashlight_tactical_olive = 1;
                    JCA_acc_flashlight_tactical_sand = 1;
                };
                iconPicture = "\a3\weapons_f\Data\ui\attachment_side";
                linkProxy = "\a3\data_f\proxies\weapon_slots\side";
                displayName = "Pointer Slot";
            };
        };
    };
    class phobos_weapons_p90_black: phobos_weapons_p90_base
    {
        author = "Brandersons";
        displayName = "[Phobos] P90";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\phobos_weapons\data\test.paa"};
        scope = 2;
        scopeArsenal=2;
        scopeCurator = 2;
    };
};