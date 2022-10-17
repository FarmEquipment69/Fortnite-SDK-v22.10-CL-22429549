// Class DeploymentConsole.DeploymentConsoleComponent
// Size: 0x238 (Inherited: 0xa0)
struct UDeploymentConsoleComponent : UActorComponent {
	char pad_A0[0x28]; // 0xa0(0x28)
	struct TArray<struct FDeploymentConsoleAircraftData> Aircrafts; // 0xc8(0x10)
	struct FScalableFloat RadiusPercentForRespawnMin; // 0xd8(0x28)
	struct FScalableFloat RadiusPercentForRespawnMax; // 0x100(0x28)
	struct FScalableFloat MaxRespawnRadius; // 0x128(0x28)
	struct FScalableFloat TeamMemberSpread; // 0x150(0x28)
	struct FScalableFloat TraceForGroundStart; // 0x178(0x28)
	struct FScalableFloat TraceForGroundEnd; // 0x1a0(0x28)
	struct FScalableFloat MinHeightFromGround; // 0x1c8(0x28)
	struct FScalableFloat MinHeightFromZero; // 0x1f0(0x28)
	struct TArray<struct FVector2D> SpawnPoints; // 0x218(0x10)
	struct TArray<struct FDeploymentConsoleTeamData> TeamSpawnData; // 0x228(0x10)

	struct TArray<struct FDeploymentConsoleAircraftData> SpawnAircrafts(bool bSpawnAircraftForEachTeam); // Function DeploymentConsole.DeploymentConsoleComponent.SpawnAircrafts // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x67cfe7c
	struct AFortAthenaAircraft* SpawnAircraft(int32_t FlightIndex); // Function DeploymentConsole.DeploymentConsoleComponent.SpawnAircraft // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x67cfe10
	void SetupTeamSpawnPoints(bool bGroupTeams); // Function DeploymentConsole.DeploymentConsoleComponent.SetupTeamSpawnPoints // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x651cde4
	void SetAircraftLock(bool bIsLocked); // Function DeploymentConsole.DeploymentConsoleComponent.SetAircraftLock // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x651cde4
	void SetAircraftDropZone(struct FBox2D& InDropZone); // Function DeploymentConsole.DeploymentConsoleComponent.SetAircraftDropZone // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x67cfdac
	struct FVector2D RetrievePlayerSpawnLocation(bool bIsGameInProgress, bool bGroupTeams, char InTeam); // Function DeploymentConsole.DeploymentConsoleComponent.RetrievePlayerSpawnLocation // (Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x67cfcb8
	struct FBox2D MoveBoxTo(struct FBox2D& InBox, struct FVector2D& VectorToMoveTo); // Function DeploymentConsole.DeploymentConsoleComponent.MoveBoxTo // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x67cfb74
	void InitializeFlightPath(struct AFortGameStateAthena* GSA, struct FAircraftFlightConstructionInfo& FlightPathConstructionInfo); // Function DeploymentConsole.DeploymentConsoleComponent.InitializeFlightPath // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x67cfa8c
	struct TArray<struct FDeploymentConsoleTeamData> GetTeamSpawnData(); // Function DeploymentConsole.DeploymentConsoleComponent.GetTeamSpawnData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x67cfa0c
	struct TArray<struct FVector2D> GetSpawnPoints(); // Function DeploymentConsole.DeploymentConsoleComponent.GetSpawnPoints // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x67cf9f0
	struct TArray<char> GetMinigameTeamsWithPlayers(struct AFortMinigame* InMinigame); // Function DeploymentConsole.DeploymentConsoleComponent.GetMinigameTeamsWithPlayers // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x67cf934
	struct AFortAthenaMapInfo* GetMapInfo(); // Function DeploymentConsole.DeploymentConsoleComponent.GetMapInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x67cf910
	struct FAircraftFlightConstructionInfo GetDefaultFlightPathConstructionInfo(struct AFortGameStateAthena* GameStateAthena, enum class EAirCraftBehavior AirCraftBehavior); // Function DeploymentConsole.DeploymentConsoleComponent.GetDefaultFlightPathConstructionInfo // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x67cf7cc
	struct FBox2D GetCachedAircraftSpawnZone(); // Function DeploymentConsole.DeploymentConsoleComponent.GetCachedAircraftSpawnZone // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x67cf740
	void ClearFlightInfos(); // Function DeploymentConsole.DeploymentConsoleComponent.ClearFlightInfos // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const) // @ game+0x67cf6e0
	struct FRotator CalculateSpawnRotationFromLocation(struct FVector& InSpawnLocation); // Function DeploymentConsole.DeploymentConsoleComponent.CalculateSpawnRotationFromLocation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x67cf638
	struct FVector AdjustLocationToValidHeight(struct FVector& RespawnLocation); // Function DeploymentConsole.DeploymentConsoleComponent.AdjustLocationToValidHeight // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x67cf590
};

// Class DeploymentConsole.FortAthenaMutator_CR_Respawn
// Size: 0x330 (Inherited: 0x330)
struct AFortAthenaMutator_CR_Respawn : AFortAthenaMutator {
};

