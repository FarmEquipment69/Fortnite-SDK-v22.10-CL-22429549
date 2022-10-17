// Class VerseFortniteDynamicUI.VerseDHUDGhostWidgetBase
// Size: 0x320 (Inherited: 0x320)
struct UVerseDHUDGhostWidgetBase : UFortHUDElementWidget {

	void SetDesiredSize(struct FVector2D DesiredSize); // Function VerseFortniteDynamicUI.VerseDHUDGhostWidgetBase.SetDesiredSize // (Event|Public|HasDefaults|BlueprintEvent) // @ game+0xda071c
};

// Class VerseFortniteDynamicUI.VerseDHUDPanelBase
// Size: 0x460 (Inherited: 0x3f8)
struct UVerseDHUDPanelBase : UCommonActivatableWidget {
	char pad_3F8[0x68]; // 0x3f8(0x68)

	struct FString GetDataStoreValue(struct FName VarName); // Function VerseFortniteDynamicUI.VerseDHUDPanelBase.GetDataStoreValue // (Final|Native|Public|BlueprintCallable) // @ game+0x63a9a7c
	bool DoesDataStoreValueExist(struct FName VarName); // Function VerseFortniteDynamicUI.VerseDHUDPanelBase.DoesDataStoreValueExist // (Final|Native|Public|BlueprintCallable) // @ game+0x63a995c
	void CallServerWithMessage(struct FString MessageID, struct FString MessageData); // Function VerseFortniteDynamicUI.VerseDHUDPanelBase.CallServerWithMessage // (Final|Native|Public|BlueprintCallable) // @ game+0x63a947c
};

// Class VerseFortniteDynamicUI.VerseDHUDWidgetBase
// Size: 0x388 (Inherited: 0x320)
struct UVerseDHUDWidgetBase : UFortHUDElementWidget {
	char pad_320[0x68]; // 0x320(0x68)

	struct FString GetDataStoreValue(struct FName VarName); // Function VerseFortniteDynamicUI.VerseDHUDWidgetBase.GetDataStoreValue // (Final|Native|Public|BlueprintCallable) // @ game+0x63a9b24
	bool DoesDataStoreValueExist(struct FName VarName); // Function VerseFortniteDynamicUI.VerseDHUDWidgetBase.DoesDataStoreValueExist // (Final|Native|Public|BlueprintCallable) // @ game+0x63a99ec
	void CallServerWithMessage(struct FString MessageID, struct FString MessageData); // Function VerseFortniteDynamicUI.VerseDHUDWidgetBase.CallServerWithMessage // (Final|Native|Public|BlueprintCallable) // @ game+0x63a96ec
};

// Class VerseFortniteDynamicUI.VerseDHUDWidgetDatastoreInterface
// Size: 0x28 (Inherited: 0x28)
struct UVerseDHUDWidgetDatastoreInterface : UInterface {

	void SyncDataValues(); // Function VerseFortniteDynamicUI.VerseDHUDWidgetDatastoreInterface.SyncDataValues // (Event|Public|BlueprintEvent) // @ game+0xda071c
	void ReceiveDataStoreValue(struct FName VarName, struct FString Value); // Function VerseFortniteDynamicUI.VerseDHUDWidgetDatastoreInterface.ReceiveDataStoreValue // (Event|Public|BlueprintEvent) // @ game+0xda071c
};

// Class VerseFortniteDynamicUI.VerseFortniteDynamicHUDScene
// Size: 0x80 (Inherited: 0x68)
struct UVerseFortniteDynamicHUDScene : UDynamicUIScene {
	struct FString VerseSceneName; // 0x68(0x10)
	char pad_78[0x8]; // 0x78(0x08)
};

// Class VerseFortniteDynamicUI.VerseFortniteDynamicUIDirector
// Size: 0x3e0 (Inherited: 0x2a8)
struct AVerseFortniteDynamicUIDirector : ADynamicUIDirectorBase {
	struct UVerseFortniteDynamicUISceneCatalog* SceneCatalog; // 0x2a8(0x08)
	struct UVerseFortniteDynamicUIWidgetCatalog* WidgetCatalog; // 0x2b0(0x08)
	struct TSoftClassPtr<UObject> GhostWidgetClass; // 0x2b8(0x28)
	struct TMap<struct FName, struct FString> LocalVarValueMap; // 0x2e0(0x50)
	char pad_330[0x60]; // 0x330(0x60)
	struct TArray<struct TScriptInterface<IVerseDHUDWidgetDatastoreInterface>> WidgetInterfaceRegister; // 0x390(0x10)
	struct TArray<struct FGhostWidgetBaseCreationData> GhostWidgets; // 0x3a0(0x10)
	char pad_3B0[0x30]; // 0x3b0(0x30)

	void LoadWidgetCatalog(struct FString InWidgetCatalogName); // Function VerseFortniteDynamicUI.VerseFortniteDynamicUIDirector.LoadWidgetCatalog // (Event|Public|BlueprintEvent) // @ game+0xda071c
	void LoadSceneCatalog(struct FString InSceneCatalogName); // Function VerseFortniteDynamicUI.VerseFortniteDynamicUIDirector.LoadSceneCatalog // (Event|Public|BlueprintEvent) // @ game+0xda071c
	void HandleWidgetDestroyedRemoveGhost(struct FString WidgetID, struct UUserWidget* WidgetPtr); // Function VerseFortniteDynamicUI.VerseFortniteDynamicUIDirector.HandleWidgetDestroyedRemoveGhost // (Final|Native|Public) // @ game+0x63a9d78
	void HandleWidgetCreatedAddGhost(struct FString WidgetID, struct UUserWidget* WidgetPtr); // Function VerseFortniteDynamicUI.VerseFortniteDynamicUIDirector.HandleWidgetCreatedAddGhost // (Final|Native|Public) // @ game+0x63a9bcc
};

// Class VerseFortniteDynamicUI.VerseFortniteDynamicUISceneCatalog
// Size: 0xd0 (Inherited: 0x30)
struct UVerseFortniteDynamicUISceneCatalog : UDataAsset {
	struct TMap<struct FString, struct FSceneCatalogEntryClass> OriginalMapOfEntries; // 0x30(0x50)
	struct TMap<struct FString, struct FSceneCatalogEntryClass> CurrentMapOfEntries; // 0x80(0x50)

	void AppendToBaseCatalog(struct UVerseFortniteDynamicUISceneCatalog* NewCatalog); // Function VerseFortniteDynamicUI.VerseFortniteDynamicUISceneCatalog.AppendToBaseCatalog // (Final|Native|Public|BlueprintCallable) // @ game+0x63a937c
};

// Class VerseFortniteDynamicUI.VerseFortniteDynamicUIWidgetCatalog
// Size: 0xd0 (Inherited: 0x30)
struct UVerseFortniteDynamicUIWidgetCatalog : UDataAsset {
	struct TMap<struct FString, struct FWidgetCatalogEntryClass> OriginalMapOfEntries; // 0x30(0x50)
	struct TMap<struct FString, struct FWidgetCatalogEntryClass> CurrentMapOfEntries; // 0x80(0x50)

	void AppendToBaseWidgetCatalog(struct UVerseFortniteDynamicUIWidgetCatalog* NewWidgetCatalog); // Function VerseFortniteDynamicUI.VerseFortniteDynamicUIWidgetCatalog.AppendToBaseWidgetCatalog // (Final|Native|Public|BlueprintCallable) // @ game+0x63a93fc
};

