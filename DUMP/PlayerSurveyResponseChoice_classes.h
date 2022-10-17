// WidgetBlueprintGeneratedClass PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C
// Size: 0x1351 (Inherited: 0x1030)
struct UPlayerSurveyResponseChoice_C : UFortPlayerSurveyResponseChoiceBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1030(0x08)
	struct UBorder* Border_InputActionCircle; // 0x1038(0x08)
	struct UImage* Image_Checkbox; // 0x1040(0x08)
	struct UCommonActionWidget* InputActionWidget_Select; // 0x1048(0x08)
	struct FSlateBrush Brush_RadioUnchecked; // 0x1050(0xc0)
	struct FSlateBrush Brush_RadioChecked; // 0x1110(0xc0)
	struct FSlateBrush Brush_CheckboxUnchecked; // 0x11d0(0xc0)
	struct FSlateBrush Brush_CheckboxChecked; // 0x1290(0xc0)
	enum class EFortPlayerSurveyResponseChoiceType ChoiceType; // 0x1350(0x01)

	void Update Text Scale(); // Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.Update Text Scale // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void GetCurrentButtonBrush(struct FSlateBrush& CurrentBrush); // Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.GetCurrentButtonBrush // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda071c
	void UpdateChoiceImage(); // Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.UpdateChoiceImage // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void UpdateInputActionRenderOpacity(); // Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.UpdateInputActionRenderOpacity // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void UpdateButtonColor(); // Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.UpdateButtonColor // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void BP_OnHovered(); // Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void BP_OnUnhovered(); // Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void SetChoiceType(enum class EFortPlayerSurveyResponseChoiceType Type); // Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.SetChoiceType // (Event|Public|BlueprintEvent) // @ game+0xda071c
	void OnSurveyResetChoice(); // Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.OnSurveyResetChoice // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void BP_OnSelected(); // Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void BP_OnDeselected(); // Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void OnInitialized(); // Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	void OnCurrentTextStyleChanged(); // Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void ExecuteUbergraph_PlayerSurveyResponseChoice(int32_t EntryPoint); // Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.ExecuteUbergraph_PlayerSurveyResponseChoice // (Final|UbergraphFunction) // @ game+0xda071c
};

