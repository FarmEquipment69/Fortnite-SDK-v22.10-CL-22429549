// Class UMG.Visual
// Size: 0x28 (Inherited: 0x28)
struct UVisual : UObject {
};

// Class UMG.Widget
// Size: 0x148 (Inherited: 0x28)
struct UWidget : UVisual {
	char pad_28[0x8]; // 0x28(0x08)
	struct UPanelSlot* Slot; // 0x30(0x08)
	struct FDelegate bIsEnabledDelegate; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
	struct FText ToolTipText; // 0x48(0x18)
	struct FDelegate ToolTipTextDelegate; // 0x60(0x0c)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct UWidget* ToolTipWidget; // 0x70(0x08)
	struct FDelegate ToolTipWidgetDelegate; // 0x78(0x0c)
	struct FDelegate VisibilityDelegate; // 0x84(0x0c)
	struct FWidgetTransform RenderTransform; // 0x90(0x38)
	struct FVector2D RenderTransformPivot; // 0xc8(0x10)
	enum class EFlowDirectionPreference FlowDirectionPreference; // 0xd8(0x01)
	char bIsVariable : 1; // 0xd9(0x01)
	char bCreatedByConstructionScript : 1; // 0xd9(0x01)
	char bIsEnabled : 1; // 0xd9(0x01)
	char bOverride_Cursor : 1; // 0xd9(0x01)
	char bIsVolatile : 1; // 0xd9(0x01)
	char pad_D9_5 : 3; // 0xd9(0x01)
	enum class EMouseCursor Cursor; // 0xda(0x01)
	enum class EWidgetClipping Clipping; // 0xdb(0x01)
	enum class ESlateVisibility Visibility; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	float RenderOpacity; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct USlateAccessibleWidgetData* AccessibleWidgetData; // 0xe8(0x08)
	struct UWidgetNavigation* Navigation; // 0xf0(0x08)
	char pad_F8[0x20]; // 0xf8(0x20)
	struct TArray<struct UPropertyBinding*> NativeBindings; // 0x118(0x10)
	char pad_128[0x20]; // 0x128(0x20)

