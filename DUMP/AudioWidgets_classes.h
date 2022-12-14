// Class AudioWidgets.AudioMeter
// Size: 0x680 (Inherited: 0x148)
struct UAudioMeter : UWidget {
	struct TArray<struct FMeterChannelInfo> MeterChannelInfo; // 0x148(0x10)
	struct FDelegate MeterChannelInfoDelegate; // 0x158(0x0c)
	char pad_164[0xc]; // 0x164(0x0c)
	struct FAudioMeterStyle WidgetStyle; // 0x170(0x480)
	enum class EOrientation Orientation; // 0x5f0(0x01)
	char pad_5F1[0x3]; // 0x5f1(0x03)
	struct FLinearColor BackgroundColor; // 0x5f4(0x10)
	struct FLinearColor MeterBackgroundColor; // 0x604(0x10)
	struct FLinearColor MeterValueColor; // 0x614(0x10)
	struct FLinearColor MeterPeakColor; // 0x624(0x10)
	struct FLinearColor MeterClippingColor; // 0x634(0x10)
	struct FLinearColor MeterScaleColor; // 0x644(0x10)
	struct FLinearColor MeterScaleLabelColor; // 0x654(0x10)
	char pad_664[0x1c]; // 0x664(0x1c)

	void SetMeterValueColor(struct FLinearColor InValue); // Function AudioWidgets.AudioMeter.SetMeterValueColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x6e25058
	void SetMeterScaleLabelColor(struct FLinearColor InValue); // Function AudioWidgets.AudioMeter.SetMeterScaleLabelColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x6e24fbc
	void SetMeterScaleColor(struct FLinearColor InValue); // Function AudioWidgets.AudioMeter.SetMeterScaleColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x6e24f20
	void SetMeterPeakColor(struct FLinearColor InValue); // Function AudioWidgets.AudioMeter.SetMeterPeakColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x6e24e84
	void SetMeterClippingColor(struct FLinearColor InValue); // Function AudioWidgets.AudioMeter.SetMeterClippingColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x6e24de8
	void SetMeterChannelInfo(struct TArray<struct FMeterChannelInfo>& InMeterChannelInfo); // Function AudioWidgets.AudioMeter.SetMeterChannelInfo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6e24d4c
	void SetMeterBackgroundColor(struct FLinearColor InValue); // Function AudioWidgets.AudioMeter.SetMeterBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x6e24cb0
	void SetBackgroundColor(struct FLinearColor InValue); // Function AudioWidgets.AudioMeter.SetBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x6e24aec
	struct TArray<struct FMeterChannelInfo> GetMeterChannelInfo__DelegateSignature(); // DelegateFunction AudioWidgets.AudioMeter.GetMeterChannelInfo__DelegateSignature // (Public|Delegate) // @ game+0xda071c
	struct TArray<struct FMeterChannelInfo> GetMeterChannelInfo(); // Function AudioWidgets.AudioMeter.GetMeterChannelInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6e249a0
};

// Class AudioWidgets.AudioRadialSlider
// Size: 0x350 (Inherited: 0x148)
struct UAudioRadialSlider : UWidget {
	float Value; // 0x148(0x04)
	struct FDelegate ValueDelegate; // 0x14c(0x0c)
	enum class EAudioRadialSliderLayout WidgetLayout; // 0x158(0x01)
	char pad_159[0x3]; // 0x159(0x03)
	struct FLinearColor CenterBackgroundColor; // 0x15c(0x10)
	struct FLinearColor SliderProgressColor; // 0x16c(0x10)
	struct FLinearColor SliderBarColor; // 0x17c(0x10)
	char pad_18C[0x4]; // 0x18c(0x04)
	struct FVector2D HandStartEndRatio; // 0x190(0x10)
	struct FText UnitsText; // 0x1a0(0x18)
	struct FLinearColor TextLabelBackgroundColor; // 0x1b8(0x10)
	bool ShowLabelOnlyOnHover; // 0x1c8(0x01)
	bool ShowUnitsText; // 0x1c9(0x01)
	bool IsUnitsTextReadOnly; // 0x1ca(0x01)
	bool IsValueTextReadOnly; // 0x1cb(0x01)
	float SliderThickness; // 0x1cc(0x04)
	struct FVector2D OutputRange; // 0x1d0(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x1e0(0x10)
	char pad_1F0[0x160]; // 0x1f0(0x160)

