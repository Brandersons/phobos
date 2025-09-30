class CfgPatches
{
	class phobos_winter
	{
		name = "[Phobos] Winter";
		author = "Brandersons";
        url = "brandersons.com";
        addonRootClass = "phobos_core";
		requiredAddons[]=
		{
            "phobos_core"
		};
		requiredVersion=0.01;
		units[]=
        {
            "phobos_winter_arsenal"
        };
		weapons[]={};
		magazines[]={};
	};
};

class cfgVehicles
{
    // need to make a winter radio first
    class B_Kitbag_sgg;
    class phobos_winter_carryall_radio : B_Kitbag_sgg
    {
        author = "Brandersons";
        displayName = "[Phobos] Carryall Radio (Winter)";
        picture = "Alpine_Vests\data\Icons\Alpine_Icon.paa";
        hiddenSelectionsTextures[] = {"Alpine_Vests\data\backpacks\Alpine_kitbag.paa"};
        tf_range = 20000;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "airborne";
        tf_dialogUpdate = "[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
    };
    
    class Land_PlasticCase_01_large_gray_F;
    class phobos_winter_arsenal : Land_PlasticCase_01_large_gray_F
    {
        author = "Brandersons";
        displayName = "[Phobos] Winter Gear (Arsenal)";
        editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_PlasticCase_01_large_gray_F.jpg";
        hiddenselections[] = {"camo"};
        hiddenSelectionsTextures[] = {"a3\Props_F_Orange\Humanitarian\Supplies\Data\PlasticCase_01_gray_CO.paa"};
        class eventHandlers
        {
            init = "[(_this select 0), ['Alpine_Carryall','Alpine_Backpack_kitbag','Alpine_Backpack_Compact','UK3CB_ION_I_B_RadioBag_WIN','phobos_winter_carryall_radio','LBT1961_Alpine','Alpine_MBSS_Green','Alpine_MBSS_PACA','dr_Alpinepar_br','dr_Alpinepar_mg','dr_Alpinepar_op','dr_Alpinefacp_br','dr_Alpinelbt_mg','dr_Alpinelbt_op','dr_Alpinelbt_br','CarrierRig_Breacher_Alpine','CarrierRig_Gunner_Alpine','CarrierRig_Operator_Alpine','Alpine_white_Crye_SS_camo','Alpine_white_Crye_camo','Alpine_Crye_Camo','Alpine_Crye_SS_Camo','UK3CB_ION_B_H_OPSCORE_WIN','UK3CB_ION_B_H_OPSCORE_PELT_WIN']] call ace_arsenal_fnc_initBox";
        };
    };
};