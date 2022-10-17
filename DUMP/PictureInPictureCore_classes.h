// Class PictureInPictureCore.PictureInPictureCheatManager
// Size: 0x28 (Inherited: 0x28)
struct UPictureInPictureCheatManager : UChildCheatManager {

	void SuspendPiP(); // Function PictureInPictureCore.PictureInPictureCheatManager.SuspendPiP // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x21ce454
	void ResumePiP(); // Function PictureInPictureCore.PictureInPictureCheatManager.ResumePiP // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x21ce454
	void PrintPiPRegionInfo(); // Function PictureInPictureCore.PictureInPictureCheatManager.PrintPiPRegionInfo // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x21ce454
	void EnablePiP(); // Function PictureInPictureCore.PictureInPictureCheatManager.EnablePiP // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x21ce454
	void DisablePiP(); // Function PictureInPictureCore.PictureInPictureCheatManager.DisablePiP // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x21ce454
	void CanEnablePartnerPiP(); // Function PictureInPictureCore.PictureInPictureCheatManager.CanEnablePartnerPiP // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x21ce454
};

// Class PictureInPictureCore.PictureInPictureCoreEnableDisableAction
// Size: 0x28 (Inherited: 0x28)
struct UPictureInPictureCoreEnableDisableAction : UFortUIGameFeatureAction {
};

// Class PictureInPictureCore.PictureInPictureMediaController
// Size: 0x558 (Inherited: 0x28)
struct UPictureInPictureMediaController : UObject {
	struct FString PartnerName; // 0x28(0x10)
	char pad_38[0x10]; // 0x38(0x10)
	struct TArray<struct UPictureInPictureActionData*> ActionDataArray; // 0x48(0x10)
	struct FPIPVideoPlayerAssetConfig DefaultPlayerAssetConfig; // 0x58(0x88)
	struct FPIPVideoPlayerAssetConfig PlayerAssetConfig; // 0xe0(0x88)
	struct UPictureInPicturePlayer* VideoWidget; // 0x168(0x08)
	struct FPIPVideoPlayerConfig VideoWidgetConfig; // 0x170(0x48)
	struct TWeakObjectPtr<struct UCommonLazyImage> ThumbnailImageNext; // 0x1b8(0x08)
	struct TWeakObjectPtr<struct UCommonLazyImage> ThumbnailImagePrevious; // 0x1c0(0x08)
	bool bSupportsMultipleSources; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
	struct FPiPPartnerSource CurrentSource; // 0x1d0(0x128)
	struct TArray<struct FPiPPartnerSource> Sources; // 0x2f8(0x10)
	struct TArray<struct FPiPPartnerSource> ValidSources; // 0x308(0x10)
	struct FMediaPlayerOptions LocalOptions; // 0x318(0x30)
	struct FMulticastInlineDelegate BaseErrorEvent; // 0x348(0x10)
	struct FMulticastInlineDelegate BaseEnabledEvent; // 0x358(0x10)
	struct FMulticastInlineDelegate SourcesChangedEvent; // 0x368(0x10)
	struct FMulticastInlineDelegate SourceSelectedEvent; // 0x378(0x10)
	char pad_388[0x8]; // 0x388(0x08)
	struct TArray<struct FPictureInPictureActionConfig> InstanceActionData; // 0x390(0x10)
	struct UPictureInPictureAnalyticsManager* AnalyticsManager; // 0x3a0(0x08)
	struct FDateTime ActiveStartTime; // 0x3a8(0x08)
	struct FDateTime PausedStartTime; // 0x3b0(0x08)
	char pad_3B8[0x8]; // 0x3b8(0x08)
	struct FPiPSuspendInfo SuspendedInfo; // 0x3c0(0x130)
	char pad_4F0[0x68]; // 0x4f0(0x68)

