// Class VotingFramework.VoteBroadcasterComponent
// Size: 0x510 (Inherited: 0x150)
struct UVoteBroadcasterComponent : UMeshNetworkComponent {
	struct TArray<struct FVoteSessionSettings> VoteSessionSettingsList; // 0x150(0x10)
	struct FVoteSessionRuntimeArray VoteSessionRuntimeList; // 0x160(0x120)
	struct FVoteRuntimeArray VoteRuntimeList; // 0x280(0x120)
	struct FVoteSelectionResultsArray VoteResultsList; // 0x3a0(0x120)
	struct TMap<struct FUniqueNetIdRepl, struct FCastedVote> PlayerCastedVotesMap; // 0x4c0(0x50)

	void VoteStart(struct FName VoteSessionId, struct FName VoteId); // Function VotingFramework.VoteBroadcasterComponent.VoteStart // (Final|Native|Public|BlueprintCallable) // @ game+0x709b77c
	void VoteSetup(struct FName VoteSessionId, struct FName VoteId); // Function VotingFramework.VoteBroadcasterComponent.VoteSetup // (Final|Native|Public|BlueprintCallable) // @ game+0x709b6bc
	void VoteSessionShutdown(struct FName VoteSessionId); // Function VotingFramework.VoteBroadcasterComponent.VoteSessionShutdown // (Final|Native|Public|BlueprintCallable) // @ game+0x709b63c
	void VoteSessionSetup(struct FName VoteSessionId, struct FName StartingVoteId, enum class EVoteSessionNetworkType NetworkType); // Function VotingFramework.VoteBroadcasterComponent.VoteSessionSetup // (Final|Native|Public|BlueprintCallable) // @ game+0x709b544
	void VoteSessionComplete(struct FName VoteSessionId); // Function VotingFramework.VoteBroadcasterComponent.VoteSessionComplete // (Final|Native|Public|BlueprintCallable) // @ game+0x709b4c4
	void VoteEnd(struct FName VoteSessionId, struct FName VoteId, struct FName WinningVoteSelectionId); // Function VotingFramework.VoteBroadcasterComponent.VoteEnd // (Final|Native|Public|BlueprintCallable) // @ game+0x709b3d0
	void ServerSubmitVotesAggregated(struct FName VoteSessionId, struct FName VoteId, struct FName VoteSelectionId, int32_t VoteDelta); // Function VotingFramework.VoteBroadcasterComponent.ServerSubmitVotesAggregated // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x709b260
	void OnVoteCasted(struct FUniqueNetIdRepl& UserNetId, struct FGameplayTag& VoteSessionId, struct FGameplayTag& VoteId, struct FGameplayTag& VoteSelectionId); // Function VotingFramework.VoteBroadcasterComponent.OnVoteCasted // (Final|Native|Protected|HasOutParms) // @ game+0x709a73c
};

// Class VotingFramework.VoteDispatchSubsystem
// Size: 0xd0 (Inherited: 0x30)
struct UVoteDispatchSubsystem : UGameInstanceSubsystem {
	char pad_30[0x90]; // 0x30(0x90)
	struct TArray<struct FVoteSelectionResults> VotingResults; // 0xc0(0x10)
};

// Class VotingFramework.VoteInitiationActor
// Size: 0x298 (Inherited: 0x288)
struct AVoteInitiationActor : AInfo {
	char pad_288[0x8]; // 0x288(0x08)
	struct UVoteBroadcasterComponent* VoteBroadcasterComponent; // 0x290(0x08)
};

// Class VotingFramework.VoteListenerComponent
// Size: 0x180 (Inherited: 0xa0)
struct UVoteListenerComponent : UActorComponent {
	struct FMulticastInlineDelegate OnVoteSessionSetupEvent; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnVoteSessionVotingEvent; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnVoteSetupEvent; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnVoteStartEvent; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnVoteChangeEvent; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnVoteEndEvent; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnVoteSessionCompleteEvent; // 0x100(0x10)
	struct FMulticastInlineDelegate OnVoteSessionShutdownEvent; // 0x110(0x10)
	struct FGameplayTagContainer RequestedVoteSessionIds; // 0x120(0x20)
	struct FGameplayTagContainer RequestedVoteIds; // 0x140(0x20)
	struct FGameplayTagContainer RequestedVoteSelectionIds; // 0x160(0x20)

