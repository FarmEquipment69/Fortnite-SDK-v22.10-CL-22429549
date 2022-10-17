// Class DaySequence.DaySequence
// Size: 0x130 (Inherited: 0x68)
struct UDaySequence : UMovieSceneSequence {
	char pad_68[0x8]; // 0x68(0x08)
	struct UMovieScene* MovieScene; // 0x70(0x08)
	struct FDaySequenceBindingReferences BindingReferences; // 0x78(0xa0)
	ClassPtrProperty DirectorClass; // 0x118(0x08)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x120(0x10)
};

// Class DaySequence.DaySequenceActor
// Size: 0x308 (Inherited: 0x288)
struct ADaySequenceActor : AActor {
	char pad_288[0x10]; // 0x288(0x10)
	struct UDaySequencePlayer* SequencePlayer; // 0x298(0x08)
	struct TArray<struct UDaySequence*> DaySequenceAssets; // 0x2a0(0x10)
	struct UMovieSceneBindingOverrides* BindingOverrides; // 0x2b0(0x08)
	char bReplicatePlayback : 1; // 0x2b8(0x01)
	char pad_2B8_1 : 7; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct UDaySequence* MasterSequence; // 0x2c0(0x08)
	bool bRunDayCycle; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	struct FTimecode DayLength; // 0x2cc(0x14)
	struct FTimecode TimePerCycle; // 0x2e0(0x14)
	struct FTimecode InitialTimeOfDay; // 0x2f4(0x14)

	void SetTimeOfDay(float InHours); // Function DaySequence.DaySequenceActor.SetTimeOfDay // (Final|Native|Public|BlueprintCallable) // @ game+0x4ce7200
	void SetReplicatePlayback(bool ReplicatePlayback); // Function DaySequence.DaySequenceActor.SetReplicatePlayback // (Final|Native|Public|BlueprintCallable) // @ game+0x4ce7140
	void SetDaySequence(int32_t Index, struct UDaySequence* InSequence); // Function DaySequence.DaySequenceActor.SetDaySequence // (Final|Native|Public|BlueprintCallable) // @ game+0x4ce7020
	void RemoveDaySequence(int32_t Index); // Function DaySequence.DaySequenceActor.RemoveDaySequence // (Final|Native|Public|BlueprintCallable) // @ game+0x4ce6f20
	void Play(); // Function DaySequence.DaySequenceActor.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x4ce6eb0
	void Pause(); // Function DaySequence.DaySequenceActor.Pause // (Final|Native|Public|BlueprintCallable) // @ game+0x4ce6e40
	int32_t NumDaySequences(); // Function DaySequence.DaySequenceActor.NumDaySequences // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ce6e20
	float GetTimePerCycle(); // Function DaySequence.DaySequenceActor.GetTimePerCycle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ce6df0
	float GetTimeOfDay(); // Function DaySequence.DaySequenceActor.GetTimeOfDay // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ce6dc0
	struct UDaySequencePlayer* GetSequencePlayer(); // Function DaySequence.DaySequenceActor.GetSequencePlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ce6d90
	float GetInitialTimeOfDay(); // Function DaySequence.DaySequenceActor.GetInitialTimeOfDay // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ce6ca0
	struct UDaySequence* GetFirstDaySequence(); // Function DaySequence.DaySequenceActor.GetFirstDaySequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ce6c70
	struct UDaySequence* GetDaySequence(int32_t Index); // Function DaySequence.DaySequenceActor.GetDaySequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ce6b70
	float GetDayLength(); // Function DaySequence.DaySequenceActor.GetDayLength // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ce6b40
	int32_t AddDaySequence(struct UDaySequence* InSequence); // Function DaySequence.DaySequenceActor.AddDaySequence // (Final|Native|Public|BlueprintCallable) // @ game+0x4ce6380
};

// Class DaySequence.DaySequenceDirector
// Size: 0x38 (Inherited: 0x28)
struct UDaySequenceDirector : UObject {
	struct UDaySequencePlayer* Player; // 0x28(0x08)
	int32_t SubSequenceID; // 0x30(0x04)
	int32_t MovieScenePlayerIndex; // 0x34(0x04)

