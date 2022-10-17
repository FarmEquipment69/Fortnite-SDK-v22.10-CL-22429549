// Class VerseFortnite.BuildingActorEntityInteropComponent
// Size: 0x68 (Inherited: 0x60)
struct UBuildingActorEntityInteropComponent : UEntityComponent {
	char pad_60[0x8]; // 0x60(0x08)
};

// Class VerseFortnite.FortAthenaMutator_BuildingSettings
// Size: 0x348 (Inherited: 0x330)
struct AFortAthenaMutator_BuildingSettings : AFortAthenaMutator {
	char pad_330[0x18]; // 0x330(0x18)
};

// Class VerseFortnite.FortBuildingSettingsComponentBase
// Size: 0x90 (Inherited: 0x80)
struct UFortBuildingSettingsComponentBase : UEntityEnableableComponent {
	struct AFortAthenaMutator_BuildingSettings* Mutator; // 0x80(0x08)
	enum class EPlayerSettingStateInternal Building; // 0x88(0x01)
	enum class EPlayerSettingStateInternal BuildingOnWater; // 0x89(0x01)
	enum class EPlayerSettingStateInternal Editing; // 0x8a(0x01)
	enum class EPlayerSettingStateInternal EditingHostile; // 0x8b(0x01)
	enum class EPlayerSettingStateInternal TrapPlacement; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)

	void OnRep_Settings(); // Function VerseFortnite.FortBuildingSettingsComponentBase.OnRep_Settings // (Final|Native|Private) // @ game+0x63a09f4
};

// Class VerseFortnite.FortControllerStateHandlerComponent
// Size: 0xa0 (Inherited: 0xa0)
struct UFortControllerStateHandlerComponent : UControllerComponent {

	void NotifyOfStateChange(struct FString& State, bool Active); // Function VerseFortnite.FortControllerStateHandlerComponent.NotifyOfStateChange // (Final|Native|Public|HasOutParms) // @ game+0x63a06a0
};

// Class VerseFortnite.FortPlayspaceComponentHelper
// Size: 0x30 (Inherited: 0x28)
struct UFortPlayspaceComponentHelper : UObject {
	char pad_28[0x8]; // 0x28(0x08)

	void HandlePlayerPawnPossessed(struct APawn* Pawn); // Function VerseFortnite.FortPlayspaceComponentHelper.HandlePlayerPawnPossessed // (Final|Native|Public) // @ game+0x63a0620
	void HandlePlayerDied(struct AFortPlayerPawnAthena* FortPlayerPawnAthena); // Function VerseFortnite.FortPlayspaceComponentHelper.HandlePlayerDied // (Final|Native|Public) // @ game+0x63a05a0
};

// Class VerseFortnite.HUDComponentBase
// Size: 0x108 (Inherited: 0x80)
struct UHUDComponentBase : UEntityEnableableComponent {
	struct TSoftClassPtr<UObject> WidgetClass; // 0x80(0x28)
	struct TMap<struct FUniqueNetIdRepl, struct UUserWidget*> SpawnedWidgets; // 0xa8(0x50)
	struct TArray<struct FUniqueNetIdRepl> RestrictedToPlayerList; // 0xf8(0x10)

	void OnRep_WidgetClass(); // Function VerseFortnite.HUDComponentBase.OnRep_WidgetClass // (Final|Native|Private) // @ game+0x63a0a74
};

// Class VerseFortnite.HUDCountDownComponentBase
// Size: 0x128 (Inherited: 0x108)
struct UHUDCountDownComponentBase : UHUDComponentBase {
	char pad_108[0x18]; // 0x108(0x18)
	int8_t CurrentRound; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	float ServerCountDownEndTime; // 0x124(0x04)

	void OnRep_CountDownEndTime(); // Function VerseFortnite.HUDCountDownComponentBase.OnRep_CountDownEndTime // (Final|Native|Private) // @ game+0x63a0898
};

// Class VerseFortnite.HUDDynamicDirectorBase
// Size: 0x1d8 (Inherited: 0xe8)
struct UHUDDynamicDirectorBase : UEntityActorPlayerComponent {
	bool bBindDataStore; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct TArray<struct FString> ServerActiveSceneNames; // 0xf0(0x10)
	char pad_100[0x10]; // 0x100(0x10)
	struct FString LoadSceneCatalog; // 0x110(0x10)
	struct FString LoadWidgetCatalog; // 0x120(0x10)
	char pad_130[0x8]; // 0x130(0x08)
	struct TMap<struct FName, struct FDynamicHUDPulseEvent> ClientMessageEventCache; // 0x138(0x50)
	struct TMap<struct FName, struct FString> ClientMessageDataCache; // 0x188(0x50)