	void SetVisibility(enum class ESlateVisibility InVisibility); // Function UMG.Widget.SetVisibility // (Native|Public|BlueprintCallable) // @ game+0x14e7bcc
	void SetUserFocus(struct APlayerController* PlayerController); // Function UMG.Widget.SetUserFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x913e520
	void SetToolTipText(struct FText& InToolTipText); // Function UMG.Widget.SetToolTipText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x913e45c
	void SetToolTip(struct UWidget* Widget); // Function UMG.Widget.SetToolTip // (Final|Native|Public|BlueprintCallable) // @ game+0x913e3dc
	void SetRenderTranslation(struct FVector2D Translation); // Function UMG.Widget.SetRenderTranslation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1ef6604
	void SetRenderTransformPivot(struct FVector2D Pivot); // Function UMG.Widget.SetRenderTransformPivot // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x20eacc0
	void SetRenderTransformAngle(float Angle); // Function UMG.Widget.SetRenderTransformAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x913e2c4
	void SetRenderTransform(struct FWidgetTransform InTransform); // Function UMG.Widget.SetRenderTransform // (Final|Native|Public|BlueprintCallable) // @ game+0x21317e8
	void SetRenderShear(struct FVector2D Shear); // Function UMG.Widget.SetRenderShear // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2045c40
	void SetRenderScale(struct FVector2D Scale); // Function UMG.Widget.SetRenderScale // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x213c564
	void SetRenderOpacity(float InOpacity); // Function UMG.Widget.SetRenderOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x1545328
	void SetNavigationRuleExplicit(enum class EUINavigation Direction, struct UWidget* InWidget); // Function UMG.Widget.SetNavigationRuleExplicit // (Final|Native|Public|BlueprintCallable) // @ game+0x913e200
	void SetNavigationRuleCustomBoundary(enum class EUINavigation Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustomBoundary // (Final|Native|Public|BlueprintCallable) // @ game+0x913e110
	void SetNavigationRuleCustom(enum class EUINavigation Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustom // (Final|Native|Public|BlueprintCallable) // @ game+0x913e034
	void SetNavigationRuleBase(enum class EUINavigation Direction, enum class EUINavigationRule Rule); // Function UMG.Widget.SetNavigationRuleBase // (Final|Native|Public|BlueprintCallable) // @ game+0x913df70
	void SetNavigationRule(enum class EUINavigation Direction, enum class EUINavigationRule Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetNavigationRule // (Final|Native|Public|BlueprintCallable) // @ game+0x913de4c
	void SetKeyboardFocus(); // Function UMG.Widget.SetKeyboardFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x913de38
	void SetIsEnabled(bool bInIsEnabled); // Function UMG.Widget.SetIsEnabled // (Native|Public|BlueprintCallable) // @ game+0x1204bb0
	void SetFocus(); // Function UMG.Widget.SetFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x2497d48
	void SetCursor(enum class EMouseCursor InCursor); // Function UMG.Widget.SetCursor // (Final|Native|Public|BlueprintCallable) // @ game+0x913dd38
	void SetClipping(enum class EWidgetClipping InClipping); // Function UMG.Widget.SetClipping // (Final|Native|Public|BlueprintCallable) // @ game+0x913dcb8
	void SetAllNavigationRules(enum class EUINavigationRule Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetAllNavigationRules // (Final|Native|Public|BlueprintCallable) // @ game+0x913dbf4
	void ResetCursor(); // Function UMG.Widget.ResetCursor // (Final|Native|Public|BlueprintCallable) // @ game+0x913dbe0
	void RemoveFromParent(); // Function UMG.Widget.RemoveFromParent // (Native|Public|BlueprintCallable) // @ game+0x1352994
	struct FEventReply OnReply__DelegateSignature(); // DelegateFunction UMG.Widget.OnReply__DelegateSignature // (Public|Delegate) // @ game+0xda071c
	struct FEventReply OnPointerEvent__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature // (Public|Delegate|HasOutParms) // @ game+0xda071c
	void K2_RemoveFieldValueChangedDelegate(struct FFieldNotificationId FieldId, struct FDelegate Delegate); // Function UMG.Widget.K2_RemoveFieldValueChangedDelegate // (Final|Native|Public|BlueprintCallable) // @ game+0x913db04
	void K2_BroadcastFieldValueChanged(struct FFieldNotificationId FieldId); // Function UMG.Widget.K2_BroadcastFieldValueChanged // (Final|Native|Protected|BlueprintCallable) // @ game+0x913da64
	void K2_AddFieldValueChangedDelegate(struct FFieldNotificationId FieldId, struct FDelegate Delegate); // Function UMG.Widget.K2_AddFieldValueChangedDelegate // (Final|Native|Public|BlueprintCallable) // @ game+0x913d988
	bool IsVisible(); // Function UMG.Widget.IsVisible // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1f6ee74
	bool IsRendered(); // Function UMG.Widget.IsRendered // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913d964
	bool IsHovered(); // Function UMG.Widget.IsHovered // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x239050c
	void InvalidateLayoutAndVolatility(); // Function UMG.Widget.InvalidateLayoutAndVolatility // (Final|Native|Public|BlueprintCallable) // @ game+0x2398008
	bool HasUserFocusedDescendants(struct APlayerController* PlayerController); // Function UMG.Widget.HasUserFocusedDescendants // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913d8d4
	bool HasUserFocus(struct APlayerController* PlayerController); // Function UMG.Widget.HasUserFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913d844
	bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex); // Function UMG.Widget.HasMouseCaptureByUser // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913d784
	bool HasMouseCapture(); // Function UMG.Widget.HasMouseCapture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913d760
	bool HasKeyboardFocus(); // Function UMG.Widget.HasKeyboardFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913d73c
	bool HasFocusedDescendants(); // Function UMG.Widget.HasFocusedDescendants // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913d718
	bool HasAnyUserFocus(); // Function UMG.Widget.HasAnyUserFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2408e24
	struct UWidget* GetWidget__DelegateSignature(); // DelegateFunction UMG.Widget.GetWidget__DelegateSignature // (Public|Delegate) // @ game+0xda071c
	enum class ESlateVisibility GetVisibility(); // Function UMG.Widget.GetVisibility // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x29740fc
	struct FGeometry GetTickSpaceGeometry(); // Function UMG.Widget.GetTickSpaceGeometry // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913d438
	struct FText GetText__DelegateSignature(); // DelegateFunction UMG.Widget.GetText__DelegateSignature // (Public|Delegate) // @ game+0xda071c
	enum class ESlateVisibility GetSlateVisibility__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature // (Public|Delegate) // @ game+0xda071c
	struct FSlateColor GetSlateColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature // (Public|Delegate) // @ game+0xda071c
	struct FSlateBrush GetSlateBrush__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature // (Public|Delegate) // @ game+0xda071c
	float GetRenderTransformAngle(); // Function UMG.Widget.GetRenderTransformAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x643c33c
	float GetRenderOpacity(); // Function UMG.Widget.GetRenderOpacity // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913d60c
	struct UPanelWidget* GetParent(); // Function UMG.Widget.GetParent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913d5ec
	struct FGeometry GetPaintSpaceGeometry(); // Function UMG.Widget.GetPaintSpaceGeometry // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913d544
	struct APlayerController* GetOwningPlayer(); // Function UMG.Widget.GetOwningPlayer // (BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x20172f0
	struct ULocalPlayer* GetOwningLocalPlayer(); // Function UMG.Widget.GetOwningLocalPlayer // (BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913d51c
	enum class EMouseCursor GetMouseCursor__DelegateSignature(); // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature // (Public|Delegate) // @ game+0xda071c
	struct FLinearColor GetLinearColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature // (Public|Delegate|HasDefaults) // @ game+0xda071c
	bool GetIsEnabled(); // Function UMG.Widget.GetIsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913d4f8
	int32_t GetInt32__DelegateSignature(); // DelegateFunction UMG.Widget.GetInt32__DelegateSignature // (Public|Delegate) // @ game+0xda071c
	struct UGameInstance* GetGameInstance(); // Function UMG.Widget.GetGameInstance // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913d4b8
	float GetFloat__DelegateSignature(); // DelegateFunction UMG.Widget.GetFloat__DelegateSignature // (Public|Delegate) // @ game+0xda071c
	struct FVector2D GetDesiredSize(); // Function UMG.Widget.GetDesiredSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x913d488
	enum class EWidgetClipping GetClipping(); // Function UMG.Widget.GetClipping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913d464
	enum class ECheckBoxState GetCheckBoxState__DelegateSignature(); // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature // (Public|Delegate) // @ game+0xda071c
	struct FGeometry GetCachedGeometry(); // Function UMG.Widget.GetCachedGeometry // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913d438
	bool GetBool__DelegateSignature(); // DelegateFunction UMG.Widget.GetBool__DelegateSignature // (Public|Delegate) // @ game+0xda071c
	struct FText GetAccessibleText(); // Function UMG.Widget.GetAccessibleText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913d3b4
	struct FText GetAccessibleSummaryText(); // Function UMG.Widget.GetAccessibleSummaryText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913d330
	struct UWidget* GenerateWidgetForString__DelegateSignature(struct FString Item); // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature // (Public|Delegate) // @ game+0xda071c
	struct UWidget* GenerateWidgetForObject__DelegateSignature(struct UObject* Item); // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature // (Public|Delegate) // @ game+0xda071c
	void ForceVolatile(bool bForce); // Function UMG.Widget.ForceVolatile // (Final|Native|Public|BlueprintCallable) // @ game+0x913d2b0
	void ForceLayoutPrepass(); // Function UMG.Widget.ForceLayoutPrepass // (Final|Native|Public|BlueprintCallable) // @ game+0x913d29c
};

// Class UMG.Slider
// Size: 0x690 (Inherited: 0x148)
struct USlider : UWidget {
	float Value; // 0x148(0x04)
	struct FDelegate ValueDelegate; // 0x14c(0x0c)
	float MinValue; // 0x158(0x04)
	float MaxValue; // 0x15c(0x04)
	struct FSliderStyle WidgetStyle; // 0x160(0x4a0)
	enum class EOrientation Orientation; // 0x600(0x01)
	char pad_601[0x3]; // 0x601(0x03)
	struct FLinearColor SliderBarColor; // 0x604(0x10)
	struct FLinearColor SliderHandleColor; // 0x614(0x10)
	bool IndentHandle; // 0x624(0x01)
	bool Locked; // 0x625(0x01)
	bool MouseUsesStep; // 0x626(0x01)
	bool RequiresControllerLock; // 0x627(0x01)
	float StepSize; // 0x628(0x04)
	bool IsFocusable; // 0x62c(0x01)
	char pad_62D[0x3]; // 0x62d(0x03)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x630(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x640(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x650(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x660(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x670(0x10)
	char pad_680[0x10]; // 0x680(0x10)

	void SetValue(float InValue); // Function UMG.Slider.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x1d3d850
	void SetStepSize(float InValue); // Function UMG.Slider.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0x9138850
	void SetSliderHandleColor(struct FLinearColor InValue); // Function UMG.Slider.SetSliderHandleColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x91387c8
	void SetSliderBarColor(struct FLinearColor InValue); // Function UMG.Slider.SetSliderBarColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x9138740
	void SetMinValue(float InValue); // Function UMG.Slider.SetMinValue // (Final|Native|Public|BlueprintCallable) // @ game+0x9138638
	void SetMaxValue(float InValue); // Function UMG.Slider.SetMaxValue // (Final|Native|Public|BlueprintCallable) // @ game+0x91383a8
	void SetLocked(bool InValue); // Function UMG.Slider.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x913811c
	void SetIndentHandle(bool InValue); // Function UMG.Slider.SetIndentHandle // (Final|Native|Public|BlueprintCallable) // @ game+0x913809c
	float GetValue(); // Function UMG.Slider.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9137610
	float GetNormalizedValue(); // Function UMG.Slider.GetNormalizedValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91375f0
};

// Class UMG.UserWidget
// Size: 0x2b8 (Inherited: 0x148)
struct UUserWidget : UWidget {
	char pad_148[0x8]; // 0x148(0x08)
	struct FLinearColor ColorAndOpacity; // 0x150(0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x160(0x0c)
	struct FSlateColor ForegroundColor; // 0x16c(0x14)
	struct FDelegate ForegroundColorDelegate; // 0x180(0x0c)
	char pad_18C[0x4]; // 0x18c(0x04)
	struct FMulticastInlineDelegate OnVisibilityChanged; // 0x190(0x10)
	char pad_1A0[0x18]; // 0x1a0(0x18)
	struct FMargin Padding; // 0x1b8(0x10)
	struct TArray<struct UUMGSequencePlayer*> ActiveSequencePlayers; // 0x1c8(0x10)
	struct UUMGSequenceTickManager* AnimationTickManager; // 0x1d8(0x08)
	struct TArray<struct UUMGSequencePlayer*> StoppedSequencePlayers; // 0x1e0(0x10)
	struct TArray<struct FNamedSlotBinding> NamedSlotBindings; // 0x1f0(0x10)
	struct TArray<struct UUserWidgetExtension*> Extensions; // 0x200(0x10)
	struct UWidgetTree* WidgetTree; // 0x210(0x08)
	int32_t Priority; // 0x218(0x04)
	char bIsFocusable : 1; // 0x21c(0x01)
	char bStopAction : 1; // 0x21c(0x01)
	char bHasScriptImplementedTick : 1; // 0x21c(0x01)
	char bHasScriptImplementedPaint : 1; // 0x21c(0x01)
	char pad_21C_4 : 4; // 0x21c(0x01)
	char pad_21D[0x13]; // 0x21d(0x13)
	enum class EWidgetTickFrequency TickFrequency; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
	struct UInputComponent* InputComponent; // 0x238(0x08)
	struct TArray<struct FAnimationEventBinding> AnimationCallbacks; // 0x240(0x10)
	char pad_250[0x68]; // 0x250(0x68)

	void UnregisterInputComponent(); // Function UMG.UserWidget.UnregisterInputComponent // (Final|Native|Protected|BlueprintCallable) // @ game+0x913cc28
	void UnbindFromAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x213ce08
	void UnbindFromAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x1ecaf4c
	void UnbindAllFromAnimationStarted(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.UnbindAllFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x913cb98
	void UnbindAllFromAnimationFinished(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.UnbindAllFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x913cb08
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG.UserWidget.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	void StopListeningForInputAction(struct FName ActionName, enum class EInputEvent EventType); // Function UMG.UserWidget.StopListeningForInputAction // (Final|Native|Protected|BlueprintCallable) // @ game+0x913ca44
	void StopListeningForAllInputActions(); // Function UMG.UserWidget.StopListeningForAllInputActions // (Final|Native|Protected|BlueprintCallable) // @ game+0x913ca30
	void StopAnimationsAndLatentActions(); // Function UMG.UserWidget.StopAnimationsAndLatentActions // (Final|Native|Public|BlueprintCallable) // @ game+0x1d6c5b8
	void StopAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.StopAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0x1f63d24
	void StopAllAnimations(); // Function UMG.UserWidget.StopAllAnimations // (Final|Native|Public|BlueprintCallable) // @ game+0x1d6c5e0
	void SetPositionInViewport(struct FVector2D Position, bool bRemoveDPIScale); // Function UMG.UserWidget.SetPositionInViewport // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x913c59c
	void SetPlaybackSpeed(struct UWidgetAnimation* InAnimation, float PlaybackSpeed); // Function UMG.UserWidget.SetPlaybackSpeed // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x913c4a4
	void SetPadding(struct FMargin InPadding); // Function UMG.UserWidget.SetPadding // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x2793ab8
	void SetOwningPlayer(struct APlayerController* LocalPlayerController); // Function UMG.UserWidget.SetOwningPlayer // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x913c408
	void SetNumLoopsToPlay(struct UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay); // Function UMG.UserWidget.SetNumLoopsToPlay // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x913c1ec
	void SetInputActionPriority(int32_t NewPriority); // Function UMG.UserWidget.SetInputActionPriority // (Final|Native|Protected|BlueprintCallable) // @ game+0x2212944
	void SetInputActionBlocking(bool bShouldBlock); // Function UMG.UserWidget.SetInputActionBlocking // (Final|Native|Protected|BlueprintCallable) // @ game+0x913bef0
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.UserWidget.SetForegroundColor // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x913be54
	void SetDesiredSizeInViewport(struct FVector2D Size); // Function UMG.UserWidget.SetDesiredSizeInViewport // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x913bb6c
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.UserWidget.SetColorAndOpacity // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1d6bd38
	void SetAnimationCurrentTime(struct UWidgetAnimation* InAnimation, float InTime); // Function UMG.UserWidget.SetAnimationCurrentTime // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x913b9b0
	void SetAnchorsInViewport(struct FAnchors Anchors); // Function UMG.UserWidget.SetAnchorsInViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x913b694
	void SetAlignmentInViewport(struct FVector2D Alignment); // Function UMG.UserWidget.SetAlignmentInViewport // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x913b5f0
	void ReverseAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.ReverseAnimation // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x913b540
	void RemoveFromViewport(); // Function UMG.UserWidget.RemoveFromViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1352994
	void RemoveExtension(struct UUserWidgetExtension* InExtension); // Function UMG.UserWidget.RemoveExtension // (Final|Native|Public|BlueprintCallable) // @ game+0x913b478
	void RegisterInputComponent(); // Function UMG.UserWidget.RegisterInputComponent // (Final|Native|Protected|BlueprintCallable) // @ game+0x913b430
	void PreConstruct(bool IsDesignTime); // Function UMG.UserWidget.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	void PlaySound(struct USoundBase* SoundToPlay); // Function UMG.UserWidget.PlaySound // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x913b398
	struct UUMGSequencePlayer* PlayAnimationTimeRange(struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationTimeRange // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x913b18c
	struct UUMGSequencePlayer* PlayAnimationReverse(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationReverse // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x230a7e0
	struct UUMGSequencePlayer* PlayAnimationForward(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationForward // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1fdcb24
	struct UUMGSequencePlayer* PlayAnimation(struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimation // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xe258d4
	float PauseAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.PauseAnimation // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x913b094
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchStarted // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda071c
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchMoved // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda071c
	struct FEventReply OnTouchGesture(struct FGeometry MyGeometry, struct FPointerEvent& GestureEvent); // Function UMG.UserWidget.OnTouchGesture // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda071c
	struct FEventReply OnTouchForceChanged(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchForceChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda071c
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchEnded // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda071c
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnPreviewMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda071c
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnPreviewKeyDown // (Event|Public|BlueprintEvent) // @ game+0xda071c
	void OnPaint(struct FPaintContext& Context); // Function UMG.UserWidget.OnPaint // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0xda071c
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseWheel // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda071c
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseMove // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda071c
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda071c
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda071c
	void OnMouseCaptureLost(); // Function UMG.UserWidget.OnMouseCaptureLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda071c
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda071c
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent); // Function UMG.UserWidget.OnMouseButtonDoubleClick // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda071c
	struct FEventReply OnMotionDetected(struct FGeometry MyGeometry, struct FMotionEvent InMotionEvent); // Function UMG.UserWidget.OnMotionDetected // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyUp // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyDown // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	struct FEventReply OnKeyChar(struct FGeometry MyGeometry, struct FCharacterEvent InCharacterEvent); // Function UMG.UserWidget.OnKeyChar // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	void OnInitialized(); // Function UMG.UserWidget.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusReceived // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDrop // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	bool OnDragOver(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragOver // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragLeave // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragEnter // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Function UMG.UserWidget.OnDragDetected // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda071c
	void OnDragCancelled(struct FPointerEvent& PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragCancelled // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda071c
	void OnAnimationStarted(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.OnAnimationStarted // (BlueprintCosmetic|Native|Event|Protected|BlueprintEvent) // @ game+0x1de8cac
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.OnAnimationFinished // (BlueprintCosmetic|Native|Event|Protected|BlueprintEvent) // @ game+0x1f393f0
	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent); // Function UMG.UserWidget.OnAnalogValueChanged // (Event|Public|BlueprintEvent) // @ game+0xda071c
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	void ListenForInputAction(struct FName ActionName, enum class EInputEvent EventType, bool bConsume, struct FDelegate Callback); // Function UMG.UserWidget.ListenForInputAction // (Final|Native|Protected|BlueprintCallable) // @ game+0x913af30
	bool IsPlayingAnimation(); // Function UMG.UserWidget.IsPlayingAnimation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913ae50
	bool IsListeningForInputAction(struct FName ActionName); // Function UMG.UserWidget.IsListeningForInputAction // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x913ae6c
	bool IsInViewport(); // Function UMG.UserWidget.IsInViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913ac10
	bool IsInteractable(); // Function UMG.UserWidget.IsInteractable // (BlueprintCosmetic|Event|Public|BlueprintEvent|Const) // @ game+0xda071c
	bool IsAnyAnimationPlaying(); // Function UMG.UserWidget.IsAnyAnimationPlaying // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913ae50
	bool IsAnimationPlayingForward(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.IsAnimationPlayingForward // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x913ad94
	bool IsAnimationPlaying(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.IsAnimationPlaying // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2435f98
	struct APawn* GetOwningPlayerPawn(); // Function UMG.UserWidget.GetOwningPlayerPawn // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c4730
	struct APlayerCameraManager* GetOwningPlayerCameraManager(); // Function UMG.UserWidget.GetOwningPlayerCameraManager // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913ac44
	bool GetIsVisible(); // Function UMG.UserWidget.GetIsVisible // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913ac10
	struct TArray<struct UUserWidgetExtension*> GetExtensions(struct UUserWidgetExtension* ExtensionType); // Function UMG.UserWidget.GetExtensions // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913ab48
	struct UUserWidgetExtension* GetExtension(struct UUserWidgetExtension* ExtensionType); // Function UMG.UserWidget.GetExtension // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913aab8
	float GetAnimationCurrentTime(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.GetAnimationCurrentTime // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913a8ec
	struct FAnchors GetAnchorsInViewport(); // Function UMG.UserWidget.GetAnchorsInViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913a8c4
	struct FVector2D GetAlignmentInViewport(); // Function UMG.UserWidget.GetAlignmentInViewport // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x913a8a8
	void FlushAnimations(); // Function UMG.UserWidget.FlushAnimations // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x913a884
	void Destruct(); // Function UMG.UserWidget.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	void Construct(); // Function UMG.UserWidget.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda071c
	void CancelLatentActions(); // Function UMG.UserWidget.CancelLatentActions // (Final|Native|Public|BlueprintCallable) // @ game+0x913a7ac
	void BindToAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x206b640
	void BindToAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x2080ad4
	void BindToAnimationEvent(struct UWidgetAnimation* Animation, struct FDelegate Delegate, enum class EWidgetAnimationEvent AnimationEvent, struct FName UserTag); // Function UMG.UserWidget.BindToAnimationEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x913a65c
	void AddToViewport(int32_t ZOrder); // Function UMG.UserWidget.AddToViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x913a5d8
	bool AddToPlayerScreen(int32_t ZOrder); // Function UMG.UserWidget.AddToPlayerScreen // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x913a54c
	struct UUserWidgetExtension* AddExtension(struct UUserWidgetExtension* InExtensionType); // Function UMG.UserWidget.AddExtension // (Final|Native|Public|BlueprintCallable) // @ game+0x913a4bc
};

// Class UMG.PanelWidget
// Size: 0x160 (Inherited: 0x148)
struct UPanelWidget : UWidget {
	struct TArray<struct UPanelSlot*> Slots; // 0x148(0x10)
	char pad_158[0x8]; // 0x158(0x08)

	bool RemoveChildAt(int32_t Index); // Function UMG.PanelWidget.RemoveChildAt // (Final|Native|Public|BlueprintCallable) // @ game+0x9134464
	bool RemoveChild(struct UWidget* Content); // Function UMG.PanelWidget.RemoveChild // (Final|Native|Public|BlueprintCallable) // @ game+0x28016b0
	bool HasChild(struct UWidget* Content); // Function UMG.PanelWidget.HasChild // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91342e0
	bool HasAnyChildren(); // Function UMG.PanelWidget.HasAnyChildren // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5cb7838
	int32_t GetChildrenCount(); // Function UMG.PanelWidget.GetChildrenCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1f25884
	int32_t GetChildIndex(struct UWidget* Content); // Function UMG.PanelWidget.GetChildIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9133f84
	struct UWidget* GetChildAt(int32_t Index); // Function UMG.PanelWidget.GetChildAt // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9133ef8
	struct TArray<struct UWidget*> GetAllChildren(); // Function UMG.PanelWidget.GetAllChildren // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x159b500
	void ClearChildren(); // Function UMG.PanelWidget.ClearChildren // (Native|Public|BlueprintCallable) // @ game+0x16fbf20
	struct UPanelSlot* AddChild(struct UWidget* Content); // Function UMG.PanelWidget.AddChild // (Final|Native|Public|BlueprintCallable) // @ game+0x2162ea4
};

// Class UMG.WidgetSwitcher
// Size: 0x178 (Inherited: 0x160)
struct UWidgetSwitcher : UPanelWidget {
	int32_t ActiveWidgetIndex; // 0x160(0x04)
	char pad_164[0x14]; // 0x164(0x14)

	void SetActiveWidgetIndex(int32_t Index); // Function UMG.WidgetSwitcher.SetActiveWidgetIndex // (Native|Public|BlueprintCallable) // @ game+0x133e6fc
	void SetActiveWidget(struct UWidget* Widget); // Function UMG.WidgetSwitcher.SetActiveWidget // (Native|Public|BlueprintCallable) // @ game+0x16d7fe4
	struct UWidget* GetWidgetAtIndex(int32_t Index); // Function UMG.WidgetSwitcher.GetWidgetAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9168da8
	int32_t GetNumWidgets(); // Function UMG.WidgetSwitcher.GetNumWidgets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9168d84
	int32_t GetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.GetActiveWidgetIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9168d60
	struct UWidget* GetActiveWidget(); // Function UMG.WidgetSwitcher.GetActiveWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9168d24
};

// Class UMG.ContentWidget
// Size: 0x160 (Inherited: 0x160)
struct UContentWidget : UPanelWidget {

	struct UPanelSlot* SetContent(struct UWidget* Content); // Function UMG.ContentWidget.SetContent // (Final|Native|Public|BlueprintCallable) // @ game+0x913077c
	struct UPanelSlot* GetContentSlot(); // Function UMG.ContentWidget.GetContentSlot // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1fe23d8
	struct UWidget* GetContent(); // Function UMG.ContentWidget.GetContent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x912fb54
};

// Class UMG.Border
// Size: 0x2d0 (Inherited: 0x160)
struct UBorder : UContentWidget {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x160(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x161(0x01)
	char bShowEffectWhenDisabled : 1; // 0x162(0x01)
	char pad_162_1 : 7; // 0x162(0x01)
	char pad_163[0x1]; // 0x163(0x01)
	struct FLinearColor ContentColorAndOpacity; // 0x164(0x10)
	struct FDelegate ContentColorAndOpacityDelegate; // 0x174(0x0c)
	struct FMargin Padding; // 0x180(0x10)
	struct FSlateBrush Background; // 0x190(0xc0)
	struct FDelegate BackgroundDelegate; // 0x250(0x0c)
	struct FLinearColor BrushColor; // 0x25c(0x10)
	struct FDelegate BrushColorDelegate; // 0x26c(0x0c)
	struct FVector2D DesiredSizeScale; // 0x278(0x10)
	bool bFlipForRightToLeftFlowDirection; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	struct FDelegate OnMouseButtonDownEvent; // 0x28c(0x0c)
	struct FDelegate OnMouseButtonUpEvent; // 0x298(0x0c)
	struct FDelegate OnMouseMoveEvent; // 0x2a4(0x0c)
	struct FDelegate OnMouseDoubleClickEvent; // 0x2b0(0x0c)
	char pad_2BC[0x14]; // 0x2bc(0x14)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.Border.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x22353ac
	void SetShowEffectWhenDisabled(bool bInShowEffectWhenDisabled); // Function UMG.Border.SetShowEffectWhenDisabled // (Final|Native|Public|BlueprintCallable) // @ game+0x912e6e4
	void SetPadding(struct FMargin InPadding); // Function UMG.Border.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x176eda4
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.Border.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x912dd8c
	void SetDesiredSizeScale(struct FVector2D InScale); // Function UMG.Border.SetDesiredSizeScale // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x912dc00
	void SetContentColorAndOpacity(struct FLinearColor InContentColorAndOpacity); // Function UMG.Border.SetContentColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x12c9ef0
	void SetBrushFromTexture(struct UTexture2D* Texture); // Function UMG.Border.SetBrushFromTexture // (Final|Native|Public|BlueprintCallable) // @ game+0x912d8a8
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // Function UMG.Border.SetBrushFromMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x1e985cc
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // Function UMG.Border.SetBrushFromAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x912d828
	void SetBrushColor(struct FLinearColor InBrushColor); // Function UMG.Border.SetBrushColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x12c9930
	void SetBrush(struct FSlateBrush& InBrush); // Function UMG.Border.SetBrush // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1d7dce0
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Border.GetDynamicMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x1e7f968
};

// Class UMG.DynamicEntryBoxBase
// Size: 0x228 (Inherited: 0x148)
struct UDynamicEntryBoxBase : UWidget {
	enum class EDynamicBoxType EntryBoxType; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct FVector2D EntrySpacing; // 0x150(0x10)
	struct TArray<struct FVector2D> SpacingPattern; // 0x160(0x10)
	struct FSlateChildSize EntrySizeRule; // 0x170(0x08)
	enum class EHorizontalAlignment EntryHorizontalAlignment; // 0x178(0x01)
	enum class EVerticalAlignment EntryVerticalAlignment; // 0x179(0x01)
	char pad_17A[0x2]; // 0x17a(0x02)
	int32_t MaxElementSize; // 0x17c(0x04)
	struct FRadialBoxSettings RadialBoxSettings; // 0x180(0x10)
	char pad_190[0x10]; // 0x190(0x10)
	struct FUserWidgetPool EntryWidgetPool; // 0x1a0(0x88)

	void SetRadialSettings(struct FRadialBoxSettings& InSettings); // Function UMG.DynamicEntryBoxBase.SetRadialSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x913114c
	void SetEntrySpacing(struct FVector2D& InEntrySpacing); // Function UMG.DynamicEntryBoxBase.SetEntrySpacing // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x913080c
	int32_t GetNumEntries(); // Function UMG.DynamicEntryBoxBase.GetNumEntries // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24d8c28
	struct TArray<struct UUserWidget*> GetAllEntries(); // Function UMG.DynamicEntryBoxBase.GetAllEntries // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1655504
};

// Class UMG.Button
// Size: 0x5a0 (Inherited: 0x160)
struct UButton : UContentWidget {
	struct FButtonStyle WidgetStyle; // 0x160(0x3b0)
	struct FLinearColor ColorAndOpacity; // 0x510(0x10)
	struct FLinearColor BackgroundColor; // 0x520(0x10)
	enum class EButtonClickMethod ClickMethod; // 0x530(0x01)
	enum class EButtonTouchMethod TouchMethod; // 0x531(0x01)
	enum class EButtonPressMethod PressMethod; // 0x532(0x01)
	bool IsFocusable; // 0x533(0x01)
	char pad_534[0x4]; // 0x534(0x04)
	struct FMulticastInlineDelegate OnClicked; // 0x538(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x548(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x558(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x568(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x578(0x10)
	char pad_588[0x18]; // 0x588(0x18)

	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Function UMG.Button.SetTouchMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x912e8c8
	void SetStyle(struct FButtonStyle& InStyle); // Function UMG.Button.SetStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x912e824
	void SetPressMethod(enum class EButtonPressMethod InPressMethod); // Function UMG.Button.SetPressMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x912e558
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Button.SetColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x912dad0
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // Function UMG.Button.SetClickMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x912d9d0
	void SetBackgroundColor(struct FLinearColor InBackgroundColor); // Function UMG.Button.SetBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x912d67c
	bool IsPressed(); // Function UMG.Button.IsPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x912d3f8
};

// Class UMG.TextLayoutWidget
// Size: 0x168 (Inherited: 0x148)
struct UTextLayoutWidget : UWidget {
	struct FShapedTextOptions ShapedTextOptions; // 0x148(0x03)
	enum class ETextJustify Justification; // 0x14b(0x01)
	enum class ETextWrappingPolicy WrappingPolicy; // 0x14c(0x01)
	char AutoWrapText : 1; // 0x14d(0x01)
	char pad_14D_1 : 7; // 0x14d(0x01)
	char pad_14E[0x2]; // 0x14e(0x02)
	float WrapTextAt; // 0x150(0x04)
	struct FMargin Margin; // 0x154(0x10)
	float LineHeightPercentage; // 0x164(0x04)

	void SetJustification(enum class ETextJustify InJustification); // Function UMG.TextLayoutWidget.SetJustification // (Native|Public|BlueprintCallable) // @ game+0x1db7878
};

// Class UMG.TextBlock
// Size: 0x320 (Inherited: 0x168)
struct UTextBlock : UTextLayoutWidget {
	struct FText Text; // 0x168(0x18)
	struct FDelegate TextDelegate; // 0x180(0x0c)
	struct FSlateColor ColorAndOpacity; // 0x18c(0x14)
	struct FDelegate ColorAndOpacityDelegate; // 0x1a0(0x0c)
	char pad_1AC[0x4]; // 0x1ac(0x04)
	struct FSlateFontInfo Font; // 0x1b0(0x58)
	char pad_208[0x8]; // 0x208(0x08)
	struct FSlateBrush StrikeBrush; // 0x210(0xc0)
	struct FVector2D ShadowOffset; // 0x2d0(0x10)
	struct FLinearColor ShadowColorAndOpacity; // 0x2e0(0x10)
	struct FDelegate ShadowColorAndOpacityDelegate; // 0x2f0(0x0c)
	float MinDesiredWidth; // 0x2fc(0x04)
	bool bWrapWithInvalidationPanel; // 0x300(0x01)
	enum class ETextTransformPolicy TextTransformPolicy; // 0x301(0x01)
	enum class ETextOverflowPolicy TextOverflowPolicy; // 0x302(0x01)
	bool bSimpleTextMode; // 0x303(0x01)
	char pad_304[0x1c]; // 0x304(0x1c)

	void SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy); // Function UMG.TextBlock.SetTextTransformPolicy // (Final|Native|Public|BlueprintCallable) // @ game+0x913c934
	void SetTextOverflowPolicy(enum class ETextOverflowPolicy InOverflowPolicy); // Function UMG.TextBlock.SetTextOverflowPolicy // (Final|Native|Public|BlueprintCallable) // @ game+0x913c8ac
	void SetText(struct FText InText); // Function UMG.TextBlock.SetText // (Native|Public|BlueprintCallable) // @ game+0x13abff0
	void SetStrikeBrush(struct FSlateBrush InStrikeBrush); // Function UMG.TextBlock.SetStrikeBrush // (Final|Native|Public|BlueprintCallable) // @ game+0x913c804
	void SetShadowOffset(struct FVector2D InShadowOffset); // Function UMG.TextBlock.SetShadowOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x913c6f0
	void SetShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function UMG.TextBlock.SetShadowColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x913c668
	void SetOpacity(float InOpacity); // Function UMG.TextBlock.SetOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x913c384
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.TextBlock.SetMinDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x913c168
	void SetFontOutlineMaterial(struct UMaterialInterface* InMaterial); // Function UMG.TextBlock.SetFontOutlineMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x913bda8
	void SetFontMaterial(struct UMaterialInterface* InMaterial); // Function UMG.TextBlock.SetFontMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x913bcfc
	void SetFont(struct FSlateFontInfo InFontInfo); // Function UMG.TextBlock.SetFont // (Final|Native|Public|BlueprintCallable) // @ game+0x17facf0
	void SetColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function UMG.TextBlock.SetColorAndOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x1e92e3c
	void SetAutoWrapText(bool InAutoTextWrap); // Function UMG.TextBlock.SetAutoWrapText // (Final|Native|Public|BlueprintCallable) // @ game+0x913bac4
	struct FText GetText(); // Function UMG.TextBlock.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2402424
	struct UMaterialInstanceDynamic* GetDynamicOutlineMaterial(); // Function UMG.TextBlock.GetDynamicOutlineMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x913aa00
	struct UMaterialInstanceDynamic* GetDynamicFontMaterial(); // Function UMG.TextBlock.GetDynamicFontMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x1ed0124
};

// Class UMG.ScrollBox
// Size: 0xbc0 (Inherited: 0x160)
struct UScrollBox : UPanelWidget {
	struct FScrollBoxStyle WidgetStyle; // 0x160(0x310)
	struct FScrollBarStyle WidgetBarStyle; // 0x470(0x6e0)
	enum class EOrientation Orientation; // 0xb50(0x01)
	enum class ESlateVisibility ScrollBarVisibility; // 0xb51(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0xb52(0x01)
	char pad_B53[0x5]; // 0xb53(0x05)
	struct FVector2D ScrollbarThickness; // 0xb58(0x10)
	struct FMargin ScrollbarPadding; // 0xb68(0x10)
	bool AlwaysShowScrollbar; // 0xb78(0x01)
	bool AlwaysShowScrollbarTrack; // 0xb79(0x01)
	bool AllowOverscroll; // 0xb7a(0x01)
	bool BackPadScrolling; // 0xb7b(0x01)
	bool FrontPadScrolling; // 0xb7c(0x01)
	bool bAnimateWheelScrolling; // 0xb7d(0x01)
	enum class EDescendantScrollDestination NavigationDestination; // 0xb7e(0x01)
	char pad_B7F[0x1]; // 0xb7f(0x01)
	float NavigationScrollPadding; // 0xb80(0x04)
	enum class EScrollWhenFocusChanges ScrollWhenFocusChanges; // 0xb84(0x01)
	bool bAllowRightClickDragScrolling; // 0xb85(0x01)
	char pad_B86[0x2]; // 0xb86(0x02)
	float WheelScrollMultiplier; // 0xb88(0x04)
	char pad_B8C[0x4]; // 0xb8c(0x04)
	struct FMulticastInlineDelegate OnUserScrolled; // 0xb90(0x10)
	char pad_BA0[0x20]; // 0xba0(0x20)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ScrollBox.SetWheelScrollMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x9136c20
	void SetScrollWhenFocusChanges(enum class EScrollWhenFocusChanges NewScrollWhenFocusChanges); // Function UMG.ScrollBox.SetScrollWhenFocusChanges // (Final|Native|Public|BlueprintCallable) // @ game+0x91363ec
	void SetScrollOffset(float NewScrollOffset); // Function UMG.ScrollBox.SetScrollOffset // (Final|Native|Public|BlueprintCallable) // @ game+0x9136368
	void SetScrollBarVisibility(enum class ESlateVisibility NewScrollBarVisibility); // Function UMG.ScrollBox.SetScrollBarVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x235b0c8
	void SetScrollbarThickness(struct FVector2D& NewScrollbarThickness); // Function UMG.ScrollBox.SetScrollbarThickness // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x913650c
	void SetScrollbarPadding(struct FMargin& NewScrollbarPadding); // Function UMG.ScrollBox.SetScrollbarPadding // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x913646c
	void SetOrientation(enum class EOrientation NewOrientation); // Function UMG.ScrollBox.SetOrientation // (Final|Native|Public|BlueprintCallable) // @ game+0x913606c
	void SetNavigationDestination(enum class EDescendantScrollDestination NewNavigationDestination); // Function UMG.ScrollBox.SetNavigationDestination // (Final|Native|Public|BlueprintCallable) // @ game+0x9135fec
	void SetConsumeMouseWheel(enum class EConsumeMouseWheel NewConsumeMouseWheel); // Function UMG.ScrollBox.SetConsumeMouseWheel // (Final|Native|Public|BlueprintCallable) // @ game+0x9135820
	void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling); // Function UMG.ScrollBox.SetAnimateWheelScrolling // (Final|Native|Public|BlueprintCallable) // @ game+0x9135790
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar); // Function UMG.ScrollBox.SetAlwaysShowScrollbar // (Final|Native|Public|BlueprintCallable) // @ game+0x9135700
	void SetAllowOverscroll(bool NewAllowOverscroll); // Function UMG.ScrollBox.SetAllowOverscroll // (Final|Native|Public|BlueprintCallable) // @ game+0x9135668
	void ScrollWidgetIntoView(struct UWidget* WidgetToFind, bool AnimateScroll, enum class EDescendantScrollDestination ScrollDestination, float Padding); // Function UMG.ScrollBox.ScrollWidgetIntoView // (Final|Native|Public|BlueprintCallable) // @ game+0x9135514
	void ScrollToStart(); // Function UMG.ScrollBox.ScrollToStart // (Final|Native|Public|BlueprintCallable) // @ game+0x9135500
	void ScrollToEnd(); // Function UMG.ScrollBox.ScrollToEnd // (Final|Native|Public|BlueprintCallable) // @ game+0x91354ec
	float GetViewOffsetFraction(); // Function UMG.ScrollBox.GetViewOffsetFraction // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9135468
	float GetViewFraction(); // Function UMG.ScrollBox.GetViewFraction // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4f15e20
	float GetScrollOffsetOfEnd(); // Function UMG.ScrollBox.GetScrollOffsetOfEnd // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91353a4
	float GetScrollOffset(); // Function UMG.ScrollBox.GetScrollOffset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9135384
	void EndInertialScrolling(); // Function UMG.ScrollBox.EndInertialScrolling // (Final|Native|Public|BlueprintCallable) // @ game+0x913524c
};

// Class UMG.Image
// Size: 0x280 (Inherited: 0x148)
struct UImage : UWidget {
	char pad_148[0x8]; // 0x148(0x08)
	struct FSlateBrush Brush; // 0x150(0xc0)
	struct FDelegate BrushDelegate; // 0x210(0x0c)
	struct FLinearColor ColorAndOpacity; // 0x21c(0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x22c(0x0c)
	bool bFlipForRightToLeftFlowDirection; // 0x238(0x01)
	char pad_239[0x3]; // 0x239(0x03)
	struct FDelegate OnMouseButtonDownEvent; // 0x23c(0x0c)
	char pad_248[0x38]; // 0x248(0x38)

	void SetOpacity(float InOpacity); // Function UMG.Image.SetOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x1c9cf4c
	void SetDesiredSizeOverride(struct FVector2D DesiredSize); // Function UMG.Image.SetDesiredSizeOverride // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1bb04b0
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Image.SetColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1c9d598
	void SetBrushTintColor(struct FSlateColor TintColor); // Function UMG.Image.SetBrushTintColor // (Final|Native|Public|BlueprintCallable) // @ game+0x20f50ec
	void SetBrushResourceObject(struct UObject* ResourceObject); // Function UMG.Image.SetBrushResourceObject // (Final|Native|Public|BlueprintCallable) // @ game+0x9132afc
	void SetBrushFromTextureDynamic(struct UTexture2DDynamic* Texture, bool bMatchSize); // Function UMG.Image.SetBrushFromTextureDynamic // (Native|Public|BlueprintCallable) // @ game+0x9132a30
	void SetBrushFromTexture(struct UTexture2D* Texture, bool bMatchSize); // Function UMG.Image.SetBrushFromTexture // (Native|Public|BlueprintCallable) // @ game+0x16dd7b0
	void SetBrushFromSoftTexture(struct TSoftObjectPtr<UTexture2D> SoftTexture, bool bMatchSize); // Function UMG.Image.SetBrushFromSoftTexture // (Native|Public|BlueprintCallable) // @ game+0x2244440
	void SetBrushFromSoftMaterial(struct TSoftObjectPtr<UMaterialInterface> SoftMaterial); // Function UMG.Image.SetBrushFromSoftMaterial // (Native|Public|BlueprintCallable) // @ game+0x148a45c
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // Function UMG.Image.SetBrushFromMaterial // (Native|Public|BlueprintCallable) // @ game+0x16d7fe4
	void SetBrushFromAtlasInterface(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, bool bMatchSize); // Function UMG.Image.SetBrushFromAtlasInterface // (Native|Public|BlueprintCallable) // @ game+0x1463df4
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // Function UMG.Image.SetBrushFromAsset // (Native|Public|BlueprintCallable) // @ game+0x91329ac
	void SetBrush(struct FSlateBrush& InBrush); // Function UMG.Image.SetBrush // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x16dd6bc
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Image.GetDynamicMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x1f5618c
};

// Class UMG.ListViewBase
// Size: 0x260 (Inherited: 0x148)
struct UListViewBase : UWidget {
	struct FMulticastInlineDelegate BP_OnEntryGenerated; // 0x148(0x10)
	char pad_158[0x10]; // 0x158(0x10)
	struct UUserWidget* EntryWidgetClass; // 0x168(0x08)
	float WheelScrollMultiplier; // 0x170(0x04)
	bool bEnableScrollAnimation; // 0x174(0x01)
	bool AllowOverscroll; // 0x175(0x01)
	bool bEnableRightClickScrolling; // 0x176(0x01)
	bool bEnableFixedLineOffset; // 0x177(0x01)
	float FixedLineScrollOffset; // 0x178(0x04)
	bool bAllowDragging; // 0x17c(0x01)
	char pad_17D[0x3]; // 0x17d(0x03)
	struct FMulticastInlineDelegate BP_OnEntryReleased; // 0x180(0x10)
	struct FUserWidgetPool EntryWidgetPool; // 0x190(0x88)
	char pad_218[0x48]; // 0x218(0x48)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ListViewBase.SetWheelScrollMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x9134da8
	void SetScrollOffset(float InScrollOffset); // Function UMG.ListViewBase.SetScrollOffset // (Final|Native|Public|BlueprintCallable) // @ game+0x16d8c58
	void SetScrollBarVisibility(enum class ESlateVisibility InVisibility); // Function UMG.ListViewBase.SetScrollBarVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x1c4ae9c
	void ScrollToTop(); // Function UMG.ListViewBase.ScrollToTop // (Final|Native|Public|BlueprintCallable) // @ game+0x9134518
	void ScrollToBottom(); // Function UMG.ListViewBase.ScrollToBottom // (Final|Native|Public|BlueprintCallable) // @ game+0x9134504
	void RequestRefresh(); // Function UMG.ListViewBase.RequestRefresh // (Final|Native|Public|BlueprintCallable) // @ game+0x91344f0
	void RegenerateAllEntries(); // Function UMG.ListViewBase.RegenerateAllEntries // (Final|Native|Public|BlueprintCallable) // @ game+0x9134450
	float GetScrollOffset(); // Function UMG.ListViewBase.GetScrollOffset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9134194
	struct TArray<struct UUserWidget*> GetDisplayedEntryWidgets(); // Function UMG.ListViewBase.GetDisplayedEntryWidgets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9134014
};

// Class UMG.ListView
// Size: 0xb80 (Inherited: 0x260)
struct UListView : UListViewBase {
	char pad_260[0xe0]; // 0x260(0xe0)
	struct FTableViewStyle WidgetStyle; // 0x340(0xd0)
	struct FScrollBarStyle ScrollBarStyle; // 0x410(0x6e0)
	enum class EOrientation Orientation; // 0xaf0(0x01)
	enum class ESelectionMode SelectionMode; // 0xaf1(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0xaf2(0x01)
	bool bClearSelectionOnClick; // 0xaf3(0x01)
	bool bIsFocusable; // 0xaf4(0x01)
	char pad_AF5[0x3]; // 0xaf5(0x03)
	float EntrySpacing; // 0xaf8(0x04)
	bool bReturnFocusToSelection; // 0xafc(0x01)
	char pad_AFD[0x3]; // 0xafd(0x03)
	struct TArray<struct UObject*> ListItems; // 0xb00(0x10)
	char pad_B10[0x10]; // 0xb10(0x10)
	struct FMulticastInlineDelegate BP_OnEntryInitialized; // 0xb20(0x10)
	struct FMulticastInlineDelegate BP_OnItemClicked; // 0xb30(0x10)
	struct FMulticastInlineDelegate BP_OnItemDoubleClicked; // 0xb40(0x10)
	struct FMulticastInlineDelegate BP_OnItemIsHoveredChanged; // 0xb50(0x10)
	struct FMulticastInlineDelegate BP_OnItemSelectionChanged; // 0xb60(0x10)
	struct FMulticastInlineDelegate BP_OnItemScrolledIntoView; // 0xb70(0x10)

	void SetSelectionMode(enum class ESelectionMode SelectionMode); // Function UMG.ListView.SetSelectionMode // (Final|Native|Public|BlueprintCallable) // @ game+0x91336f0
	void SetSelectedIndex(int32_t Index); // Function UMG.ListView.SetSelectedIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x9133550
	void ScrollIndexIntoView(int32_t Index); // Function UMG.ListView.ScrollIndexIntoView // (Final|Native|Public|BlueprintCallable) // @ game+0x913281c
	void RemoveItem(struct UObject* Item); // Function UMG.ListView.RemoveItem // (Final|Native|Public|BlueprintCallable) // @ game+0x913279c
	void OnListItemOuterEndPlayed(struct AActor* ItemOuter, enum class EEndPlayReason EndPlayReason); // Function UMG.ListView.OnListItemOuterEndPlayed // (Final|Native|Protected) // @ game+0x91326d8
	void OnListItemEndPlayed(struct AActor* Item, enum class EEndPlayReason EndPlayReason); // Function UMG.ListView.OnListItemEndPlayed // (Final|Native|Protected) // @ game+0x9132618
	void NavigateToIndex(int32_t Index); // Function UMG.ListView.NavigateToIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x9132598
	bool IsRefreshPending(); // Function UMG.ListView.IsRefreshPending // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9132564
	int32_t GetNumItems(); // Function UMG.ListView.GetNumItems // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2576dfc
	struct TArray<struct UObject*> GetListItems(); // Function UMG.ListView.GetListItems // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913233c
	struct UObject* GetItemAt(int32_t Index); // Function UMG.ListView.GetItemAt // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9132220
	int32_t GetIndexForItem(struct UObject* Item); // Function UMG.ListView.GetIndexForItem // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91320fc
	void ClearListItems(); // Function UMG.ListView.ClearListItems // (Final|Native|Public|BlueprintCallable) // @ game+0x91320b0
	void BP_SetSelectedItem(struct UObject* Item); // Function UMG.ListView.BP_SetSelectedItem // (Final|Native|Private|BlueprintCallable) // @ game+0x9132028
	void BP_SetListItems(struct TArray<struct UObject*>& InListItems); // Function UMG.ListView.BP_SetListItems // (Final|Native|Private|HasOutParms|BlueprintCallable) // @ game+0x9131f8c
	void BP_SetItemSelection(struct UObject* Item, bool bSelected); // Function UMG.ListView.BP_SetItemSelection // (Final|Native|Private|BlueprintCallable) // @ game+0x9131ec8
	void BP_ScrollItemIntoView(struct UObject* Item); // Function UMG.ListView.BP_ScrollItemIntoView // (Final|Native|Private|BlueprintCallable) // @ game+0x9131e3c
	void BP_NavigateToItem(struct UObject* Item); // Function UMG.ListView.BP_NavigateToItem // (Final|Native|Private|BlueprintCallable) // @ game+0x9131db0
	bool BP_IsItemVisible(struct UObject* Item); // Function UMG.ListView.BP_IsItemVisible // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x9131d24
	bool BP_GetSelectedItems(struct TArray<struct UObject*>& Items); // Function UMG.ListView.BP_GetSelectedItems // (Final|Native|Private|HasOutParms|BlueprintCallable|Const) // @ game+0x9131c70
	struct UObject* BP_GetSelectedItem(); // Function UMG.ListView.BP_GetSelectedItem // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x9131c24
	int32_t BP_GetNumItemsSelected(); // Function UMG.ListView.BP_GetNumItemsSelected // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x9131bf8
	void BP_ClearSelection(); // Function UMG.ListView.BP_ClearSelection // (Final|Native|Private|BlueprintCallable) // @ game+0x9131bdc
	void BP_CancelScrollIntoView(); // Function UMG.ListView.BP_CancelScrollIntoView // (Final|Native|Private|BlueprintCallable) // @ game+0x9131ba8
	void AddItem(struct UObject* Item); // Function UMG.ListView.AddItem // (Final|Native|Public|BlueprintCallable) // @ game+0x9131b28
};

// Class UMG.PanelSlot
// Size: 0x38 (Inherited: 0x28)
struct UPanelSlot : UVisual {
	struct UPanelWidget* Parent; // 0x28(0x08)
	struct UWidget* Content; // 0x30(0x08)
};

// Class UMG.RichTextBlock
// Size: 0x800 (Inherited: 0x168)
struct URichTextBlock : UTextLayoutWidget {
	struct FText Text; // 0x168(0x18)
	struct UDataTable* TextStyleSet; // 0x180(0x08)
	struct TArray<struct URichTextBlockDecorator*> DecoratorClasses; // 0x188(0x10)
	bool bOverrideDefaultStyle; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct FTextBlockStyle DefaultTextStyleOverride; // 0x1a0(0x310)
	float MinDesiredWidth; // 0x4b0(0x04)
	enum class ETextTransformPolicy TextTransformPolicy; // 0x4b4(0x01)
	enum class ETextOverflowPolicy TextOverflowPolicy; // 0x4b5(0x01)
	char pad_4B6[0xa]; // 0x4b6(0x0a)
	struct FTextBlockStyle DefaultTextStyle; // 0x4c0(0x310)
	struct TArray<struct URichTextBlockDecorator*> InstanceDecorators; // 0x7d0(0x10)
	char pad_7E0[0x20]; // 0x7e0(0x20)

	void SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy); // Function UMG.RichTextBlock.SetTextTransformPolicy // (Final|Native|Public|BlueprintCallable) // @ game+0x9136a1c
	void SetTextStyleSet(struct UDataTable* NewTextStyleSet); // Function UMG.RichTextBlock.SetTextStyleSet // (Final|Native|Public|BlueprintCallable) // @ game+0x913699c
	void SetTextOverflowPolicy(enum class ETextOverflowPolicy InOverflowPolicy); // Function UMG.RichTextBlock.SetTextOverflowPolicy // (Final|Native|Public|BlueprintCallable) // @ game+0x9136908
	void SetText(struct FText& InText); // Function UMG.RichTextBlock.SetText // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1ebc2c4
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.RichTextBlock.SetMinDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x9135f68
	void SetDefaultTextStyle(struct FTextBlockStyle& InDefaultTextStyle); // Function UMG.RichTextBlock.SetDefaultTextStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9135b30
	void SetDefaultStrikeBrush(struct FSlateBrush& InStrikeBrush); // Function UMG.RichTextBlock.SetDefaultStrikeBrush // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9135a68
	void SetDefaultShadowOffset(struct FVector2D InShadowOffset); // Function UMG.RichTextBlock.SetDefaultShadowOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x91359d0
	void SetDefaultShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x9135938
	void SetDefaultMaterial(struct UMaterialInterface* InMaterial); // Function UMG.RichTextBlock.SetDefaultMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x91358a4
	void SetDefaultFont(struct FSlateFontInfo InFontInfo); // Function UMG.RichTextBlock.SetDefaultFont // (Final|Native|Public|BlueprintCallable) // @ game+0x20dff4c
	void SetDefaultColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultColorAndOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x20e00b4
	void SetAutoWrapText(bool InAutoTextWrap); // Function UMG.RichTextBlock.SetAutoWrapText // (Final|Native|Public|BlueprintCallable) // @ game+0x232b160
	void RefreshTextLayout(); // Function UMG.RichTextBlock.RefreshTextLayout // (Final|Native|Public|BlueprintCallable) // @ game+0x91354a0
	struct UDataTable* GetTextStyleSet(); // Function UMG.RichTextBlock.GetTextStyleSet // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9135450
	struct FText GetText(); // Function UMG.RichTextBlock.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91353cc
	struct UMaterialInstanceDynamic* GetDefaultDynamicMaterial(); // Function UMG.RichTextBlock.GetDefaultDynamicMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x9135334
	struct URichTextBlockDecorator* GetDecoratorByClass(struct URichTextBlockDecorator* DecoratorClass); // Function UMG.RichTextBlock.GetDecoratorByClass // (Final|Native|Public|BlueprintCallable) // @ game+0x9135260
	void ClearAllDefaultStyleOverrides(); // Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides // (Final|Native|Public) // @ game+0x9135218
};

// Class UMG.TileView
// Size: 0xba0 (Inherited: 0xb80)
struct UTileView : UListView {
	float EntryHeight; // 0xb80(0x04)
	float EntryWidth; // 0xb84(0x04)
	enum class EListItemAlignment TileAlignment; // 0xb88(0x01)
	bool bWrapHorizontalNavigation; // 0xb89(0x01)
	char pad_B8A[0x16]; // 0xb8a(0x16)

	void SetEntryWidth(float NewWidth); // Function UMG.TileView.SetEntryWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x913bc78
	void SetEntryHeight(float NewHeight); // Function UMG.TileView.SetEntryHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x913bbf4
	float GetEntryWidth(); // Function UMG.TileView.GetEntryWidth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913aaa0
	float GetEntryHeight(); // Function UMG.TileView.GetEntryHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913aa88
};

// Class UMG.TreeView
// Size: 0xbe0 (Inherited: 0xb80)
struct UTreeView : UListView {
	char pad_B80[0x10]; // 0xb80(0x10)
	struct FDelegate BP_OnGetItemChildren; // 0xb90(0x0c)
	char pad_B9C[0x4]; // 0xb9c(0x04)
	struct FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0xba0(0x10)
	char pad_BB0[0x30]; // 0xbb0(0x30)

	void SetItemExpansion(struct UObject* Item, bool bExpandItem); // Function UMG.TreeView.SetItemExpansion // (Final|Native|Public|BlueprintCallable) // @ game+0x913bf90
	void ExpandAll(); // Function UMG.TreeView.ExpandAll // (Final|Native|Public|BlueprintCallable) // @ game+0x913a814
	void CollapseAll(); // Function UMG.TreeView.CollapseAll // (Final|Native|Public|BlueprintCallable) // @ game+0x913a7c0
};

// Class UMG.Overlay
// Size: 0x170 (Inherited: 0x160)
struct UOverlay : UPanelWidget {
	char pad_160[0x10]; // 0x160(0x10)

	struct UOverlaySlot* AddChildToOverlay(struct UWidget* Content); // Function UMG.Overlay.AddChildToOverlay // (Final|Native|Public|BlueprintCallable) // @ game+0x2546c98
};

// Class UMG.OverlaySlot
// Size: 0x58 (Inherited: 0x38)
struct UOverlaySlot : UPanelSlot {
	char pad_38[0x8]; // 0x38(0x08)
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.OverlaySlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x20bb15c
	void SetPadding(struct FMargin InPadding); // Function UMG.OverlaySlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x2094588
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.OverlaySlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x210c76c
};

// Class UMG.SizeBox
// Size: 0x198 (Inherited: 0x160)
struct USizeBox : UContentWidget {
	char pad_160[0x10]; // 0x160(0x10)
	float WidthOverride; // 0x170(0x04)
	float HeightOverride; // 0x174(0x04)
	float MinDesiredWidth; // 0x178(0x04)
	float MinDesiredHeight; // 0x17c(0x04)
	float MaxDesiredWidth; // 0x180(0x04)
	float MaxDesiredHeight; // 0x184(0x04)
	float MinAspectRatio; // 0x188(0x04)
	float MaxAspectRatio; // 0x18c(0x04)
	char bOverride_WidthOverride : 1; // 0x190(0x01)
	char bOverride_HeightOverride : 1; // 0x190(0x01)
	char bOverride_MinDesiredWidth : 1; // 0x190(0x01)
	char bOverride_MinDesiredHeight : 1; // 0x190(0x01)
	char bOverride_MaxDesiredWidth : 1; // 0x190(0x01)
	char bOverride_MaxDesiredHeight : 1; // 0x190(0x01)
	char bOverride_MinAspectRatio : 1; // 0x190(0x01)
	char bOverride_MaxAspectRatio : 1; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)

	void SetWidthOverride(float InWidthOverride); // Function UMG.SizeBox.SetWidthOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x16360d8
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.SizeBox.SetMinDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x163600c
	void SetMinDesiredHeight(float InMinDesiredHeight); // Function UMG.SizeBox.SetMinDesiredHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x2258580
	void SetMinAspectRatio(float InMinAspectRatio); // Function UMG.SizeBox.SetMinAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x91384b0
	void SetMaxDesiredWidth(float InMaxDesiredWidth); // Function UMG.SizeBox.SetMaxDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x24c594c
	void SetMaxDesiredHeight(float InMaxDesiredHeight); // Function UMG.SizeBox.SetMaxDesiredHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x9138220
	void SetMaxAspectRatio(float InMaxAspectRatio); // Function UMG.SizeBox.SetMaxAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x913819c
	void SetHeightOverride(float InHeightOverride); // Function UMG.SizeBox.SetHeightOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x1635f88
	void ClearWidthOverride(); // Function UMG.SizeBox.ClearWidthOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x1d5b5d4
	void ClearMinDesiredWidth(); // Function UMG.SizeBox.ClearMinDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x9137218
	void ClearMinDesiredHeight(); // Function UMG.SizeBox.ClearMinDesiredHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x9137204
	void ClearMinAspectRatio(); // Function UMG.SizeBox.ClearMinAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x91371f0
	void ClearMaxDesiredWidth(); // Function UMG.SizeBox.ClearMaxDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x91371b4
	void ClearMaxDesiredHeight(); // Function UMG.SizeBox.ClearMaxDesiredHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x91371a0
	void ClearMaxAspectRatio(); // Function UMG.SizeBox.ClearMaxAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x913718c
	void ClearHeightOverride(); // Function UMG.SizeBox.ClearHeightOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x1d65268
};

// Class UMG.WidgetComponent
// Size: 0x6b0 (Inherited: 0x580)
struct UWidgetComponent : UMeshComponent {
	enum class EWidgetSpace Space; // 0x578(0x01)
	enum class EWidgetTimingPolicy TimingPolicy; // 0x579(0x01)
	struct UUserWidget* WidgetClass; // 0x580(0x08)
	struct FIntPoint DrawSize; // 0x588(0x08)
	bool bManuallyRedraw; // 0x590(0x01)
	bool bRedrawRequested; // 0x591(0x01)
	float RedrawTime; // 0x594(0x04)
	char pad_598[0x8]; // 0x598(0x08)
	struct FIntPoint CurrentDrawSize; // 0x5a0(0x08)
	bool bDrawAtDesiredSize; // 0x5a8(0x01)
	char pad_5A9[0x7]; // 0x5a9(0x07)
	struct FVector2D Pivot; // 0x5b0(0x10)
	bool bReceiveHardwareInput; // 0x5c0(0x01)
	bool bWindowFocusable; // 0x5c1(0x01)
	enum class EWindowVisibility WindowVisibility; // 0x5c2(0x01)
	bool bApplyGammaCorrection; // 0x5c3(0x01)
	char pad_5C4[0x4]; // 0x5c4(0x04)
	struct ULocalPlayer* OwnerPlayer; // 0x5c8(0x08)
	struct FLinearColor BackgroundColor; // 0x5d0(0x10)
	struct FLinearColor TintColorAndOpacity; // 0x5e0(0x10)
	float OpacityFromTexture; // 0x5f0(0x04)
	enum class EWidgetBlendMode BlendMode; // 0x5f4(0x01)
	bool bIsTwoSided; // 0x5f5(0x01)
	bool TickWhenOffscreen; // 0x5f6(0x01)
	char pad_5F7[0x1]; // 0x5f7(0x01)
	struct UBodySetup* BodySetup; // 0x5f8(0x08)
	struct UMaterialInterface* TranslucentMaterial; // 0x600(0x08)
	struct UMaterialInterface* TranslucentMaterial_OneSided; // 0x608(0x08)
	struct UMaterialInterface* OpaqueMaterial; // 0x610(0x08)
	struct UMaterialInterface* OpaqueMaterial_OneSided; // 0x618(0x08)
	struct UMaterialInterface* MaskedMaterial; // 0x620(0x08)
	struct UMaterialInterface* MaskedMaterial_OneSided; // 0x628(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0x630(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x638(0x08)
	bool bAddedToScreen; // 0x640(0x01)
	bool bEditTimeUsable; // 0x641(0x01)
	char pad_642[0x2]; // 0x642(0x02)
	struct FName SharedLayerName; // 0x644(0x04)
	int32_t LayerZOrder; // 0x648(0x04)
	enum class EWidgetGeometryMode GeometryMode; // 0x64c(0x01)
	char pad_64D[0x3]; // 0x64d(0x03)
	float CylinderArcAngle; // 0x650(0x04)
	enum class ETickMode TickMode; // 0x654(0x01)
	char pad_655[0x2b]; // 0x655(0x2b)
	struct UUserWidget* Widget; // 0x680(0x08)
	char pad_688[0x28]; // 0x688(0x28)

	void SetWindowVisibility(enum class EWindowVisibility InVisibility); // Function UMG.WidgetComponent.SetWindowVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x91449d8
	void SetWindowFocusable(bool bInWindowFocusable); // Function UMG.WidgetComponent.SetWindowFocusable // (Final|Native|Public|BlueprintCallable) // @ game+0x9144950
	void SetWidgetSpace(enum class EWidgetSpace NewSpace); // Function UMG.WidgetComponent.SetWidgetSpace // (Final|Native|Public|BlueprintCallable) // @ game+0x7577064
	void SetWidget(struct UUserWidget* Widget); // Function UMG.WidgetComponent.SetWidget // (Native|Public|BlueprintCallable) // @ game+0x7624944
	void SetTwoSided(bool bWantTwoSided); // Function UMG.WidgetComponent.SetTwoSided // (Final|Native|Public|BlueprintCallable) // @ game+0x91448b8
	void SetTintColorAndOpacity(struct FLinearColor NewTintColorAndOpacity); // Function UMG.WidgetComponent.SetTintColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x91447fc
	void SetTickWhenOffscreen(bool bWantTickWhenOffscreen); // Function UMG.WidgetComponent.SetTickWhenOffscreen // (Final|Native|Public|BlueprintCallable) // @ game+0x914477c
	void SetTickMode(enum class ETickMode InTickMode); // Function UMG.WidgetComponent.SetTickMode // (Final|Native|Public|BlueprintCallable) // @ game+0x91446fc
	void SetRedrawTime(float InRedrawTime); // Function UMG.WidgetComponent.SetRedrawTime // (Final|Native|Public|BlueprintCallable) // @ game+0x9144678
	void SetPivot(struct FVector2D& InPivot); // Function UMG.WidgetComponent.SetPivot // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x91445ec
	void SetOwnerPlayer(struct ULocalPlayer* LocalPlayer); // Function UMG.WidgetComponent.SetOwnerPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x914456c
	void SetManuallyRedraw(bool bUseManualRedraw); // Function UMG.WidgetComponent.SetManuallyRedraw // (Final|Native|Public|BlueprintCallable) // @ game+0x91444ec
	void SetGeometryMode(enum class EWidgetGeometryMode InGeometryMode); // Function UMG.WidgetComponent.SetGeometryMode // (Final|Native|Public|BlueprintCallable) // @ game+0x9144470
	void SetDrawSize(struct FVector2D Size); // Function UMG.WidgetComponent.SetDrawSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x9144350
	void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize); // Function UMG.WidgetComponent.SetDrawAtDesiredSize // (Final|Native|Public|BlueprintCallable) // @ game+0x91442d0
	void SetCylinderArcAngle(float InCylinderArcAngle); // Function UMG.WidgetComponent.SetCylinderArcAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x914424c
	void SetBackgroundColor(struct FLinearColor NewBackgroundColor); // Function UMG.WidgetComponent.SetBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x9144080
	void RequestRenderUpdate(); // Function UMG.WidgetComponent.RequestRenderUpdate // (Native|Public|BlueprintCallable) // @ game+0x77093f0
	void RequestRedraw(); // Function UMG.WidgetComponent.RequestRedraw // (Native|Public|BlueprintCallable) // @ game+0x9143e1c
	bool IsWidgetVisible(); // Function UMG.WidgetComponent.IsWidgetVisible // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9143660
	enum class EWindowVisibility GetWindowVisiblility(); // Function UMG.WidgetComponent.GetWindowVisiblility // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x74c05e0
	bool GetWindowFocusable(); // Function UMG.WidgetComponent.GetWindowFocusable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x74c0610
	enum class EWidgetSpace GetWidgetSpace(); // Function UMG.WidgetComponent.GetWidgetSpace // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7575808
	struct UUserWidget* GetWidget(); // Function UMG.WidgetComponent.GetWidget // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91435f0
	struct UUserWidget* GetUserWidgetObject(); // Function UMG.WidgetComponent.GetUserWidgetObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x20ec74c
	bool GetTwoSided(); // Function UMG.WidgetComponent.GetTwoSided // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9143420
	bool GetTickWhenOffscreen(); // Function UMG.WidgetComponent.GetTickWhenOffscreen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9143408
	struct UTextureRenderTarget2D* GetRenderTarget(); // Function UMG.WidgetComponent.GetRenderTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91433f0
	float GetRedrawTime(); // Function UMG.WidgetComponent.GetRedrawTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91433d8
	struct FVector2D GetPivot(); // Function UMG.WidgetComponent.GetPivot // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x914330c
	struct ULocalPlayer* GetOwnerPlayer(); // Function UMG.WidgetComponent.GetOwnerPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91432e8
	struct UMaterialInstanceDynamic* GetMaterialInstance(); // Function UMG.WidgetComponent.GetMaterialInstance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91430f0
	bool GetManuallyRedraw(); // Function UMG.WidgetComponent.GetManuallyRedraw // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91430d8
	enum class EWidgetGeometryMode GetGeometryMode(); // Function UMG.WidgetComponent.GetGeometryMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x914300c
	struct FVector2D GetDrawSize(); // Function UMG.WidgetComponent.GetDrawSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x9142fd4
	bool GetDrawAtDesiredSize(); // Function UMG.WidgetComponent.GetDrawAtDesiredSize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2460ac0
	float GetCylinderArcAngle(); // Function UMG.WidgetComponent.GetCylinderArcAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9142fbc
	struct FVector2D GetCurrentDrawSize(); // Function UMG.WidgetComponent.GetCurrentDrawSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x9142f84
};

// Class UMG.EditableText
// Size: 0x4b0 (Inherited: 0x148)
struct UEditableText : UWidget {
	struct FText Text; // 0x148(0x18)
	struct FDelegate TextDelegate; // 0x160(0x0c)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct FText HintText; // 0x170(0x18)
	struct FDelegate HintTextDelegate; // 0x188(0x0c)
	char pad_194[0xc]; // 0x194(0x0c)
	struct FEditableTextStyle WidgetStyle; // 0x1a0(0x2c0)
	bool IsReadOnly; // 0x460(0x01)
	bool IsPassword; // 0x461(0x01)
	char pad_462[0x2]; // 0x462(0x02)
	float MinimumDesiredWidth; // 0x464(0x04)
	bool IsCaretMovedWhenGainFocus; // 0x468(0x01)
	bool SelectAllTextWhenFocused; // 0x469(0x01)
	bool RevertTextOnEscape; // 0x46a(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x46b(0x01)
	bool SelectAllTextOnCommit; // 0x46c(0x01)
	bool AllowContextMenu; // 0x46d(0x01)
	enum class EVirtualKeyboardType KeyboardType; // 0x46e(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x46f(0x01)
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x470(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x471(0x01)
	enum class ETextJustify Justification; // 0x472(0x01)
	enum class ETextOverflowPolicy OverflowPolicy; // 0x473(0x01)
	struct FShapedTextOptions ShapedTextOptions; // 0x474(0x03)
	char pad_477[0x1]; // 0x477(0x01)
	struct FMulticastInlineDelegate OnTextChanged; // 0x478(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x488(0x10)
	char pad_498[0x18]; // 0x498(0x18)

	void SetTextOverflowPolicy(enum class ETextOverflowPolicy InOverflowPolicy); // Function UMG.EditableText.SetTextOverflowPolicy // (Final|Native|Public|BlueprintCallable) // @ game+0x91315c8
	void SetText(struct FText InText); // Function UMG.EditableText.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0x9131490
	void SetMinimumDesiredWidth(float InMinDesiredWidth); // Function UMG.EditableText.SetMinimumDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x91310c8
	void SetJustification(enum class ETextJustify InJustification); // Function UMG.EditableText.SetJustification // (Final|Native|Public|BlueprintCallable) // @ game+0x9130fc8
	void SetIsReadOnly(bool InbIsReadyOnly); // Function UMG.EditableText.SetIsReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x9130ec8
	void SetIsPassword(bool InbIsPassword); // Function UMG.EditableText.SetIsPassword // (Final|Native|Public|BlueprintCallable) // @ game+0x9130dc8
	void SetHintText(struct FText InHintText); // Function UMG.EditableText.SetHintText // (Final|Native|Public|BlueprintCallable) // @ game+0x9130c54
	void SetFontOutlineMaterial(struct UMaterialInterface* InMaterial); // Function UMG.EditableText.SetFontOutlineMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x9130b14
	void SetFontMaterial(struct UMaterialInterface* InMaterial); // Function UMG.EditableText.SetFontMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x9130a84
	void SetFont(struct FSlateFontInfo InFontInfo); // Function UMG.EditableText.SetFont // (Final|Native|Public|BlueprintCallable) // @ game+0x9130974
	void OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0xda071c
	void OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0xda071c
	struct FText GetText(); // Function UMG.EditableText.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x912ffe4
	enum class ETextJustify GetJustification(); // Function UMG.EditableText.GetJustification // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x912fc20
	struct FText GetHintText(); // Function UMG.EditableText.GetHintText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x912fb9c
	struct FSlateFontInfo GetFont(); // Function UMG.EditableText.GetFont // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x912fb80
};

// Class UMG.EditableTextBox
// Size: 0xcb0 (Inherited: 0x148)
struct UEditableTextBox : UWidget {
	struct FText Text; // 0x148(0x18)
	struct FDelegate TextDelegate; // 0x160(0x0c)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct FEditableTextBoxStyle WidgetStyle; // 0x170(0xad0)
	struct FText HintText; // 0xc40(0x18)
	struct FDelegate HintTextDelegate; // 0xc58(0x0c)
	bool IsReadOnly; // 0xc64(0x01)
	bool IsPassword; // 0xc65(0x01)
	char pad_C66[0x2]; // 0xc66(0x02)
	float MinimumDesiredWidth; // 0xc68(0x04)
	bool IsCaretMovedWhenGainFocus; // 0xc6c(0x01)
	bool SelectAllTextWhenFocused; // 0xc6d(0x01)
	bool RevertTextOnEscape; // 0xc6e(0x01)
	bool ClearKeyboardFocusOnCommit; // 0xc6f(0x01)
	bool SelectAllTextOnCommit; // 0xc70(0x01)
	bool AllowContextMenu; // 0xc71(0x01)
	enum class EVirtualKeyboardType KeyboardType; // 0xc72(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xc73(0x01)
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0xc74(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xc75(0x01)
	enum class ETextJustify Justification; // 0xc76(0x01)
	enum class ETextOverflowPolicy OverflowPolicy; // 0xc77(0x01)
	struct FShapedTextOptions ShapedTextOptions; // 0xc78(0x03)
	char pad_C7B[0x5]; // 0xc7b(0x05)
	struct FMulticastInlineDelegate OnTextChanged; // 0xc80(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xc90(0x10)
	char pad_CA0[0x10]; // 0xca0(0x10)

	void SetTextOverflowPolicy(enum class ETextOverflowPolicy InOverflowPolicy); // Function UMG.EditableTextBox.SetTextOverflowPolicy // (Final|Native|Public|BlueprintCallable) // @ game+0x9131648
	void SetText(struct FText InText); // Function UMG.EditableTextBox.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0x913152c
	void SetJustification(enum class ETextJustify InJustification); // Function UMG.EditableTextBox.SetJustification // (Final|Native|Public|BlueprintCallable) // @ game+0x9131048
	void SetIsReadOnly(bool bReadOnly); // Function UMG.EditableTextBox.SetIsReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x9130f48
	void SetIsPassword(bool bIsPassword); // Function UMG.EditableTextBox.SetIsPassword // (Final|Native|Public|BlueprintCallable) // @ game+0x9130e48
	void SetHintText(struct FText InText); // Function UMG.EditableTextBox.SetHintText // (Final|Native|Public|BlueprintCallable) // @ game+0x9130cf0
	void SetForegroundColor(struct FLinearColor Color); // Function UMG.EditableTextBox.SetForegroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x9130ba4
	void SetError(struct FText InError); // Function UMG.EditableTextBox.SetError // (Final|Native|Public|BlueprintCallable) // @ game+0x9130894
	void OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0xda071c
	void OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0xda071c
	bool HasError(); // Function UMG.EditableTextBox.HasError // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91300ec
	struct FText GetText(); // Function UMG.EditableTextBox.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9130068
	void ClearError(); // Function UMG.EditableTextBox.ClearError // (Final|Native|Public|BlueprintCallable) // @ game+0x912f69c
};

// Class UMG.AsyncTaskDownloadImage
// Size: 0x50 (Inherited: 0x30)
struct UAsyncTaskDownloadImage : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)

	struct UAsyncTaskDownloadImage* DownloadImage(struct FString URL); // Function UMG.AsyncTaskDownloadImage.DownloadImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x912cffc
};

// Class UMG.BackgroundBlur
// Size: 0x270 (Inherited: 0x160)
struct UBackgroundBlur : UContentWidget {
	struct FMargin Padding; // 0x160(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x170(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x171(0x01)
	bool bApplyAlphaToBlur; // 0x172(0x01)
	char pad_173[0x1]; // 0x173(0x01)
	float BlurStrength; // 0x174(0x04)
	bool bOverrideAutoRadiusCalculation; // 0x178(0x01)
	char pad_179[0x3]; // 0x179(0x03)
	int32_t BlurRadius; // 0x17c(0x04)
	struct FVector4 CornerRadius; // 0x180(0x20)
	struct FSlateBrush LowQualityFallbackBrush; // 0x1a0(0xc0)
	char pad_260[0x10]; // 0x260(0x10)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BackgroundBlur.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x912e9c8
	void SetPadding(struct FMargin InPadding); // Function UMG.BackgroundBlur.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x912e298
	void SetLowQualityFallbackBrush(struct FSlateBrush& InBrush); // Function UMG.BackgroundBlur.SetLowQualityFallbackBrush // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x912dfb0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BackgroundBlur.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x912dc88
	void SetCornerRadius(struct FVector4 InCornerRadius); // Function UMG.BackgroundBlur.SetCornerRadius // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x912db58
	void SetBlurStrength(float InStrength); // Function UMG.BackgroundBlur.SetBlurStrength // (Native|Public|BlueprintCallable) // @ game+0x912d7a0
	void SetBlurRadius(int32_t InBlurRadius); // Function UMG.BackgroundBlur.SetBlurRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x912d720
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur); // Function UMG.BackgroundBlur.SetApplyAlphaToBlur // (Final|Native|Public|BlueprintCallable) // @ game+0x912d57c
};

// Class UMG.BackgroundBlurSlot
// Size: 0x60 (Inherited: 0x38)
struct UBackgroundBlurSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BackgroundBlurSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x912ea48
	void SetPadding(struct FMargin InPadding); // Function UMG.BackgroundBlurSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x912e324
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BackgroundBlurSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x912dd08
};

// Class UMG.PropertyBinding
// Size: 0x60 (Inherited: 0x28)
struct UPropertyBinding : UObject {
	struct TWeakObjectPtr<struct UObject> SourceObject; // 0x28(0x08)
	struct FDynamicPropertyPath SourcePath; // 0x30(0x28)
	struct FName DestinationProperty; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class UMG.BoolBinding
// Size: 0x60 (Inherited: 0x60)
struct UBoolBinding : UPropertyBinding {

	bool GetValue(); // Function UMG.BoolBinding.GetValue // (Final|Native|Public|Const) // @ game+0x912d328
};

// Class UMG.BorderSlot
// Size: 0x60 (Inherited: 0x38)
struct UBorderSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BorderSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x912eacc
	void SetPadding(struct FMargin InPadding); // Function UMG.BorderSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x176ea80
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BorderSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x1e6fe44
};

// Class UMG.BrushBinding
// Size: 0x68 (Inherited: 0x60)
struct UBrushBinding : UPropertyBinding {
	char pad_60[0x8]; // 0x60(0x08)

	struct FSlateBrush GetValue(); // Function UMG.BrushBinding.GetValue // (Final|Native|Public|Const) // @ game+0x912d34c
};

// Class UMG.ButtonSlot
// Size: 0x60 (Inherited: 0x38)
struct UButtonSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ButtonSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x912eb50
	void SetPadding(struct FMargin InPadding); // Function UMG.ButtonSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x912e3b0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ButtonSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x912de0c
};

// Class UMG.CanvasPanel
// Size: 0x170 (Inherited: 0x160)
struct UCanvasPanel : UPanelWidget {
	char pad_160[0x10]; // 0x160(0x10)

	struct UCanvasPanelSlot* AddChildToCanvas(struct UWidget* Content); // Function UMG.CanvasPanel.AddChildToCanvas // (Final|Native|Public|BlueprintCallable) // @ game+0x912cf6c
};

// Class UMG.CanvasPanelSlot
// Size: 0x88 (Inherited: 0x38)
struct UCanvasPanelSlot : UPanelSlot {
	struct FAnchorData LayoutData; // 0x38(0x40)
	bool bAutoSize; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	int32_t ZOrder; // 0x7c(0x04)
	char pad_80[0x8]; // 0x80(0x08)

	void SetZOrder(int32_t InZOrder); // Function UMG.CanvasPanelSlot.SetZOrder // (Final|Native|Public|BlueprintCallable) // @ game+0x912ebd0
	void SetSize(struct FVector2D InSize); // Function UMG.CanvasPanelSlot.SetSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x912e764
	void SetPosition(struct FVector2D InPosition); // Function UMG.CanvasPanelSlot.SetPosition // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x912e4d0
	void SetOffsets(struct FMargin InOffset); // Function UMG.CanvasPanelSlot.SetOffsets // (Final|Native|Public|BlueprintCallable) // @ game+0x912e20c
	void SetMinimum(struct FVector2D InMinimumAnchors); // Function UMG.CanvasPanelSlot.SetMinimum // (Final|Native|Public|HasDefaults) // @ game+0x912e0dc
	void SetMaximum(struct FVector2D InMaximumAnchors); // Function UMG.CanvasPanelSlot.SetMaximum // (Final|Native|Public|HasDefaults) // @ game+0x912e054
	void SetLayout(struct FAnchorData& InLayoutData); // Function UMG.CanvasPanelSlot.SetLayout // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x912df0c
	void SetAutoSize(bool InbAutoSize); // Function UMG.CanvasPanelSlot.SetAutoSize // (Final|Native|Public|BlueprintCallable) // @ game+0x912d5fc
	void SetAnchors(struct FAnchors InAnchors); // Function UMG.CanvasPanelSlot.SetAnchors // (Final|Native|Public|BlueprintCallable) // @ game+0x912d4dc
	void SetAlignment(struct FVector2D InAlignment); // Function UMG.CanvasPanelSlot.SetAlignment // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x912d454
	int32_t GetZOrder(); // Function UMG.CanvasPanelSlot.GetZOrder // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x912d3b4
	struct FVector2D GetSize(); // Function UMG.CanvasPanelSlot.GetSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x912d2f8
	struct FVector2D GetPosition(); // Function UMG.CanvasPanelSlot.GetPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x912d2c8
	struct FMargin GetOffsets(); // Function UMG.CanvasPanelSlot.GetOffsets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x912d288
	struct FAnchorData GetLayout(); // Function UMG.CanvasPanelSlot.GetLayout // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x912d254
	bool GetAutoSize(); // Function UMG.CanvasPanelSlot.GetAutoSize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x912d20c
	struct FAnchors GetAnchors(); // Function UMG.CanvasPanelSlot.GetAnchors // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x912d1d8
	struct FVector2D GetAlignment(); // Function UMG.CanvasPanelSlot.GetAlignment // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x912d1a8
};

// Class UMG.CheckBox
// Size: 0xbb0 (Inherited: 0x160)
struct UCheckBox : UContentWidget {
	enum class ECheckBoxState CheckedState; // 0x160(0x01)
	char pad_161[0x3]; // 0x161(0x03)
	struct FDelegate CheckedStateDelegate; // 0x164(0x0c)
	struct FCheckBoxStyle WidgetStyle; // 0x170(0xa10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0xb80(0x01)
	enum class EButtonClickMethod ClickMethod; // 0xb81(0x01)
	enum class EButtonTouchMethod TouchMethod; // 0xb82(0x01)
	enum class EButtonPressMethod PressMethod; // 0xb83(0x01)
	bool IsFocusable; // 0xb84(0x01)
	char pad_B85[0x3]; // 0xb85(0x03)
	struct FMulticastInlineDelegate OnCheckStateChanged; // 0xb88(0x10)
	char pad_B98[0x18]; // 0xb98(0x18)

	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Function UMG.CheckBox.SetTouchMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x912e948
	void SetPressMethod(enum class EButtonPressMethod InPressMethod); // Function UMG.CheckBox.SetPressMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x912e5d8
	void SetIsChecked(bool InIsChecked); // Function UMG.CheckBox.SetIsChecked // (Final|Native|Public|BlueprintCallable) // @ game+0x912de8c
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // Function UMG.CheckBox.SetClickMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x912da50
	void SetCheckedState(enum class ECheckBoxState InCheckedState); // Function UMG.CheckBox.SetCheckedState // (Final|Native|Public|BlueprintCallable) // @ game+0x912d950
	bool IsPressed(); // Function UMG.CheckBox.IsPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x912d42c
	bool IsChecked(); // Function UMG.CheckBox.IsChecked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x912d3d4
	enum class ECheckBoxState GetCheckedState(); // Function UMG.CheckBox.GetCheckedState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x912d230
};

// Class UMG.CheckedStateBinding
// Size: 0x68 (Inherited: 0x60)
struct UCheckedStateBinding : UPropertyBinding {
	char pad_60[0x8]; // 0x60(0x08)

	enum class ECheckBoxState GetValue(); // Function UMG.CheckedStateBinding.GetValue // (Final|Native|Public|Const) // @ game+0x912d390
};

// Class UMG.CircularThrobber
// Size: 0x240 (Inherited: 0x148)
struct UCircularThrobber : UWidget {
	int32_t NumberOfPieces; // 0x148(0x04)
	float Period; // 0x14c(0x04)
	float Radius; // 0x150(0x04)
	char pad_154[0xc]; // 0x154(0x0c)
	struct FSlateBrush Image; // 0x160(0xc0)
	bool bEnableRadius; // 0x220(0x01)
	char pad_221[0x1f]; // 0x221(0x1f)

	void SetRadius(float InRadius); // Function UMG.CircularThrobber.SetRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x912e658
	void SetPeriod(float InPeriod); // Function UMG.CircularThrobber.SetPeriod // (Final|Native|Public|BlueprintCallable) // @ game+0x912e43c
	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.CircularThrobber.SetNumberOfPieces // (Final|Native|Public|BlueprintCallable) // @ game+0x912e164
};

// Class UMG.ColorBinding
// Size: 0x68 (Inherited: 0x60)
struct UColorBinding : UPropertyBinding {
	char pad_60[0x8]; // 0x60(0x08)

	struct FSlateColor GetSlateValue(); // Function UMG.ColorBinding.GetSlateValue // (Final|Native|Public|Const) // @ game+0x912ffb0
	struct FLinearColor GetLinearValue(); // Function UMG.ColorBinding.GetLinearValue // (Final|Native|Public|HasDefaults|Const) // @ game+0x912fc38
};

// Class UMG.ComboBox
// Size: 0x178 (Inherited: 0x148)
struct UComboBox : UWidget {
	struct TArray<struct UObject*> Items; // 0x148(0x10)
	struct FDelegate OnGenerateWidgetEvent; // 0x158(0x0c)
	bool bIsFocusable; // 0x164(0x01)
	char pad_165[0x13]; // 0x165(0x13)
};

// Class UMG.ComboBoxKey
// Size: 0x1440 (Inherited: 0x148)
struct UComboBoxKey : UWidget {
	struct TArray<struct FName> Options; // 0x148(0x10)
	struct FName SelectedOption; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct FComboBoxStyle WidgetStyle; // 0x160(0x600)
	struct FTableRowStyle ItemStyle; // 0x760(0xc50)
	struct FSlateColor ForegroundColor; // 0x13b0(0x14)
	struct FMargin ContentPadding; // 0x13c4(0x10)
	float MaxListHeight; // 0x13d4(0x04)
	bool bHasDownArrow; // 0x13d8(0x01)
	bool bEnableGamepadNavigationMode; // 0x13d9(0x01)
	bool bIsFocusable; // 0x13da(0x01)
	char pad_13DB[0x1]; // 0x13db(0x01)
	struct FDelegate OnGenerateContentWidget; // 0x13dc(0x0c)
	struct FDelegate OnGenerateItemWidget; // 0x13e8(0x0c)
	char pad_13F4[0x4]; // 0x13f4(0x04)
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x13f8(0x10)
	struct FMulticastInlineDelegate OnOpening; // 0x1408(0x10)
	char pad_1418[0x28]; // 0x1418(0x28)

	void SetSelectedOption(struct FName Option); // Function UMG.ComboBoxKey.SetSelectedOption // (Final|Native|Public|BlueprintCallable) // @ game+0x913126c
	bool RemoveOption(struct FName Option); // Function UMG.ComboBoxKey.RemoveOption // (Final|Native|Public|BlueprintCallable) // @ game+0x9130500
	void OnSelectionChangedEvent__DelegateSignature(struct FName SelectedItem, enum class ESelectInfo SelectionType); // DelegateFunction UMG.ComboBoxKey.OnSelectionChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xda071c
	void OnOpeningEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxKey.OnOpeningEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xda071c
	bool IsOpen(); // Function UMG.ComboBoxKey.IsOpen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913013c
	struct FName GetSelectedOption(); // Function UMG.ComboBoxKey.GetSelectedOption // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a66310
	struct UWidget* GenerateWidgetEvent__DelegateSignature(struct FName Item); // DelegateFunction UMG.ComboBoxKey.GenerateWidgetEvent__DelegateSignature // (Public|Delegate) // @ game+0xda071c
	void ClearSelection(); // Function UMG.ComboBoxKey.ClearSelection // (Final|Native|Public|BlueprintCallable) // @ game+0x912f74c
	void ClearOptions(); // Function UMG.ComboBoxKey.ClearOptions // (Final|Native|Public|BlueprintCallable) // @ game+0x912f6dc
	void AddOption(struct FName Option); // Function UMG.ComboBoxKey.AddOption // (Final|Native|Public|BlueprintCallable) // @ game+0x912f3a0
};

// Class UMG.ComboBoxString
// Size: 0x14d0 (Inherited: 0x148)
struct UComboBoxString : UWidget {
	struct TArray<struct FString> DefaultOptions; // 0x148(0x10)
	struct FString SelectedOption; // 0x158(0x10)
	char pad_168[0x8]; // 0x168(0x08)
	struct FComboBoxStyle WidgetStyle; // 0x170(0x600)
	struct FTableRowStyle ItemStyle; // 0x770(0xc50)
	struct FMargin ContentPadding; // 0x13c0(0x10)
	float MaxListHeight; // 0x13d0(0x04)
	bool HasDownArrow; // 0x13d4(0x01)
	bool EnableGamepadNavigationMode; // 0x13d5(0x01)
	char pad_13D6[0x2]; // 0x13d6(0x02)
	struct FSlateFontInfo Font; // 0x13d8(0x58)
	struct FSlateColor ForegroundColor; // 0x1430(0x14)
	bool bIsFocusable; // 0x1444(0x01)
	char pad_1445[0x3]; // 0x1445(0x03)
	struct FDelegate OnGenerateWidgetEvent; // 0x1448(0x0c)
	char pad_1454[0x4]; // 0x1454(0x04)
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x1458(0x10)
	struct FMulticastInlineDelegate OnOpening; // 0x1468(0x10)
	char pad_1478[0x58]; // 0x1478(0x58)

	void SetSelectedOption(struct FString Option); // Function UMG.ComboBoxString.SetSelectedOption // (Final|Native|Public|BlueprintCallable) // @ game+0x9131314
	void SetSelectedIndex(int32_t Index); // Function UMG.ComboBoxString.SetSelectedIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x91311ec
	bool RemoveOption(struct FString Option); // Function UMG.ComboBoxString.RemoveOption // (Final|Native|Public|BlueprintCallable) // @ game+0x91305c8
	void RefreshOptions(); // Function UMG.ComboBoxString.RefreshOptions // (Final|Native|Public|BlueprintCallable) // @ game+0x91301ac
	void OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xda071c
	void OnOpeningEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xda071c
	bool IsOpen(); // Function UMG.ComboBoxString.IsOpen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9130174
	struct FString GetSelectedOption(); // Function UMG.ComboBoxString.GetSelectedOption // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x912fe48
	int32_t GetSelectedIndex(); // Function UMG.ComboBoxString.GetSelectedIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x912fe24
	int32_t GetOptionCount(); // Function UMG.ComboBoxString.GetOptionCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x912fe0c
	struct FString GetOptionAtIndex(int32_t Index); // Function UMG.ComboBoxString.GetOptionAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x912fc68
	int32_t FindOptionIndex(struct FString Option); // Function UMG.ComboBoxString.FindOptionIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x912f9f0
	void ClearSelection(); // Function UMG.ComboBoxString.ClearSelection // (Final|Native|Public|BlueprintCallable) // @ game+0x912f760
	void ClearOptions(); // Function UMG.ComboBoxString.ClearOptions // (Final|Native|Public|BlueprintCallable) // @ game+0x912f738
	void AddOption(struct FString Option); // Function UMG.ComboBoxString.AddOption // (Final|Native|Public|BlueprintCallable) // @ game+0x912f420
};

// Class UMG.DragDropOperation
// Size: 0x90 (Inherited: 0x28)
struct UDragDropOperation : UObject {
	struct FString tag; // 0x28(0x10)
	struct UObject* Payload; // 0x38(0x08)
	struct UWidget* DefaultDragVisual; // 0x40(0x08)
	enum class EDragPivot Pivot; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FVector2D Offset; // 0x50(0x10)
	struct FMulticastInlineDelegate OnDrop; // 0x60(0x10)
	struct FMulticastInlineDelegate OnDragCancelled; // 0x70(0x10)
	struct FMulticastInlineDelegate OnDragged; // 0x80(0x10)

	void Drop(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.Drop // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x912f91c
	void Dragged(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.Dragged // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x912f848
	void DragCancelled(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.DragCancelled // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x912f774
};

// Class UMG.DynamicEntryBox
// Size: 0x230 (Inherited: 0x228)
struct UDynamicEntryBox : UDynamicEntryBoxBase {
	struct UUserWidget* EntryWidgetClass; // 0x228(0x08)

	void Reset(bool bDeleteWidgets); // Function UMG.DynamicEntryBox.Reset // (Final|Native|Public|BlueprintCallable) // @ game+0x23bf53c
	void RemoveEntry(struct UUserWidget* EntryWidget); // Function UMG.DynamicEntryBox.RemoveEntry // (Final|Native|Public|BlueprintCallable) // @ game+0x91301c0
	struct UUserWidget* BP_CreateEntryOfClass(struct UUserWidget* EntryClass); // Function UMG.DynamicEntryBox.BP_CreateEntryOfClass // (Final|Native|Private|BlueprintCallable) // @ game+0x912f574
	struct UUserWidget* BP_CreateEntry(); // Function UMG.DynamicEntryBox.BP_CreateEntry // (Final|Native|Private|BlueprintCallable) // @ game+0x22c6168
};

// Class UMG.ExpandableArea
// Size: 0x420 (Inherited: 0x148)
struct UExpandableArea : UWidget {
	char pad_148[0x8]; // 0x148(0x08)
	struct FExpandableAreaStyle style; // 0x150(0x1a0)
	struct FSlateBrush BorderBrush; // 0x2f0(0xc0)
	struct FSlateColor BorderColor; // 0x3b0(0x14)
	bool bIsExpanded; // 0x3c4(0x01)
	char pad_3C5[0x3]; // 0x3c5(0x03)
	float MaxHeight; // 0x3c8(0x04)
	struct FMargin HeaderPadding; // 0x3cc(0x10)
	struct FMargin AreaPadding; // 0x3dc(0x10)
	char pad_3EC[0x4]; // 0x3ec(0x04)
	struct FMulticastInlineDelegate OnExpansionChanged; // 0x3f0(0x10)
	struct UWidget* HeaderContent; // 0x400(0x08)
	struct UWidget* BodyContent; // 0x408(0x08)
	char pad_410[0x10]; // 0x410(0x10)

	void SetIsExpanded_Animated(bool IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded_Animated // (Final|Native|Public|BlueprintCallable) // @ game+0x9132fb8
	void SetIsExpanded(bool IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded // (Final|Native|Public|BlueprintCallable) // @ game+0x9132f2c
	bool GetIsExpanded(); // Function UMG.ExpandableArea.GetIsExpanded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91321b8
};

// Class UMG.FloatBinding
// Size: 0x60 (Inherited: 0x60)
struct UFloatBinding : UPropertyBinding {

	float GetValue(); // Function UMG.FloatBinding.GetValue // (Final|Native|Public|Const) // @ game+0x91323f8
};

// Class UMG.GridPanel
// Size: 0x190 (Inherited: 0x160)
struct UGridPanel : UPanelWidget {
	struct TArray<float> ColumnFill; // 0x160(0x10)
	struct TArray<float> RowFill; // 0x170(0x10)
	char pad_180[0x10]; // 0x180(0x10)

	void SetRowFill(int32_t ColumnIndex, float Coefficient); // Function UMG.GridPanel.SetRowFill // (Final|Native|Public|BlueprintCallable) // @ game+0x9133408
	void SetColumnFill(int32_t ColumnIndex, float Coefficient); // Function UMG.GridPanel.SetColumnFill // (Final|Native|Public|BlueprintCallable) // @ game+0x9132c7c
	struct UGridSlot* AddChildToGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn); // Function UMG.GridPanel.AddChildToGrid // (Final|Native|Public|BlueprintCallable) // @ game+0x9131a2c
};

// Class UMG.GridSlot
// Size: 0x78 (Inherited: 0x38)
struct UGridSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	int32_t Row; // 0x4c(0x04)
	int32_t RowSpan; // 0x50(0x04)
	int32_t Column; // 0x54(0x04)
	int32_t ColumnSpan; // 0x58(0x04)
	int32_t Layer; // 0x5c(0x04)
	struct FVector2D Nudge; // 0x60(0x10)
	char pad_70[0x8]; // 0x70(0x08)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.GridSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x91338ac
	void SetRowSpan(int32_t InRowSpan); // Function UMG.GridSlot.SetRowSpan // (Final|Native|Public|BlueprintCallable) // @ game+0x91334d0
	void SetRow(int32_t InRow); // Function UMG.GridSlot.SetRow // (Final|Native|Public|BlueprintCallable) // @ game+0x9133388
	void SetPadding(struct FMargin InPadding); // Function UMG.GridSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x91332fc
	void SetNudge(struct FVector2D InNudge); // Function UMG.GridSlot.SetNudge // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x9133274
	void SetLayer(int32_t InLayer); // Function UMG.GridSlot.SetLayer // (Final|Native|Public|BlueprintCallable) // @ game+0x913311c
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.GridSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x9132eac
	void SetColumnSpan(int32_t InColumnSpan); // Function UMG.GridSlot.SetColumnSpan // (Final|Native|Public|BlueprintCallable) // @ game+0x9132d44
	void SetColumn(int32_t InColumn); // Function UMG.GridSlot.SetColumn // (Final|Native|Public|BlueprintCallable) // @ game+0x9132bfc
};

// Class UMG.HorizontalBox
// Size: 0x170 (Inherited: 0x160)
struct UHorizontalBox : UPanelWidget {
	char pad_160[0x10]; // 0x160(0x10)

	struct UHorizontalBoxSlot* AddChildToHorizontalBox(struct UWidget* Content); // Function UMG.HorizontalBox.AddChildToHorizontalBox // (Final|Native|Public|BlueprintCallable) // @ game+0x21faf78
};

// Class UMG.HorizontalBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UHorizontalBoxSlot : UPanelSlot {
	char pad_38[0x8]; // 0x38(0x08)
	struct FSlateChildSize Size; // 0x40(0x08)
	struct FMargin Padding; // 0x48(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.HorizontalBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x23a8564
	void SetSize(struct FSlateChildSize InSize); // Function UMG.HorizontalBoxSlot.SetSize // (Final|Native|Public|BlueprintCallable) // @ game+0x9133770
	void SetPadding(struct FMargin InPadding); // Function UMG.HorizontalBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x176ec4c
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.HorizontalBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x23189b8
};

// Class UMG.NotifyFieldValueChanged
// Size: 0x28 (Inherited: 0x28)
struct UNotifyFieldValueChanged : UInterface {
};

// Class UMG.InputKeySelector
// Size: 0x8c0 (Inherited: 0x148)
struct UInputKeySelector : UWidget {
	char pad_148[0x8]; // 0x148(0x08)
	struct FButtonStyle WidgetStyle; // 0x150(0x3b0)
	struct FTextBlockStyle TextStyle; // 0x500(0x310)
	struct FInputChord SelectedKey; // 0x810(0x20)
	struct FMargin Margin; // 0x830(0x10)
	struct FText KeySelectionText; // 0x840(0x18)
	struct FText NoKeySpecifiedText; // 0x858(0x18)
	bool bAllowModifierKeys; // 0x870(0x01)
	bool bAllowGamepadKeys; // 0x871(0x01)
	char pad_872[0x6]; // 0x872(0x06)
	struct TArray<struct FKey> EscapeKeys; // 0x878(0x10)
	struct FMulticastInlineDelegate OnKeySelected; // 0x888(0x10)
	struct FMulticastInlineDelegate OnIsSelectingKeyChanged; // 0x898(0x10)
	char pad_8A8[0x18]; // 0x8a8(0x18)

	void SetTextBlockVisibility(enum class ESlateVisibility InVisibility); // Function UMG.InputKeySelector.SetTextBlockVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x91337fc
	void SetSelectedKey(struct FInputChord& InSelectedKey); // Function UMG.InputKeySelector.SetSelectedKey // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x91335d0
	void SetNoKeySpecifiedText(struct FText InNoKeySpecifiedText); // Function UMG.InputKeySelector.SetNoKeySpecifiedText // (Final|Native|Public|BlueprintCallable) // @ game+0x913319c
	void SetKeySelectionText(struct FText InKeySelectionText); // Function UMG.InputKeySelector.SetKeySelectionText // (Final|Native|Public|BlueprintCallable) // @ game+0x9133044
	void SetEscapeKeys(struct TArray<struct FKey>& InKeys); // Function UMG.InputKeySelector.SetEscapeKeys // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9132dc4
	void SetAllowModifierKeys(bool bInAllowModifierKeys); // Function UMG.InputKeySelector.SetAllowModifierKeys // (Final|Native|Public|BlueprintCallable) // @ game+0x9132924
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys); // Function UMG.InputKeySelector.SetAllowGamepadKeys // (Final|Native|Public|BlueprintCallable) // @ game+0x913289c
	void OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xda071c
	void OnIsSelectingKeyChanged__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xda071c
	bool GetIsSelectingKey(); // Function UMG.InputKeySelector.GetIsSelectingKey // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91321f8
};

// Class UMG.Int32Binding
// Size: 0x60 (Inherited: 0x60)
struct UInt32Binding : UPropertyBinding {

	int32_t GetValue(); // Function UMG.Int32Binding.GetValue // (Final|Native|Public|Const) // @ game+0x9132420
};

// Class UMG.InvalidationBox
// Size: 0x178 (Inherited: 0x160)
struct UInvalidationBox : UContentWidget {
	bool bCanCache; // 0x160(0x01)
	bool CacheRelativeTransforms; // 0x161(0x01)
	char pad_162[0x16]; // 0x162(0x16)

	void SetCanCache(bool CanCache); // Function UMG.InvalidationBox.SetCanCache // (Final|Native|Public|BlueprintCallable) // @ game+0x9132b7c
	void InvalidateCache(); // Function UMG.InvalidationBox.InvalidateCache // (Final|Native|Public|BlueprintCallable) // @ game+0x21ce454
	bool GetCanCache(); // Function UMG.InvalidationBox.GetCanCache // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91320c4
};

// Class UMG.UserListEntry
// Size: 0x28 (Inherited: 0x28)
struct UUserListEntry : UInterface {

	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UMG.UserListEntry.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UMG.UserListEntry.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void BP_OnEntryReleased(); // Function UMG.UserListEntry.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0xda071c
};

// Class UMG.UserListEntryLibrary
// Size: 0x28 (Inherited: 0x28)
struct UUserListEntryLibrary : UBlueprintFunctionLibrary {

	bool IsListItemSelected(struct TScriptInterface<IUserListEntry> UserListEntry); // Function UMG.UserListEntryLibrary.IsListItemSelected // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x91324d4
	bool IsListItemExpanded(struct TScriptInterface<IUserListEntry> UserListEntry); // Function UMG.UserListEntryLibrary.IsListItemExpanded // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9132444
	struct UListViewBase* GetOwningListView(struct TScriptInterface<IUserListEntry> UserListEntry); // Function UMG.UserListEntryLibrary.GetOwningListView // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9132368
};

// Class UMG.UserObjectListEntry
// Size: 0x28 (Inherited: 0x28)
struct UUserObjectListEntry : UUserListEntry {

	void OnListItemObjectSet(struct UObject* ListItemObject); // Function UMG.UserObjectListEntry.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xda071c
};

// Class UMG.UserObjectListEntryLibrary
// Size: 0x28 (Inherited: 0x28)
struct UUserObjectListEntryLibrary : UBlueprintFunctionLibrary {

	struct UObject* GetListItemObject(struct TScriptInterface<IUserObjectListEntry> UserObjectListEntry); // Function UMG.UserObjectListEntryLibrary.GetListItemObject // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x91322ac
};

// Class UMG.ListViewDesignerPreviewItem
// Size: 0x28 (Inherited: 0x28)
struct UListViewDesignerPreviewItem : UObject {
};

// Class UMG.MenuAnchor
// Size: 0x1a8 (Inherited: 0x160)
struct UMenuAnchor : UContentWidget {
	struct UUserWidget* MenuClass; // 0x160(0x08)
	struct FDelegate OnGetMenuContentEvent; // 0x168(0x0c)
	struct FDelegate OnGetUserMenuContentEvent; // 0x174(0x0c)
	enum class EMenuPlacement Placement; // 0x180(0x01)
	bool bFitInWindow; // 0x181(0x01)
	bool ShouldDeferPaintingAfterWindowContent; // 0x182(0x01)
	bool UseApplicationMenuStack; // 0x183(0x01)
	char pad_184[0x4]; // 0x184(0x04)
	struct FMulticastInlineDelegate OnMenuOpenChanged; // 0x188(0x10)
	char pad_198[0x10]; // 0x198(0x10)

	void ToggleOpen(bool bFocusOnOpen); // Function UMG.MenuAnchor.ToggleOpen // (Final|Native|Public|BlueprintCallable) // @ game+0x9134f04
	bool ShouldOpenDueToClick(); // Function UMG.MenuAnchor.ShouldOpenDueToClick // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9134ee4
	void SetPlacement(enum class EMenuPlacement InPlacement); // Function UMG.MenuAnchor.SetPlacement // (Final|Native|Public|BlueprintCallable) // @ game+0x9134b10
	void Open(bool bFocusMenu); // Function UMG.MenuAnchor.Open // (Final|Native|Public|BlueprintCallable) // @ game+0x91343d0
	bool IsOpen(); // Function UMG.MenuAnchor.IsOpen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91343b0
	bool HasOpenSubMenus(); // Function UMG.MenuAnchor.HasOpenSubMenus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9134378
	struct UUserWidget* GetUserWidget__DelegateSignature(); // DelegateFunction UMG.MenuAnchor.GetUserWidget__DelegateSignature // (Public|Delegate) // @ game+0xda071c
	struct FVector2D GetMenuPosition(); // Function UMG.MenuAnchor.GetMenuPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x9134154
	void FitInWindow(bool bFit); // Function UMG.MenuAnchor.FitInWindow // (Final|Native|Public|BlueprintCallable) // @ game+0x9133e60
	void Close(); // Function UMG.MenuAnchor.Close // (Final|Native|Public|BlueprintCallable) // @ game+0x25933f4
};

// Class UMG.MouseCursorBinding
// Size: 0x60 (Inherited: 0x60)
struct UMouseCursorBinding : UPropertyBinding {

	enum class EMouseCursor GetValue(); // Function UMG.MouseCursorBinding.GetValue // (Final|Native|Public|Const) // @ game+0x91342bc
};

// Class UMG.MovieScene2DTransformPropertySystem
// Size: 0x58 (Inherited: 0x58)
struct UMovieScene2DTransformPropertySystem : UMovieScenePropertySystem {
};

// Class UMG.MovieScene2DTransformSection
// Size: 0x758 (Inherited: 0xf0)
struct UMovieScene2DTransformSection : UMovieSceneSection {
	char pad_F0[0x8]; // 0xf0(0x08)
	struct FMovieScene2DTransformMask TransformMask; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FMovieSceneFloatChannel Translation[0x2]; // 0x100(0x1d0)
	struct FMovieSceneFloatChannel Rotation; // 0x2d0(0xe8)
	struct FMovieSceneFloatChannel Scale[0x2]; // 0x3b8(0x1d0)
	struct FMovieSceneFloatChannel Shear[0x2]; // 0x588(0x1d0)
};

// Class UMG.MovieScene2DTransformTrack
// Size: 0xc0 (Inherited: 0xc0)
struct UMovieScene2DTransformTrack : UMovieScenePropertyTrack {
};

// Class UMG.MovieSceneMarginPropertySystem
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneMarginPropertySystem : UMovieScenePropertySystem {
};

// Class UMG.MovieSceneMarginSection
// Size: 0x498 (Inherited: 0xf0)
struct UMovieSceneMarginSection : UMovieSceneSection {
	char pad_F0[0x8]; // 0xf0(0x08)
	struct FMovieSceneFloatChannel TopCurve; // 0xf8(0xe8)
	struct FMovieSceneFloatChannel LeftCurve; // 0x1e0(0xe8)
	struct FMovieSceneFloatChannel RightCurve; // 0x2c8(0xe8)
	struct FMovieSceneFloatChannel BottomCurve; // 0x3b0(0xe8)
};

// Class UMG.MovieSceneMarginTrack
// Size: 0xc0 (Inherited: 0xc0)
struct UMovieSceneMarginTrack : UMovieScenePropertyTrack {
};

// Class UMG.MovieSceneWidgetMaterialSystem
// Size: 0x128 (Inherited: 0x40)
struct UMovieSceneWidgetMaterialSystem : UMovieSceneEntitySystem {
	char pad_40[0xe8]; // 0x40(0xe8)
};

// Class UMG.MovieSceneWidgetMaterialTrack
// Size: 0xd0 (Inherited: 0xa8)
struct UMovieSceneWidgetMaterialTrack : UMovieSceneMaterialTrack {
	char pad_A8[0x10]; // 0xa8(0x10)
	struct TArray<struct FName> BrushPropertyNamePath; // 0xb8(0x10)
	struct FName TrackName; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// Class UMG.MultiLineEditableText
// Size: 0x500 (Inherited: 0x168)
struct UMultiLineEditableText : UTextLayoutWidget {
	struct FText Text; // 0x168(0x18)
	struct FText HintText; // 0x180(0x18)
	struct FDelegate HintTextDelegate; // 0x198(0x0c)
	char pad_1A4[0xc]; // 0x1a4(0x0c)
	struct FTextBlockStyle WidgetStyle; // 0x1b0(0x310)
	bool bIsReadOnly; // 0x4c0(0x01)
	bool SelectAllTextWhenFocused; // 0x4c1(0x01)
	bool ClearTextSelectionOnFocusLoss; // 0x4c2(0x01)
	bool RevertTextOnEscape; // 0x4c3(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x4c4(0x01)
	bool AllowContextMenu; // 0x4c5(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x4c6(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x4c7(0x01)
	struct FMulticastInlineDelegate OnTextChanged; // 0x4c8(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x4d8(0x10)
	char pad_4E8[0x18]; // 0x4e8(0x18)

	void SetWidgetStyle(struct FTextBlockStyle& InWidgetStyle); // Function UMG.MultiLineEditableText.SetWidgetStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9134e2c
	void SetText(struct FText InText); // Function UMG.MultiLineEditableText.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0x9134bb0
	void SetIsReadOnly(bool bReadOnly); // Function UMG.MultiLineEditableText.SetIsReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x9134a10
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableText.SetHintText // (Final|Native|Public|BlueprintCallable) // @ game+0x91348d8
	void SetFontOutlineMaterial(struct UMaterialInterface* InMaterial); // Function UMG.MultiLineEditableText.SetFontOutlineMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x91347ac
	void SetFontMaterial(struct UMaterialInterface* InMaterial); // Function UMG.MultiLineEditableText.SetFontMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x913471c
	void SetFont(struct FSlateFontInfo InFontInfo); // Function UMG.MultiLineEditableText.SetFont // (Final|Native|Public|BlueprintCallable) // @ game+0x913460c
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0xda071c
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0xda071c
	struct FText GetText(); // Function UMG.MultiLineEditableText.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91341b4
	struct FText GetHintText(); // Function UMG.MultiLineEditableText.GetHintText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913404c
	struct FSlateFontInfo GetFont(); // Function UMG.MultiLineEditableText.GetFont // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9134030
};

// Class UMG.MultiLineEditableTextBox
// Size: 0xfd0 (Inherited: 0x168)
struct UMultiLineEditableTextBox : UTextLayoutWidget {
	struct FText Text; // 0x168(0x18)
	struct FText HintText; // 0x180(0x18)
	struct FDelegate HintTextDelegate; // 0x198(0x0c)
	char pad_1A4[0xc]; // 0x1a4(0x0c)
	struct FEditableTextBoxStyle WidgetStyle; // 0x1b0(0xad0)
	struct FTextBlockStyle TextStyle; // 0xc80(0x310)
	bool bIsReadOnly; // 0xf90(0x01)
	bool AllowContextMenu; // 0xf91(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xf92(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xf93(0x01)
	char pad_F94[0x4]; // 0xf94(0x04)
	struct FMulticastInlineDelegate OnTextChanged; // 0xf98(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xfa8(0x10)
	char pad_FB8[0x18]; // 0xfb8(0x18)

	void SetTextStyle(struct FTextBlockStyle& InTextStyle); // Function UMG.MultiLineEditableTextBox.SetTextStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9134ce8
	void SetText(struct FText InText); // Function UMG.MultiLineEditableTextBox.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0x9134c4c
	void SetIsReadOnly(bool bReadOnly); // Function UMG.MultiLineEditableTextBox.SetIsReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x9134a90
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableTextBox.SetHintText // (Final|Native|Public|BlueprintCallable) // @ game+0x9134974
	void SetForegroundColor(struct FLinearColor Color); // Function UMG.MultiLineEditableTextBox.SetForegroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x913483c
	void SetError(struct FText InError); // Function UMG.MultiLineEditableTextBox.SetError // (Final|Native|Public|BlueprintCallable) // @ game+0x913452c
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0xda071c
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0xda071c
	struct FText GetText(); // Function UMG.MultiLineEditableTextBox.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9134238
	struct FText GetHintText(); // Function UMG.MultiLineEditableTextBox.GetHintText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91340d0
};

// Class UMG.NamedSlot
// Size: 0x170 (Inherited: 0x160)
struct UNamedSlot : UContentWidget {
	char pad_160[0x10]; // 0x160(0x10)
};

// Class UMG.NamedSlotInterface
// Size: 0x28 (Inherited: 0x28)
struct UNamedSlotInterface : UInterface {
};

// Class UMG.NativeWidgetHost
// Size: 0x158 (Inherited: 0x148)
struct UNativeWidgetHost : UWidget {
	char pad_148[0x10]; // 0x148(0x10)
};

// Class UMG.ProgressBar
// Size: 0x400 (Inherited: 0x148)
struct UProgressBar : UWidget {
	char pad_148[0x8]; // 0x148(0x08)
	struct FProgressBarStyle WidgetStyle; // 0x150(0x260)
	float Percent; // 0x3b0(0x04)
	enum class EProgressBarFillType BarFillType; // 0x3b4(0x01)
	enum class EProgressBarFillStyle BarFillStyle; // 0x3b5(0x01)
	bool bIsMarquee; // 0x3b6(0x01)
	char pad_3B7[0x1]; // 0x3b7(0x01)
	struct FVector2D BorderPadding; // 0x3b8(0x10)
	struct FDelegate PercentDelegate; // 0x3c8(0x0c)
	struct FLinearColor FillColorAndOpacity; // 0x3d4(0x10)
	struct FDelegate FillColorAndOpacityDelegate; // 0x3e4(0x0c)
	char pad_3F0[0x10]; // 0x3f0(0x10)

	void SetPercent(float InPercent); // Function UMG.ProgressBar.SetPercent // (Final|Native|Public|BlueprintCallable) // @ game+0x23d0c64
	void SetIsMarquee(bool InbIsMarquee); // Function UMG.ProgressBar.SetIsMarquee // (Final|Native|Public|BlueprintCallable) // @ game+0x9135ee8
	void SetFillColorAndOpacity(struct FLinearColor InColor); // Function UMG.ProgressBar.SetFillColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x9135cc8
};

// Class UMG.RetainerBox
// Size: 0x190 (Inherited: 0x160)
struct URetainerBox : UContentWidget {
	bool bRetainRender; // 0x160(0x01)
	bool RenderOnInvalidation; // 0x161(0x01)
	bool RenderOnPhase; // 0x162(0x01)
	char pad_163[0x1]; // 0x163(0x01)
	int32_t Phase; // 0x164(0x04)
	int32_t PhaseCount; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct UMaterialInterface* EffectMaterial; // 0x170(0x08)
	struct FName TextureParameter; // 0x178(0x04)
	char pad_17C[0x14]; // 0x17c(0x14)

	void SetTextureParameter(struct FName TextureParameter); // Function UMG.RetainerBox.SetTextureParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x9136a9c
	void SetRetainRendering(bool bInRetainRendering); // Function UMG.RetainerBox.SetRetainRendering // (Final|Native|Public|BlueprintCallable) // @ game+0x91362d0
	void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases); // Function UMG.RetainerBox.SetRenderingPhase // (Final|Native|Public|BlueprintCallable) // @ game+0x91361e8
	void SetEffectMaterial(struct UMaterialInterface* EffectMaterial); // Function UMG.RetainerBox.SetEffectMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x9135bd4
	void RequestRender(); // Function UMG.RetainerBox.RequestRender // (Final|Native|Public|BlueprintCallable) // @ game+0x91354b4
	struct UMaterialInstanceDynamic* GetEffectMaterial(); // Function UMG.RetainerBox.GetEffectMaterial // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9135358
};

// Class UMG.RichTextBlockDecorator
// Size: 0x28 (Inherited: 0x28)
struct URichTextBlockDecorator : UObject {
};

// Class UMG.RichTextBlockImageDecorator
// Size: 0x30 (Inherited: 0x28)
struct URichTextBlockImageDecorator : URichTextBlockDecorator {
	struct UDataTable* ImageSet; // 0x28(0x08)
};

// Class UMG.SafeZone
// Size: 0x178 (Inherited: 0x160)
struct USafeZone : UContentWidget {
	bool PadLeft; // 0x160(0x01)
	bool PadRight; // 0x161(0x01)
	bool PadTop; // 0x162(0x01)
	bool PadBottom; // 0x163(0x01)
	char pad_164[0x14]; // 0x164(0x14)

	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom); // Function UMG.SafeZone.SetSidesToPad // (Final|Native|Public|BlueprintCallable) // @ game+0x9136594
};

// Class UMG.SafeZoneSlot
// Size: 0x60 (Inherited: 0x38)
struct USafeZoneSlot : UPanelSlot {
	bool bIsTitleSafe; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FMargin SafeAreaScale; // 0x3c(0x10)
	enum class EHorizontalAlignment HAlign; // 0x4c(0x01)
	enum class EVerticalAlignment VAlign; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
	struct FMargin Padding; // 0x50(0x10)
};

// Class UMG.ScaleBox
// Size: 0x180 (Inherited: 0x160)
struct UScaleBox : UContentWidget {
	enum class EStretch Stretch; // 0x160(0x01)
	enum class EStretchDirection StretchDirection; // 0x161(0x01)
	char pad_162[0x2]; // 0x162(0x02)
	float UserSpecifiedScale; // 0x164(0x04)
	bool IgnoreInheritedScale; // 0x168(0x01)
	char pad_169[0x17]; // 0x169(0x17)

	void SetUserSpecifiedScale(float InUserSpecifiedScale); // Function UMG.ScaleBox.SetUserSpecifiedScale // (Final|Native|Public|BlueprintCallable) // @ game+0x1e3255c
	void SetStretchDirection(enum class EStretchDirection InStretchDirection); // Function UMG.ScaleBox.SetStretchDirection // (Final|Native|Public|BlueprintCallable) // @ game+0x9136874
	void SetStretch(enum class EStretch InStretch); // Function UMG.ScaleBox.SetStretch // (Final|Native|Public|BlueprintCallable) // @ game+0x91367f4
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale); // Function UMG.ScaleBox.SetIgnoreInheritedScale // (Final|Native|Public|BlueprintCallable) // @ game+0x9135e50
};

// Class UMG.ScaleBoxSlot
// Size: 0x50 (Inherited: 0x38)
struct UScaleBoxSlot : UPanelSlot {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x38(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x39(0x01)
	char pad_3A[0x16]; // 0x3a(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ScaleBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x9136b20
	void SetPadding(struct FMargin InPadding); // Function UMG.ScaleBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x91360f4
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ScaleBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x9135d50
};

// Class UMG.ScrollBar
// Size: 0x870 (Inherited: 0x148)
struct UScrollBar : UWidget {
	char pad_148[0x8]; // 0x148(0x08)
	struct FScrollBarStyle WidgetStyle; // 0x150(0x6e0)
	bool bAlwaysShowScrollbar; // 0x830(0x01)
	bool bAlwaysShowScrollbarTrack; // 0x831(0x01)
	enum class EOrientation Orientation; // 0x832(0x01)
	char pad_833[0x5]; // 0x833(0x05)
	struct FVector2D Thickness; // 0x838(0x10)
	struct FMargin Padding; // 0x848(0x10)
	char pad_858[0x18]; // 0x858(0x18)

	void SetState(float InOffsetFraction, float InThumbSizeFraction); // Function UMG.ScrollBar.SetState // (Final|Native|Public|BlueprintCallable) // @ game+0x913672c
};

// Class UMG.ScrollBoxSlot
// Size: 0x58 (Inherited: 0x38)
struct UScrollBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0xe]; // 0x4a(0x0e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ScrollBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x9136ba0
	void SetPadding(struct FMargin InPadding); // Function UMG.ScrollBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x913615c
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ScrollBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x9135dd0
};

// Class UMG.SizeBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct USizeBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	char pad_48[0x10]; // 0x48(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.SizeBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x9138958
	void SetPadding(struct FMargin InPadding); // Function UMG.SizeBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x2426b80
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.SizeBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x913801c
};

// Class UMG.SlateBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct USlateBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FVector2D TransformVectorLocalToAbsolute(struct FGeometry& Geometry, struct FVector2D LocalVector); // Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x9138dc4
	struct FVector2D TransformVectorAbsoluteToLocal(struct FGeometry& Geometry, struct FVector2D AbsoluteVector); // Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x9138c60
	float TransformScalarLocalToAbsolute(struct FGeometry& Geometry, float LocalScalar); // Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x9138b2c
	float TransformScalarAbsoluteToLocal(struct FGeometry& Geometry, float AbsoluteScalar); // Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x91389d8
	void ScreenToWidgetLocal(struct UObject* WorldContextObject, struct FGeometry& Geometry, struct FVector2D ScreenPosition, struct FVector2D& LocalCoordinate, bool bIncludeWindowPosition); // Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x9137c24
	void ScreenToWidgetAbsolute(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D& AbsoluteCoordinate, bool bIncludeWindowPosition); // Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x9137ae0
	void ScreenToViewport(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D& ViewportPosition); // Function UMG.SlateBlueprintLibrary.ScreenToViewport // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x91379d8
	void LocalToViewport(struct UObject* WorldContextObject, struct FGeometry& Geometry, struct FVector2D LocalCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition); // Function UMG.SlateBlueprintLibrary.LocalToViewport // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x91377d4
	struct FVector2D LocalToAbsolute(struct FGeometry& Geometry, struct FVector2D LocalCoordinate); // Function UMG.SlateBlueprintLibrary.LocalToAbsolute // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x2138b04
	bool IsUnderLocation(struct FGeometry& Geometry, struct FVector2D& AbsoluteCoordinate); // Function UMG.SlateBlueprintLibrary.IsUnderLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x9137658
	struct FVector2D GetLocalTopLeft(struct FGeometry& Geometry); // Function UMG.SlateBlueprintLibrary.GetLocalTopLeft // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x91373dc
	struct FVector2D GetLocalSize(struct FGeometry& Geometry); // Function UMG.SlateBlueprintLibrary.GetLocalSize // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x21fda00
	struct FVector2D GetAbsoluteSize(struct FGeometry& Geometry); // Function UMG.SlateBlueprintLibrary.GetAbsoluteSize // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x9137254
	bool EqualEqual_SlateBrush(struct FSlateBrush& A, struct FSlateBrush& B); // Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1e1689c
	void AbsoluteToViewport(struct UObject* WorldContextObject, struct FVector2D AbsoluteDesktopCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition); // Function UMG.SlateBlueprintLibrary.AbsoluteToViewport // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x9137030
	struct FVector2D AbsoluteToLocal(struct FGeometry& Geometry, struct FVector2D AbsoluteCoordinate); // Function UMG.SlateBlueprintLibrary.AbsoluteToLocal // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x9136eb4
};

// Class UMG.SlateVectorArtData
// Size: 0x70 (Inherited: 0x28)
struct USlateVectorArtData : UObject {
	struct TArray<struct FSlateMeshVertex> VertexData; // 0x28(0x10)
	struct TArray<uint32_t> IndexData; // 0x38(0x10)
	struct UMaterialInterface* Material; // 0x48(0x08)
	struct FVector2D ExtentMin; // 0x50(0x10)
	struct FVector2D ExtentMax; // 0x60(0x10)
};

// Class UMG.SlateAccessibleWidgetData
// Size: 0x80 (Inherited: 0x28)
struct USlateAccessibleWidgetData : UObject {
	bool bCanChildrenBeAccessible; // 0x28(0x01)
	enum class ESlateAccessibleBehavior AccessibleBehavior; // 0x29(0x01)
	enum class ESlateAccessibleBehavior AccessibleSummaryBehavior; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
	struct FText AccessibleText; // 0x30(0x18)
	struct FDelegate AccessibleTextDelegate; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)
	struct FText AccessibleSummaryText; // 0x58(0x18)
	struct FDelegate AccessibleSummaryTextDelegate; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class UMG.Spacer
// Size: 0x168 (Inherited: 0x148)
struct USpacer : UWidget {
	struct FVector2D Size; // 0x148(0x10)
	char pad_158[0x10]; // 0x158(0x10)

