// WidgetBlueprintGeneratedClass SidebarReferAFriendEntry.SidebarReferAFriendEntry_C
// Size: 0x10d8 (Inherited: 0x10a0)
struct USidebarReferAFriendEntry_C : UFortReferFriendListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10a0(0x08)
	struct UWidgetAnimation* Selected; // 0x10a8(0x08)
	struct UWidgetAnimation* Hovered; // 0x10b0(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x10b8(0x08)
	struct UBorder* EntryBorder; // 0x10c0(0x08)
	struct UCommonRichTextBlock* Text_MissedInvitesText; // 0x10c8(0x08)
	struct UCommonRichTextBlock* Text_MissedInvitesText_Hover; // 0x10d0(0x08)

	void BP_OnUnhovered(); // Function SidebarReferAFriendEntry.SidebarReferAFriendEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function SidebarReferAFriendEntry.SidebarReferAFriendEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda071c
	void BP_OnHovered(); // Function SidebarReferAFriendEntry.SidebarReferAFriendEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void ExecuteUbergraph_SidebarReferAFriendEntry(int32_t EntryPoint); // Function SidebarReferAFriendEntry.SidebarReferAFriendEntry_C.ExecuteUbergraph_SidebarReferAFriendEntry // (Final|UbergraphFunction) // @ game+0xda071c
};

