// WidgetBlueprintGeneratedClass CosmeticNotification.CosmeticNotification_C
// Size: 0x381 (Inherited: 0x348)
struct UCosmeticNotification_C : UFortNotificationEntry_LevelUp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UWidgetAnimation* Outro; // 0x350(0x08)
	struct UWidgetAnimation* Intro; // 0x358(0x08)
	struct UCommonBorder* CommonBorder_Content; // 0x360(0x08)
	struct UImage* Reward_Glow; // 0x368(0x08)
	struct UImage* RewardFlare; // 0x370(0x08)
	struct UScaleBox* ScaleBox_Mobile; // 0x378(0x08)
	bool bIsQuestCosmetic; // 0x380(0x01)

	void SetStyle_QuestCosmetic(enum class EFortRarity Rarity); // Function CosmeticNotification.CosmeticNotification_C.SetStyle_QuestCosmetic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void SetStyle_LevelUp(); // Function CosmeticNotification.CosmeticNotification_C.SetStyle_LevelUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void Construct(); // Function CosmeticNotification.CosmeticNotification_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	void UpdateQuestRewardVisuals(struct UFortItemDefinition* RewardItem, enum class EFortRarity QuestRarity); // Function CosmeticNotification.CosmeticNotification_C.UpdateQuestRewardVisuals // (Event|Public|BlueprintEvent) // @ game+0xda071c
	void UpdateLevelUpVisuals(struct UFortItemDefinition* RewardItem); // Function CosmeticNotification.CosmeticNotification_C.UpdateLevelUpVisuals // (Event|Public|BlueprintEvent) // @ game+0xda071c
	void StartNotificationIntro(); // Function CosmeticNotification.CosmeticNotification_C.StartNotificationIntro // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void StartNotificationOutro(); // Function CosmeticNotification.CosmeticNotification_C.StartNotificationOutro // (Event|Public|BlueprintEvent) // @ game+0xda071c
	void OnIntroFinished(); // Function CosmeticNotification.CosmeticNotification_C.OnIntroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void OnOutroFinished(); // Function CosmeticNotification.CosmeticNotification_C.OnOutroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void PreConstruct(bool IsDesignTime); // Function CosmeticNotification.CosmeticNotification_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	void ExecuteUbergraph_CosmeticNotification(int32_t EntryPoint); // Function CosmeticNotification.CosmeticNotification_C.ExecuteUbergraph_CosmeticNotification // (Final|UbergraphFunction) // @ game+0xda071c
};