	void SetSize(struct FVector2D InSize); // Function UMG.Spacer.SetSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x22e20b0
};

// Class UMG.SpinBox
// Size: 0x7f0 (Inherited: 0x148)
struct USpinBox : UWidget {
	float Value; // 0x148(0x04)
	struct FDelegate ValueDelegate; // 0x14c(0x0c)
	char pad_158[0x8]; // 0x158(0x08)
	struct FSpinBoxStyle WidgetStyle; // 0x160(0x590)
	int32_t MinFractionalDigits; // 0x6f0(0x04)
	int32_t MaxFractionalDigits; // 0x6f4(0x04)
	bool bAlwaysUsesDeltaSnap; // 0x6f8(0x01)
	bool bEnableSlider; // 0x6f9(0x01)
	char pad_6FA[0x2]; // 0x6fa(0x02)
	float Delta; // 0x6fc(0x04)
	float SliderExponent; // 0x700(0x04)
	char pad_704[0x4]; // 0x704(0x04)
	struct FSlateFontInfo Font; // 0x708(0x58)
	enum class ETextJustify Justification; // 0x760(0x01)
	char pad_761[0x3]; // 0x761(0x03)
	float MinDesiredWidth; // 0x764(0x04)
	enum class EVirtualKeyboardType KeyboardType; // 0x768(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x769(0x01)
	bool SelectAllTextOnCommit; // 0x76a(0x01)
	char pad_76B[0x1]; // 0x76b(0x01)
	struct FSlateColor ForegroundColor; // 0x76c(0x14)
	struct FMulticastInlineDelegate OnValueChanged; // 0x780(0x10)
	struct FMulticastInlineDelegate OnValueCommitted; // 0x790(0x10)
	struct FMulticastInlineDelegate OnBeginSliderMovement; // 0x7a0(0x10)
	struct FMulticastInlineDelegate OnEndSliderMovement; // 0x7b0(0x10)
	char bOverride_MinValue : 1; // 0x7c0(0x01)
	char bOverride_MaxValue : 1; // 0x7c0(0x01)
	char bOverride_MinSliderValue : 1; // 0x7c0(0x01)
	char bOverride_MaxSliderValue : 1; // 0x7c0(0x01)
	char pad_7C0_4 : 4; // 0x7c0(0x01)
	char pad_7C1[0x3]; // 0x7c1(0x03)
	float MinValue; // 0x7c4(0x04)
	float MaxValue; // 0x7c8(0x04)
	float MinSliderValue; // 0x7cc(0x04)
	float MaxSliderValue; // 0x7d0(0x04)
	char pad_7D4[0x1c]; // 0x7d4(0x1c)

