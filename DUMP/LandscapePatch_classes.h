// Class LandscapePatch.LandscapePatchComponent
// Size: 0x320 (Inherited: 0x2a0)
struct ULandscapePatchComponent : USceneComponent {
	struct TSoftObjectPtr<ALandscape> Landscape; // 0x2a0(0x28)
	struct TSoftObjectPtr<ALandscapePatchManager> PatchManager; // 0x2c8(0x28)
	char pad_2F0[0x2]; // 0x2f0(0x02)
	bool bIsEnabled; // 0x2f2(0x01)
	bool bPropertiesCopiedIndicator; // 0x2f3(0x01)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct TSoftObjectPtr<ALandscapePatchManager> PreviousPatchManager; // 0x2f8(0x28)

	void SetPatchManager(struct ALandscapePatchManager* NewPatchManager); // Function LandscapePatch.LandscapePatchComponent.SetPatchManager // (Native|Public|BlueprintCallable) // @ game+0x7326674
	void SetLandscape(struct ALandscape* NewLandscape); // Function LandscapePatch.LandscapePatchComponent.SetLandscape // (Native|Public|BlueprintCallable) // @ game+0x73265f0
	void SetIsEnabled(bool bEnabledIn); // Function LandscapePatch.LandscapePatchComponent.SetIsEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x7326560
	void RequestLandscapeUpdate(); // Function LandscapePatch.LandscapePatchComponent.RequestLandscapeUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x7325ee0
	void MoveToTop(); // Function LandscapePatch.LandscapePatchComponent.MoveToTop // (Final|Native|Protected) // @ game+0x4ce9140
	bool IsEnabled(); // Function LandscapePatch.LandscapePatchComponent.IsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7325e20
	struct ALandscapePatchManager* GetPatchManager(); // Function LandscapePatch.LandscapePatchComponent.GetPatchManager // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ce9110
	struct FTransform GetLandscapeHeightmapCoordsToWorld(); // Function LandscapePatch.LandscapePatchComponent.GetLandscapeHeightmapCoordsToWorld // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7325a60
};

// Class LandscapePatch.LandscapeCircleHeightPatch
// Size: 0x330 (Inherited: 0x320)
struct ULandscapeCircleHeightPatch : ULandscapePatchComponent {
	float Radius; // 0x320(0x04)
	float Falloff; // 0x324(0x04)
	bool bExclusiveRadius; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
};

// Class LandscapePatch.LandscapePatchManager
// Size: 0x300 (Inherited: 0x288)
struct ALandscapePatchManager : ALandscapeBlueprintBrushBase {
	struct TArray<struct TSoftObjectPtr<ULandscapePatchComponent>> PatchComponents; // 0x288(0x10)
	char pad_298[0x8]; // 0x298(0x08)
	struct FTransform HeightmapCoordsToWorld; // 0x2a0(0x60)
};

// Class LandscapePatch.LandscapeTextureBackedRenderTargetBase
// Size: 0x50 (Inherited: 0x28)
struct ULandscapeTextureBackedRenderTargetBase : UObject {
	struct UTextureRenderTarget2D* PostLoadRT; // 0x28(0x08)
	struct UTexture2D* InternalTexture; // 0x30(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0x38(0x08)
	int32_t SizeX; // 0x40(0x04)
	int32_t SizeY; // 0x44(0x04)
	bool bUseInternalTextureOnly; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class LandscapePatch.LandscapeWeightTextureBackedRenderTarget
// Size: 0x58 (Inherited: 0x50)
struct ULandscapeWeightTextureBackedRenderTarget : ULandscapeTextureBackedRenderTargetBase {
	bool bUseAlphaChannel; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class LandscapePatch.LandscapeHeightTextureBackedRenderTarget
// Size: 0x60 (Inherited: 0x50)
struct ULandscapeHeightTextureBackedRenderTarget : ULandscapeTextureBackedRenderTargetBase {
	struct FLandscapeHeightPatchConvertToNativeParams ConversionParams; // 0x50(0x0c)
	enum class ETextureRenderTargetFormat RenderTargetFormat; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

// Class LandscapePatch.LandscapeTexturePatchBase
// Size: 0x360 (Inherited: 0x320)
struct ULandscapeTexturePatchBase : ULandscapePatchComponent {
	enum class ELandscapeTexturePatchSourceMode SourceMode; // 0x320(0x01)
	char pad_321[0x7]; // 0x321(0x07)
	struct UTexture* TextureAsset; // 0x328(0x08)
	struct FVector2D UnscaledPatchCoverage; // 0x330(0x10)
	struct UTexture2D* InternalTexture; // 0x340(0x08)
	struct UTextureRenderTarget2D* InternalRenderTarget; // 0x348(0x08)
	bool bShowTextureAssetProperty; // 0x350(0x01)
	char pad_351[0xf]; // 0x351(0x0f)

