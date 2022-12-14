// Class LevelSequence.LevelSequence
// Size: 0x1d0 (Inherited: 0x68)
struct ULevelSequence : UMovieSceneSequence {
	char pad_68[0x8]; // 0x68(0x08)
	struct UMovieScene* MovieScene; // 0x70(0x08)
	struct FLevelSequenceObjectReferenceMap ObjectReferences; // 0x78(0x50)
	struct FLevelSequenceBindingReferences BindingReferences; // 0xc8(0xa0)
	struct TMap<struct FString, struct FLevelSequenceObject> PossessedObjects; // 0x168(0x50)
	ClassPtrProperty DirectorClass; // 0x1b8(0x08)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x1c0(0x10)

	void RemoveMetaDataByClass(struct UObject* InClass); // Function LevelSequence.LevelSequence.RemoveMetaDataByClass // (Final|Native|Public|BlueprintCallable) // @ game+0x651d978
	struct UObject* FindOrAddMetaDataByClass(struct UObject* InClass); // Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass // (Final|Native|Public|BlueprintCallable) // @ game+0x73f6d88
	struct UObject* FindMetaDataByClass(struct UObject* InClass); // Function LevelSequence.LevelSequence.FindMetaDataByClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73f6d88
	struct UObject* CopyMetaData(struct UObject* InMetaData); // Function LevelSequence.LevelSequence.CopyMetaData // (Final|Native|Public|BlueprintCallable) // @ game+0x73f6d88
};

// Class LevelSequence.AnimSequenceLevelSequenceLink
// Size: 0x50 (Inherited: 0x28)
struct UAnimSequenceLevelSequenceLink : UAssetUserData {
	struct FGuid SkelTrackGuid; // 0x28(0x10)
	struct FSoftObjectPath PathToLevelSequence; // 0x38(0x18)
};

// Class LevelSequence.DefaultLevelSequenceInstanceData
// Size: 0xa0 (Inherited: 0x28)
struct UDefaultLevelSequenceInstanceData : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct AActor* TransformOriginActor; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
	struct FTransform TransformOrigin; // 0x40(0x60)
};

// Class LevelSequence.LevelSequenceMetaData
// Size: 0x28 (Inherited: 0x28)
struct ULevelSequenceMetaData : UInterface {
};

// Class LevelSequence.LevelSequenceBurnInInitSettings
// Size: 0x28 (Inherited: 0x28)
struct ULevelSequenceBurnInInitSettings : UObject {
};

// Class LevelSequence.LevelSequenceBurnInOptions
// Size: 0x50 (Inherited: 0x28)
struct ULevelSequenceBurnInOptions : UObject {
	bool bUseBurnIn; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FSoftClassPath BurnInClass; // 0x30(0x18)
	struct ULevelSequenceBurnInInitSettings* Settings; // 0x48(0x08)

	void SetBurnIn(struct FSoftClassPath InBurnInClass); // Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x924a950
};

