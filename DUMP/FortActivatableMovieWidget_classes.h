// WidgetBlueprintGeneratedClass FortActivatableMovieWidget.FortActivatableMovieWidget_C
// Size: 0x6d9 (Inherited: 0x6b0)
struct UFortActivatableMovieWidget_C : UFortActivatableMovieWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6b0(0x08)
	struct UWidgetAnimation* WholeFade; // 0x6b8(0x08)
	struct UWidgetAnimation* WhiteFade; // 0x6c0(0x08)
	struct USafeZone* MainSafeZone; // 0x6c8(0x08)
	struct USafeZone* ; // 0x6d0(0x08)
	bool ; // 0x6d8(0x01)

	void Finished_67F0D773400E13ABEB8A0DB143879F1C(); // Function FortActivatableMovieWidget.FortActivatableMovieWidget_C.Finished_67F0D773400E13ABEB8A0DB143879F1C // (BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void Finished_54C0D3BF443750D753CECD9EE06086EA(); // Function FortActivatableMovieWidget.FortActivatableMovieWidget_C.Finished_54C0D3BF443750D753CECD9EE06086EA // (BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void Construct(); // Function FortActivatableMovieWidget.FortActivatableMovieWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	void StartFadeFromWhite(bool bEnd, enum class UFortActivatablePrePostRollStates Reason, bool bReverse); // Function FortActivatableMovieWidget.FortActivatableMovieWidget_C.StartFadeFromWhite // (Event|Public|BlueprintEvent) // @ game+0xda071c
	void StartWholeFade(bool bReverse); // Function FortActivatableMovieWidget.FortActivatableMovieWidget_C.StartWholeFade // (Event|Public|BlueprintEvent) // @ game+0xda071c
	void BP_OnActivated(); // Function FortActivatableMovieWidget.FortActivatableMovieWidget_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void BP_OnDeactivated(); // Function FortActivatableMovieWidget.FortActivatableMovieWidget_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void PreEnded(); // Function FortActivatableMovieWidget.FortActivatableMovieWidget_C.PreEnded // (BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void MediaStarted(); // Function FortActivatableMovieWidget.FortActivatableMovieWidget_C.MediaStarted // (BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void ExecuteUbergraph_FortActivatableMovieWidget(int32_t EntryPoint); // Function FortActivatableMovieWidget.FortActivatableMovieWidget_C.ExecuteUbergraph_FortActivatableMovieWidget // (Final|UbergraphFunction) // @ game+0xda071c
};