	void SetWidgetLayout(enum class EAudioRadialSliderLayout InLayout); // Function AudioWidgets.AudioRadialSlider.SetWidgetLayout // (Final|Native|Public|BlueprintCallable) // @ game+0x6e25d1c
	void SetValueTextReadOnly(bool bIsReadOnly); // Function AudioWidgets.AudioRadialSlider.SetValueTextReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x6e25b60
	void SetUnitsTextReadOnly(bool bIsReadOnly); // Function AudioWidgets.AudioRadialSlider.SetUnitsTextReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x6e25a48
	void SetUnitsText(struct FText Units); // Function AudioWidgets.AudioRadialSlider.SetUnitsText // (Final|Native|Public|BlueprintCallable) // @ game+0x6e25898
	void SetTextLabelBackgroundColor(struct FSlateColor InColor); // Function AudioWidgets.AudioRadialSlider.SetTextLabelBackgroundColor // (Final|Native|Public|BlueprintCallable) // @ game+0x6e25760
	void SetSliderThickness(float InThickness); // Function AudioWidgets.AudioRadialSlider.SetSliderThickness // (Final|Native|Public|BlueprintCallable) // @ game+0x6e2562c
	void SetSliderProgressColor(struct FLinearColor InValue); // Function AudioWidgets.AudioRadialSlider.SetSliderProgressColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x6e25590
	void SetSliderBarColor(struct FLinearColor InValue); // Function AudioWidgets.AudioRadialSlider.SetSliderBarColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x6e25458
	void SetShowUnitsText(bool bShowUnitsText); // Function AudioWidgets.AudioRadialSlider.SetShowUnitsText // (Final|Native|Public|BlueprintCallable) // @ game+0x6e252a4
	void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover); // Function AudioWidgets.AudioRadialSlider.SetShowLabelOnlyOnHover // (Final|Native|Public|BlueprintCallable) // @ game+0x6e25184
	void SetOutputRange(struct FVector2D InOutputRange); // Function AudioWidgets.AudioRadialSlider.SetOutputRange // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x6e250f4
	void SetHandStartEndRatio(struct FVector2D InHandStartEndRatio); // Function AudioWidgets.AudioRadialSlider.SetHandStartEndRatio // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x6e24c24
	void SetCenterBackgroundColor(struct FLinearColor InValue); // Function AudioWidgets.AudioRadialSlider.SetCenterBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x6e24b88
};

// Class AudioWidgets.AudioVolumeRadialSlider
// Size: 0x350 (Inherited: 0x350)
struct UAudioVolumeRadialSlider : UAudioRadialSlider {
};

// Class AudioWidgets.AudioFrequencyRadialSlider
// Size: 0x350 (Inherited: 0x350)
struct UAudioFrequencyRadialSlider : UAudioRadialSlider {
};

