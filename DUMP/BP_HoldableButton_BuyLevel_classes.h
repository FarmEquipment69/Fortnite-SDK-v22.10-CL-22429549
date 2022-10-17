// WidgetBlueprintGeneratedClass BP_HoldableButton_BuyLevel.BP_HoldableButton_BuyLevel_C
// Size: 0x1170 (Inherited: 0x10b0)
struct UBP_HoldableButton_BuyLevel_C : UFortHoldableButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10b0(0x08)
	struct UWidgetAnimation* HoldCompleted; // 0x10b8(0x08)
	struct UWidgetAnimation* HoldProgress; // 0x10c0(0x08)
	struct UWidgetAnimation* Hover; // 0x10c8(0x08)
	struct UCommonTextBlock* Button_text; // 0x10d0(0x08)
	struct UImage* Image_material; // 0x10d8(0x08)
	struct USizeBox* ; // 0x10e0(0x08)
	struct UCommonTextBlock* Text_Subtitle; // 0x10e8(0x08)
	struct UCommonActionWidget* UnbindedInputActionWidget; // 0x10f0(0x08)
	struct FText In Text; // 0x10f8(0x18)
	double In Width Override; // 0x1110(0x08)
	struct UMaterialInterface* Material; // 0x1118(0x08)
	struct UMaterialInstanceDynamic* HoldProgressDMI; // 0x1120(0x08)
	int32_t Size; // 0x1128(0x04)
	char pad_112C[0x4]; // 0x112c(0x04)
	double In Height Override; // 0x1130(0x08)
	struct UAudioComponent* FillingSoundAudioComponent; // 0x1138(0x08)
	struct USoundBase* FillingSoundOverride; // 0x1140(0x08)
	struct USoundBase* FillCompleteSoundOverride; // 0x1148(0x08)
	struct USoundBase* ReleaseSound; // 0x1150(0x08)
	struct FMulticastInlineDelegate HoldActionProgress; // 0x1158(0x10)
	struct USoundBase* Press Sound; // 0x1168(0x08)

	void BP_OnHoldStarted(float HoldPercentage, bool bInUseSecondaryHoldAnimation); // Function BP_HoldableButton_BuyLevel.BP_HoldableButton_BuyLevel_C.BP_OnHoldStarted // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void BP_OnHoldEnded(float HoldPercentage, bool bInUseSecondaryHoldAnimation); // Function BP_HoldableButton_BuyLevel.BP_HoldableButton_BuyLevel_C.BP_OnHoldEnded // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void BP_OnHoldCompleted(); // Function BP_HoldableButton_BuyLevel.BP_HoldableButton_BuyLevel_C.BP_OnHoldCompleted // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void BP_OnHoldIncreased(float HoldPercentage); // Function BP_HoldableButton_BuyLevel.BP_HoldableButton_BuyLevel_C.BP_OnHoldIncreased // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void BP_OnHoldDecreased(float HoldPercentage); // Function BP_HoldableButton_BuyLevel.BP_HoldableButton_BuyLevel_C.BP_OnHoldDecreased // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void BP_OnHoldReset(); // Function BP_HoldableButton_BuyLevel.BP_HoldableButton_BuyLevel_C.BP_OnHoldReset // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void BP_OnPressed(); // Function BP_HoldableButton_BuyLevel.BP_HoldableButton_BuyLevel_C.BP_OnPressed // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void BP_OnUnhovered(); // Function BP_HoldableButton_BuyLevel.BP_HoldableButton_BuyLevel_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void BP_OnHovered(); // Function BP_HoldableButton_BuyLevel.BP_HoldableButton_BuyLevel_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void PreConstruct(bool IsDesignTime); // Function BP_HoldableButton_BuyLevel.BP_HoldableButton_BuyLevel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	void Construct(); // Function BP_HoldableButton_BuyLevel.BP_HoldableButton_BuyLevel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	void Destruct(); // Function BP_HoldableButton_BuyLevel.BP_HoldableButton_BuyLevel_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	void PlayFillSound(); // Function BP_HoldableButton_BuyLevel.BP_HoldableButton_BuyLevel_C.PlayFillSound // (BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void FillComplete(); // Function BP_HoldableButton_BuyLevel.BP_HoldableButton_BuyLevel_C.FillComplete // (BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void StopFillSound(); // Function BP_HoldableButton_BuyLevel.BP_HoldableButton_BuyLevel_C.StopFillSound // (BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void ExecuteUbergraph_BP_HoldableButton_BuyLevel(int32_t EntryPoint); // Function BP_HoldableButton_BuyLevel.BP_HoldableButton_BuyLevel_C.ExecuteUbergraph_BP_HoldableButton_BuyLevel // (Final|UbergraphFunction|HasDefaults) // @ game+0xda071c
	void HoldActionProgress__DelegateSignature(bool IsHolding); // Function BP_HoldableButton_BuyLevel.BP_HoldableButton_BuyLevel_C.HoldActionProgress__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
};

