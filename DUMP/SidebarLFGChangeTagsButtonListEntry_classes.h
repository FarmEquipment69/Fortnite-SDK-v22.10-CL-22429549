// WidgetBlueprintGeneratedClass SidebarLFGChangeTagsButtonListEntry.SidebarLFGChangeTagsButtonListEntry_C
// Size: 0x10f8 (Inherited: 0x10a0)
struct USidebarLFGChangeTagsButtonListEntry_C : USocialListInteractableEntryBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10a0(0x08)
	struct UWidgetAnimation* Selected; // 0x10a8(0x08)
	struct UWidgetAnimation* Hovered; // 0x10b0(0x08)
	struct UBorder* AnimatedInputBorder; // 0x10b8(0x08)
	struct UImage* Arrow; // 0x10c0(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x10c8(0x08)
	struct UBorder* EntryBorder; // 0x10d0(0x08)
	struct UHorizontalBox* ; // 0x10d8(0x08)
	struct USizeBox* ; // 0x10e0(0x08)
	struct UCommonRichTextBlock* Text_ChangeTagsText; // 0x10e8(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0x10f0(0x08)

	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function SidebarLFGChangeTagsButtonListEntry.SidebarLFGChangeTagsButtonListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda071c
	void BP_OnUnhovered(); // Function SidebarLFGChangeTagsButtonListEntry.SidebarLFGChangeTagsButtonListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void BP_OnHovered(); // Function SidebarLFGChangeTagsButtonListEntry.SidebarLFGChangeTagsButtonListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void OnInitialized(); // Function SidebarLFGChangeTagsButtonListEntry.SidebarLFGChangeTagsButtonListEntry_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	void ExecuteUbergraph_SidebarLFGChangeTagsButtonListEntry(int32_t EntryPoint); // Function SidebarLFGChangeTagsButtonListEntry.SidebarLFGChangeTagsButtonListEntry_C.ExecuteUbergraph_SidebarLFGChangeTagsButtonListEntry // (Final|UbergraphFunction) // @ game+0xda071c
};

