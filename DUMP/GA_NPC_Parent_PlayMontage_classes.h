// BlueprintGeneratedClass GA_NPC_Parent_PlayMontage.GA_NPC_Parent_PlayMontage_C
// Size: 0xe60 (Inherited: 0xe58)
struct UGA_NPC_Parent_PlayMontage_C : UGA_NPC_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe58(0x08)

	void Completed_A0C7AFA044857CF57A8E36842278C580(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_NPC_Parent_PlayMontage.GA_NPC_Parent_PlayMontage_C.Completed_A0C7AFA044857CF57A8E36842278C580 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void Cancelled_A0C7AFA044857CF57A8E36842278C580(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_NPC_Parent_PlayMontage.GA_NPC_Parent_PlayMontage_C.Cancelled_A0C7AFA044857CF57A8E36842278C580 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void Triggered_A0C7AFA044857CF57A8E36842278C580(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_NPC_Parent_PlayMontage.GA_NPC_Parent_PlayMontage_C.Triggered_A0C7AFA044857CF57A8E36842278C580 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void K2_ActivateAbility(); // Function GA_NPC_Parent_PlayMontage.GA_NPC_Parent_PlayMontage_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void NPC PlayMontage(); // Function GA_NPC_Parent_PlayMontage.GA_NPC_Parent_PlayMontage_C.NPC PlayMontage // (BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void NPC MontageTriggered(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_NPC_Parent_PlayMontage.GA_NPC_Parent_PlayMontage_C.NPC MontageTriggered // (BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void NPC PlayMontageStarted(); // Function GA_NPC_Parent_PlayMontage.GA_NPC_Parent_PlayMontage_C.NPC PlayMontageStarted // (BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void ExecuteUbergraph_GA_NPC_Parent_PlayMontage(int32_t EntryPoint); // Function GA_NPC_Parent_PlayMontage.GA_NPC_Parent_PlayMontage_C.ExecuteUbergraph_GA_NPC_Parent_PlayMontage // (Final|UbergraphFunction|HasDefaults) // @ game+0xda071c
};

