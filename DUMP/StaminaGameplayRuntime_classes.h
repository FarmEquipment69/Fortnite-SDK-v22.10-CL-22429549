// Class StaminaGameplayRuntime.FortAsyncAction_ApplyEffect
// Size: 0x80 (Inherited: 0x38)
struct UFortAsyncAction_ApplyEffect : UAbilityAsync {
	struct FGameplayAbilityTargetDataHandle TargetData; // 0x38(0x28)
	struct FGameplayEffectSpecHandle CachedEffectSpecToApply; // 0x60(0x10)
	char pad_70[0x10]; // 0x70(0x10)

	struct UFortAsyncAction_ApplyEffect* ApplyGameplayEffectToTargetAsync(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle& Target, struct UGameplayEffect* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // Function StaminaGameplayRuntime.FortAsyncAction_ApplyEffect.ApplyGameplayEffectToTargetAsync // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x6abbbc8
	void AddTargetData(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle& Target); // Function StaminaGameplayRuntime.FortAsyncAction_ApplyEffect.AddTargetData // (Final|Native|Private|HasOutParms|BlueprintCallable) // @ game+0x6abbac0
};

// Class StaminaGameplayRuntime.FortCheatManager_StaminaGameplay
// Size: 0x30 (Inherited: 0x28)
struct UFortCheatManager_StaminaGameplay : UChildCheatManager {
	struct FName SpawnManagerTag; // 0x28(0x04)
	struct FName SpawnFunctionName; // 0x2c(0x04)

	void SpawnStaminaCapsule(); // Function StaminaGameplayRuntime.FortCheatManager_StaminaGameplay.SpawnStaminaCapsule // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x21ce454
};

// Class StaminaGameplayRuntime.StaminaAnalytics
// Size: 0xf0 (Inherited: 0xa0)
struct UStaminaAnalytics : UGameStateComponent {
	char pad_A0[0x50]; // 0xa0(0x50)

	void ReportStaminaEventAnalyticData(enum class EAthenaGamePhase CurrentPhase); // Function StaminaGameplayRuntime.StaminaAnalytics.ReportStaminaEventAnalyticData // (Final|Native|Public) // @ game+0x6abc17c
	void AddStaminaEventAnalytics(struct UObject* StaminaCapsule, struct FStaminaCapsuleAnalytics StaminaAnalyticEvent, struct AFortPlayerController* InteractingPlayer); // Function StaminaGameplayRuntime.StaminaAnalytics.AddStaminaEventAnalytics // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x6abb6fc
};

// Class StaminaGameplayRuntime.StaminaFunctionLibraryNative
// Size: 0x28 (Inherited: 0x28)
struct UStaminaFunctionLibraryNative : UBlueprintFunctionLibrary {

	void TraceForBeamEndpointNative(struct AFortPawn* TargetPawn, float BeamSpeed, float MaxRange, struct FName SocketName, float StartTime, struct FName TraceProfile, struct FVector& AimPoint, struct FVector& OutEndPoint, bool& OutImpact, bool& OutAtMaxRange, struct FVector& OutImpactNormal); // Function StaminaGameplayRuntime.StaminaFunctionLibraryNative.TraceForBeamEndpointNative // (Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x6abc1fc
	void LocalMontageJumpToNewSection(struct UFortGameplayAbility* OwningAbility, struct FName SectionName); // Function StaminaGameplayRuntime.StaminaFunctionLibraryNative.LocalMontageJumpToNewSection // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x6abc060
	void ComputeBeamTraceParams(struct AFortPawn* TargetPawn, struct FName SocketName, float MaxRange, struct FVector& OutTraceStart, struct FVector& OutTraceEnd); // Function StaminaGameplayRuntime.StaminaFunctionLibraryNative.ComputeBeamTraceParams // (Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x6abbed0
};

