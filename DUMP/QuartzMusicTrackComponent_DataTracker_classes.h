// BlueprintGeneratedClass QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C
// Size: 0x210 (Inherited: 0x17c)
struct UQuartzMusicTrackComponent_DataTracker_C : UQuartzMusicTrackComponent_C {
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	struct UFortGameplayDataTrackerComponent* DataTrackerClass; // 0x188(0x08)
	struct UFortGameplayDataTrackerComponentManager* DataTrackerManager; // 0x190(0x08)
	bool bDataTrackerAssigned; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct UFortGameplayDataTrackerComponent* DataTrackerComponent; // 0x1a0(0x08)
	bool bAwaitingCooldownBeforeShutoff; // 0x1a8(0x01)
	char pad_1A9[0x7]; // 0x1a9(0x07)
	double UpdateFrequency; // 0x1b0(0x08)
	struct TArray<struct FDataTrackerParameterData> DataTrackerParameters; // 0x1b8(0x10)
	bool bHasFiredOffDataTrackerParameterWarning; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
	struct USoundMix* DataTrackerSoundMix; // 0x1d0(0x08)
	bool bSoundMixActive; // 0x1d8(0x01)
	char pad_1D9[0x7]; // 0x1d9(0x07)
	struct FTimerHandle TimerHandle; // 0x1e0(0x08)
	struct FTimerHandle StopTimer; // 0x1e8(0x08)
	struct TArray<struct AActor*> GetActorClass; // 0x1f0(0x10)
	struct TArray<struct AFortPawn*> PawnActorList; // 0x200(0x10)

	void Get Pawn Actor List(struct TArray<struct AFortPawn*>& PawnActors); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.Get Pawn Actor List // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda071c
	void DataTrackerAddPawns_Internal(); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.DataTrackerAddPawns_Internal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void GetDataTrackerParameterValueTotal(double& Value); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.GetDataTrackerParameterValueTotal // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda071c
	void GetDataTrackerParameterValue(int32_t Index, double& Value); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.GetDataTrackerParameterValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda071c
	void GetDataTrackerComponent(struct UFortGameplayDataTrackerComponent*& DataTracker); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.GetDataTrackerComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda071c
	void OnDataTrackerStop(); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.OnDataTrackerStop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void OnDataTrackerUpdate(); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.OnDataTrackerUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void OnDataTrackerStart(); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.OnDataTrackerStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void DataTrackerStop_Internal(); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.DataTrackerStop_Internal // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void DataTrackerUpdate_Internal(); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.DataTrackerUpdate_Internal // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void DataTrackerStart_Internal(); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.DataTrackerStart_Internal // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void OnDataTrackerComponentUnRegistered(struct UFortGameplayDataTrackerComponent* UnRegisteredDataTracker); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.OnDataTrackerComponentUnRegistered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void OnDataTrackerComponentRegistered(struct UFortGameplayDataTrackerComponent* RegisteredDataTracker); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.OnDataTrackerComponentRegistered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void On Changed Has Any Event Value(struct UFortGameplayDataTrackerComponent* DataTrackerComponent, bool bHasEventValues); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.On Changed Has Any Event Value // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void OnReady_EAA166EB4AA20B4778C921B5F15F1C62(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.OnReady_EAA166EB4AA20B4778C921B5F15F1C62 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void ReceiveBeginPlay(); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xda071c
	void Retry Get Data Tracker Manager(); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.Retry Get Data Tracker Manager // (BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void ExecuteUbergraph_QuartzMusicTrackComponent_DataTracker(int32_t EntryPoint); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.ExecuteUbergraph_QuartzMusicTrackComponent_DataTracker // (Final|UbergraphFunction|HasDefaults) // @ game+0xda071c
};