	void SetUnscaledCoverage(struct FVector2D Coverage); // Function LandscapePatch.LandscapeTexturePatchBase.SetUnscaledCoverage // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x7326a74
	bool SetTextureResolution(struct FVector2D ResolutionIn); // Function LandscapePatch.LandscapeTexturePatchBase.SetTextureResolution // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x732694c
	void SetTextureAsset(struct UTexture* TextureIn); // Function LandscapePatch.LandscapeTexturePatchBase.SetTextureAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x73268cc
	bool SetSourceMode(enum class ELandscapeTexturePatchSourceMode NewMode, bool bInitializeIfRenderTarget); // Function LandscapePatch.LandscapeTexturePatchBase.SetSourceMode // (Native|Public|BlueprintCallable) // @ game+0x7326800
	struct FVector2D GetUnscaledCoverage(); // Function LandscapePatch.LandscapeTexturePatchBase.GetUnscaledCoverage // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x73257c8
	bool GetTextureResolution(struct FVector2D& SizeOut); // Function LandscapePatch.LandscapeTexturePatchBase.GetTextureResolution // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7325c10
	struct FTransform GetPatchToWorldTransform(); // Function LandscapePatch.LandscapeTexturePatchBase.GetPatchToWorldTransform // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7325b5c
	struct UTextureRenderTarget2D* GetInternalRenderTarget(); // Function LandscapePatch.LandscapeTexturePatchBase.GetInternalRenderTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x7325a48
	bool GetInitResolutionFromLandscape(float ResolutionMultiplier, struct FVector2D& ResolutionOut); // Function LandscapePatch.LandscapeTexturePatchBase.GetInitResolutionFromLandscape // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7325964
	struct FVector2D GetFullUnscaledWorldSize(); // Function LandscapePatch.LandscapeTexturePatchBase.GetFullUnscaledWorldSize // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x73257fc
};

// Class LandscapePatch.LandscapeTextureHeightPatch
// Size: 0x390 (Inherited: 0x360)
struct ULandscapeTextureHeightPatch : ULandscapeTexturePatchBase {
	enum class ELandscapeTextureHeightPatchBlendMode BlendMode; // 0x358(0x01)
	bool bUseTextureAlphaChannel; // 0x359(0x01)
	enum class ELandscapeTextureHeightPatchZeroHeightMeaning ZeroHeightMeaning; // 0x35a(0x01)
	enum class ELandscapeTextureHeightPatchEncoding SourceEncoding; // 0x35b(0x01)
	struct FLandscapeTexturePatchEncodingSettings EncodingSettings; // 0x360(0x10)
	enum class ELandscapeTextureHeightPatchFalloffMode FalloffMode; // 0x370(0x01)
	float Falloff; // 0x374(0x04)
	bool bApplyComponentZScale; // 0x378(0x01)
	enum class ELandscapeTextureHeightPatchInitMode InitializationMode; // 0x379(0x01)
	bool bUseSameTextureDimensions; // 0x37a(0x01)
	bool bBaseResolutionOffLandscape; // 0x37b(0x01)
	float ResolutionMultiplier; // 0x37c(0x04)
	int32_t InitTextureSizeX; // 0x380(0x04)
	int32_t InitTextureSizeY; // 0x384(0x04)
	enum class ELandscapeTexturePatchSourceMode PreviousSourceMode; // 0x388(0x01)
	enum class ETextureRenderTargetFormat InternalRenderTargetFormat; // 0x389(0x01)
	char pad_38B[0x1]; // 0x38b(0x01)
	float SavedConversionHeightScale; // 0x38c(0x04)