	void ToggleFullScreen(); // Function PictureInPictureCore.PictureInPictureMediaController.ToggleFullScreen // (Final|Native|Public) // @ game+0x6922ab4
	void Stop(); // Function PictureInPictureCore.PictureInPictureMediaController.Stop // (Native|Public|BlueprintCallable) // @ game+0x22fb7cc
	void SetEnabled(bool bIsEnabled, bool bIsFromUser); // Function PictureInPictureCore.PictureInPictureMediaController.SetEnabled // (Native|Public|BlueprintCallable) // @ game+0x6922348
	void SetCurrentSource(struct FPiPPartnerSource& SelectedSource); // Function PictureInPictureCore.PictureInPictureMediaController.SetCurrentSource // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x69222a0
	void Play(bool bForcePlay); // Function PictureInPictureCore.PictureInPictureMediaController.Play // (Native|Public|BlueprintCallable) // @ game+0x6922208
	void Pause(); // Function PictureInPictureCore.PictureInPictureMediaController.Pause // (Native|Public|BlueprintCallable) // @ game+0x1857ba8
	void OnPrevThumbnailReceived(struct UTexture2DDynamic* InTexture); // Function PictureInPictureCore.PictureInPictureMediaController.OnPrevThumbnailReceived // (Final|Native|Private) // @ game+0x6922188
	void OnNextThumbnailReceived(struct UTexture2DDynamic* InTexture); // Function PictureInPictureCore.PictureInPictureMediaController.OnNextThumbnailReceived // (Final|Native|Private) // @ game+0x6922108
	void OnMediaStartedAnalytics(); // Function PictureInPictureCore.PictureInPictureMediaController.OnMediaStartedAnalytics // (Final|Native|Private) // @ game+0x69220f4
	void OnMediaResumedAnalytics(); // Function PictureInPictureCore.PictureInPictureMediaController.OnMediaResumedAnalytics // (Final|Native|Private) // @ game+0x69220a4
	void OnMediaPausedAnalytics(); // Function PictureInPictureCore.PictureInPictureMediaController.OnMediaPausedAnalytics // (Final|Native|Private) // @ game+0x69220b8
	void OnMediaClosedAnalytics(); // Function PictureInPictureCore.PictureInPictureMediaController.OnMediaClosedAnalytics // (Final|Native|Private) // @ game+0x69220a4
	bool IsPlaying(); // Function PictureInPictureCore.PictureInPictureMediaController.IsPlaying // (Final|Native|Public|BlueprintCallable) // @ game+0x6921f5c
	bool IsPaused(); // Function PictureInPictureCore.PictureInPictureMediaController.IsPaused // (Final|Native|Public|BlueprintCallable) // @ game+0x6921f38
	bool IsMultiSourceSupported(); // Function PictureInPictureCore.PictureInPictureMediaController.IsMultiSourceSupported // (Native|Public|BlueprintCallable) // @ game+0x5d15808
	bool IsEnabled(); // Function PictureInPictureCore.PictureInPictureMediaController.IsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6921f0c
	void HandleSourceSelectedEvent(struct FString SelectedSource); // Function PictureInPictureCore.PictureInPictureMediaController.HandleSourceSelectedEvent // (Native|Protected) // @ game+0x6921d1c
	struct TArray<struct FPiPPartnerSource> GetValidSources(); // Function PictureInPictureCore.PictureInPictureMediaController.GetValidSources // (Native|Public|BlueprintCallable) // @ game+0x6921c58
	struct TArray<struct FPiPPartnerSource> GetSources(); // Function PictureInPictureCore.PictureInPictureMediaController.GetSources // (Native|Public|BlueprintCallable) // @ game+0x6921c28
	struct FPIPVideoPlayerAssetConfig GetPlayerAssetConfig(); // Function PictureInPictureCore.PictureInPictureMediaController.GetPlayerAssetConfig // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6921bbc
	struct UPictureInPicturePlayer* GetMediaPlayerWidget(); // Function PictureInPictureCore.PictureInPictureMediaController.GetMediaPlayerWidget // (Final|Native|Public|Const) // @ game+0x69216c4
	struct FPIPVideoPlayerAssetConfig GetDefaultPlayerAssetConfig(); // Function PictureInPictureCore.PictureInPictureMediaController.GetDefaultPlayerAssetConfig // (Final|Native|Public|Const) // @ game+0x69213ac
	struct FPiPPartnerSource GetCurrentSource(); // Function PictureInPictureCore.PictureInPictureMediaController.GetCurrentSource // (Native|Public|BlueprintCallable) // @ game+0x692137c
	struct TArray<struct UPictureInPictureActionData*> GetActions(); // Function PictureInPictureCore.PictureInPictureMediaController.GetActions // (Final|Native|Public|BlueprintCallable) // @ game+0x6921134
	void Exit(bool bStop); // Function PictureInPictureCore.PictureInPictureMediaController.Exit // (Native|Public|BlueprintCallable) // @ game+0x692109c
};