	void ServerWidgetMessage(struct FString MessageID, struct FString MessageData); // Function VerseFortnite.HUDDynamicDirectorBase.ServerWidgetMessage // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x63a0a9c
	void OnRep_LoadWidgetCatalog(); // Function VerseFortnite.HUDDynamicDirectorBase.OnRep_LoadWidgetCatalog // (Final|Native|Private) // @ game+0x63a0938
	void OnRep_LoadSceneCatalog(); // Function VerseFortnite.HUDDynamicDirectorBase.OnRep_LoadSceneCatalog // (Final|Native|Private) // @ game+0x63a08fc
	void OnRep_BindDataStore(); // Function VerseFortnite.HUDDynamicDirectorBase.OnRep_BindDataStore // (Final|Native|Private) // @ game+0x63a0864
	void OnRep_ActiveSceneNames(); // Function VerseFortnite.HUDDynamicDirectorBase.OnRep_ActiveSceneNames // (Final|Native|Private) // @ game+0x63a0850
	void ClientSetSceneWidgetPosition(struct FString SceneName, struct FString WidgetUniqueID, int32_t X, int32_t Y); // Function VerseFortnite.HUDDynamicDirectorBase.ClientSetSceneWidgetPosition // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x63a00c0
	void ClientSetSceneWidgetClassAndUniqueID(struct FString SceneName, struct FString WidgetUniqueID, struct FString WidgetClassName); // Function VerseFortnite.HUDDynamicDirectorBase.ClientSetSceneWidgetClassAndUniqueID // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x639fd4c
	void ClientSetSceneWidgetAttachment(struct FString SceneName, struct FString WidgetUniqueID, int32_t WidgetAnchor, struct FString TargetUniqueID, struct FString TargetClassName, int32_t TargetAnchor); // Function VerseFortnite.HUDDynamicDirectorBase.ClientSetSceneWidgetAttachment // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x639f848
	void ClientSetSceneWidgetAlignment(struct FString SceneName, struct FString WidgetUniqueID, int32_t HorizontalAlignment, int32_t VerticalAlignment, int32_t Anchor); // Function VerseFortnite.HUDDynamicDirectorBase.ClientSetSceneWidgetAlignment // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x639f530
	void ClientSetHUDCameraMode(bool bCameraMode); // Function VerseFortnite.HUDDynamicDirectorBase.ClientSetHUDCameraMode // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x639f4ac
	void ClientCreateScene(struct FString SceneName); // Function VerseFortnite.HUDDynamicDirectorBase.ClientCreateScene // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x639f354
};

// Class VerseFortnite.HUDGameOverComponentBase
// Size: 0x128 (Inherited: 0x108)
struct UHUDGameOverComponentBase : UHUDComponentBase {
	int32_t WinningTeam; // 0x108(0x04)
	bool IsDraw; // 0x10c(0x01)
	char pad_10D[0x1b]; // 0x10d(0x1b)

	void OnRep_WinningTeam(); // Function VerseFortnite.HUDGameOverComponentBase.OnRep_WinningTeam // (Final|Native|Private) // @ game+0x63a08dc
	void OnRep_IsDraw(); // Function VerseFortnite.HUDGameOverComponentBase.OnRep_IsDraw // (Final|Native|Private) // @ game+0x63a08dc
	int32_t GetWinningTeam(); // Function VerseFortnite.HUDGameOverComponentBase.GetWinningTeam // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x5cb8d10
	bool GetIsDraw(); // Function VerseFortnite.HUDGameOverComponentBase.GetIsDraw // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x63a0500
};

// Class VerseFortnite.HUDMapComponentBase
// Size: 0x158 (Inherited: 0x108)
struct UHUDMapComponentBase : UHUDComponentBase {
	char pad_108[0x18]; // 0x108(0x18)
	struct FBox MapBounds; // 0x120(0x38)

	void OnRep_MapBounds(); // Function VerseFortnite.HUDMapComponentBase.OnRep_MapBounds // (Final|Native|Private) // @ game+0x63a0974
	void HandleMapBoundsChanged(struct FBox& newBounds); // Function VerseFortnite.HUDMapComponentBase.HandleMapBoundsChanged // (Final|Native|Private|HasOutParms|HasDefaults) // @ game+0x63a0518
};

