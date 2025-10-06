class CfgPatches
{
	class phobos_props
	{
		name="[Phobos] Props";
		author="Brandersons";
        url="brandersons.com";
        addonRootClass = "phobos_core";
		requiredAddons[]=
		{
            "phobos_core"
		};
		requiredVersion= 0.01;
		units[]=
		{
			"phobos_props_arsenal_standard",
			"phobos_props_arsenal_winter"
		};
		weapons[]={};
		magazines[]={};
	};
};

// misc arsenals
//Banner_01_NATO_F
//Flag_NATO_F
//FoldedFlag_01_UK_F
//SignAd_SponsorS_ION_F
//SignAd_Sponsor_ION_F
//Land_Billboard_02_ion_F
//Land_Billboard_03_ionbase_F
//Land_MedicalTent_01_NATO_generic_closed_F
//Land_MedicalTent_01_NATO_tropic_generic_closed_F
//Land_ConnectorTent_01_NATO_tropic_open_F
//Land_ConnectorTent_01_NATO_tropic_closed_F
//Land_ConnectorTent_01_NATO_tropic_cross_F
//Land_ConnectorTent_01_NATO_open_F
//Land_ConnectorTent_01_NATO_cross_F
//Land_ConnectorTent_01_NATO_closed_F

class cfgVehicles
{
    class Land_PlasticCase_01_large_gray_F;
    class phobos_props_arsenal_standard : Land_PlasticCase_01_large_gray_F
    {
        author = "Brandersons";
        displayName = "[Phobos] Gear (Arsenal)";
        editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_PlasticCase_01_large_gray_F.jpg";
        hiddenselections[] = {"camo"};
        hiddenSelectionsTextures[] = {"a3\Props_F_Orange\Humanitarian\Supplies\Data\PlasticCase_01_gray_CO.paa"};
        class eventHandlers
        {
            init = "[(_this select 0), ['Alpine_Carryall','Alpine_Backpack_kitbag','Alpine_Backpack_Compact','UK3CB_ION_I_B_RadioBag_WIN','phobos_winter_carryall_radio','LBT1961_Alpine','Alpine_MBSS_Green','Alpine_MBSS_PACA','dr_Alpinepar_br','dr_Alpinepar_mg','dr_Alpinepar_op','dr_Alpinefacp_br','dr_Alpinelbt_mg','dr_Alpinelbt_op','dr_Alpinelbt_br','CarrierRig_Breacher_Alpine','CarrierRig_Gunner_Alpine','CarrierRig_Operator_Alpine','Alpine_white_Crye_SS_camo','Alpine_white_Crye_camo','Alpine_Crye_Camo','Alpine_Crye_SS_Camo','UK3CB_ION_B_H_OPSCORE_WIN','UK3CB_ION_B_H_OPSCORE_PELT_WIN']] call ace_arsenal_fnc_initBox";
        };
    };
    class Land_PlasticCase_01_large_gray_F;
    class phobos_props_arsenal_winter : Land_PlasticCase_01_large_gray_F
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