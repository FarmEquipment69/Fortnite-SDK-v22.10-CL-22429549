// WidgetBlueprintGeneratedClass ItemInfoWidget.ItemInfoWidget_C
// Size: 0x310 (Inherited: 0x300)
struct UItemInfoWidget_C : UFortItemInfoWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct UImage* RarityGlow; // 0x308(0x08)

	void SetRarityMaterialValues(struct UFortItemDefinition* ItemDefinition); // Function ItemInfoWidget.ItemInfoWidget_C.SetRarityMaterialValues // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void ExecuteUbergraph_ItemInfoWidget(int32_t EntryPoint); // Function ItemInfoWidget.ItemInfoWidget_C.ExecuteUbergraph_ItemInfoWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xda071c
};

