// Class GameplayStateMachine.GameplayState
// Size: 0x78 (Inherited: 0x28)
struct UGameplayState : UObject {
	struct FGameplayTag StateId; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FGameplayTagContainer StateRuntimeTags; // 0x30(0x20)
	bool bEvaluateTransition; // 0x50(0x01)
	bool bReplicates; // 0x51(0x01)
	bool bStateBegun; // 0x52(0x01)
	bool bStateEnded; // 0x53(0x01)
	float InitializationServerTime; // 0x54(0x04)
	float BeginStateDelay; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct UGameplayStateMachine* CachedGameplayStateMachine; // 0x60(0x08)
	struct UGameplayStateMachineManager* CachedStateMachineManager; // 0x68(0x08)
	struct UGameplayState* Hack_StateToDelayProcess; // 0x70(0x08)

	void UpdateStateEventServer(float DeltaTime); // Function GameplayStateMachine.GameplayState.UpdateStateEventServer // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void UpdateStateEventClient(float DeltaTime); // Function GameplayStateMachine.GameplayState.UpdateStateEventClient // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void UpdateStateEvent(float DeltaTime); // Function GameplayStateMachine.GameplayState.UpdateStateEvent // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void RemoveStateRuntimeTag(struct FGameplayTag& RemovedTag); // Function GameplayStateMachine.GameplayState.RemoveStateRuntimeTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68f8d3c
	void MarkStateToEvaluateTransitions(); // Function GameplayStateMachine.GameplayState.MarkStateToEvaluateTransitions // (Final|Native|Public|BlueprintCallable) // @ game+0x68f8d14
	void InitializeStateEventServer(struct FGameplayTag& PrevStateId); // Function GameplayStateMachine.GameplayState.InitializeStateEventServer // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda071c
	void InitializeStateEventClient(struct FGameplayTag& PrevStateId); // Function GameplayStateMachine.GameplayState.InitializeStateEventClient // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda071c
	void InitializeStateEvent(struct FGameplayTag& PrevStateId); // Function GameplayStateMachine.GameplayState.InitializeStateEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda071c
	bool HasStateRuntimeTag(struct FGameplayTag& QueryTag); // Function GameplayStateMachine.GameplayState.HasStateRuntimeTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68f8c0c
	bool HasAuthority(); // Function GameplayStateMachine.GameplayState.HasAuthority // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68f8be8
	struct FGameplayTagContainer GetStateRuntimeTags(); // Function GameplayStateMachine.GameplayState.GetStateRuntimeTags // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68f8bcc
	struct FGameplayTag GetStateId(); // Function GameplayStateMachine.GameplayState.GetStateId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68f8ba4
	struct AActor* GetOwningActor(); // Function GameplayStateMachine.GameplayState.GetOwningActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68f8b80
	struct UGameplayStateMachine* GetGameplayStateMachine(); // Function GameplayStateMachine.GameplayState.GetGameplayStateMachine // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68f8b68
	void EndStateEventServer(struct FGameplayTag& NextStateId); // Function GameplayStateMachine.GameplayState.EndStateEventServer // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda071c
	void EndStateEventClient(struct FGameplayTag& NextStateId); // Function GameplayStateMachine.GameplayState.EndStateEventClient // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda071c
	void EndStateEvent(struct FGameplayTag& NextStateId); // Function GameplayStateMachine.GameplayState.EndStateEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda071c
	void BeginStateEventServer(struct FGameplayTag& PrevStateId); // Function GameplayStateMachine.GameplayState.BeginStateEventServer // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda071c
	void BeginStateEventClient(struct FGameplayTag& PrevStateId); // Function GameplayStateMachine.GameplayState.BeginStateEventClient // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda071c
	void BeginStateEvent(struct FGameplayTag& PrevStateId); // Function GameplayStateMachine.GameplayState.BeginStateEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda071c
	void AddStateRuntimeTag(struct FGameplayTag& AddedTag); // Function GameplayStateMachine.GameplayState.AddStateRuntimeTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68f8a84
};

// Class GameplayStateMachine.GameplayStateMachine
// Size: 0xb0 (Inherited: 0x78)
struct UGameplayStateMachine : UGameplayState {
	struct FGameplayTag StateMachineId; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FActiveGameplayStateData ActiveGameplayStateData; // 0x80(0x18)
	struct TArray<struct FGameplayStateSettings> GameplayStateSettings; // 0x98(0x10)
	struct FGameplayTag InitialGameplayStateId; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)

	void SetState(struct FGameplayTag& InStateId, float InBeginStateDelay); // Function GameplayStateMachine.GameplayStateMachine.SetState // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68f8dcc
	void OnRep_ActiveGameplayStateData(); // Function GameplayStateMachine.GameplayStateMachine.OnRep_ActiveGameplayStateData // (Final|Native|Private) // @ game+0x68f8d28
	struct FGameplayTag GetStateMachineId(); // Function GameplayStateMachine.GameplayStateMachine.GetStateMachineId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68f8bb8
	struct UGameplayState* GetActiveStateObject(); // Function GameplayStateMachine.GameplayStateMachine.GetActiveStateObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68f8b50
	struct FGameplayTag GetActiveStateId(); // Function GameplayStateMachine.GameplayStateMachine.GetActiveStateId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68f8b28
	void EvaluateStateTransition(); // Function GameplayStateMachine.GameplayStateMachine.EvaluateStateTransition // (Native|Event|Protected|BlueprintEvent) // @ game+0x68f8b10
};

// Class GameplayStateMachine.GameplayStateMachineManager
// Size: 0x1c0 (Inherited: 0xa0)
struct UGameplayStateMachineManager : UActorComponent {
	struct FGameplayStateMachineArray StateMachineList; // 0xa0(0x120)
};

