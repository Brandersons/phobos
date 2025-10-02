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
    // base classes
        class phobos_lance_helmet_helipilot_base : H_PilotHelmetHeli_B
        {
        author = "Brandersons";
        displayName = "[Phobos] Heli Pilot Helmet (Base)";
        descriptionShort = "Armor Level III";
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
                    armor = 5.5;
                    passThrough = 0.5;
                };
                class Face
                {
                    hitPointName = "HitFace";
                    armor = 2;
                    passThrough = 0.8;
                };
                class Neck
                {
                    hitPointName = "HitNeck";
                    armor = 2;
                    passThrough = 0.7;
                };
            };
	    };
    };
    class phobos_lance_helmet_helicrew_base : H_CrewHelmetHeli_B
    {   
        author = "Brandersons";
        displayName = "[Phobos] Heli Pilot Helmet (Base)";
        descriptionShort = "Armor Level III";
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
                    armor = 5.5;
                    passThrough = 0.5;
                };
                class Face
                {
                    hitPointName = "HitFace";
                    armor = 2;
                    passThrough = 0.8;
                };
                class Neck
                {
                    hitPointName = "HitNeck";
                    armor = 2;
                    passThrough = 0.7;
                };
            };
	    };
    };
    class phobos_lance_helmet_tankcrew_base : H_HelmetCrew_I
    {
        author = "Brandersons";
        displayName = "[Phobos] Tank Crew Helmet (Base)";        
        descriptionShort = "Armor Level III";
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
                    armor = 5.5;
                    passThrough = 0.5;
                };
                class Face
                {
                    hitPointName = "HitFace";
                    armor = 2;
                    passThrough = 0.8;
                };
                class Neck
                {
                    hitPointName = "HitNeck";
                    armor = 2;
                    passThrough = 0.7;
                };
            };
	    };
    };
    // heli pilot helmets
    class phobos_lance_helmet_helipilot_black : phobos_lance_helmet_helipilot_base
    {   
        author = "Brandersons";
        displayName = "[Phobos] Heli Pilot Helmet (Black)";
        descriptionShort = "Armor Level III";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\A3\characters_f\common\data\helmet_heli_blk_co.paa"};
        scope = 2;
        scopeCurator = 2;
    };
    class phobos_lance_helmet_helipilot_olive : phobos_lance_helmet_helipilot_base
    {   
        author = "Brandersons";
        displayName = "[Phobos] Heli Pilot Helmet (Olive)";
        descriptionShort = "Armor Level III";
        subItems[] = {"Integrated_NVG_F"};
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\helmet_heli_co.paa"};
        scope = 2;
        scopeCurator = 2;
    };
    // heli crew helmets
    class phobos_lance_helmet_helicrew_black : phobos_lance_helmet_helicrew_base
    {   
        author = "Brandersons";
        displayName = "[Phobos] Heli Crew Helmet (Black)";
        descriptionShort = "Armor Level III";
        ace_hearing_protection = 0.85;
        ace_hearing_lowerVolume = 0.6;
        ace_hearing_hasEHP = 1;
        subItems[] = {"Integrated_NVG_F"};
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\A3\characters_f\common\data\helmet_heli_blk_co.paa"};
        scope = 2;
        scopeCurator = 2;
    };
        class phobos_lance_helmet_helicrew_olive : phobos_lance_helmet_helicrew_base
        {
            author = "Brandersons";
            displayName = "[Phobos] Heli Crew Helmet (Olive)";
            descriptionShort = "Armor Level III";
            ace_hearing_protection = 0.85;
            ace_hearing_lowerVolume = 0.6;
            ace_hearing_hasEHP = 1;
            subItems[] = {"Integrated_NVG_F"};
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\helmet_heli_co.paa"};
            scope = 2;
            scopeCurator = 2;
            class ItemInfo: ItemInfo
            {
                class HitpointsProtectionInfo
                {
                    class Head
                    {
                        hitPointName = "HitHead";
                        armor = 5.5;
                        passThrough = 0.5;
                    };
                    class Face
                    {
                        hitPointName = "HitFace";
                        armor = 2;
                        passThrough = 0.8;
                    };
                    class Neck
                    {
                        hitPointName = "HitNeck";
                        armor = 2;
                        passThrough = 0.7;
                    };
                };
    	    };
    };
    // tank crew helmets
    class phobos_lance_helmet_tankcrew_black : phobos_lance_helmet_tankcrew_base
    {   
        author = "Brandersons";
        displayName = "[Phobos] Tank Crew Helmet (Black)";
        descriptionShort = "Armor Level III";
        ace_hearing_protection = 0.85;
        ace_hearing_lowerVolume = 0.6;
        ace_hearing_hasEHP = 1;
        subItems[] = {"Integrated_NVG_F"};
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\A3\Characters_F_Beta\Indep\Data\headgear_ia_helmet_crew_co.paa"};
        scope = 2;
        scopeCurator = 2;
    };
        class phobos_lance_helmet_tankcrew_olive : phobos_lance_helmet_tankcrew_base
        {
            author = "Brandersons";
        scope = 2;
        scopeCurator = 2;
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitPointName = "HitHead";
                    armor = 5.5;
                    passThrough = 0.5;
                };
                class Face
                {
                    hitPointName = "HitFace";
                    armor = 2;
                    passThrough = 0.8;
                };
                class Neck
                {
                    hitPointName = "HitNeck";
                    armor = 2;
                    passThrough = 0.7;
                };
            };
	    };
    };
};

