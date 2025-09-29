class rhsusf_M1078A1R_SOV_M2_D_fmtv_socom;
class RHS_Stinger_AA_pod_USMC_WD;

class phobos_vehicles_experimental_01 : rhsusf_M1078A1R_SOV_M2_D_fmtv_socom
{    
    displayName = "[Phobos] Test Vehicle";
    author = "Brandersons";
    faction = "phobos_faction";
    side = 1;
    editorSubcategory = "phobos_faction_edsubcat_utility";
    crew = "B_Soldier_F";
    typicalCargo[] = {"B_Soldier_F"};
    scope = 2;
    scopeCurator = 2;
    tf_hasLRradio = 1;
    tf_isolatedAmount = 0.3;
    tf_RadioType = "TFAR_rt1523g";
    tf_range = 20000;
    tfar_hasintercom = 1;
    class transportBackpacks {};
    class transportItems {};
    class transportMagazines {};
    class transportWeapons {};
    class Turrets: Turrets
    {
        class CargoTurret_01: CargoTurret
        {
            weapons[] = {"rhsusf_weap_DummyLauncher"};
            gunnerAction = "passenger_inside_8";
            gunnerName = "Passenger (Front)";
            gunnerGetInAction = "GetInMRAP_01_cargo";
            gunnerGetOutAction = "GetOutMRAP_01";
            memoryPointsGetInGunner = "pos codriver";
            memoryPointsGetInGunnerDir = "pos codriver dir";
            memoryPointGunnerOptics = "";
            gunnerDoor = "Door_RF";
            proxyIndex = 1;
            maxTurn = 75;
            minTurn = -75;
            maxElev = 45;
            minElev = -16;
            class dynamicViewLimits;
            selectionFireAnim = "";
            class Hitpoints;
        };
        class CargoTurret_02: CargoTurret_02
        {
        };
            class M2_Turret: NewTurret
        {
            gunnerLeftHandAnimName = "OtocHlaven_Shake";
            gunnerRightHandAnimName = "OtocHlaven_Shake";
            gunnerLeftLegAnimName = "gunner_legs";
            gunnerRightLegAnimName = "gunner_legs";
            body = "mainTurret";
            gun = "mainGun";
            animationSourceBody = "mainTurret";
            animationSourceGun = "mainGun";
            animationSourceStickX = "MainTurret_Inertia";
            animationSourceStickY = "MainGun_Inertia";
            turretInfoType = "RHS_RscWeaponZeroing_TurretAdjust";
            discreteDistance[] = {100,200,300,400,500,600,800,1000,1200,1500};
            discreteDistanceInitIndex = 2;
            gunnerForceOptics = 0;
            gunnerOutOpticsShowCursor = 0;
            weapons[] = {"RHS_MK19"};
            magazines[] = {"RHS_48Rnd_40mm_MK19_M430A1","RHS_48Rnd_40mm_MK19_M430A1","RHS_48Rnd_40mm_MK19_M430A1","RHS_48Rnd_40mm_MK19_M430A1","RHS_48Rnd_40mm_MK19_M430A1","RHS_48Rnd_40mm_MK19_M430A1","RHS_48Rnd_40mm_MK19_M1001"};
            minElev = -10;
            maxElev = 40;
            soundServo[] = {"A3\sounds_f\dummysound",0.01,1,10};
            soundServoVertical[] = {"A3\sounds_f\dummysound",0.01,1,10};
            soundAttenuationTurret = "HeliAttenuationGunner";
            disableSoundAttenuation = 1;
            gunnerAction = "RHS_HMMWV_Gunner03";
            gunnerInAction = "RHS_HMMWV_Gunner03_in";
            lodTurnedIn = 0;
            lodTurnedOut = 1000;
            lodOpticsOut = 1000;
            canhideGunner = 0;
            inGunnerMayFire = 0;
            outGunnerMayFire = 1;
            viewGunnerInExternal = 1;
            gunnerGetInAction = "GetInMRAP_01_cargo";
            gunnerGetOutAction = "GetOutMRAP_01";
            gunnerDoor = "Door_RF";
            gunnerCompartments = "Compartment1";
            ejectDeadGunner = 0;
            castGunnerShadow = 1;
            startEngine = 0;
            gunBeg = "usti hlavne";
            gunEnd = "konec hlavne";
            memoryPointGunnerOptics = "gunnerview";
            memoryPointGunnerOutOptics = "gunnerview";
            gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
            gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
            optics = 0;
            memoryPointsGetInGunner = "pos gunner";
            memoryPointsGetInGunnerDir = "pos gunner dir";
            class ViewOptics;
            class ViewGunner;
            stabilizedInAxes = 3;
        };
    };
};
class phobos_vehicles_experimental_02 : rhsusf_M1078A1R_SOV_M2_D_fmtv_socom
{
    displayName = "[Phobos] Stinger FMTV";
    author = "Brandersons";
    faction = "phobos_faction";
    side = 1;
    editorSubcategory = "phobos_faction_edsubcat_utility";
    crew = "B_Soldier_F";
    typicalCargo[] = {"B_Soldier_F"};
    scope = 2;
    scopeCurator = 2;
    
    // TFAR Radio Configuration (copied from user input)
    tf_hasLRradio = 1;
    tf_isolatedAmount = 0.3;
    tf_RadioType = "TFAR_rt1523g";
    tf_range = 20000;
    tfar_hasintercom = 1;

    class Turrets: Turrets
    {
        // Cargo Turret 1 (Unmodified passenger seat)
        class CargoTurret_01: CargoTurret {};
        
        // Cargo Turret 2 (Likely an inherited, empty seat - kept for structure)
        class CargoTurret_02: CargoTurret_02 {};

        // M2 Turret modified to be the Stinger AA Launcher
        // IMPORTANT: We inherit from the Stinger's turret base for the visual model.
        class M2_Turret: rhs_stinger_base_turret
        {
            // *** 1. WEAPON & MAGAZINES ***
            weapons[] = {"Rhs_weap_stinger_Launcher_static"};
            magazines[] =
            {
                "Rhs_mag_2Rnd_stinger",
                "Rhs_mag_2Rnd_stinger",
                "Rhs_mag_2Rnd_stinger",
                "Rhs_mag_2Rnd_stinger",
                "Rhs_mag_2Rnd_stinger"
            };

            // *** 2. VISUAL MODEL AND ANIMATION OVERRIDES ***
            
            // Gunner action (copied from Stinger static config)
            gunnerAction = "rhs_stinger_gunner";
            // Added seated action for vehicle turret compatibility
            gunnerInAction = "RHS_HMMWV_Gunner03_in"; 
            
            // Explicitly define P3D body/gun to ensure the Stinger model's components are referenced
            body = "mainTurret";
            gun = "mainGun";
            
            // Use the Stinger's Thermal Imaging optics model
            gunnerOpticsModel = "\rhsusf\addons\rhsusf_heavyweapons\TOW\TOW_TI";
            gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};

            // *** 3. MOUNT LIMITS ***
            gunnerForceOptics = 0; // Allows external view
            minTurn = -60;
            maxTurn = 60;
            minElev = -10;
            maxElev = 45;
            
            // Setting Optics to 1 ensures the Thermal Imaging model is used correctly
            optics = 1; 
            gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty"; 
        };
    };
};