// Class VerseFortnite.HUDMessageComponentBase
// Size: 0x130 (Inherited: 0x108)
struct UHUDMessageComponentBase : UHUDComponentBase {
	char pad_108[0x18]; // 0x108(0x18)
	struct FString message; // 0x120(0x10)

	void OnRep_Message(); // Function VerseFortnite.HUDMessageComponentBase.OnRep_Message // (Final|Native|Private) // @ game+0x63a0994
	void Client_DirectorTestScene(struct FString SceneName); // Function VerseFortnite.HUDMessageComponentBase.Client_DirectorTestScene // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x63a03a8
};

// Class VerseFortnite.HUDScoreboardComponentBase
// Size: 0x1a0 (Inherited: 0x108)
struct UHUDScoreboardComponentBase : UHUDComponentBase {
	struct TArray<struct FPlayerScore> PlayerScores; // 0x108(0x10)
	uint32_t CurrentRound; // 0x118(0x04)
	uint32_t NumberOfRounds; // 0x11c(0x04)
	struct TMap<struct FUniqueNetIdRepl, struct UHUDScoreboardEntryData*> ClientScoreData; // 0x120(0x50)
	char pad_170[0x30]; // 0x170(0x30)

	void OnRep_ScoresUpdated(); // Function VerseFortnite.HUDScoreboardComponentBase.OnRep_ScoresUpdated // (Final|Native|Public) // @ game+0x63a09e0
	void OnRep_RoundInfo(); // Function VerseFortnite.HUDScoreboardComponentBase.OnRep_RoundInfo // (Final|Native|Public) // @ game+0x63a09b4
};

// Class VerseFortnite.HUDScoreboardEntryData
// Size: 0x48 (Inherited: 0x28)
struct UHUDScoreboardEntryData : UObject {
	struct FMulticastInlineDelegate OnScoreboardDataChanged; // 0x28(0x10)
	struct TArray<struct FString> RowData; // 0x38(0x10)
};

// Class VerseFortnite.TaggedObjectQueryWorldSubsystem
// Size: 0x80 (Inherited: 0x30)
struct UTaggedObjectQueryWorldSubsystem : UTaggedObjectQueryWorldSubsystemBase {
	char pad_30[0x50]; // 0x30(0x50)
};

// Class VerseFortnite.VerseFortniteAbilityBase
// Size: 0xb30 (Inherited: 0xb20)
struct UVerseFortniteAbilityBase : UFortGameplayAbility {
	struct TArray<struct UVerseFortniteAbilityMutator*> Mutators; // 0xb20(0x10)
};

// Class VerseFortnite.VerseFortniteAbilityComponentBase
// Size: 0x98 (Inherited: 0x90)
struct UVerseFortniteAbilityComponentBase : UEntityActorComponent {
	char pad_90[0x8]; // 0x90(0x08)
};

// Class VerseFortnite.VerseFortniteAbilityMutator
// Size: 0x28 (Inherited: 0x28)
struct UVerseFortniteAbilityMutator : UObject {
};

// Class VerseFortnite.VerseFortniteAbilityMutator_Action
// Size: 0x40 (Inherited: 0x28)
struct UVerseFortniteAbilityMutator_Action : UVerseFortniteAbilityMutator {
	char pad_28[0x18]; // 0x28(0x18)
};

// Class VerseFortnite.VerseFortniteAbilityMutator_DefaultTargeting
// Size: 0x28 (Inherited: 0x28)
struct UVerseFortniteAbilityMutator_DefaultTargeting : UVerseFortniteAbilityMutator {
};

// Class VerseFortnite.VerseFortniteAbilityMutator_Effect
// Size: 0x38 (Inherited: 0x28)
struct UVerseFortniteAbilityMutator_Effect : UVerseFortniteAbilityMutator {
	struct UGameplayEffect* EffectToApply; // 0x28(0x08)
	char pad_30[0x8]; // 0x30(0x08)
};

// Class VerseFortnite.VerseFortniteAbilityMutator_Montage
// Size: 0x30 (Inherited: 0x28)
struct UVerseFortniteAbilityMutator_Montage : UVerseFortniteAbilityMutator {
	struct UAnimMontage* MontageToPlay; // 0x28(0x08)
};

// Class VerseFortnite.VerseFortniteEntitySubsystem
// Size: 0x40 (Inherited: 0x30)
struct UVerseFortniteEntitySubsystem : UWorldSubsystem {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class VerseFortnite.VerseFortniteMovementComponentBase
// Size: 0x90 (Inherited: 0x90)
struct UVerseFortniteMovementComponentBase : UEntityActorComponent {
};