class cfgVehicles
{
    class Headgear_H_PilotHelmetHeli_B;
    class Headgear_H_CrewHelmetHeli_B;
    class Headgear_H_HelmetCrew_I;
    // base classes
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
    class phobos_lance_helmet_helicrew_base_item : Headgear_H_CrewHelmetHeli_B
    {
        author = "Brandersons";
        displayName = "[Phobos] Heli Crew Helmet (Base)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_Helmets";
        vehicleClass = "ItemsHeadgear";
        class TransportItems
        {
            class phobos_lance_helmet_helicrew_base
            {
                name = "phobos_lance_helmet_helicrew_base";
                count = 1;
            };
        };
    };
    class phobos_lance_helmet_tankcrew_base_item : Headgear_H_HelmetCrew_I
    {
        author = "Brandersons";
        displayName = "[Phobos] Tank Crew Helmet (Base)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_Helmets";
        vehicleClass = "ItemsHeadgear";
        class TransportItems
        {
            class phobos_lance_helmet_tankcrew_base
            {
                name = "phobos_lance_helmet_tankcrew_base";
                count = 1;
            };
        };
    };
    // heli pilot helmets
    class phobos_lance_helmet_helipilot_black_item : Headgear_H_PilotHelmetHeli_B
    {
        author = "Brandersons";
        displayName = "[Phobos] Heli Pilot Helmet (Black)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_Helmets";
        vehicleClass = "ItemsHeadgear";
        class TransportItems
        {
            class phobos_lance_helmet_helipilot_black
            {
                name = "phobos_lance_helmet_helipilot_black";
                count = 1;
            };
        };
    };
    class phobos_lance_helmet_helipilot_olive_item : Headgear_H_PilotHelmetHeli_B
    {
        author = "Brandersons";
        displayName = "[Phobos] Heli Pilot Helmet (Olive)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_Helmets";
        vehicleClass = "ItemsHeadgear";
        class TransportItems
        {
            class phobos_lance_helmet_helipilot_olive
            {
                name = "phobos_lance_helmet_helipilot_olive";
                count = 1;
            };
        };
    };
    // heli crew helmets
    class phobos_lance_helmet_helicrew_black_item : Headgear_H_CrewHelmetHeli_B
    {
        author = "Brandersons";
        displayName = "[Phobos] Heli Crew Helmet (Black)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_Helmets";
        vehicleClass = "ItemsHeadgear";
        class TransportItems
        {
            class phobos_lance_helmet_helicrew_black
            {
                name = "phobos_lance_helmet_helicrew_black";
                count = 1;
            };
        };
    };
    class phobos_lance_helmet_helicrew_olive_item : Headgear_H_CrewHelmetHeli_B
    {
        author = "Brandersons";
        displayName = "[Phobos] Heli Crew Helmet (Olive)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_Helmets";
        vehicleClass = "ItemsHeadgear";
        class TransportItems
        {
            class phobos_lance_helmet_helicrew_olive
            {
                name = "phobos_lance_helmet_helicrew_olive";
                count = 1;
            };
        };
    };
    // tank crew helmets
    class phobos_lance_helmet_tankcrew_black_item : Headgear_H_HelmetCrew_I
    {
        author = "Brandersons";
        displayName = "[Phobos] Tank Crew Helmet (Black)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_Helmets";
        vehicleClass = "ItemsHeadgear";
        class TransportItems
        {
            class phobos_lance_helmet_tankcrew_black
            {
                name = "phobos_lance_helmet_tankcrew_black";
                count = 1;
            };
        };
    };
    class phobos_lance_helmet_tankcrew_olive_item : Headgear_H_HelmetCrew_I
    {
        author = "Brandersons";
        displayName = "[Phobos] Tank Crew Helmet (Olive)";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_Helmets";
        vehicleClass = "ItemsHeadgear";
        class TransportItems
        {
            class phobos_lance_helmet_tankcrew_olive
            {
                name = "phobos_lance_helmet_tankcrew_olive";
                count = 1;
            };
        };
    };
};