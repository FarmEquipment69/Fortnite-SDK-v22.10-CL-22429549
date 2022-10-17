// WidgetBlueprintGeneratedClass OnboardingTextInputActionButton.OnboardingTextInputActionButton_C
// Size: 0x11b9 (Inherited: 0x1070)
struct UOnboardingTextInputActionButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1070(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0x1078(0x08)
	struct UBorder* ContentBorder; // 0x1080(0x08)
	struct UImage* LeftSideImage; // 0x1088(0x08)
	struct UNamedSlot* RightExtraContentSlot; // 0x1090(0x08)
	struct FText ButtonText; // 0x1098(0x18)
	struct FSlateBrush IconBrush; // 0x10b0(0xc0)
	struct UCommonButtonStyle* ControllerInputStyle; // 0x1170(0x08)
	struct UCommonButtonStyle* TouchStyle; // 0x1178(0x08)
	struct UCommonButtonStyle* MouseKeyboardStyle; // 0x1180(0x08)
	enum class EHorizontalAlignment ContentAlignment; // 0x1188(0x01)
	bool bMouseKeyboardStyleSet; // 0x1189(0x01)
	char pad_118A[0x6]; // 0x118a(0x06)
	struct FText OverrideButtonText; // 0x1190(0x18)
	enum class ETextJustify ButtonTextJustification; // 0x11a8(0x01)
	bool bDisplayAllCaps; // 0x11a9(0x01)
	char pad_11AA[0x6]; // 0x11aa(0x06)
	double PressProgress; // 0x11b0(0x08)
	bool bIgnoreInputActionWidgetText; // 0x11b8(0x01)

	void GetPressProgress(double& Progress); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.GetPressProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void Get Dynamic Material(struct UMaterialInstanceDynamic*& Ret Material); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.Get Dynamic Material // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void ShowIcon(bool bShouldShow); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.ShowIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void SetTextInternal(struct FText InButtonText); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.SetTextInternal // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void SetInitialMouseKeyboardStyle(); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.SetInitialMouseKeyboardStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void UpdateTextStyle(); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.UpdateTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void SetContentAlignment(enum class EHorizontalAlignment ContentAlignment); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.SetContentAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void UpdateContentAlignment(); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.UpdateContentAlignment // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void SetMouseKeyboardStyle(struct UCommonButtonStyle* ControllerInputStyle); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.SetMouseKeyboardStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void UpdateStyle(enum class ECommonInputType CurrentInputType); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.UpdateStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void UpdateText(); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.UpdateText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void SetControllerStyle(struct UCommonButtonStyle* ControllerInputStyle); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.SetControllerStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void UpdateTextAndStyle(enum class ECommonInputType InputType); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.UpdateTextAndStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void InitializeButton(); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.InitializeButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void Set Icon(struct FSlateBrush IconBrush); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.Set Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void Set Text(struct FText ButtonText); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.Set Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void OnCurrentTextStyleChanged(); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void PreConstruct(bool IsDesignTime); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.SetTabLabelInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.OnTriggeredInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda071c
	void OnActionProgress(float HeldPercent); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.OnActionProgress // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void OnActionComplete(); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.OnActionComplete // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void Construct(); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	void Destruct(); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	void ExecuteUbergraph_OnboardingTextInputActionButton(int32_t EntryPoint); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.ExecuteUbergraph_OnboardingTextInputActionButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda071c
};