// Class PictureInPictureCore.PictureInPictureMediaPlayerCtrl
// Size: 0x128 (Inherited: 0x118)
struct UPictureInPictureMediaPlayerCtrl : UFortMediaPlayerCtrl {
	char pad_118[0x10]; // 0x118(0x10)
};

// Class PictureInPictureCore.PictureInPicturePlayer
// Size: 0x230 (Inherited: 0x28)
struct UPictureInPicturePlayer : UObject {
	char pad_28[0xe0]; // 0x28(0xe0)
	struct FPIPVideoPlayerAssetConfig AssetConfig; // 0x108(0x88)
	struct UPictureInPictureMediaPlayerCtrl* MediaController; // 0x190(0x08)
	char pad_198[0x50]; // 0x198(0x50)
	struct USoundSubmixBase* DefaultSubmix; // 0x1e8(0x08)
	struct USoundSubmixBase* LicensedSubmix; // 0x1f0(0x08)
	char pad_1F8[0x38]; // 0x1f8(0x38)

	void UpdateStreamingPlayerSize(struct FVector2D& InVector); // Function PictureInPictureCore.PictureInPicturePlayer.UpdateStreamingPlayerSize // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x6922ba4
	void StreamedVideoOnUrlSuccess(struct FString URL); // Function PictureInPictureCore.PictureInPicturePlayer.StreamedVideoOnUrlSuccess // (Final|Native|Private) // @ game+0x6922940
	void StreamedVideoOnUrlFailure(struct FString URL); // Function PictureInPictureCore.PictureInPicturePlayer.StreamedVideoOnUrlFailure // (Final|Native|Private) // @ game+0x69227e0
	bool SetPlayerAssetConfig(struct FPIPVideoPlayerAssetConfig& InAssetConfig); // Function PictureInPictureCore.PictureInPicturePlayer.SetPlayerAssetConfig // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6922414
	bool IsAssetConfigSet(); // Function PictureInPictureCore.PictureInPicturePlayer.IsAssetConfigSet // (Final|Native|Public|BlueprintCallable) // @ game+0x6921ef4
	void HandleUCPAudioChanged(struct UFortClientSettingsRecord* Settings); // Function PictureInPictureCore.PictureInPicturePlayer.HandleUCPAudioChanged // (Final|Native|Private) // @ game+0x6921e74
	void FlushPlayerAssetConfig(); // Function PictureInPictureCore.PictureInPicturePlayer.FlushPlayerAssetConfig // (Final|Native|Public|BlueprintCallable) // @ game+0x6921120
};

// Class PictureInPictureCore.PictureInPictureClient
// Size: 0xa8 (Inherited: 0x28)
struct UPictureInPictureClient : UObject {
	struct FMulticastInlineDelegate LoginSuccessEvent; // 0x28(0x10)
	struct FMulticastInlineDelegate LogoutSuccessEvent; // 0x38(0x10)
	struct FMulticastInlineDelegate QRCodeReceivedEvent; // 0x48(0x10)
	struct FMulticastInlineDelegate ErrorDelegate; // 0x58(0x10)
	char pad_68[0x8]; // 0x68(0x08)
	struct FString UserName; // 0x70(0x10)
	struct UEpicCMSImage* UserAvatarImage; // 0x80(0x08)
	char pad_88[0x8]; // 0x88(0x08)
	struct UTexture2DDynamic* CurrentQRCodeTexture; // 0x90(0x08)
	char pad_98[0x10]; // 0x98(0x10)