	void SetValue(float NewValue); // Function UMG.SpinBox.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x91388d4
	void SetMinValue(float NewValue); // Function UMG.SpinBox.SetMinValue // (Final|Native|Public|BlueprintCallable) // @ game+0x91386bc
	void SetMinSliderValue(float NewValue); // Function UMG.SpinBox.SetMinSliderValue // (Final|Native|Public|BlueprintCallable) // @ game+0x91385b4
	void SetMinFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMinFractionalDigits // (Final|Native|Public|BlueprintCallable) // @ game+0x9138534
	void SetMaxValue(float NewValue); // Function UMG.SpinBox.SetMaxValue // (Final|Native|Public|BlueprintCallable) // @ game+0x913842c
	void SetMaxSliderValue(float NewValue); // Function UMG.SpinBox.SetMaxSliderValue // (Final|Native|Public|BlueprintCallable) // @ game+0x9138324
	void SetMaxFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMaxFractionalDigits // (Final|Native|Public|BlueprintCallable) // @ game+0x91382a4
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.SpinBox.SetForegroundColor // (Final|Native|Public|BlueprintCallable) // @ game+0x9137f80
	void SetDelta(float NewValue); // Function UMG.SpinBox.SetDelta // (Final|Native|Public|BlueprintCallable) // @ game+0x9137efc
	void SetAlwaysUsesDeltaSnap(bool bNewValue); // Function UMG.SpinBox.SetAlwaysUsesDeltaSnap // (Final|Native|Public|BlueprintCallable) // @ game+0x9137e20
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod); // DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xda071c
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue); // DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xda071c
	void OnSpinBoxBeginSliderMovement__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xda071c
	float GetValue(); // Function UMG.SpinBox.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9137630
	float GetMinValue(); // Function UMG.SpinBox.GetMinValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91375c8
	float GetMinSliderValue(); // Function UMG.SpinBox.GetMinSliderValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91375a0
	int32_t GetMinFractionalDigits(); // Function UMG.SpinBox.GetMinFractionalDigits // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9137560
	float GetMaxValue(); // Function UMG.SpinBox.GetMaxValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9137538
	float GetMaxSliderValue(); // Function UMG.SpinBox.GetMaxSliderValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9137510
	int32_t GetMaxFractionalDigits(); // Function UMG.SpinBox.GetMaxFractionalDigits // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91374d0
	float GetDelta(); // Function UMG.SpinBox.GetDelta // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91373b4
	bool GetAlwaysUsesDeltaSnap(); // Function UMG.SpinBox.GetAlwaysUsesDeltaSnap // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9137374
	void ClearMinValue(); // Function UMG.SpinBox.ClearMinValue // (Final|Native|Public|BlueprintCallable) // @ game+0x9137240
	void ClearMinSliderValue(); // Function UMG.SpinBox.ClearMinSliderValue // (Final|Native|Public|BlueprintCallable) // @ game+0x913722c
	void ClearMaxValue(); // Function UMG.SpinBox.ClearMaxValue // (Final|Native|Public|BlueprintCallable) // @ game+0x91371dc
	void ClearMaxSliderValue(); // Function UMG.SpinBox.ClearMaxSliderValue // (Final|Native|Public|BlueprintCallable) // @ game+0x91371c8
};

