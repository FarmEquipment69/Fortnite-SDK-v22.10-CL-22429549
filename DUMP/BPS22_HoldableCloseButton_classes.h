// WidgetBlueprintGeneratedClass BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C
// Size: 0x1140 (Inherited: 0x10b0)
struct UBPS22_HoldableCloseButton_C : UFortHoldableButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10b0(0x08)
	struct UWidgetAnimation* Hover; // 0x10b8(0x08)
	struct UWidgetAnimation* HoldCompleted; // 0x10c0(0x08)
	struct UWidgetAnimation* HoldProgress; // 0x10c8(0x08)
	struct UImage* Image_Background; // 0x10d0(0x08)
	struct UImage* Image_GamepadProgress; // 0x10d8(0x08)
	struct UOverlay* Overlay_Input; // 0x10e0(0x08)
	struct UProgressBar* ; // 0x10e8(0x08)
	struct USizeBox* SizeBox_Height; // 0x10f0(0x08)
	struct USizeBox* SizeBox_KBM; // 0x10f8(0x08)
	struct UCommonTextBlock* TextButton_Text; // 0x1100(0x08)
	struct FText In Text; // 0x1108(0x18)
	double In Min Desired Width; // 0x1120(0x08)
	double In Min Desired Height; // 0x1128(0x08)
	struct FMulticastInlineDelegate Hold Completed; // 0x1130(0x10)

	void Update style(bool Using Gamepad); // Function BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C.Update style // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void UpdateTextAndStyle(enum class ECommonInputType Input Type); // Function BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C.UpdateTextAndStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void BP_OnHoldStarted(float HoldPercentage, bool bInUseSecondaryHoldAnimation); // Function BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C.BP_OnHoldStarted // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void BP_OnHoldEnded(float HoldPercentage, bool bInUseSecondaryHoldAnimation); // Function BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C.BP_OnHoldEnded // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void BP_OnHoldCompleted(); // Function BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C.BP_OnHoldCompleted // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void BP_OnHoldIncreased(float HoldPercentage); // Function BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C.BP_OnHoldIncreased // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void BP_OnHoldDecreased(float HoldPercentage); // Function BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C.BP_OnHoldDecreased // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void BP_OnHoldReset(); // Function BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C.BP_OnHoldReset // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void BP_OnPressed(); // Function BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C.BP_OnPressed // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void PreConstruct(bool IsDesignTime); // Function BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	void BP_OnHovered(); // Function BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void BP_OnUnhovered(); // Function BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void Construct(); // Function BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	void Destruct(); // Function BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	void ExecuteUbergraph_BPS22_HoldableCloseButton(int32_t EntryPoint); // Function BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C.ExecuteUbergraph_BPS22_HoldableCloseButton // (Final|UbergraphFunction) // @ game+0xda071c
	void Hold Completed__DelegateSignature(); // Function BPS22_HoldableCloseButton.BPS22_HoldableCloseButton_C.Hold Completed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
};

