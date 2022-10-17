// Class ThrowingToyRuntime.ThrowingToyTrackerComponent
// Size: 0x1c0 (Inherited: 0xa0)
struct UThrowingToyTrackerComponent : UActorComponent {
	struct FThrowingToyDataArray ThrowingToysData; // 0xa0(0x118)
	char pad_1B8[0x8]; // 0x1b8(0x08)

	void SetRecentThrowingToyItemRemovedReason(enum class EThrowingToyItemRemovedReason RemovedReason); // Function ThrowingToyRuntime.ThrowingToyTrackerComponent.SetRecentThrowingToyItemRemovedReason // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x67d6960
	struct AActor* GetThrowingToy(struct FGuid& WorldItemGuid); // Function ThrowingToyRuntime.ThrowingToyTrackerComponent.GetThrowingToy // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x67d6858
	enum class EThrowingToyItemRemovedReason GetRecentThrowingToyItemRemovedReason(); // Function ThrowingToyRuntime.ThrowingToyTrackerComponent.GetRecentThrowingToyItemRemovedReason // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x67d6840
	struct AActor* GetAndReleaseThrowingToy(struct FGuid& WorldItemGuid); // Function ThrowingToyRuntime.ThrowingToyTrackerComponent.GetAndReleaseThrowingToy // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x67d67a4
	void AddThrowingToy(struct AActor* ThrowingToyActor, struct FGuid& WorldItemGuid); // Function ThrowingToyRuntime.ThrowingToyTrackerComponent.AddThrowingToy // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x67d65f8
};