	void Logout(); // Function PictureInPictureCore.PictureInPictureClient.Logout // (Native|Public|BlueprintCallable) // @ game+0x1352994
	bool IsLoggedIn(); // Function PictureInPictureCore.PictureInPictureClient.IsLoggedIn // (Native|Public|BlueprintCallable) // @ game+0x24efbe0
	struct UTexture2DDynamic* GetQRCodeTexture(); // Function PictureInPictureCore.PictureInPictureClient.GetQRCodeTexture // (Final|Native|Public|BlueprintCallable) // @ game+0x1dd41cc
	enum class PictureInPictureAuthState GetLoginState(); // Function PictureInPictureCore.PictureInPictureClient.GetLoginState // (Final|Native|Public|BlueprintCallable) // @ game+0x1fab9c8
	struct UEpicCMSImage* GetAvatarImage(); // Function PictureInPictureCore.PictureInPictureClient.GetAvatarImage // (Final|Native|Public|BlueprintCallable) // @ game+0x68f8b50
	void EndLogin(struct UObject* InWorldContext); // Function PictureInPictureCore.PictureInPictureClient.EndLogin // (Native|Public|BlueprintCallable) // @ game+0x6921018
	void CheckLogin(struct UObject* InWorldContext); // Function PictureInPictureCore.PictureInPictureClient.CheckLogin // (Native|Public|BlueprintCallable) // @ game+0x6503614
	void BeginLogin(struct UObject* InWorldContext); // Function PictureInPictureCore.PictureInPictureClient.BeginLogin // (Native|Public|BlueprintCallable) // @ game+0x6920f14
};

// Class PictureInPictureCore.PictureInPicturePartnerControls
// Size: 0x40 (Inherited: 0x28)
struct UPictureInPicturePartnerControls : UObject {
	bool bRequiresAgeOfConsent; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UPictureInPictureClient* ClientObject; // 0x30(0x08)
	struct UPictureInPictureMediaController* MediaController; // 0x38(0x08)
};

// Class PictureInPictureCore.PictureInPictureSubsystem
// Size: 0x120 (Inherited: 0x30)
struct UPictureInPictureSubsystem : UEngineSubsystem {
	struct TArray<struct UPictureInPicturePartnerDataAsset*> AvailableClientsList; // 0x30(0x10)
	struct FMulticastInlineDelegate OnPartnerUpdateComplete; // 0x40(0x10)
	struct FMulticastInlineDelegate OnPartnerChanged; // 0x50(0x10)
	bool bPartnerListUpdated; // 0x60(0x01)
	bool bIsSuspended; // 0x61(0x01)
	bool bCMSInitialized; // 0x62(0x01)
	char pad_63[0x5]; // 0x63(0x05)
	struct FString CurrentPlatform; // 0x68(0x10)
	char pad_78[0x10]; // 0x78(0x10)
	struct TMap<struct FString, struct UPictureInPicturePartnerControls*> SupportedPartnerControls; // 0x88(0x50)
	struct FString CurrentPartnerName; // 0xd8(0x10)
	struct FString CurrentContinent; // 0xe8(0x10)
	struct FString CurrentCountry; // 0xf8(0x10)
	struct TArray<struct FString> CurrentSubdivisions; // 0x108(0x10)
	struct UFortMediaCMSEventsComponent* CMSEventsComponent; // 0x118(0x08)