	void OnCreated(); // Function DaySequence.DaySequenceDirector.OnCreated // (Event|Public|BlueprintEvent) // @ game+0xda071c
	struct UMovieSceneSequence* GetSequence(); // Function DaySequence.DaySequenceDirector.GetSequence // (Final|Native|Public|BlueprintCallable) // @ game+0x4ce6d10
	struct FQualifiedFrameTime GetMasterSequenceTime(); // Function DaySequence.DaySequenceDirector.GetMasterSequenceTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ce6cd0
	struct FQualifiedFrameTime GetCurrentTime(); // Function DaySequence.DaySequenceDirector.GetCurrentTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ce6b00
	struct TArray<struct UObject*> GetBoundObjects(struct FMovieSceneObjectBindingID ObjectBinding); // Function DaySequence.DaySequenceDirector.GetBoundObjects // (Final|Native|Public|BlueprintCallable) // @ game+0x4ce6a00
	struct UObject* GetBoundObject(struct FMovieSceneObjectBindingID ObjectBinding); // Function DaySequence.DaySequenceDirector.GetBoundObject // (Final|Native|Public|BlueprintCallable) // @ game+0x4ce6920
	struct TArray<struct AActor*> GetBoundActors(struct FMovieSceneObjectBindingID ObjectBinding); // Function DaySequence.DaySequenceDirector.GetBoundActors // (Final|Native|Public|BlueprintCallable) // @ game+0x4ce6820
	struct AActor* GetBoundActor(struct FMovieSceneObjectBindingID ObjectBinding); // Function DaySequence.DaySequenceDirector.GetBoundActor // (Final|Native|Public|BlueprintCallable) // @ game+0x4ce6740
};

// Class DaySequence.DaySequencePlayer
// Size: 0x4f0 (Inherited: 0x4d8)
struct UDaySequencePlayer : UMovieSceneSequencePlayer {
	char pad_4D8[0x18]; // 0x4d8(0x18)

	struct UDaySequencePlayer* CreateDaySequencePlayer(struct UObject* WorldContextObject, struct UDaySequence* InDaySequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ADaySequenceActor*& OutActor); // Function DaySequence.DaySequencePlayer.CreateDaySequencePlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4ce6430
};

// Class DaySequence.DaySequenceProjectSettings
// Size: 0x60 (Inherited: 0x30)
struct UDaySequenceProjectSettings : UDeveloperSettings {
	bool bDefaultLockEngineToDisplayRate; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString DefaultDisplayRate; // 0x38(0x10)
	struct FString DefaultTickResolution; // 0x48(0x10)
	enum class EUpdateClockSource DefaultClockSource; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// Class DaySequence.DaySequenceProvider
// Size: 0x298 (Inherited: 0x288)
struct ADaySequenceProvider : AActor {
	struct TArray<struct UDaySequence*> DaySequenceAssets; // 0x288(0x10)
};

// Class DaySequence.DaySequenceSubsystem
// Size: 0x30 (Inherited: 0x30)
struct UDaySequenceSubsystem : UWorldSubsystem {

	struct ADaySequenceActor* GetDaySequenceActor(); // Function DaySequence.DaySequenceSubsystem.GetDaySequenceActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ce6c40
};

// Class DaySequence.DaySequenceTrack
// Size: 0xa8 (Inherited: 0xa8)
struct UDaySequenceTrack : UMovieSceneSubTrack {
};

// Class DaySequence.EnvironmentLightingActor
// Size: 0x2c8 (Inherited: 0x298)
struct AEnvironmentLightingActor : ADaySequenceProvider {
	struct USkyAtmosphereComponent* SkyAtmosphereComponent; // 0x298(0x08)
	struct USkyLightComponent* SkyLightComponent; // 0x2a0(0x08)
	struct USceneComponent* SunRootComponent; // 0x2a8(0x08)
	struct UDirectionalLightComponent* SunComponent; // 0x2b0(0x08)
	struct UExponentialHeightFogComponent* ExponentialHeightFogComponent; // 0x2b8(0x08)
	struct UVolumetricCloudComponent* VolumetricCloudComponent; // 0x2c0(0x08)
};

