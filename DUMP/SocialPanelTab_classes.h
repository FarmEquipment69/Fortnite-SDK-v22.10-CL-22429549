// WidgetBlueprintGeneratedClass SocialPanelTab.SocialPanelTab_C
// Size: 0x10f8 (Inherited: 0x10d0)
struct USocialPanelTab_C : UFortSocialTab {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10d0(0x08)
	struct UWidgetAnimation* Unselected; // 0x10d8(0x08)
	struct UWidgetAnimation* OnFriendsOnlineUpdated; // 0x10e0(0x08)
	struct UWidgetAnimation* Hovered; // 0x10e8(0x08)
	struct UWidgetAnimation* Selected; // 0x10f0(0x08)

	void BP_OnHovered(); // Function SocialPanelTab.SocialPanelTab_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void BP_OnUnhovered(); // Function SocialPanelTab.SocialPanelTab_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void BP_OnSelected(); // Function SocialPanelTab.SocialPanelTab_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void BP_OnDeselected(); // Function SocialPanelTab.SocialPanelTab_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void ExecuteUbergraph_SocialPanelTab(int32_t EntryPoint); // Function SocialPanelTab.SocialPanelTab_C.ExecuteUbergraph_SocialPanelTab // (Final|UbergraphFunction) // @ game+0xda071c
};

