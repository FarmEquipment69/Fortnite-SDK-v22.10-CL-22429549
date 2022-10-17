// Class MusicBlocks.MusicSequencerHitComponent
// Size: 0x1e0 (Inherited: 0xa0)
struct UMusicSequencerHitComponent : UActorComponent {
	struct FMusicSequencerHitArray MusicSequencerEventList; // 0xa0(0x120)
	struct TArray<struct USoundBase*> LoadedSoundsList; // 0x1c0(0x10)
	struct TArray<struct AActor*> SoundPreloadClassList; // 0x1d0(0x10)

	bool ReplicateMusicSequencerHit(struct UObject* WorldContextObject, struct TScriptInterface<IFortMusicSequencerInterface> HitInterface, struct AController* Instigator); // Function MusicBlocks.MusicSequencerHitComponent.ReplicateMusicSequencerHit // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x67dc980
	bool RegisterMusicSequencerActor(struct UObject* WorldContextObject, struct TScriptInterface<IFortMusicSequencerInterface> Actor); // Function MusicBlocks.MusicSequencerHitComponent.RegisterMusicSequencerActor // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x67dc8b4
	bool ProcessSequenceHitEvent(struct FMusicSequencerHitEntry& event); // Function MusicBlocks.MusicSequencerHitComponent.ProcessSequenceHitEvent // (Final|Native|Protected|HasOutParms) // @ game+0x67dc7c8
	void OnSequenceHitEventExpired(struct FMusicSequencerHitHandle ExpiredHandle); // Function MusicBlocks.MusicSequencerHitComponent.OnSequenceHitEventExpired // (Final|Native|Protected) // @ game+0x67dc748
	bool AddSequenceHitEvent(struct TScriptInterface<IFortMusicSequencerInterface> HitInterface, struct AController* Instigator); // Function MusicBlocks.MusicSequencerHitComponent.AddSequenceHitEvent // (Final|Native|Protected) // @ game+0x67dc5e4
	bool AddMusicSequencerActor(struct TScriptInterface<IFortMusicSequencerInterface> HitInterface); // Function MusicBlocks.MusicSequencerHitComponent.AddMusicSequencerActor // (Final|Native|Protected) // @ game+0x67dc548
};

// Class MusicBlocks.MusicSequencerHitActor
// Size: 0x290 (Inherited: 0x288)
struct AMusicSequencerHitActor : AActor {
	struct UMusicSequencerHitComponent* MusicSequencerHitComponent; // 0x288(0x08)

	struct UMusicSequencerHitComponent* GetMusicSequencerHitComponent(); // Function MusicBlocks.MusicSequencerHitActor.GetMusicSequencerHitComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x67dc730
};

// Class MusicBlocks.MusicSequencerHitAdderComponent
// Size: 0xb0 (Inherited: 0xa0)
struct UMusicSequencerHitAdderComponent : UPlayspaceComponent {
	struct AMusicSequencerHitActor* MusicSequencerHitActorClass; // 0xa0(0x08)
	struct TWeakObjectPtr<struct AMusicSequencerHitActor> MusicSequencerHitActor; // 0xa8(0x08)

	struct AMusicSequencerHitActor* GetMusicSequencerHitActor(); // Function MusicBlocks.MusicSequencerHitAdderComponent.GetMusicSequencerHitActor // (Final|Native|Public|Const) // @ game+0x67dc6c4
};

