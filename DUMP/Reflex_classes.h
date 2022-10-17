// Class Reflex.ReflexBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UReflexBlueprintLibrary : UBlueprintFunctionLibrary {

	void SetReflexMode(enum class EReflexMode Mode); // Function Reflex.ReflexBlueprintLibrary.SetReflexMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x70b8970
	void SetFlashIndicatorEnabled(bool bEnabled); // Function Reflex.ReflexBlueprintLibrary.SetFlashIndicatorEnabled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x70b8900
	float GetRenderLatencyInMs(); // Function Reflex.ReflexBlueprintLibrary.GetRenderLatencyInMs // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x70b88d8
	enum class EReflexMode GetReflexMode(); // Function Reflex.ReflexBlueprintLibrary.GetReflexMode // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x70b8858
	bool GetReflexAvailable(); // Function Reflex.ReflexBlueprintLibrary.GetReflexAvailable // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x70b8834
	float GetGameToRenderLatencyInMs(); // Function Reflex.ReflexBlueprintLibrary.GetGameToRenderLatencyInMs // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x70b880c
	float GetGameLatencyInMs(); // Function Reflex.ReflexBlueprintLibrary.GetGameLatencyInMs // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x70b87e4
	bool GetFlashIndicatorEnabled(); // Function Reflex.ReflexBlueprintLibrary.GetFlashIndicatorEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x70b8758
};

