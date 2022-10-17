// Class Lobby.LobbyBeaconClient
// Size: 0x3a0 (Inherited: 0x318)
struct ALobbyBeaconClient : AOnlineBeaconClient {
	struct ALobbyBeaconState* LobbyState; // 0x318(0x08)
	struct ALobbyBeaconPlayerState* PlayerState; // 0x320(0x08)
	char pad_328[0x1]; // 0x328(0x01)
	enum class ELobbyBeaconJoinState LobbyJoinServerState; // 0x329(0x01)
	char pad_32A[0x76]; // 0x32a(0x76)

	void ServerSetPartyOwner(struct FUniqueNetIdRepl InUniqueId, struct FUniqueNetIdRepl InPartyOwnerId); // Function Lobby.LobbyBeaconClient.ServerSetPartyOwner // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x60e6dd8
	void ServerNotifyJoiningServer(); // Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x60e6d8c
	void ServerLoginPlayer(struct FString InSessionId, struct FUniqueNetIdRepl InUniqueId, struct FString UrlString); // Function Lobby.LobbyBeaconClient.ServerLoginPlayer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x60e6a78
	void ServerKickPlayer(struct FUniqueNetIdRepl PlayerToKick, struct FText Reason); // Function Lobby.LobbyBeaconClient.ServerKickPlayer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x60e6908
	void ServerDisconnectFromLobby(); // Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x60e68bc
	void ServerCheat(struct FString Msg); // Function Lobby.LobbyBeaconClient.ServerCheat // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x60e6740
	void ClientWasKicked(struct FText KickReason); // Function Lobby.LobbyBeaconClient.ClientWasKicked // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x60e6588
	void ClientSetInviteFlags(struct FJoinabilitySettings Settings); // Function Lobby.LobbyBeaconClient.ClientSetInviteFlags // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x60e6500
	void ClientPlayerLeft(struct FUniqueNetIdRepl InUniqueId); // Function Lobby.LobbyBeaconClient.ClientPlayerLeft // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x60e6438
	void ClientPlayerJoined(struct FText NewPlayerName, struct FUniqueNetIdRepl InUniqueId); // Function Lobby.LobbyBeaconClient.ClientPlayerJoined // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x60e62f0
	void ClientLoginComplete(struct FUniqueNetIdRepl InUniqueId, bool bWasSuccessful); // Function Lobby.LobbyBeaconClient.ClientLoginComplete // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x60e61f0
	void ClientJoinGame(); // Function Lobby.LobbyBeaconClient.ClientJoinGame // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x60e61d8
	void ClientAckJoiningServer(); // Function Lobby.LobbyBeaconClient.ClientAckJoiningServer // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x27ab3ac
};

// Class Lobby.LobbyBeaconHost
// Size: 0x2e8 (Inherited: 0x2b0)
struct ALobbyBeaconHost : AOnlineBeaconHostObject {
	char pad_2B0[0x8]; // 0x2b0(0x08)
	struct TSoftClassPtr<UObject> LobbyStateClass; // 0x2b8(0x28)
	struct ALobbyBeaconState* LobbyState; // 0x2e0(0x08)
};

// Class Lobby.LobbyBeaconPlayerState
// Size: 0x358 (Inherited: 0x288)
struct ALobbyBeaconPlayerState : AInfo {
	struct FText DisplayName; // 0x288(0x18)
	struct FUniqueNetIdRepl UniqueId; // 0x2a0(0x30)
	struct FUniqueNetIdRepl PartyOwnerUniqueId; // 0x2d0(0x30)
	bool bInLobby; // 0x300(0x01)
	char pad_301[0x7]; // 0x301(0x07)
	struct AOnlineBeaconClient* ClientActor; // 0x308(0x08)
	char pad_310[0x48]; // 0x310(0x48)

	void OnRep_UniqueId(); // Function Lobby.LobbyBeaconPlayerState.OnRep_UniqueId // (Final|Native|Protected) // @ game+0x60e66dc
	void OnRep_PartyOwner(); // Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner // (Final|Native|Protected) // @ game+0x60e66a4
	void OnRep_InLobby(); // Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby // (Final|Native|Protected) // @ game+0x60e6640
};

// Class Lobby.LobbyBeaconState
// Size: 0x430 (Inherited: 0x288)
struct ALobbyBeaconState : AInfo {
	int32_t MaxPlayers; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct ALobbyBeaconPlayerState* LobbyBeaconPlayerStateClass; // 0x290(0x08)
	char pad_298[0x8]; // 0x298(0x08)
	bool bLobbyStarted; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	float WaitForPlayersTimeRemaining; // 0x2a4(0x04)
	struct FLobbyPlayerStateInfoArray Players; // 0x2a8(0x120)
	char pad_3C8[0x68]; // 0x3c8(0x68)

	void OnRep_WaitForPlayersTimeRemaining(); // Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining // (Final|Native|Protected) // @ game+0x60e6714
	void OnRep_LobbyStarted(); // Function Lobby.LobbyBeaconState.OnRep_LobbyStarted // (Final|Native|Protected) // @ game+0x60e6678
};

