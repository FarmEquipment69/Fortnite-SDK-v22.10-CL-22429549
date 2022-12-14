// Class ElectraDataChannelRuntime.ElectraDataChannelTarget
// Size: 0x300 (Inherited: 0x288)
struct AElectraDataChannelTarget : AActor {
	char pad_288[0x78]; // 0x288(0x78)

	void SetTargetAlias(struct FString InAlias); // Function ElectraDataChannelRuntime.ElectraDataChannelTarget.SetTargetAlias // (Final|Native|Public|BlueprintCallable) // @ game+0x67f6f50
	struct FString GetTargetAlias(); // Function ElectraDataChannelRuntime.ElectraDataChannelTarget.GetTargetAlias // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x67f6a60
};

// Class ElectraDataChannelRuntime.ElectraDataChannelPlayer
// Size: 0x2b8 (Inherited: 0x288)
struct AElectraDataChannelPlayer : AActor {
	struct FMulticastInlineDelegate OnTerminalError; // 0x288(0x10)
	char pad_298[0x20]; // 0x298(0x20)

	void UseTimeFromMediaPlayer(struct UMediaPlayer* InMediaPlayer); // Function ElectraDataChannelRuntime.ElectraDataChannelPlayer.UseTimeFromMediaPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x67f70c0
	void PlayFromStateStreamServer(struct FString InStatePlaylistURL); // Function ElectraDataChannelRuntime.ElectraDataChannelPlayer.PlayFromStateStreamServer // (Final|Native|Public|BlueprintCallable) // @ game+0x67f6ca8
	void PlayFromMediaPlayer(struct UMediaPlayer* InMediaPlayer); // Function ElectraDataChannelRuntime.ElectraDataChannelPlayer.PlayFromMediaPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x67f6c28
	void PlayFromFile(struct FString InFilename); // Function ElectraDataChannelRuntime.ElectraDataChannelPlayer.PlayFromFile // (Final|Native|Public|BlueprintCallable) // @ game+0x67f6ad4
	void EndPlayback(); // Function ElectraDataChannelRuntime.ElectraDataChannelPlayer.EndPlayback // (Final|Native|Public|BlueprintCallable) // @ game+0x67f69c4
};

// Class ElectraDataChannelRuntime.ElectraDataChannelRecorder
// Size: 0x2c0 (Inherited: 0x288)
struct AElectraDataChannelRecorder : AActor {
	char pad_288[0x38]; // 0x288(0x38)

	void UseTimeFromMediaPlayer(struct UMediaPlayer* InMediaPlayer); // Function ElectraDataChannelRuntime.ElectraDataChannelRecorder.UseTimeFromMediaPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x67f7140
	void StartRecording(); // Function ElectraDataChannelRuntime.ElectraDataChannelRecorder.StartRecording // (Final|Native|Public|BlueprintCallable) // @ game+0x67f70ac
	void RecordToFile(struct FString InFilename); // Function ElectraDataChannelRuntime.ElectraDataChannelRecorder.RecordToFile // (Final|Native|Public|BlueprintCallable) // @ game+0x67f6dfc
	void EndRecording(); // Function ElectraDataChannelRuntime.ElectraDataChannelRecorder.EndRecording // (Final|Native|Public|BlueprintCallable) // @ game+0x67f69d8
};