// Class UMG.TextBinding
// Size: 0x68 (Inherited: 0x60)
struct UTextBinding : UPropertyBinding {
	char pad_60[0x8]; // 0x60(0x08)

	struct FText GetTextValue(); // Function UMG.TextBinding.GetTextValue // (Final|Native|Public|Const) // @ game+0x913acf8
	struct FString GetStringValue(); // Function UMG.TextBinding.GetStringValue // (Final|Native|Public|Const) // @ game+0x913ac84
};

// Class UMG.Throbber
// Size: 0x220 (Inherited: 0x148)
struct UThrobber : UWidget {
	int32_t NumberOfPieces; // 0x148(0x04)
	bool bAnimateHorizontally; // 0x14c(0x01)
	bool bAnimateVertically; // 0x14d(0x01)
	bool bAnimateOpacity; // 0x14e(0x01)
	char pad_14F[0x1]; // 0x14f(0x01)
	struct FSlateBrush Image; // 0x150(0xc0)
	char pad_210[0x10]; // 0x210(0x10)

	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.Throbber.SetNumberOfPieces // (Final|Native|Public|BlueprintCallable) // @ game+0x913c2ec
	void SetAnimateVertically(bool bInAnimateVertically); // Function UMG.Throbber.SetAnimateVertically // (Final|Native|Public|BlueprintCallable) // @ game+0x913b8ec
	void SetAnimateOpacity(bool bInAnimateOpacity); // Function UMG.Throbber.SetAnimateOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x913b824
	void SetAnimateHorizontally(bool bInAnimateHorizontally); // Function UMG.Throbber.SetAnimateHorizontally // (Final|Native|Public|BlueprintCallable) // @ game+0x913b75c
};

