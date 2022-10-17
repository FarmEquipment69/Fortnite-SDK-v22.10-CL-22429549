// Class AudioLinkEngine.AudioLinkBlueprintInterface
// Size: 0x28 (Inherited: 0x28)
struct UAudioLinkBlueprintInterface : UInterface {

	void StopLink(); // Function AudioLinkEngine.AudioLinkBlueprintInterface.StopLink // (Native|Public|BlueprintCallable) // @ game+0x7579000
	void SetLinkSound(struct USoundBase* NewSound); // Function AudioLinkEngine.AudioLinkBlueprintInterface.SetLinkSound // (Native|Public|BlueprintCallable) // @ game+0x73e4fec
	void PlayLink(float StartTime); // Function AudioLinkEngine.AudioLinkBlueprintInterface.PlayLink // (Native|Public|BlueprintCallable) // @ game+0x919b5d0
	bool IsLinkPlaying(); // Function AudioLinkEngine.AudioLinkBlueprintInterface.IsLinkPlaying // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x74bd5c0
};