	void SnapToLandscape(); // Function LandscapePatch.LandscapeTextureHeightPatch.SnapToLandscape // (Final|Native|Public|BlueprintCallable) // @ game+0x73270b8
	void SetZeroHeightMeaning(enum class ELandscapeTextureHeightPatchZeroHeightMeaning ZeroHeightMeaningIn); // Function LandscapePatch.LandscapeTextureHeightPatch.SetZeroHeightMeaning // (Final|Native|Public|BlueprintCallable) // @ game+0x7326fc0
	void SetUseTextureAlphaChannel(bool bUse); // Function LandscapePatch.LandscapeTextureHeightPatch.SetUseTextureAlphaChannel // (Final|Native|Public|BlueprintCallable) // @ game+0x7326c54
	void SetSourceEncodingMode(enum class ELandscapeTextureHeightPatchEncoding EncodingMode); // Function LandscapePatch.LandscapeTextureHeightPatch.SetSourceEncodingMode // (Final|Native|Public|BlueprintCallable) // @ game+0x7326784
	void SetInternalRenderTargetFormat(enum class ETextureRenderTargetFormat Format); // Function LandscapePatch.LandscapeTextureHeightPatch.SetInternalRenderTargetFormat // (Final|Native|Public|BlueprintCallable) // @ game+0x73264fc
	void SetFalloff(float FalloffIn); // Function LandscapePatch.LandscapeTextureHeightPatch.SetFalloff // (Final|Native|Public|BlueprintCallable) // @ game+0x73261e0
	void SetEncodingSettings(struct FLandscapeTexturePatchEncodingSettings& Settings); // Function LandscapePatch.LandscapeTextureHeightPatch.SetEncodingSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x732614c
	void SetBlendMode(enum class ELandscapeTextureHeightPatchBlendMode BlendModeIn); // Function LandscapePatch.LandscapeTextureHeightPatch.SetBlendMode // (Final|Native|Public|BlueprintCallable) // @ game+0x7326054
	void ResetSourceEncodingMode(enum class ELandscapeTextureHeightPatchEncoding EncodingMode); // Function LandscapePatch.LandscapeTextureHeightPatch.ResetSourceEncodingMode // (Final|Native|Public|BlueprintCallable) // @ game+0x7325fa4
	void Reinitialize(); // Function LandscapePatch.LandscapeTextureHeightPatch.Reinitialize // (Final|Native|Public) // @ game+0x21ce454
	void DeleteInternalTextures(); // Function LandscapePatch.LandscapeTextureHeightPatch.DeleteInternalTextures // (Final|Native|Public|BlueprintCallable) // @ game+0x7325728
};

// Class LandscapePatch.LandscapeWeightPatchTextureInfo
// Size: 0x58 (Inherited: 0x28)
struct ULandscapeWeightPatchTextureInfo : UObject {
	struct FName WeightmapLayerName; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UTexture* TextureAsset; // 0x30(0x08)
	struct ULandscapeWeightTextureBackedRenderTarget* InternalData; // 0x38(0x08)
	enum class ELandscapeTexturePatchSourceMode SourceMode; // 0x40(0x01)
	enum class ELandscapeTexturePatchSourceMode DetailPanelSourceMode; // 0x41(0x01)
	bool bUseAlphaChannel; // 0x42(0x01)
	bool bOverrideBlendMode; // 0x43(0x01)
	enum class ELandscapeTexturePatchBlendMode OverrideBlendMode; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct ULandscapeTexturePatch* OwningPatch; // 0x48(0x08)
	char pad_50[0x8]; // 0x50(0x08)
};

// Class LandscapePatch.LandscapeTexturePatch
// Size: 0x3a0 (Inherited: 0x320)
struct ULandscapeTexturePatch : ULandscapePatchComponent {
	int32_t ResolutionX; // 0x320(0x04)
	int32_t ResolutionY; // 0x324(0x04)
	struct FVector2D UnscaledPatchCoverage; // 0x328(0x10)
	enum class ELandscapeTexturePatchBlendMode BlendMode; // 0x338(0x01)
	enum class ELandscapeTexturePatchFalloffMode FalloffMode; // 0x339(0x01)
	char pad_33A[0x2]; // 0x33a(0x02)
	float Falloff; // 0x33c(0x04)
	enum class ELandscapeTexturePatchSourceMode HeightSourceMode; // 0x340(0x01)
	enum class ELandscapeTexturePatchSourceMode DetailPanelHeightSourceMode; // 0x341(0x01)
	char pad_342[0x6]; // 0x342(0x06)
	struct ULandscapeHeightTextureBackedRenderTarget* HeightInternalData; // 0x348(0x08)
	struct UTexture* HeightTextureAsset; // 0x350(0x08)
	bool bUseTextureAlphaForHeight; // 0x358(0x01)
	enum class ELandscapeTextureHeightPatchEncoding HeightEncoding; // 0x359(0x01)
	char pad_35A[0x6]; // 0x35a(0x06)
	struct FLandscapeTexturePatchEncodingSettings HeightEncodingSettings; // 0x360(0x10)
	enum class ELandscapeTextureHeightPatchZeroHeightMeaning ZeroHeightMeaning; // 0x370(0x01)
	bool bApplyComponentZScale; // 0x371(0x01)
	char pad_372[0x6]; // 0x372(0x06)
	struct TArray<struct ULandscapeWeightPatchTextureInfo*> WeightPatches; // 0x378(0x10)
	int32_t NumWeightPatches; // 0x388(0x04)
	char pad_38C[0x1]; // 0x38c(0x01)
	bool bBaseResolutionOffLandscape; // 0x38d(0x01)
	char pad_38E[0x2]; // 0x38e(0x02)
	float ResolutionMultiplier; // 0x390(0x04)
	int32_t InitTextureSizeX; // 0x394(0x04)
	int32_t InitTextureSizeY; // 0x398(0x04)
	enum class ETextureRenderTargetFormat HeightRenderTargetFormat; // 0x39c(0x01)
	char pad_39D[0x3]; // 0x39d(0x03)