// Class AudioWidgets.AudioSliderBase
// Size: 0x900 (Inherited: 0x148)
struct UAudioSliderBase : UWidget {
	float Value; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct FText UnitsText; // 0x150(0x18)
	struct FLinearColor TextLabelBackgroundColor; // 0x168(0x10)
	struct FDelegate TextLabelBackgroundColorDelegate; // 0x178(0x0c)
	bool ShowLabelOnlyOnHover; // 0x184(0x01)
	bool ShowUnitsText; // 0x185(0x01)
	bool IsUnitsTextReadOnly; // 0x186(0x01)
	bool IsValueTextReadOnly; // 0x187(0x01)
	struct FDelegate ValueDelegate; // 0x188(0x0c)
	struct FLinearColor SliderBackgroundColor; // 0x194(0x10)
	struct FDelegate SliderBackgroundColorDelegate; // 0x1a4(0x0c)
	struct FLinearColor SliderBarColor; // 0x1b0(0x10)
	struct FDelegate SliderBarColorDelegate; // 0x1c0(0x0c)
	struct FLinearColor SliderThumbColor; // 0x1cc(0x10)
	struct FDelegate SliderThumbColorDelegate; // 0x1dc(0x0c)
	struct FLinearColor WidgetBackgroundColor; // 0x1e8(0x10)
	struct FDelegate WidgetBackgroundColorDelegate; // 0x1f8(0x0c)
	enum class EOrientation Orientation; // 0x204(0x01)
	char pad_205[0x3]; // 0x205(0x03)
	struct FMulticastInlineDelegate OnValueChanged; // 0x208(0x10)
	char pad_218[0x6e8]; // 0x218(0x6e8)

	void SetWidgetBackgroundColor(struct FLinearColor InValue); // Function AudioWidgets.AudioSliderBase.SetWidgetBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x6e25c80
	void SetValueTextReadOnly(bool bIsReadOnly); // Function AudioWidgets.AudioSliderBase.SetValueTextReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x6e25bf0
	void SetUnitsTextReadOnly(bool bIsReadOnly); // Function AudioWidgets.AudioSliderBase.SetUnitsTextReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x6e25ad4
	void SetUnitsText(struct FText Units); // Function AudioWidgets.AudioSliderBase.SetUnitsText // (Final|Native|Public|BlueprintCallable) // @ game+0x6e25970
	void SetTextLabelBackgroundColor(struct FSlateColor InColor); // Function AudioWidgets.AudioSliderBase.SetTextLabelBackgroundColor // (Final|Native|Public|BlueprintCallable) // @ game+0x6e257fc
	void SetSliderThumbColor(struct FLinearColor InValue); // Function AudioWidgets.AudioSliderBase.SetSliderThumbColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x6e256c4
	void SetSliderBarColor(struct FLinearColor InValue); // Function AudioWidgets.AudioSliderBase.SetSliderBarColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x6e254f4
	void SetSliderBackgroundColor(struct FLinearColor InValue); // Function AudioWidgets.AudioSliderBase.SetSliderBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x6e253bc
	void SetShowUnitsText(bool bShowUnitsText); // Function AudioWidgets.AudioSliderBase.SetShowUnitsText // (Final|Native|Public|BlueprintCallable) // @ game+0x6e25330
	void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover); // Function AudioWidgets.AudioSliderBase.SetShowLabelOnlyOnHover // (Final|Native|Public|BlueprintCallable) // @ game+0x6e25214
	float GetOutputValue(float LinValue); // Function AudioWidgets.AudioSliderBase.GetOutputValue // (Final|Native|Public|BlueprintCallable) // @ game+0x6e24a50
	float GetLinValue(float OutputValue); // Function AudioWidgets.AudioSliderBase.GetLinValue // (Final|Native|Public|BlueprintCallable) // @ game+0x6e24904
};

// Class AudioWidgets.AudioSlider
// Size: 0x910 (Inherited: 0x900)
struct UAudioSlider : UAudioSliderBase {
	struct TWeakObjectPtr<struct UCurveFloat> LinToOutputCurve; // 0x900(0x08)
	struct TWeakObjectPtr<struct UCurveFloat> OutputToLinCurve; // 0x908(0x08)
};

// Class AudioWidgets.AudioVolumeSlider
// Size: 0x910 (Inherited: 0x910)
struct UAudioVolumeSlider : UAudioSlider {
};

// Class AudioWidgets.AudioFrequencySlider
// Size: 0x910 (Inherited: 0x900)
struct UAudioFrequencySlider : UAudioSliderBase {
	struct FVector2D OutputRange; // 0x900(0x10)
};

