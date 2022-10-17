// Class ModularGameplay.GameFrameworkComponent
// Size: 0xa0 (Inherited: 0xa0)
struct UGameFrameworkComponent : UActorComponent {
};

// Class ModularGameplay.ControllerComponent
// Size: 0xa0 (Inherited: 0xa0)
struct UControllerComponent : UGameFrameworkComponent {
};

// Class ModularGameplay.GameFrameworkComponentManager
// Size: 0x238 (Inherited: 0x30)
struct UGameFrameworkComponentManager : UGameInstanceSubsystem {
	char pad_30[0x208]; // 0x30(0x208)

	bool UnregisterClassInitStateDelegate(struct TSoftClassPtr<UObject> ActorClass, struct FDelegate DelegateToRemove); // Function ModularGameplay.GameFrameworkComponentManager.UnregisterClassInitStateDelegate // (Final|Native|Public|BlueprintCallable) // @ game+0x5fdcc40
	bool UnregisterActorInitStateDelegate(struct AActor* Actor, struct FDelegate DelegateToRemove); // Function ModularGameplay.GameFrameworkComponentManager.UnregisterActorInitStateDelegate // (Final|Native|Public|BlueprintCallable) // @ game+0x5fdca18
	void SendExtensionEvent(struct AActor* Receiver, struct FName EventName, bool bOnlyInGameWorlds); // Function ModularGameplay.GameFrameworkComponentManager.SendExtensionEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x5fdc8d8
	void RemoveReceiver(struct AActor* Receiver); // Function ModularGameplay.GameFrameworkComponentManager.RemoveReceiver // (Final|Native|Public|BlueprintCallable) // @ game+0x5fdc85c
	bool RegisterAndCallForClassInitState(struct TSoftClassPtr<UObject> ActorClass, struct FName FeatureName, struct FGameplayTag RequiredState, struct FDelegate Delegate, bool bCallImmediately); // Function ModularGameplay.GameFrameworkComponentManager.RegisterAndCallForClassInitState // (Final|Native|Public|BlueprintCallable) // @ game+0x5fdc530
	bool RegisterAndCallForActorInitState(struct AActor* Actor, struct FName FeatureName, struct FGameplayTag RequiredState, struct FDelegate Delegate, bool bCallImmediately); // Function ModularGameplay.GameFrameworkComponentManager.RegisterAndCallForActorInitState // (Final|Native|Public|BlueprintCallable) // @ game+0x5fdc294
	void AddReceiver(struct AActor* Receiver, bool bAddOnlyInGameWorlds); // Function ModularGameplay.GameFrameworkComponentManager.AddReceiver // (Final|Native|Public|BlueprintCallable) // @ game+0x5fdc0b8
};

// Class ModularGameplay.GameFrameworkInitStateInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameFrameworkInitStateInterface : UInterface {

	bool UnregisterInitStateDelegate(struct FDelegate Delegate); // Function ModularGameplay.GameFrameworkInitStateInterface.UnregisterInitStateDelegate // (Native|Public|BlueprintCallable) // @ game+0x5fdcd6c
	bool RegisterAndCallForInitStateChange(struct FGameplayTag RequiredState, struct FDelegate Delegate, bool bCallImmediately); // Function ModularGameplay.GameFrameworkInitStateInterface.RegisterAndCallForInitStateChange // (Native|Public|BlueprintCallable) // @ game+0x5fdc734
	bool HasReachedInitState(struct FGameplayTag DesiredState); // Function ModularGameplay.GameFrameworkInitStateInterface.HasReachedInitState // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5fdc204
	struct FGameplayTag GetInitState(); // Function ModularGameplay.GameFrameworkInitStateInterface.GetInitState // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5fdc1d8
	struct FName GetFeatureName(); // Function ModularGameplay.GameFrameworkInitStateInterface.GetFeatureName // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5fdc1ac
};

// Class ModularGameplay.GameStateComponent
// Size: 0xa0 (Inherited: 0xa0)
struct UGameStateComponent : UGameFrameworkComponent {
};

// Class ModularGameplay.PawnComponent
// Size: 0xa0 (Inherited: 0xa0)
struct UPawnComponent : UGameFrameworkComponent {
};

// Class ModularGameplay.PlayerStateComponent
// Size: 0xa0 (Inherited: 0xa0)
struct UPlayerStateComponent : UGameFrameworkComponent {
};

