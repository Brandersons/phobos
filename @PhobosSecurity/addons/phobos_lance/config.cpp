class CfgPatches
{
	class phobos_lance
	{
		name="[Phobos] Lance";
		author="Brandersons";
        url="brandersons.com";
        addonRootClass = "phobos_core";
		requiredAddons[]=
		{
            "phobos_core"
		};
		requiredVersion= 0.01;
		units[]={};
		weapons[]={};
		magazines[]={};
	};
};

class cfgWeapons
{
    class H_PilotHelmetHeli_B;
    class H_CrewHelmetHeli_B;
    class H_HelmetCrew_I;

    class phobos_lance_helmet_helipilot_base : H_PilotHelmetHeli_B
    {   
        author = "Brandersons";
        displayName = "[Phobos] Heli Pilot Helmet (Base)";
        descriptionShort = "Armor Level III";
        author = "Brandersons";
        ace_hearing_protection = 0.85;
        ace_hearing_lowerVolume = 0.6;
        ace_hearing_hasEHP = 1;
        subItems[] = {"Integrated_NVG_F"};
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\A3\Characters_F_Beta\Indep\Data\headgear_ia_helmet_crew_co.paa"};
        scope = 1;
        scopeCurator = 1;
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitPointName = "HitHead";
                    armor = 2.5;
                    passThrough = 0.5;
                };
                class Face
                {
                    hitPointName = "HitFace";
                    armor = 0;
                    passThrough = 1;
                };
            };
	};
    };
    class phobos_lance_helmet_helicrew_base : H_CrewHelmetHeli_B
    {   
        author = "Brandersons";
        displayName = "[Phobos] Heli Pilot Helmet (Base)";
        descriptionShort = "Armor Level III";
        author = "Brandersons";
        ace_hearing_protection = 0.85;
        ace_hearing_lowerVolume = 0.6;
        ace_hearing_hasEHP = 1;
        subItems[] = {"Integrated_NVG_F"};
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\A3\Characters_F_Beta\Indep\Data\headgear_ia_helmet_crew_co.paa"};
        scope = 1;
        scopeCurator = 1;
    };
    class phobos_lance_helmet_crew_base : H_HelmetCrew_I
    {   
        author = "Brandersons";
        displayName = "[Phobos] Heli Pilot Helmet (Base)";
        descriptionShort = "Armor Level III";
        author = "Brandersons";
        ace_hearing_protection = 0.85;
        ace_hearing_lowerVolume = 0.6;
        ace_hearing_hasEHP = 1;
        subItems[] = {"Integrated_NVG_F"};
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\A3\Characters_F_Beta\Indep\Data\headgear_ia_helmet_crew_co.paa"};
        scope = 1;
        scopeCurator = 1;
    };
};

class cfgVehicles
{
    class Headgear_H_PilotHelmetHeli_B;
    class Headgear_H_CrewHelmetHeli_B;
    class Headgear_H_HelmetCrew_I;

    class phobos_lance_helmet_helipilot_base_item : Headgear_H_PilotHelmetHeli_B
    {
        author = "Brandersons";
        displayName = "[Phobos] Heli Pilot Helmet (Base)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_Helmets";
        vehicleClass = "ItemsHeadgear";
        class TransportItems
        {
            class phobos_lance_helmet_helipilot_base
            {
                name = "phobos_lance_helmet_helipilot_base";
                count = 1;
            };
        };
    };
    class phobos_lance_helmet_helicrew_base_item : Headgear_H_PilotHelmetHeli_B
    {
        author = "Brandersons";
        displayName = "[Phobos] Heli Crew Helmet (Base)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_Helmets";
        vehicleClass = "ItemsHeadgear";
        class TransportItems
        {
            class phobos_lance_helmet_helicrew_base;
            {
                name = "phobos_lance_helmet_helicrew_base";
                count = 1;
            };
        };
    };
    class phobos_lance_helmet_crew_base_item : Headgear_H_PilotHelmetHeli_B
    {
        author = "Brandersons";
        displayName = "[Phobos] Heli Pilot Helmet (Base)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_Helmets";
        vehicleClass = "ItemsHeadgear";
        class TransportItems
        {
            class phobos_lance_helmet_crew_base;
            {
                name = "phobos_lance_helmet_crew_base";
                count = 1;
            };
        };
    };
};