// Class UMG.UMGSequencePlayer
// Size: 0x378 (Inherited: 0x28)
struct UUMGSequencePlayer : UObject {
	char pad_28[0x1f0]; // 0x28(0x1f0)
	struct UWidgetAnimation* Animation; // 0x218(0x08)
	char pad_220[0x8]; // 0x220(0x08)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x228(0xe0)
	char pad_308[0x70]; // 0x308(0x70)

	void SetUserTag(struct FName InUserTag); // Function UMG.UMGSequencePlayer.SetUserTag // (Final|Native|Public|BlueprintCallable) // @ game+0x913c9b4
	struct FName GetUserTag(); // Function UMG.UMGSequencePlayer.GetUserTag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913ad7c
};

// Class UMG.UMGSequenceTickManager
// Size: 0x118 (Inherited: 0x28)
struct UUMGSequenceTickManager : UObject {
	struct TMap<struct TWeakObjectPtr<struct UUserWidget>, struct FSequenceTickManagerWidgetData> WeakUserWidgetData; // 0x28(0x50)
	struct UMovieSceneEntitySystemLinker* Linker; // 0x78(0x08)
	char pad_80[0x98]; // 0x80(0x98)
};

// Class UMG.UniformGridPanel
// Size: 0x188 (Inherited: 0x160)
struct UUniformGridPanel : UPanelWidget {
	struct FMargin SlotPadding; // 0x160(0x10)
	float MinDesiredSlotWidth; // 0x170(0x04)
	float MinDesiredSlotHeight; // 0x174(0x04)
	char pad_178[0x10]; // 0x178(0x10)

