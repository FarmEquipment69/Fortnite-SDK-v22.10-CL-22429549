// WidgetBlueprintGeneratedClass IconTextButton.IconTextButton_C
// Size: 0x11d8 (Inherited: 0x1070)
struct UIconTextButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1070(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0x1078(0x08)
	struct UBorder* ContentBorder; // 0x1080(0x08)
	struct UHorizontalBox* HorizontalBox_ButtonContent; // 0x1088(0x08)
	struct UImage* LeftSideImage; // 0x1090(0x08)
	struct UNamedSlot* RightExtraContentSlot; // 0x1098(0x08)
	struct FText ButtonText; // 0x10a0(0x18)
	char pad_10B8[0x8]; // 0x10b8(0x08)
	struct FSlateBrush IconBrush; // 0x10c0(0xc0)
	struct UCommonButtonStyle* ControllerInputStyle; // 0x1180(0x08)
	struct UCommonButtonStyle* MouseKeyboardStyle; // 0x1188(0x08)
	enum class EHorizontalAlignment ContentAlignment; // 0x1190(0x01)
	bool bMouseKeyboardStyleSet; // 0x1191(0x01)
	char pad_1192[0x6]; // 0x1192(0x06)
	struct FText OverrideButtonText; // 0x1198(0x18)
	enum class ETextJustify ButtonTextJustification; // 0x11b0(0x01)
	bool bDisplayAllCaps; // 0x11b1(0x01)
	char pad_11B2[0x6]; // 0x11b2(0x06)
	double PressProgress; // 0x11b8(0x08)
	bool bIgnoreInputActionWidgetText; // 0x11c0(0x01)
	char pad_11C1[0x7]; // 0x11c1(0x07)
	struct FMulticastInlineDelegate FocusChangedEvent; // 0x11c8(0x10)

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function IconTextButton.IconTextButton_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void GetPressProgress(double& Progress); // Function IconTextButton.IconTextButton_C.GetPressProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void Get Dynamic Material(struct UMaterialInstanceDynamic*& Ret Material); // Function IconTextButton.IconTextButton_C.Get Dynamic Material // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void ShowIcon(bool bShouldShow); // Function IconTextButton.IconTextButton_C.ShowIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void SetTextInternal(struct FText InButtonText); // Function IconTextButton.IconTextButton_C.SetTextInternal // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void SetInitialMouseKeyboardStyle(); // Function IconTextButton.IconTextButton_C.SetInitialMouseKeyboardStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void UpdateTextStyle(); // Function IconTextButton.IconTextButton_C.UpdateTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void SetContentAlignment(enum class EHorizontalAlignment ContentAlignment); // Function IconTextButton.IconTextButton_C.SetContentAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void UpdateContentAlignment(); // Function IconTextButton.IconTextButton_C.UpdateContentAlignment // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void SetMouseKeyboardStyle(struct UCommonButtonStyle* ControllerInputStyle); // Function IconTextButton.IconTextButton_C.SetMouseKeyboardStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void UpdateStyle(bool UsingGamepad); // Function IconTextButton.IconTextButton_C.UpdateStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void UpdateText(); // Function IconTextButton.IconTextButton_C.UpdateText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void SetControllerStyle(struct UCommonButtonStyle* ControllerInputStyle); // Function IconTextButton.IconTextButton_C.SetControllerStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void UpdateTextAndStyle(enum class ECommonInputType InputType); // Function IconTextButton.IconTextButton_C.UpdateTextAndStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void InitializeButton(); // Function IconTextButton.IconTextButton_C.InitializeButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void Set Icon(struct FSlateBrush IconBrush); // Function IconTextButton.IconTextButton_C.Set Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void Set Text(struct FText ButtonText); // Function IconTextButton.IconTextButton_C.Set Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void OnCurrentTextStyleChanged(); // Function IconTextButton.IconTextButton_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void PreConstruct(bool IsDesignTime); // Function IconTextButton.IconTextButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo); // Function IconTextButton.IconTextButton_C.SetTabLabelInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function IconTextButton.IconTextButton_C.OnTriggeredInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda071c
	void OnActionProgress(float HeldPercent); // Function IconTextButton.IconTextButton_C.OnActionProgress // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void OnActionComplete(); // Function IconTextButton.IconTextButton_C.OnActionComplete // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void Construct(); // Function IconTextButton.IconTextButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	void Destruct(); // Function IconTextButton.IconTextButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	void OnTriggeringInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function IconTextButton.IconTextButton_C.OnTriggeringInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda071c
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function IconTextButton.IconTextButton_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	void ExecuteUbergraph_IconTextButton(int32_t EntryPoint); // Function IconTextButton.IconTextButton_C.ExecuteUbergraph_IconTextButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda071c
	void FocusChangedEvent__DelegateSignature(bool HasFocus); // Function IconTextButton.IconTextButton_C.FocusChangedEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
};