	void OnVoteStart(struct FGameplayTag& VoteSessionId, struct FGameplayTag& VoteId, enum class EVoteState VoteState); // Function VotingFramework.VoteListenerComponent.OnVoteStart // (Native|Protected|HasOutParms) // @ game+0x709b004
	void OnVoteSetup(struct FGameplayTag& VoteSessionId, struct FGameplayTag& VoteId, enum class EVoteState VoteState); // Function VotingFramework.VoteListenerComponent.OnVoteSetup // (Native|Protected|HasOutParms) // @ game+0x709aee4
	void OnVoteSessionVoting(struct FGameplayTag& VoteSessionId, struct FGameplayTag& StartingVoteId, enum class EVoteSessionState SessionState); // Function VotingFramework.VoteListenerComponent.OnVoteSessionVoting // (Native|Protected|HasOutParms) // @ game+0x709adc4
	void OnVoteSessionShutdown(struct FGameplayTag& VoteSessionId); // Function VotingFramework.VoteListenerComponent.OnVoteSessionShutdown // (Native|Protected|HasOutParms) // @ game+0x69380c0
	void OnVoteSessionSetup(struct FGameplayTag& VoteSessionId, struct FGameplayTag& StartingVoteId, enum class EVoteSessionNetworkType NetworkType, enum class EVoteSessionState SessionState); // Function VotingFramework.VoteListenerComponent.OnVoteSessionSetup // (Native|Protected|HasOutParms) // @ game+0x709ac5c
	void OnVoteSessionComplete(struct FGameplayTag& VoteSessionId); // Function VotingFramework.VoteListenerComponent.OnVoteSessionComplete // (Native|Protected|HasOutParms) // @ game+0x709abcc
	void OnVoteEnd(struct FGameplayTag& VoteSessionId, struct FGameplayTag& VoteId, struct FGameplayTag& WinningVoteSelectionId, enum class EVoteState VoteState); // Function VotingFramework.VoteListenerComponent.OnVoteEnd // (Native|Protected|HasOutParms) // @ game+0x709aa5c
	void OnVoteChange(struct FGameplayTag& VoteSessionId, struct FGameplayTag& VoteId, struct FGameplayTag& VoteSelectionId, int32_t ServerVoteTotal, int32_t AllServersVoteTotal); // Function VotingFramework.VoteListenerComponent.OnVoteChange // (Native|Protected|HasOutParms) // @ game+0x709a8a8
};

// Class VotingFramework.VoteResponderComponent
// Size: 0x1f0 (Inherited: 0x180)
struct UVoteResponderComponent : UVoteListenerComponent {
	struct TArray<struct FVoteSelection> SupportedVoteSelections; // 0x180(0x10)
	bool bShouldLockVotingAfterCasted; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
	struct TMap<struct FUniqueNetIdRepl, struct FCastedVote> PlayerCastedVotesMap; // 0x198(0x50)
	struct FName ActiveVoteSessionId; // 0x1e8(0x04)
	struct FName ActiveVoteId; // 0x1ec(0x04)

	void ServerCastVoteSelection(struct FUniqueNetIdRepl InUserId, struct FCastedVote CastedVote); // Function VotingFramework.VoteResponderComponent.ServerCastVoteSelection // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x709b124
	void CastManualVoteSelectionAtIndex(struct APlayerState* InPlayerState, int32_t SelectionIndex); // Function VotingFramework.VoteResponderComponent.CastManualVoteSelectionAtIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x709a678
	void CastManualVoteSelection(struct APlayerState* InPlayerState, struct FGameplayTag& VoteSelection); // Function VotingFramework.VoteResponderComponent.CastManualVoteSelection // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x709a5a8
	void CastDefaultVoteSelection(struct APlayerState* InPlayerState); // Function VotingFramework.VoteResponderComponent.CastDefaultVoteSelection // (Final|Native|Public|BlueprintCallable) // @ game+0x709a524
};

