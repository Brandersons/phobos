class RHSGREF_A29B_HIDF;

class phobos_vehicles_tucano : RHSGREF_A29B_HIDF
{    
    displayName = "[Phobos] A-29B Super Tucano";
    author = "Brandersons";
    faction = "phobos_faction";
    side = 1;
    editorSubcategory = "phobos_faction_edsubcat_planes";
    crew = "B_Soldier_F";
    typicalCargo[] = {"B_Soldier_F"};
    scope = 2;
    scopeCurator = 2;
    tf_hasLRradio = 1;
    tf_isolatedAmount = 0.3;
    tf_RadioType = "TFAR_rt1523g";
    tf_range = 200000;
    tfar_hasintercom = 1;
    magazines[] = {"rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red_Plane"};
    class transportBackpacks {};
    class transportItems {};
    class transportMagazines {};
    class transportWeapons {};
    class Components
    {
        class SensorsManagerComponent
        {
            class Components
            {
                class IRSensorComponent
                {
                    class AirTarget
                    {
                        minRange = 500;
                        maxRange = 4000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = 1;
                    };
                    class GroundTarget
                    {
                        minRange = 500;
                        maxRange = 3000;
                        objectDistanceLimitCoef = 1;
                        viewDistanceLimitCoef = 1;
                    };
                    animDirection = "TGPTilt";
                    angleRangeHorizontal = 40;
                    angleRangeVertical = 30;
                    typeRecognitionDistance = -1;
                    maxFogSeeThrough = 0.95;
                    minTrackableSpeed = 0;
                    maxTrackableSpeed = 695;
                    componentType = "IRSensorComponent";
                    color[] = {1,0,0,1};
                    allowsMarking = 1;
                    groundNoiseDistanceCoef = -1;
                    maxGroundNoiseDistance = -1;
                    minSpeedThreshold = 0;
                    maxSpeedThreshold = 0;
                    aimDown = 0;
                    minTrackableATL = -1e+10;
                    maxTrackableATL = 1e+10;
                };
                class VisualSensorComponent
                {
                    class AirTarget
                    {
                        minRange = 500;
                        maxRange = 3000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = 1;
                    };
                    class GroundTarget
                    {
                        minRange = 500;
                        maxRange = 2000;
                        objectDistanceLimitCoef = 1;
                        viewDistanceLimitCoef = 1;
                    };
                    maxTrackableSpeed = 70;
                    animDirection = "TGPTilt";
                    angleRangeHorizontal = 40;
                    angleRangeVertical = 30;
                    componentType = "VisualSensorComponent";
                    nightRangeCoef = 0;
                    maxFogSeeThrough = 0.94;
                    color[] = {1,1,0.5,0.8};
                    typeRecognitionDistance = 2000;
                    allowsMarking = 1;
                    groundNoiseDistanceCoef = -1;
                    maxGroundNoiseDistance = -1;
                    minSpeedThreshold = 0;
                    maxSpeedThreshold = 0;
                    aimDown = 0;
                    minTrackableSpeed = -1e+10;
                    minTrackableATL = -1e+10;
                    maxTrackableATL = 1e+10;
                };
                class PassiveRadarSensorComponent
                {
                    componentType = "PassiveRadarSensorComponent";
                    class AirTarget
                    {
                        minRange = 16000;
                        maxRange = 16000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = -1;
                    };
                    class GroundTarget
                    {
                        minRange = 16000;
                        maxRange = 16000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = -1;
                    };
                    typeRecognitionDistance = 12000;
                    angleRangeHorizontal = 360;
                    angleRangeVertical = 360;
                    groundNoiseDistanceCoef = -1;
                    maxGroundNoiseDistance = -1;
                    minSpeedThreshold = 0;
                    maxSpeedThreshold = 0;
                    animDirection = "";
                    aimDown = 0;
                    color[] = {0.5,1,0.5,0.5};
                    minTrackableSpeed = -1e+10;
                    maxTrackableSpeed = 1e+10;
                    minTrackableATL = -1e+10;
                    maxTrackableATL = 1e+10;
                    allowsMarking = 0;
                };
                class LaserSensorComponent
                {
                    componentType = "LaserSensorComponent";
                    class AirTarget
                    {
                        minRange = 6000;
                        maxRange = 6000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = -1;
                    };
                    class GroundTarget
                    {
                        minRange = 6000;
                        maxRange = 6000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = -1;
                    };
                    angleRangeHorizontal = 180;
                    angleRangeVertical = 180;
                    typeRecognitionDistance = 0;
                    color[] = {1,1,1,0};
                    allowsMarking = 1;
                    groundNoiseDistanceCoef = -1;
                    maxGroundNoiseDistance = -1;
                    minSpeedThreshold = 0;
                    maxSpeedThreshold = 0;
                    animDirection = "";
                    aimDown = 0;
                    minTrackableSpeed = -1e+10;
                    maxTrackableSpeed = 1e+10;
                    minTrackableATL = -1e+10;
                    maxTrackableATL = 1e+10;
                };
                class NVSensorComponent
                {
                    componentType = "NVSensorComponent";
                    color[] = {1,1,1,0};
                    class AirTarget
                    {
                        minRange = 6000;
                        maxRange = 6000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = -1;
                    };
                    class GroundTarget
                    {
                        minRange = 6000;
                        maxRange = 6000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = -1;
                    };
                    angleRangeHorizontal = 180;
                    angleRangeVertical = 180;
                    typeRecognitionDistance = 0;
                    allowsMarking = 1;
                    groundNoiseDistanceCoef = -1;
                    maxGroundNoiseDistance = -1;
                    minSpeedThreshold = 0;
                    maxSpeedThreshold = 0;
                    animDirection = "";
                    aimDown = 0;
                    minTrackableSpeed = -1e+10;
                    maxTrackableSpeed = 1e+10;
                    minTrackableATL = -1e+10;
                    maxTrackableATL = 1e+10;
                };
                class DataLinkSensorComponent
                {
                    componentType = "DataLinkSensorComponent";
                    allowsMarking = 1;
                    typeRecognitionDistance = 0;
                    color[] = {1,1,1,0};
                    class AirTarget
                    {
                        minRange = 16000;
                        maxRange = 16000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = -1;
                    };
                    class GroundTarget
                    {
                        minRange = 16000;
                        maxRange = 16000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = -1;
                    };
                    angleRangeHorizontal = 360;
                    angleRangeVertical = 360;
                    groundNoiseDistanceCoef = -1;
                    maxGroundNoiseDistance = -1;
                    minSpeedThreshold = 0;
                    maxSpeedThreshold = 0;
                    animDirection = "";
                    aimDown = 0;
                    minTrackableSpeed = -1e+10;
                    maxTrackableSpeed = 1e+10;
                    minTrackableATL = -1e+10;
                    maxTrackableATL = 1e+10;
                };
            };
        };
        class VehicleSystemsDisplayManagerComponentLeft
        {
            class Components
            {
                class EmptyDisplay
                {
                    componentType = "EmptyDisplayComponent";
                };
            };
            componentType = "VehicleSystemsDisplayManager";
            left = 1;
            defaultDisplay = "EmptyDisplay";
            x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
            y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
        };
        class VehicleSystemsDisplayManagerComponentRight
        {
            class Components
            {
                class EmptyDisplay
                {
                    componentType = "EmptyDisplayComponent";
                };
            };
            componentType = "VehicleSystemsDisplayManager";
            right = 1;
            defaultDisplay = "EmptyDisplay";
            x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
            y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
        };
        class TransportPylonsComponent
        {
            UIPicture = "\rhsgref\addons\rhsgref_a29\ui\RHS_A29_EDEN_CA.paa";
            class Presets
            {
                class cap
                {
                    attachment[] = {"rhs_mag_ATAS_2","ace_missile_aim9_PylonMissile_1Rnd_Missile_9m","","ace_missile_aim9_PylonMissile_1Rnd_Missile_9m","rhs_mag_ATAS_2","rhsusf_ANALE40_CMFlare_Magazine_x2"};
                    displayname = "Combat Air Patrol";
                };
                class cas
                {
                    attachment[] = {"rhs_mag_ATAS_2","PylonWeapon_300Rnd_20mm_shells","PylonMissile_Bomb_GBU12_x1","PylonWeapon_300Rnd_20mm_shells","PylonRack_3Rnd_ACE_Hellfire_AGM114K","rhsusf_ANALE40_CMFlare_Magazine_x2"};
                    displayname = "Close Air Support";
                };
                class empty
                {
                    attachment[] = {"","","","","","rhsusf_ANALE40_CMFlare_Magazine_x2"};
                    displayname = "Empty";
                };
            };
            class pylons
            {
                class pylons1
                {
                    hardpoints[] =
                    {
                        "20MM_TWIN_CANNON",
                        "RHS_HP_ATAS",
                        "B_AGM65",
                        "B_AIM9",
                        "B_GBU12",
                        "DAR",
                        "RHS_HP_Hydra_USAF",
                        "UNI_SCALPEL"
                    };
                    attachment = "rhs_mag_ATAS_2";
                    priority = 1;
                    maxweight = 250;
                    UIposition[] = {0.28,0.41};
                    hitpoint = "HitPylon1";
                };
                class pylons2
                {
                    hardpoints[] =
                    {
                        "20MM_TWIN_CANNON",
                        "RHS_HP_ATAS",
                        "B_AGM65",
                        "B_AIM9",
                        "B_GBU12",
                        "DAR",
                        "RHS_HP_Hydra_USAF",
                        "UNI_SCALPEL"
                    };
                    attachment = "PylonWeapon_300Rnd_20mm_shells";
                    priority = 2;
                    maxweight = 250;
                    UIposition[] = {0.28,0.35};
                    hitpoint = "HitPylon1";
                };
                class pylons3
                {
                    hardpoints[] =
                    {
                        "B_GBU12"
                    };
                    attachment = "PylonMissile_Bomb_GBU12_x1";
                    priority = 3;
                    maxweight = 250;
                    UIposition[] = {0.31,0.28};
                    hitpoint = "HitPylon3";
                };
                class pylons4: pylons2
                {
                    UIposition[] = {0.28,0.21};
                    mirroredMissilePos = 2;
                    hitpoint = "HitPylon4";
                };
                class pylons5: pylons1
                {
                    attachment = "PylonRack_3Rnd_ACE_Hellfire_AGM114K";
                    UIposition[] = {0.28,0.15};
                    mirroredMissilePos = 1;
                    hitpoint = "HitPylon5";
                };
                class cmDispenser
                {
                    hardpoints[] = {"RHSUSF_cm_ANALE40_x2"};
                    priority = 1;
                    attachment = "rhsusf_ANALE40_CMFlare_Magazine_x2";
                    maxweight = 800;
                    UIposition[] = {0.625,0.275};
                };
            };
        };
        class TransportCountermeasuresComponent
        {
        };
    };
};  