// Class LevelSequence.LevelSequenceActor
// Size: 0x300 (Inherited: 0x288)
struct ALevelSequenceActor : AActor {
	char pad_288[0x10]; // 0x288(0x10)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x298(0x1c)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct ULevelSequencePlayer* SequencePlayer; // 0x2b8(0x08)
	struct ULevelSequence* LevelSequenceAsset; // 0x2c0(0x08)
	struct FLevelSequenceCameraSettings CameraSettings; // 0x2c8(0x02)
	char pad_2CA[0x6]; // 0x2ca(0x06)
	struct ULevelSequenceBurnInOptions* BurnInOptions; // 0x2d0(0x08)
	struct UMovieSceneBindingOverrides* BindingOverrides; // 0x2d8(0x08)
	char bAutoPlay : 1; // 0x2e0(0x01)
	char bOverrideInstanceData : 1; // 0x2e0(0x01)
	char bReplicatePlayback : 1; // 0x2e0(0x01)
	char pad_2E0_3 : 5; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct UObject* DefaultInstanceData; // 0x2e8(0x08)
	struct ULevelSequenceBurnIn* BurnInInstance; // 0x2f0(0x08)
	bool bShowBurnin; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)

	void ShowBurnin(); // Function LevelSequence.LevelSequenceActor.ShowBurnin // (Final|Native|Public|BlueprintCallable) // @ game+0x924ab10
	void SetSequence(struct ULevelSequence* InSequence); // Function LevelSequence.LevelSequenceActor.SetSequence // (Final|Native|Public|BlueprintCallable) // @ game+0x924aa90
	void SetReplicatePlayback(bool ReplicatePlayback); // Function LevelSequence.LevelSequenceActor.SetReplicatePlayback // (Final|Native|Public|BlueprintCallable) // @ game+0x924a9f4
	void SetBindingByTag(struct FName BindingTag, struct TArray<struct AActor*>& Actors, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.SetBindingByTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x924a824
	void SetBinding(struct FMovieSceneObjectBindingID Binding, struct TArray<struct AActor*>& Actors, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.SetBinding // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x924a6d0
	void ResetBindings(); // Function LevelSequence.LevelSequenceActor.ResetBindings // (Final|Native|Public|BlueprintCallable) // @ game+0x924a654
	void ResetBinding(struct FMovieSceneObjectBindingID Binding); // Function LevelSequence.LevelSequenceActor.ResetBinding // (Final|Native|Public|BlueprintCallable) // @ game+0x924a5a8
	void RemoveBindingByTag(struct FName tag, struct AActor* Actor); // Function LevelSequence.LevelSequenceActor.RemoveBindingByTag // (Final|Native|Public|BlueprintCallable) // @ game+0x924a4e4
	void RemoveBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor); // Function LevelSequence.LevelSequenceActor.RemoveBinding // (Final|Native|Public|BlueprintCallable) // @ game+0x924a3f8
	void OnLevelSequenceLoaded__DelegateSignature(); // DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature // (Public|Delegate) // @ game+0xda071c
	struct ULevelSequence* LoadSequence(); // Function LevelSequence.LevelSequenceActor.LoadSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x20b72d4
	void HideBurnin(); // Function LevelSequence.LevelSequenceActor.HideBurnin // (Final|Native|Public|BlueprintCallable) // @ game+0x924a39c
	struct ULevelSequencePlayer* GetSequencePlayer(); // Function LevelSequence.LevelSequenceActor.GetSequencePlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x924a34c
	struct ULevelSequence* GetSequence(); // Function LevelSequence.LevelSequenceActor.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x20b72d4
	struct TArray<struct FMovieSceneObjectBindingID> FindNamedBindings(struct FName tag); // Function LevelSequence.LevelSequenceActor.FindNamedBindings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9249dbc
	struct FMovieSceneObjectBindingID FindNamedBinding(struct FName tag); // Function LevelSequence.LevelSequenceActor.FindNamedBinding // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9249cec
	void AddBindingByTag(struct FName BindingTag, struct AActor* Actor, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.AddBindingByTag // (Final|Native|Public|BlueprintCallable) // @ game+0x92498e8
	void AddBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.AddBinding // (Final|Native|Public|BlueprintCallable) // @ game+0x92497c8
};

// Class LevelSequence.LevelSequenceAnimSequenceLink
// Size: 0x38 (Inherited: 0x28)
struct ULevelSequenceAnimSequenceLink : UAssetUserData {
	struct TArray<struct FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks; // 0x28(0x10)
};

// Class LevelSequence.LevelSequenceBurnIn
// Size: 0x368 (Inherited: 0x2b8)
struct ULevelSequenceBurnIn : UUserWidget {
	struct FLevelSequencePlayerSnapshot FrameInformation; // 0x2b8(0xa8)
	struct ALevelSequenceActor* LevelSequenceActor; // 0x360(0x08)

	void SetSettings(struct UObject* InSettings); // Function LevelSequence.LevelSequenceBurnIn.SetSettings // (Event|Public|BlueprintEvent) // @ game+0xda071c
	struct ULevelSequenceBurnInInitSettings* GetSettingsClass(); // Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x924a36c
};

// Class LevelSequence.LevelSequenceDirector
// Size: 0x38 (Inherited: 0x28)
struct ULevelSequenceDirector : UObject {
	struct ULevelSequencePlayer* Player; // 0x28(0x08)
	int32_t SubSequenceID; // 0x30(0x04)
	int32_t MovieScenePlayerIndex; // 0x34(0x04)

	void OnCreated(); // Function LevelSequence.LevelSequenceDirector.OnCreated // (Event|Public|BlueprintEvent) // @ game+0xda071c
	struct UMovieSceneSequence* GetSequence(); // Function LevelSequence.LevelSequenceDirector.GetSequence // (Final|Native|Public|BlueprintCallable) // @ game+0x924a2d4
	struct FQualifiedFrameTime GetMasterSequenceTime(); // Function LevelSequence.LevelSequenceDirector.GetMasterSequenceTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x924a2a4
	struct FQualifiedFrameTime GetCurrentTime(); // Function LevelSequence.LevelSequenceDirector.GetCurrentTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x924a274
	struct TArray<struct UObject*> GetBoundObjects(struct FMovieSceneObjectBindingID ObjectBinding); // Function LevelSequence.LevelSequenceDirector.GetBoundObjects // (Final|Native|Public|BlueprintCallable) // @ game+0x924a178
	struct UObject* GetBoundObject(struct FMovieSceneObjectBindingID ObjectBinding); // Function LevelSequence.LevelSequenceDirector.GetBoundObject // (Final|Native|Public|BlueprintCallable) // @ game+0x924a0bc
	struct TArray<struct AActor*> GetBoundActors(struct FMovieSceneObjectBindingID ObjectBinding); // Function LevelSequence.LevelSequenceDirector.GetBoundActors // (Final|Native|Public|BlueprintCallable) // @ game+0x9249fe8
	struct AActor* GetBoundActor(struct FMovieSceneObjectBindingID ObjectBinding); // Function LevelSequence.LevelSequenceDirector.GetBoundActor // (Final|Native|Public|BlueprintCallable) // @ game+0x9249f2c
};

// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// Size: 0xa8 (Inherited: 0xa8)
struct ULegacyLevelSequenceDirectorBlueprint : UBlueprint {
};

// Class LevelSequence.LevelSequencePlayer
// Size: 0x5d0 (Inherited: 0x4d8)
struct ULevelSequencePlayer : UMovieSceneSequencePlayer {
	struct FMulticastInlineDelegate OnCameraCut; // 0x4d8(0x10)
	char pad_4E8[0xe8]; // 0x4e8(0xe8)

	struct UCameraComponent* GetActiveCameraComponent(); // Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9249ec0
	struct ULevelSequencePlayer* CreateLevelSequencePlayer(struct UObject* WorldContextObject, struct ULevelSequence* LevelSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ALevelSequenceActor*& OutActor); // Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x92499e0
};

// Class LevelSequence.LevelSequenceProjectSettings
// Size: 0x60 (Inherited: 0x30)
struct ULevelSequenceProjectSettings : UDeveloperSettings {
	bool bDefaultLockEngineToDisplayRate; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString DefaultDisplayRate; // 0x38(0x10)
	struct FString DefaultTickResolution; // 0x48(0x10)
	enum class EUpdateClockSource DefaultClockSource; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// Class LevelSequence.LevelSequenceMediaController
// Size: 0x2b0 (Inherited: 0x288)
struct ALevelSequenceMediaController : AActor {
	char pad_288[0x8]; // 0x288(0x08)
	struct ALevelSequenceActor* Sequence; // 0x290(0x08)
	struct UMediaComponent* MediaComponent; // 0x298(0x08)
	float ServerStartTimeSeconds; // 0x2a0(0x04)
	char pad_2A4[0xc]; // 0x2a4(0x0c)

	void SynchronizeToServer(float DesyncThresholdSeconds); // Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer // (Final|Native|Public|BlueprintCallable) // @ game+0x924ab2c
	void Play(); // Function LevelSequence.LevelSequenceMediaController.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x924a3e4
	void OnRep_ServerStartTimeSeconds(); // Function LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds // (Final|Native|Private) // @ game+0x924a3b8
	struct ALevelSequenceActor* GetSequence(); // Function LevelSequence.LevelSequenceMediaController.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6472768
	struct UMediaComponent* GetMediaComponent(); // Function LevelSequence.LevelSequenceMediaController.GetMediaComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9196a3c
};