	void SetSlotPadding(struct FMargin InSlotPadding); // Function UMG.UniformGridPanel.SetSlotPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x913c778
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth); // Function UMG.UniformGridPanel.SetMinDesiredSlotWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x913c0e4
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight); // Function UMG.UniformGridPanel.SetMinDesiredSlotHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x913c060
	struct UUniformGridSlot* AddChildToUniformGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn); // Function UMG.UniformGridPanel.AddChildToUniformGrid // (Final|Native|Public|BlueprintCallable) // @ game+0x1b1eb6c
};

// Class UMG.UniformGridSlot
// Size: 0x50 (Inherited: 0x38)
struct UUniformGridSlot : UPanelSlot {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x38(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	int32_t Row; // 0x3c(0x04)
	int32_t Column; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.UniformGridSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x1ef6460
	void SetRow(int32_t InRow); // Function UMG.UniformGridSlot.SetRow // (Final|Native|Public|BlueprintCallable) // @ game+0x1ef73e4
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.UniformGridSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x1ef1fa8
	void SetColumn(int32_t InColumn); // Function UMG.UniformGridSlot.SetColumn // (Final|Native|Public|BlueprintCallable) // @ game+0x1ef7480
};

// Class UMG.UserWidgetBlueprint
// Size: 0xa8 (Inherited: 0xa8)
struct UUserWidgetBlueprint : UBlueprint {
};

// Class UMG.UserWidgetExtension
// Size: 0x28 (Inherited: 0x28)
struct UUserWidgetExtension : UObject {
};

// Class UMG.VerticalBox
// Size: 0x170 (Inherited: 0x160)
struct UVerticalBox : UPanelWidget {
	char pad_160[0x10]; // 0x160(0x10)

	struct UVerticalBoxSlot* AddChildToVerticalBox(struct UWidget* Content); // Function UMG.VerticalBox.AddChildToVerticalBox // (Final|Native|Public|BlueprintCallable) // @ game+0x913d160
};

// Class UMG.VerticalBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UVerticalBoxSlot : UPanelSlot {
	struct FSlateChildSize Size; // 0x38(0x08)
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.VerticalBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x913e5a0
	void SetSize(struct FSlateChildSize InSize); // Function UMG.VerticalBoxSlot.SetSize // (Final|Native|Public|BlueprintCallable) // @ game+0x913e350
	void SetPadding(struct FMargin InPadding); // Function UMG.VerticalBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x1f8bbc4
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.VerticalBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x913ddb8
};

// Class UMG.Viewport
// Size: 0x1b0 (Inherited: 0x160)
struct UViewport : UContentWidget {
	struct FLinearColor BackgroundColor; // 0x160(0x10)
	char pad_170[0x40]; // 0x170(0x40)

	struct AActor* Spawn(struct AActor* ActorClass); // Function UMG.Viewport.Spawn // (Final|Native|Public|BlueprintCallable) // @ game+0x913e758
	void SetViewRotation(struct FRotator Rotation); // Function UMG.Viewport.SetViewRotation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x913e6c8
	void SetViewLocation(struct FVector Location); // Function UMG.Viewport.SetViewLocation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x913e620
	struct FRotator GetViewRotation(); // Function UMG.Viewport.GetViewRotation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x913d6a8
	struct UWorld* GetViewportWorld(); // Function UMG.Viewport.GetViewportWorld // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x913d6f8
	struct FVector GetViewLocation(); // Function UMG.Viewport.GetViewLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x913d658
};

// Class UMG.VisibilityBinding
// Size: 0x60 (Inherited: 0x60)
struct UVisibilityBinding : UPropertyBinding {