	void SnapToLandscape(); // Function LandscapePatch.LandscapeTexturePatch.SnapToLandscape // (Final|Native|Protected|BlueprintCallable) // @ game+0x21ce454
	void SetZeroHeightMeaning(enum class ELandscapeTextureHeightPatchZeroHeightMeaning ZeroHeightMeaningIn); // Function LandscapePatch.LandscapeTexturePatch.SetZeroHeightMeaning // (Final|Native|Public|BlueprintCallable) // @ game+0x732703c
	void SetWeightPatchTextureAsset(struct FName& InWeightmapLayerName, struct UTexture* TextureIn); // Function LandscapePatch.LandscapeTexturePatch.SetWeightPatchTextureAsset // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7326e7c
	void SetWeightPatchSourceMode(struct FName& InWeightmapLayerName, enum class ELandscapeTexturePatchSourceMode NewMode); // Function LandscapePatch.LandscapeTexturePatch.SetWeightPatchSourceMode // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7326da8
	void SetWeightPatchBlendModeOverride(struct FName& InWeightmapLayerName, enum class ELandscapeTexturePatchBlendMode BlendMode); // Function LandscapePatch.LandscapeTexturePatch.SetWeightPatchBlendModeOverride // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7326cd4
	void SetUseAlphaChannelForWeightPatch(struct FName& InWeightmapLayerName, bool bUseAlphaChannel); // Function LandscapePatch.LandscapeTexturePatch.SetUseAlphaChannelForWeightPatch // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7326b80
	void SetUseAlphaChannelForHeight(bool bUse); // Function LandscapePatch.LandscapeTexturePatch.SetUseAlphaChannelForHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x7326b00
	void SetUnscaledCoverage(struct FVector2D Coverage); // Function LandscapePatch.LandscapeTexturePatch.SetUnscaledCoverage // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x73269e8
	void SetResolution(struct FVector2D ResolutionIn); // Function LandscapePatch.LandscapeTexturePatch.SetResolution // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x73266f8
	void SetHeightTextureAsset(struct UTexture* TextureIn); // Function LandscapePatch.LandscapeTexturePatch.SetHeightTextureAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x732647c
	void SetHeightSourceMode(enum class ELandscapeTexturePatchSourceMode NewMode); // Function LandscapePatch.LandscapeTexturePatch.SetHeightSourceMode // (Native|Public|BlueprintCallable) // @ game+0x73263f8
	void SetHeightRenderTargetFormat(enum class ETextureRenderTargetFormat Format); // Function LandscapePatch.LandscapeTexturePatch.SetHeightRenderTargetFormat // (Final|Native|Public|BlueprintCallable) // @ game+0x7326364
	void SetHeightEncodingSettings(struct FLandscapeTexturePatchEncodingSettings& Settings); // Function LandscapePatch.LandscapeTexturePatch.SetHeightEncodingSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x732614c
	void SetHeightEncodingMode(enum class ELandscapeTextureHeightPatchEncoding EncodingMode); // Function LandscapePatch.LandscapeTexturePatch.SetHeightEncodingMode // (Final|Native|Public|BlueprintCallable) // @ game+0x73262e8
	void SetFalloff(float FalloffIn); // Function LandscapePatch.LandscapeTexturePatch.SetFalloff // (Final|Native|Public|BlueprintCallable) // @ game+0x7326264
	void SetBlendMode(enum class ELandscapeTexturePatchBlendMode BlendModeIn); // Function LandscapePatch.LandscapeTexturePatch.SetBlendMode // (Final|Native|Public|BlueprintCallable) // @ game+0x73260d0
	void ResetHeightEncodingMode(enum class ELandscapeTextureHeightPatchEncoding EncodingMode); // Function LandscapePatch.LandscapeTexturePatch.ResetHeightEncodingMode // (Final|Native|Public|BlueprintCallable) // @ game+0x7325ef4
	void RemoveWeightPatch(struct FName& InWeightmapLayerName); // Function LandscapePatch.LandscapeTexturePatch.RemoveWeightPatch // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7325e50
	void RemoveAllWeightPatches(); // Function LandscapePatch.LandscapeTexturePatch.RemoveAllWeightPatches // (Native|Public|BlueprintCallable) // @ game+0x7325e38
	void ReinitializeWeights(); // Function LandscapePatch.LandscapeTexturePatch.ReinitializeWeights // (Final|Native|Protected) // @ game+0x21ce454
	void ReinitializeHeight(); // Function LandscapePatch.LandscapeTexturePatch.ReinitializeHeight // (Final|Native|Protected) // @ game+0x21ce454
	enum class ELandscapeTexturePatchSourceMode GetWeightPatchSourceMode(struct FName& InWeightmapLayerName); // Function LandscapePatch.LandscapeTexturePatch.GetWeightPatchSourceMode // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7325d80
	struct UTextureRenderTarget2D* GetWeightPatchRenderTarget(struct FName& InWeightmapLayerName); // Function LandscapePatch.LandscapeTexturePatch.GetWeightPatchRenderTarget // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7325ce0
	struct FVector2D GetUnscaledCoverage(); // Function LandscapePatch.LandscapeTexturePatch.GetUnscaledCoverage // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7325cac
	struct FVector2D GetResolution(); // Function LandscapePatch.LandscapeTexturePatch.GetResolution // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7325bdc
	struct FTransform GetPatchToWorldTransform(); // Function LandscapePatch.LandscapeTexturePatch.GetPatchToWorldTransform // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7325adc
	bool GetInitResolutionFromLandscape(float ResolutionMultiplier, struct FVector2D& ResolutionOut); // Function LandscapePatch.LandscapeTexturePatch.GetInitResolutionFromLandscape // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7325880
	enum class ELandscapeTexturePatchSourceMode GetHeightSourceMode(); // Function LandscapePatch.LandscapeTexturePatch.GetHeightSourceMode // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7325858
	struct UTextureRenderTarget2D* GetHeightRenderTarget(); // Function LandscapePatch.LandscapeTexturePatch.GetHeightRenderTarget // (Native|Public|BlueprintCallable) // @ game+0x7325830
	struct FVector2D GetFullUnscaledWorldSize(); // Function LandscapePatch.LandscapeTexturePatch.GetFullUnscaledWorldSize // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x73257c8
	struct TArray<struct FName> GetAllWeightPatchLayerNames(); // Function LandscapePatch.LandscapeTexturePatch.GetAllWeightPatchLayerNames // (Final|Native|Public|BlueprintCallable) // @ game+0x7325754
	void DisableAllWeightPatches(); // Function LandscapePatch.LandscapeTexturePatch.DisableAllWeightPatches // (Native|Public|BlueprintCallable) // @ game+0x732573c
	void ClearWeightPatchBlendModeOverride(struct FName& InWeightmapLayerName); // Function LandscapePatch.LandscapeTexturePatch.ClearWeightPatchBlendModeOverride // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7325698
	void AddWeightPatch(struct FName& InWeightmapLayerName, enum class ELandscapeTexturePatchSourceMode SourceMode, bool bUseAlphaChannel); // Function LandscapePatch.LandscapeTexturePatch.AddWeightPatch // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x732558c
};

