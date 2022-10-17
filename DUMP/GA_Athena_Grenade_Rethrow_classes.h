// BlueprintGeneratedClass GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C
// Size: 0xf5c (Inherited: 0xf39)
struct UGA_Athena_Grenade_Rethrow_C : UGA_Athena_Grenade_WithTrajectory_Deprecated_C {
	char pad_F39[0x7]; // 0xf39(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf40(0x08)
	struct AFortProjectileBase* Projectile; // 0xf48(0x08)
	double TossDelay; // 0xf50(0x08)
	struct FName HolsterId; // 0xf58(0x04)

	void DetachProjectile(); // Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.DetachProjectile // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void AttachProjectile(); // Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.AttachProjectile // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void Completed_3B7299CC49B6C5C075996A9C8DDF315F(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.Completed_3B7299CC49B6C5C075996A9C8DDF315F // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void Cancelled_3B7299CC49B6C5C075996A9C8DDF315F(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.Cancelled_3B7299CC49B6C5C075996A9C8DDF315F // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void Triggered_3B7299CC49B6C5C075996A9C8DDF315F(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.Triggered_3B7299CC49B6C5C075996A9C8DDF315F // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void OnFinish_B295E6694DBD8B2B2478A38EA60F5624(); // Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.OnFinish_B295E6694DBD8B2B2478A38EA60F5624 // (BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void K2_ActivateAbility(); // Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void TossGrenade(); // Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.TossGrenade // (BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void Server_SpawnProjectile(struct FVector Location, struct FRotator Direction); // Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.Server_SpawnProjectile // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void ExecuteUbergraph_GA_Athena_Grenade_Rethrow(int32_t EntryPoint); // Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.ExecuteUbergraph_GA_Athena_Grenade_Rethrow // (Final|UbergraphFunction|HasDefaults) // @ game+0xda071c
};