	enum class ESlateVisibility GetValue(); // Function UMG.VisibilityBinding.GetValue // (Final|Native|Public|Const) // @ game+0x913d634
};

// Class UMG.WidgetAnimation
// Size: 0x98 (Inherited: 0x68)
struct UWidgetAnimation : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x68(0x08)
	struct TArray<struct FWidgetAnimationBinding> AnimationBindings; // 0x70(0x10)
	bool bLegacyFinishOnStop; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString DisplayLabel; // 0x88(0x10)

	void UnbindFromAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x9142b74
	void UnbindFromAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x1ecb028
	void UnbindAllFromAnimationStarted(struct UUserWidget* Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x9142ae8
	void UnbindAllFromAnimationFinished(struct UUserWidget* Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x9142a5c
	float GetStartTime(); // Function UMG.WidgetAnimation.GetStartTime // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9141714
	float GetEndTime(); // Function UMG.WidgetAnimation.GetEndTime // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1c1c45c
	void BindToAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x913e8d8
	void BindToAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x146498c
};

// Class UMG.WidgetAnimationDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UWidgetAnimationDelegateBinding : UDynamicBlueprintBinding {
	struct TArray<struct FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings; // 0x28(0x10)
};

// Class UMG.WidgetAnimationPlayCallbackProxy
// Size: 0x48 (Inherited: 0x28)
struct UWidgetAnimationPlayCallbackProxy : UObject {
	struct FMulticastInlineDelegate Finished; // 0x28(0x10)
	char pad_38[0x10]; // 0x38(0x10)

	struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(struct UUMGSequencePlayer*& Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x913f1a4
	struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(struct UUMGSequencePlayer*& Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x913ef94
};

// Class UMG.WidgetBinding
// Size: 0x60 (Inherited: 0x60)
struct UWidgetBinding : UPropertyBinding {

	struct UWidget* GetValue(); // Function UMG.WidgetBinding.GetValue // (Final|Native|Public|Const) // @ game+0x9141738
};

// Class UMG.WidgetBlueprintGeneratedClass
// Size: 0x400 (Inherited: 0x380)
struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass {
	struct UWidgetTree* WidgetTree; // 0x380(0x08)
	struct TArray<struct UWidgetBlueprintGeneratedClassExtension*> Extensions; // 0x388(0x10)
	struct TArray<struct FFieldNotificationId> FieldNotifyNames; // 0x398(0x10)
	char pad_3A8[0x4]; // 0x3a8(0x04)
	char bClassRequiresNativeTick : 1; // 0x3ac(0x01)
	char pad_3AC_1 : 7; // 0x3ac(0x01)
	char pad_3AD[0x3]; // 0x3ad(0x03)
	struct TArray<struct FDelegateRuntimeBinding> Bindings; // 0x3b0(0x10)
	struct TArray<struct UWidgetAnimation*> Animations; // 0x3c0(0x10)
	struct TArray<struct FName> NamedSlots; // 0x3d0(0x10)
	struct TArray<struct FName> AvailableNamedSlots; // 0x3e0(0x10)
	struct TArray<struct FName> InstanceNamedSlots; // 0x3f0(0x10)
};

// Class UMG.WidgetBlueprintGeneratedClassExtension
// Size: 0x28 (Inherited: 0x28)
struct UWidgetBlueprintGeneratedClassExtension : UObject {
};

// Class UMG.WidgetBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UWidgetBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FEventReply UnlockMouse(struct FEventReply& Reply); // Function UMG.WidgetBlueprintLibrary.UnlockMouse // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x9142cc8
	struct FEventReply Unhandled(); // Function UMG.WidgetBlueprintLibrary.Unhandled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9142c64
	void SetWindowTitleBarState(struct UWidget* TitleBarContent, enum class EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x91428d0
	void SetWindowTitleBarOnCloseClickedDelegate(struct FDelegate Delegate); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1b3741c
	void SetWindowTitleBarCloseButtonActive(bool bActive); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9142860
	struct FEventReply SetUserFocus(struct FEventReply& Reply, struct UWidget* FocusWidget, bool bInAllUsers); // Function UMG.WidgetBlueprintLibrary.SetUserFocus // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x913e9d4
	struct FEventReply SetMousePosition(struct FEventReply& Reply, struct FVector2D NewMousePosition); // Function UMG.WidgetBlueprintLibrary.SetMousePosition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x9142704
	void SetInputMode_UIOnlyEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode, bool bFlushInput); // Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x9142588
	void SetInputMode_GameOnly(struct APlayerController* PlayerController, bool bFlushInput); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x91424a0
	void SetInputMode_GameAndUIEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture, bool bFlushInput); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x91422b8
	bool SetHardwareCursor(struct UObject* WorldContextObject, enum class EMouseCursor CursorShape, struct FName CursorName, struct FVector2D HotSpot); // Function UMG.WidgetBlueprintLibrary.SetHardwareCursor // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x9142138
	void SetFocusToGameViewport(); // Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x914211c
	void SetColorVisionDeficiencyType(enum class EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency); // Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x9141fdc
	void SetBrushResourceToTexture(struct FSlateBrush& Brush, struct UTexture2D* Texture); // Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9141eec
	void SetBrushResourceToMaterial(struct FSlateBrush& Brush, struct UMaterialInterface* Material); // Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9141eec
	void RestorePreviousWindowTitleBarState(); // Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9141ed8
	struct FEventReply ReleaseMouseCapture(struct FEventReply& Reply); // Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x9141de0
	struct FEventReply ReleaseJoystickCapture(struct FEventReply& Reply, bool bInAllJoysticks); // Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x9141cb0
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature(); // DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature // (Public|Delegate) // @ game+0xda071c
	struct FSlateBrush NoResourceBrush(); // Function UMG.WidgetBlueprintLibrary.NoResourceBrush // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x254793c
	struct FSlateBrush MakeBrushFromTexture(struct UTexture2D* Texture, int32_t Width, int32_t Height); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9141b94
	struct FSlateBrush MakeBrushFromMaterial(struct UMaterialInterface* Material, int32_t Width, int32_t Height); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9141a78
	struct FSlateBrush MakeBrushFromAsset(struct USlateBrushAsset* BrushAsset); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x914199c
	struct FEventReply LockMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget); // Function UMG.WidgetBlueprintLibrary.LockMouse // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x91417e4
	bool IsDragDropping(); // Function UMG.WidgetBlueprintLibrary.IsDragDropping // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x91417c0
	struct FEventReply Handled(); // Function UMG.WidgetBlueprintLibrary.Handled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x914175c
	void GetSafeZonePadding(struct UObject* WorldContextObject, struct FVector4& SafePadding, struct FVector2D& SafePaddingScale, struct FVector4& SpillOverPadding); // Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1b84280
	struct FKeyEvent GetKeyEventFromAnalogInputEvent(struct FAnalogInputEvent& event); // Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x91415a8
	struct FInputEvent GetInputEventFromPointerEvent(struct FPointerEvent& event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x91414b8
	struct FInputEvent GetInputEventFromNavigationEvent(struct FNavigationEvent& event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x91413d8
	struct FInputEvent GetInputEventFromKeyEvent(struct FKeyEvent& event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x91412b8
	struct FInputEvent GetInputEventFromCharacterEvent(struct FCharacterEvent& event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x91411e4
	struct UMaterialInstanceDynamic* GetDynamicMaterial(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x2354498
	struct UDragDropOperation* GetDragDroppingContent(); // Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x91411c0
	struct UTexture2D* GetBrushResourceAsTexture2D(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x9141104
	struct UMaterialInterface* GetBrushResourceAsMaterial(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x9141048
	struct UObject* GetBrushResource(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResource // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1e9ff3c
	void GetAllWidgetsWithInterface(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*>& FoundWidgets, struct UInterface* Interface, bool TopLevelOnly); // Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9140c8c
	void GetAllWidgetsOfClass(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*>& FoundWidgets, struct UUserWidget* WidgetClass, bool TopLevelOnly); // Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x91409e4
	struct FEventReply EndDragDrop(struct FEventReply& Reply); // Function UMG.WidgetBlueprintLibrary.EndDragDrop // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x91408ec
	void DrawTextFormatted(struct FPaintContext& Context, struct FText& Text, struct FVector2D Position, struct UFont* Font, int32_t FontSize, struct FName FontTypeFace, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawTextFormatted // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x91404b0
	void DrawText(struct FPaintContext& Context, struct FString InString, struct FVector2D Position, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawText // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x9140274
	void DrawSpline(struct FPaintContext& Context, struct FVector2D Start, struct FVector2D StartDir, struct FVector2D End, struct FVector2D EndDir, struct FLinearColor Tint, float Thickness); // Function UMG.WidgetBlueprintLibrary.DrawSpline // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x914001c
	void DrawLines(struct FPaintContext& Context, struct TArray<struct FVector2D>& Points, struct FLinearColor Tint, bool bAntiAlias, float Thickness); // Function UMG.WidgetBlueprintLibrary.DrawLines // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x913fe44
	void DrawLine(struct FPaintContext& Context, struct FVector2D PositionA, struct FVector2D PositionB, struct FLinearColor Tint, bool bAntiAlias, float Thickness); // Function UMG.WidgetBlueprintLibrary.DrawLine // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x913fc44
	void DrawBox(struct FPaintContext& Context, struct FVector2D Position, struct FVector2D Size, struct USlateBrushAsset* Brush, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawBox // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x913f914
	void DismissAllMenus(); // Function UMG.WidgetBlueprintLibrary.DismissAllMenus // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x913f8f0
	struct FEventReply DetectDragIfPressed(struct FPointerEvent& PointerEvent, struct UWidget* WidgetDetectingDrag, struct FKey DragKey); // Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x913f6ec
	struct FEventReply DetectDrag(struct FEventReply& Reply, struct UWidget* WidgetDetectingDrag, struct FKey DragKey); // Function UMG.WidgetBlueprintLibrary.DetectDrag // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x913f3fc
	struct UDragDropOperation* CreateDragDropOperation(struct UDragDropOperation* OperationClass); // Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x913eec8
	struct UUserWidget* Create(struct UObject* WorldContextObject, struct UUserWidget* WidgetType, struct APlayerController* OwningPlayer); // Function UMG.WidgetBlueprintLibrary.Create // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1615660
	struct FEventReply ClearUserFocus(struct FEventReply& Reply, bool bInAllUsers); // Function UMG.WidgetBlueprintLibrary.ClearUserFocus // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x913eda0
	struct FEventReply CaptureMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget); // Function UMG.WidgetBlueprintLibrary.CaptureMouse // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x913ebe8
	struct FEventReply CaptureJoystick(struct FEventReply& Reply, struct UWidget* CapturingWidget, bool bInAllJoysticks); // Function UMG.WidgetBlueprintLibrary.CaptureJoystick // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x913e9d4
	void CancelDragDrop(); // Function UMG.WidgetBlueprintLibrary.CancelDragDrop // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x913e9b8
};

// Class UMG.WidgetFieldNotificationExtension
// Size: 0x40 (Inherited: 0x28)
struct UWidgetFieldNotificationExtension : UUserWidgetExtension {
	char pad_28[0x18]; // 0x28(0x18)
};

// Class UMG.WidgetInteractionComponent
// Size: 0x560 (Inherited: 0x2a0)
struct UWidgetInteractionComponent : USceneComponent {
	struct FMulticastInlineDelegate OnHoveredWidgetChanged; // 0x2a0(0x10)
	char pad_2B0[0x10]; // 0x2b0(0x10)
	int32_t VirtualUserIndex; // 0x2c0(0x04)
	int32_t PointerIndex; // 0x2c4(0x04)
	enum class ECollisionChannel TraceChannel; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	float InteractionDistance; // 0x2cc(0x04)
	enum class EWidgetInteractionSource InteractionSource; // 0x2d0(0x01)
	bool bEnableHitTesting; // 0x2d1(0x01)
	bool bShowDebug; // 0x2d2(0x01)
	char pad_2D3[0x1]; // 0x2d3(0x01)
	float DebugSphereLineThickness; // 0x2d4(0x04)
	float DebugLineThickness; // 0x2d8(0x04)
	struct FLinearColor DebugColor; // 0x2dc(0x10)
	char pad_2EC[0x7c]; // 0x2ec(0x7c)
	struct FHitResult CustomHitResult; // 0x368(0xe0)
	struct FVector2D LocalHitLocation; // 0x448(0x10)
	struct FVector2D LastLocalHitLocation; // 0x458(0x10)
	struct UWidgetComponent* HoveredWidgetComponent; // 0x468(0x08)
	struct FHitResult LastHitResult; // 0x470(0xe0)
	bool bIsHoveredWidgetInteractable; // 0x550(0x01)
	bool bIsHoveredWidgetFocusable; // 0x551(0x01)
	bool bIsHoveredWidgetHitTestVisible; // 0x552(0x01)
	char pad_553[0xd]; // 0x553(0x0d)

	void SetFocus(struct UWidget* FocusWidget); // Function UMG.WidgetInteractionComponent.SetFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x91443f0
	void SetCustomHitResult(struct FHitResult& HitResult); // Function UMG.WidgetInteractionComponent.SetCustomHitResult // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x914413c
	bool SendKeyChar(struct FString Characters, bool bRepeat); // Function UMG.WidgetInteractionComponent.SendKeyChar // (Native|Public|BlueprintCallable) // @ game+0x9143ebc
	void ScrollWheel(float ScrollDelta); // Function UMG.WidgetInteractionComponent.ScrollWheel // (Native|Public|BlueprintCallable) // @ game+0x9143e34
	void ReleasePointerKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.ReleasePointerKey // (Native|Public|BlueprintCallable) // @ game+0x9143c9c
	bool ReleaseKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.ReleaseKey // (Native|Public|BlueprintCallable) // @ game+0x9143ba8
	void PressPointerKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.PressPointerKey // (Native|Public|BlueprintCallable) // @ game+0x91438b4
	bool PressKey(struct FKey Key, bool bRepeat); // Function UMG.WidgetInteractionComponent.PressKey // (Native|Public|BlueprintCallable) // @ game+0x9143778
	bool PressAndReleaseKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.PressAndReleaseKey // (Native|Public|BlueprintCallable) // @ game+0x9143684
	bool IsOverInteractableWidget(); // Function UMG.WidgetInteractionComponent.IsOverInteractableWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9143648
	bool IsOverHitTestVisibleWidget(); // Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9143630
	bool IsOverFocusableWidget(); // Function UMG.WidgetInteractionComponent.IsOverFocusableWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9143618
	struct FHitResult GetLastHitResult(); // Function UMG.WidgetInteractionComponent.GetLastHitResult // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x914303c
	struct UWidgetComponent* GetHoveredWidgetComponent(); // Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9143024
	struct FVector2D Get2DHitLocation(); // Function UMG.WidgetInteractionComponent.Get2DHitLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x9142f68
};

// Class UMG.WidgetLayoutLibrary
// Size: 0x28 (Inherited: 0x28)
struct UWidgetLayoutLibrary : UBlueprintFunctionLibrary {

	struct UWrapBoxSlot* SlotAsWrapBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9144e68
	struct UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9144dd0
	struct UVerticalBoxSlot* SlotAsVerticalBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x205a330
	struct UUniformGridSlot* SlotAsUniformGridSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9144d38
	struct USizeBoxSlot* SlotAsSizeBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1965508
	struct UScrollBoxSlot* SlotAsScrollBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9144ca0
	struct UScaleBoxSlot* SlotAsScaleBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9144c08
	struct USafeZoneSlot* SlotAsSafeBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9144b70
	struct UOverlaySlot* SlotAsOverlaySlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1f9bba8
	struct UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x176eb50
	struct UGridSlot* SlotAsGridSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsGridSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9144ad8
	struct UCanvasPanelSlot* SlotAsCanvasSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9144a58
	struct UBorderSlot* SlotAsBorderSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1965c0c
	void RemoveAllWidgets(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.RemoveAllWidgets // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x9143d84
	bool ProjectWorldLocationToWidgetPosition(struct APlayerController* PlayerController, struct FVector WorldLocation, struct FVector2D& ScreenPosition, bool bPlayerViewportRelative); // Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x914399c
	struct FGeometry GetViewportWidgetGeometry(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9143540
	struct FVector2D GetViewportSize(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportSize // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x91434b8
	float GetViewportScale(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportScale // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9143438
	struct FGeometry GetPlayerScreenWidgetGeometry(struct APlayerController* PlayerController); // Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9143328
	bool GetMousePositionScaledByDPI(struct APlayerController* Player, float& LocationX, float& LocationY); // Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x9143190
	struct FVector2D GetMousePositionOnViewport(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x9143108
	struct FVector2D GetMousePositionOnPlatform(); // Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x220d5a0
};

// Class UMG.WidgetNavigation
// Size: 0xd0 (Inherited: 0x28)
struct UWidgetNavigation : UObject {
	struct FWidgetNavigationData Up; // 0x28(0x1c)
	struct FWidgetNavigationData Down; // 0x44(0x1c)
	struct FWidgetNavigationData Left; // 0x60(0x1c)
	struct FWidgetNavigationData Right; // 0x7c(0x1c)
	struct FWidgetNavigationData Next; // 0x98(0x1c)
	struct FWidgetNavigationData Previous; // 0xb4(0x1c)
};

// Class UMG.WidgetSwitcherSlot
// Size: 0x58 (Inherited: 0x38)
struct UWidgetSwitcherSlot : UPanelSlot {
	char pad_38[0x8]; // 0x38(0x08)
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WidgetSwitcherSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x91694f4
	void SetPadding(struct FMargin InPadding); // Function UMG.WidgetSwitcherSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x91692c4
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x9168f38
};

// Class UMG.WidgetTree
// Size: 0x88 (Inherited: 0x28)
struct UWidgetTree : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UWidget* RootWidget; // 0x30(0x08)
	struct TMap<struct FName, struct UWidget*> NamedSlotBindings; // 0x38(0x50)
};

// Class UMG.WindowTitleBarArea
// Size: 0x180 (Inherited: 0x160)
struct UWindowTitleBarArea : UContentWidget {
	bool bWindowButtonsEnabled; // 0x160(0x01)
	bool bDoubleClickTogglesFullscreen; // 0x161(0x01)
	char pad_162[0x1e]; // 0x162(0x1e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WindowTitleBarArea.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x9169574
	void SetPadding(struct FMargin InPadding); // Function UMG.WindowTitleBarArea.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x9169350
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WindowTitleBarArea.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x9168fb8
};

// Class UMG.WindowTitleBarAreaSlot
// Size: 0x60 (Inherited: 0x38)
struct UWindowTitleBarAreaSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x91695f4
	void SetPadding(struct FMargin InPadding); // Function UMG.WindowTitleBarAreaSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x91693dc
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x9169038
};

// Class UMG.WrapBox
// Size: 0x188 (Inherited: 0x160)
struct UWrapBox : UPanelWidget {
	struct FVector2D InnerSlotPadding; // 0x160(0x10)
	float WrapSize; // 0x170(0x04)
	bool bExplicitWrapSize; // 0x174(0x01)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x175(0x01)
	enum class EOrientation Orientation; // 0x176(0x01)
	char pad_177[0x11]; // 0x177(0x11)

	void SetInnerSlotPadding(struct FVector2D InPadding); // Function UMG.WrapBox.SetInnerSlotPadding // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x91691bc
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WrapBox.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x91690bc
	struct UWrapBoxSlot* AddChildToWrapBox(struct UWidget* Content); // Function UMG.WrapBox.AddChildToWrapBox // (Final|Native|Public|BlueprintCallable) // @ game+0x9168bf4
};

// Class UMG.WrapBoxSlot
// Size: 0x58 (Inherited: 0x38)
struct UWrapBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	float FillSpanWhenLessThan; // 0x48(0x04)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x4c(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x4d(0x01)
	bool bFillEmptySpace; // 0x4e(0x01)
	bool bForceNewLine; // 0x4f(0x01)
	char pad_50[0x8]; // 0x50(0x08)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WrapBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x9169678
	void SetPadding(struct FMargin InPadding); // Function UMG.WrapBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x9169468
	void SetNewLine(bool InForceNewLine); // Function UMG.WrapBoxSlot.SetNewLine // (Final|Native|Public|BlueprintCallable) // @ game+0x9169244
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WrapBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x916913c
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan); // Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan // (Final|Native|Public|BlueprintCallable) // @ game+0x9168eb4
	void SetFillEmptySpace(bool InbFillEmptySpace); // Function UMG.WrapBoxSlot.SetFillEmptySpace // (Final|Native|Public|BlueprintCallable) // @ game+0x9168e34
};