	void UpdatePartnerItemList(struct UObject* InWorldContext, bool bForce); // Function PictureInPictureCore.PictureInPictureSubsystem.UpdatePartnerItemList // (Final|Native|Public|BlueprintCallable) // @ game+0x6922adc
	void ToggleFullScreenPiP(); // Function PictureInPictureCore.PictureInPictureSubsystem.ToggleFullScreenPiP // (Final|Native|Public) // @ game+0x6922ac8
	void SuspendCurrentMediaController(); // Function PictureInPictureCore.PictureInPictureSubsystem.SuspendCurrentMediaController // (Final|Native|Public) // @ game+0x6922aa0
	void StoreLastUsedSource(struct FString InPartnerSourceName); // Function PictureInPictureCore.PictureInPictureSubsystem.StoreLastUsedSource // (Final|Native|Public|BlueprintCallable) // @ game+0x6922690
	void StoreLastUsedPartner(struct FString InPartnerName); // Function PictureInPictureCore.PictureInPictureSubsystem.StoreLastUsedPartner // (Final|Native|Public|BlueprintCallable) // @ game+0x6922540
	void StoreAutoEnableSetting(bool InUserEnabled); // Function PictureInPictureCore.PictureInPictureSubsystem.StoreAutoEnableSetting // (Final|Native|Public|BlueprintCallable) // @ game+0x69224d0
	void ShutdownAllPartners(); // Function PictureInPictureCore.PictureInPictureSubsystem.ShutdownAllPartners // (Final|Native|Public|BlueprintCallable) // @ game+0x69224bc
	void ResumeCurrentMediaController(); // Function PictureInPictureCore.PictureInPictureSubsystem.ResumeCurrentMediaController // (Final|Native|Public) // @ game+0x692228c
	void OnCurrentPartnerSourceSelected(struct FPiPPartnerSource& SelectedSource); // Function PictureInPictureCore.PictureInPictureSubsystem.OnCurrentPartnerSourceSelected // (Final|Native|Private|HasOutParms) // @ game+0x6922000
	void OnCMSEventValid(struct UMediaCMSEvent* ValidEvent); // Function PictureInPictureCore.PictureInPictureSubsystem.OnCMSEventValid // (Final|Native|Private) // @ game+0x129fcb4
	void OnCMSEventInvalid(struct UMediaCMSEvent* InvalidEvent); // Function PictureInPictureCore.PictureInPictureSubsystem.OnCMSEventInvalid // (Final|Native|Private) // @ game+0x6921f80
	bool IsPartnerListUpdated(); // Function PictureInPictureCore.PictureInPictureSubsystem.IsPartnerListUpdated // (Final|Native|Public|BlueprintCallable) // @ game+0x6921f24
	void HandleMediaSourceRequest(); // Function PictureInPictureCore.PictureInPictureSubsystem.HandleMediaSourceRequest // (Final|Native|Private) // @ game+0x6921d08
	void HandleFNEventsSetCurrentMediaControllerEnabled(bool InEnabled); // Function PictureInPictureCore.PictureInPictureSubsystem.HandleFNEventsSetCurrentMediaControllerEnabled // (Final|Native|Private) // @ game+0x6921c88
	struct TArray<struct UPictureInPicturePartnerDataAsset*> GetPartnerItemList(); // Function PictureInPictureCore.PictureInPictureSubsystem.GetPartnerItemList // (Final|Native|Public|BlueprintCallable) // @ game+0x6921b48
	struct UPictureInPicturePartnerDataAsset* GetPartnerItem(struct FString PartnerName); // Function PictureInPictureCore.PictureInPictureSubsystem.GetPartnerItem // (Final|Native|Public|BlueprintCallable) // @ game+0x69219e4
	struct UPictureInPicturePartnerControls* GetPartnerControls(struct FString PartnerName); // Function PictureInPictureCore.PictureInPictureSubsystem.GetPartnerControls // (Final|Native|Public|BlueprintCallable) // @ game+0x129f6c4
	struct UPictureInPictureMediaController* GetPartnerController(struct FString PartnerName); // Function PictureInPictureCore.PictureInPictureSubsystem.GetPartnerController // (Final|Native|Public|BlueprintCallable) // @ game+0x6921880
	struct UPictureInPictureClient* GetPartnerClient(struct FString PartnerName); // Function PictureInPictureCore.PictureInPictureSubsystem.GetPartnerClient // (Final|Native|Public|BlueprintCallable) // @ game+0x69216dc
	void GetLastUsedSource(struct FString& OutPartnerSourceName); // Function PictureInPictureCore.PictureInPictureSubsystem.GetLastUsedSource // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x692156c
	void GetLastUsedPartner(struct FString& OutPartnerName); // Function PictureInPictureCore.PictureInPictureSubsystem.GetLastUsedPartner // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6921414
	struct UPictureInPicturePartnerDataAsset* GetCurrentPartnerItem(); // Function PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerItem // (Final|Native|Public|BlueprintCallable) // @ game+0x6921350
	struct UPictureInPicturePartnerControls* GetCurrentPartnerControls(); // Function PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerControls // (Final|Native|Public|BlueprintCallable) // @ game+0x69212d4
	struct UPictureInPictureMediaController* GetCurrentPartnerController(); // Function PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerController // (Final|Native|Public|BlueprintCallable) // @ game+0x6921250
	struct UPictureInPictureClient* GetCurrentPartnerClient(); // Function PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerClient // (Final|Native|Public|BlueprintCallable) // @ game+0x69211cc
	bool GetAutoEnableSetting(); // Function PictureInPictureCore.PictureInPictureSubsystem.GetAutoEnableSetting // (Final|Native|Public|BlueprintCallable) // @ game+0x69211a8
	void EnableFullScreenPiPOption(bool bEnable); // Function PictureInPictureCore.PictureInPictureSubsystem.EnableFullScreenPiPOption // (Final|Native|Public) // @ game+0x6920f98
};

