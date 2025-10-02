class CfgPatches
{
    class phobos_jca_vests_compat
    {
        name="phobos_jca_vests_compat";
        units[]={};
        weapons[]={};
        magazines[]={};
        requiredVersion=0.1;
        addonRootClass="phobos_core";
        requiredAddons[]=
        {
            "phobos_core"
        };
    };
};

class cfgWeapons
{
	class ItemCore;
	class VestItem;
	class ItemInfo; 

	class JCA_V_CarrierRigKBT_01_combat_black_F: ItemCore 
	{
		class ItemInfo: VestItem
		{
			armor = 8;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.1;
				};
				class Pelvis
				{
					HitpointName = "HitPelvis";
					armor = 8;
					PassThrough = 1;
				};
				class Body
				{
					HitpointName = "HitBody";
					armor = 10;
					PassThrough = 1;
				};
			};
		};
	};
	class JCA_V_CarrierRigKBT_01_combat_olive_F: ItemCore 
	{
		class ItemInfo: VestItem
		{
			armor = 8;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.1;
				};
				class Pelvis
				{
					HitpointName = "HitPelvis";
					armor = 8;
					PassThrough = 1;
				};
				class Body
				{
					HitpointName = "HitBody";
					armor = 10;
					PassThrough = 1;
				};
			};
		};
	};
	class JCA_V_CarrierRigKBT_01_combat_sand_F: ItemCore 
	{
		class ItemInfo: VestItem
		{
			armor = 8;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.1;
				};
				class Pelvis
				{
					HitpointName = "HitPelvis";
					armor = 8;
					PassThrough = 1;
				};
				class Body
				{
					HitpointName = "HitBody";
					armor = 10;
					PassThrough = 1;
				};
			};
		};
	};

	class JCA_V_CarrierRigKBT_01_command_black_F: ItemCore 
	{
		class ItemInfo: VestItem
		{
			armor = 8;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.1;
				};
				class Pelvis
				{
					HitpointName = "HitPelvis";
					armor = 8;
					PassThrough = 1;
				};
				class Body
				{
					HitpointName = "HitBody";
					armor = 10;
					PassThrough = 1;
				};
			};
		};
	};
	class JCA_V_CarrierRigKBT_01_command_olive_F: ItemCore 
	{
		class ItemInfo: VestItem
		{
			armor = 8;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.1;
				};
				class Pelvis
				{
					HitpointName = "HitPelvis";
					armor = 8;
					PassThrough = 1;
				};
				class Body
				{
					HitpointName = "HitBody";
					armor = 10;
					PassThrough = 1;
				};
			};
		};
	};
	class JCA_V_CarrierRigKBT_01_command_sand_F: ItemCore 
	{
		class ItemInfo: VestItem
		{
			armor = 8;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.1;
				};
				class Pelvis
				{
					HitpointName = "HitPelvis";
					armor = 8;
					PassThrough = 1;
				};
				class Body
				{
					HitpointName = "HitBody";
					armor = 10;
					PassThrough = 1;
				};
			};
		};
	};

	class JCA_V_CarrierRigKBT_01_compact_black_F: ItemCore 
	{
		class ItemInfo: VestItem
		{
			armor = 8;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.1;
				};
				class Pelvis
				{
					HitpointName = "HitPelvis";
					armor = 8;
					PassThrough = 1;
				};
				class Body
				{
					HitpointName = "HitBody";
					armor = 10;
					PassThrough = 1;
				};
			};
		};
	};
	class JCA_V_CarrierRigKBT_01_compact_olive_F: ItemCore 
	{
		class ItemInfo: VestItem
		{
			armor = 8;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.1;
				};
				class Pelvis
				{
					HitpointName = "HitPelvis";
					armor = 8;
					PassThrough = 1;
				};
				class Body
				{
					HitpointName = "HitBody";
					armor = 10;
					PassThrough = 1;
				};
			};
		};
	};
	class JCA_V_CarrierRigKBT_01_compact_sand_F: ItemCore 
	{
		class ItemInfo: VestItem
		{
			armor = 8;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.1;
				};
				class Pelvis
				{
					HitpointName = "HitPelvis";
					armor = 8;
					PassThrough = 1;
				};
				class Body
				{
					HitpointName = "HitBody";
					armor = 10;
					PassThrough = 1;
				};
			};
		};
	};

    class JCA_V_CarrierRigKBT_01_CQB_black_F: ItemCore 
	{
		class ItemInfo: VestItem
		{
			armor = 8;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.1;
				};
				class Pelvis
				{
					HitpointName = "HitPelvis";
					armor = 8;
					PassThrough = 1;
				};
				class Body
				{
					HitpointName = "HitBody";
					armor = 10;
					PassThrough = 1;
				};
			};
		};
	};
	class JCA_V_CarrierRigKBT_01_CQB_olive_F: ItemCore 
	{
		class ItemInfo: VestItem
		{
			armor = 8;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.1;
				};
				class Pelvis
				{
					HitpointName = "HitPelvis";
					armor = 8;
					PassThrough = 1;
				};
				class Body
				{
					HitpointName = "HitBody";
					armor = 10;
					PassThrough = 1;
				};
			};
		};
	};
	class JCA_V_CarrierRigKBT_01_CQB_sand_F: ItemCore 
	{
		class ItemInfo: VestItem
		{
			armor = 8;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.1;
				};
				class Pelvis
				{
					HitpointName = "HitPelvis";
					armor = 8;
					PassThrough = 1;
				};
				class Body
				{
					HitpointName = "HitBody";
					armor = 10;
					PassThrough = 1;
				};
			};
		};
	};

	class JCA_V_CarrierRigKBT_01_crew_black_F: ItemCore 
	{
		class ItemInfo: VestItem
		{
			armor = 8;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.1;
				};
				class Pelvis
				{
					HitpointName = "HitPelvis";
					armor = 8;
					PassThrough = 1;
				};
				class Body
				{
					HitpointName = "HitBody";
					armor = 10;
					PassThrough = 1;
				};
			};
		};
	};
	class JCA_V_CarrierRigKBT_01_crew_olive_F: ItemCore 
	{
		class ItemInfo: VestItem
		{
			armor = 8;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.1;
				};
				class Pelvis
				{
					HitpointName = "HitPelvis";
					armor = 8;
					PassThrough = 1;
				};
				class Body
				{
					HitpointName = "HitBody";
					armor = 10;
					PassThrough = 1;
				};
			};
		};
	};
	class JCA_V_CarrierRigKBT_01_crew_sand_F: ItemCore 
	{
		class ItemInfo: VestItem
		{
			armor = 8;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.1;
				};
				class Pelvis
				{
					HitpointName = "HitPelvis";
					armor = 8;
					PassThrough = 1;
				};
				class Body
				{
					HitpointName = "HitBody";
					armor = 10;
					PassThrough = 1;
				};
			};
		};
	};

	class JCA_V_CarrierRigKBT_01_heavy_black_F: ItemCore 
	{
		class ItemInfo: VestItem
		{
			armor = 8;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.1;
				};
				class Pelvis
				{
					HitpointName = "HitPelvis";
					armor = 8;
					PassThrough = 1;
				};
				class Body
				{
					HitpointName = "HitBody";
					armor = 10;
					PassThrough = 1;
				};
			};
		};
	};
	class JCA_V_CarrierRigKBT_01_heavy_olive_F: ItemCore 
	{
		class ItemInfo: VestItem
		{
			armor = 8;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.1;
				};
				class Pelvis
				{
					HitpointName = "HitPelvis";
					armor = 8;
					PassThrough = 1;
				};
				class Body
				{
					HitpointName = "HitBody";
					armor = 10;
					PassThrough = 1;
				};
			};
		};
	};
	class JCA_V_CarrierRigKBT_01_heavy_sand_F: ItemCore 
	{
		class ItemInfo: VestItem
		{
			armor = 8;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.1;
				};
				class Pelvis
				{
					HitpointName = "HitPelvis";
					armor = 8;
					PassThrough = 1;
				};
				class Body
				{
					HitpointName = "HitBody";
					armor = 10;
					PassThrough = 1;
				};
			};
		};
	};

	class JCA_V_CarrierRigKBT_01_holster_black_F: ItemCore 
	{
		class ItemInfo: VestItem
		{
			armor = 8;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.1;
				};
				class Pelvis
				{
					HitpointName = "HitPelvis";
					armor = 8;
					PassThrough = 1;
				};
				class Body
				{
					HitpointName = "HitBody";
					armor = 10;
					PassThrough = 1;
				};
			};
		};
	};
	class JCA_V_CarrierRigKBT_01_holster_olive_F: ItemCore 
	{
		class ItemInfo: VestItem
		{
			armor = 8;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.1;
				};
				class Pelvis
				{
					HitpointName = "HitPelvis";
					armor = 8;
					PassThrough = 1;
				};
				class Body
				{
					HitpointName = "HitBody";
					armor = 10;
					PassThrough = 1;
				};
			};
		};
	};
	class JCA_V_CarrierRigKBT_01_holster_sand_F: ItemCore 
	{
		class ItemInfo: VestItem
		{
			armor = 8;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.1;
				};
				class Pelvis
				{
					HitpointName = "HitPelvis";
					armor = 8;
					PassThrough = 1;
				};
				class Body
				{
					HitpointName = "HitBody";
					armor = 10;
					PassThrough = 1;
				};
			};
		};
	};

	class JCA_V_CarrierRigKBT_01_light_black_F: ItemCore 
	{
		class ItemInfo: VestItem
		{
			armor = 8;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.1;
				};
				class Pelvis
				{
					HitpointName = "HitPelvis";
					armor = 8;
					PassThrough = 1;
				};
				class Body
				{
					HitpointName = "HitBody";
					armor = 10;
					PassThrough = 1;
				};
			};
		};
	};
	class JCA_V_CarrierRigKBT_01_light_olive_F: ItemCore 
	{
		class ItemInfo: VestItem
		{
			armor = 8;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.1;
				};
				class Pelvis
				{
					HitpointName = "HitPelvis";
					armor = 8;
					PassThrough = 1;
				};
				class Body
				{
					HitpointName = "HitBody";
					armor = 10;
					PassThrough = 1;
				};
			};
		};
	};
	class JCA_V_CarrierRigKBT_01_light_sand_F: ItemCore 
	{
		class ItemInfo: VestItem
		{
			armor = 8;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.1;
				};
				class Pelvis
				{
					HitpointName = "HitPelvis";
					armor = 8;
					PassThrough = 1;
				};
				class Body
				{
					HitpointName = "HitBody";
					armor = 10;
					PassThrough = 1;
				};
			};
		};
	};

	class JCA_V_CarrierRigKBT_01_recon_black_F: ItemCore 
	{
		class ItemInfo: VestItem
		{
			armor = 8;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.1;
				};
				class Pelvis
				{
					HitpointName = "HitPelvis";
					armor = 8;
					PassThrough = 1;
				};
				class Body
				{
					HitpointName = "HitBody";
					armor = 10;
					PassThrough = 1;
				};
			};
		};
	};
	class JCA_V_CarrierRigKBT_01_recon_olive_F: ItemCore 
	{
		class ItemInfo: VestItem
		{
			armor = 8;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.1;
				};
				class Pelvis
				{
					HitpointName = "HitPelvis";
					armor = 8;
					PassThrough = 1;
				};
				class Body
				{
					HitpointName = "HitBody";
					armor = 10;
					PassThrough = 1;
				};
			};
		};
	};
	class JCA_V_CarrierRigKBT_01_recon_sand_F: ItemCore 
	{
		class ItemInfo: VestItem
		{
			armor = 8;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.1;
				};
				class Pelvis
				{
					HitpointName = "HitPelvis";
					armor = 8;
					PassThrough = 1;
				};
				class Body
				{
					HitpointName = "HitBody";
					armor = 10;
					PassThrough = 1;
				};
			};
		};
	};

	class JCA_V_CarrierRigKBT_01_tactical_black_F: ItemCore 
	{
		class ItemInfo: VestItem
		{
			armor = 8;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.1;
				};
				class Pelvis
				{
					HitpointName = "HitPelvis";
					armor = 8;
					PassThrough = 1;
				};
				class Body
				{
					HitpointName = "HitBody";
					armor = 10;
					PassThrough = 1;
				};
			};
		};
	};
	class JCA_V_CarrierRigKBT_01_tactical_olive_F: ItemCore 
	{
		class ItemInfo: VestItem
		{
			armor = 8;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.1;
				};
				class Pelvis
				{
					HitpointName = "HitPelvis";
					armor = 8;
					PassThrough = 1;
				};
				class Body
				{
					HitpointName = "HitBody";
					armor = 10;
					PassThrough = 1;
				};
			};
		};
	};
	class JCA_V_CarrierRigKBT_01_tactical_sand_F: ItemCore 
	{
		class ItemInfo: VestItem
		{
			armor = 8;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.1;
				};
				class Pelvis
				{
					HitpointName = "HitPelvis";
					armor = 8;
					PassThrough = 1;
				};
				class Body
				{
					HitpointName = "HitBody";
					armor = 10;
					PassThrough = 1;
				};
			};
		};
	};

	class JCA_V_CarrierRigKBT_01_black_F: ItemCore 
	{
		class ItemInfo: VestItem
		{
			armor = 8;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.1;
				};
				class Pelvis
				{
					HitpointName = "HitPelvis";
					armor = 8;
					PassThrough = 1;
				};
				class Body
				{
					HitpointName = "HitBody";
					armor = 10;
					PassThrough = 1;
				};
			};
		};
	};
	class JCA_V_CarrierRigKBT_01_olive_F: ItemCore 
	{
		class ItemInfo: VestItem
		{
			armor = 8;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.1;
				};
				class Pelvis
				{
					HitpointName = "HitPelvis";
					armor = 8;
					PassThrough = 1;
				};
				class Body
				{
					HitpointName = "HitBody";
					armor = 10;
					PassThrough = 1;
				};
			};
		};
	};
	class JCA_V_CarrierRigKBT_01_sand_F: ItemCore 
	{
		class ItemInfo: VestItem
		{
			armor = 8;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.1;
				};
				class Abdomen
				{
					HitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.1;
				};
				class Pelvis
				{
					HitpointName = "HitPelvis";
					armor = 8;
					PassThrough = 1;
				};
				class Body
				{
					HitpointName = "HitBody";
					armor = 10;
					PassThrough = 1;
				};
			};
		};
	};
};