// Class MRMesh.MeshReconstructorBase
// Size: 0x28 (Inherited: 0x28)
struct UMeshReconstructorBase : UObject {

	void StopReconstruction(); // Function MRMesh.MeshReconstructorBase.StopReconstruction // (Native|Public|BlueprintCallable) // @ game+0x6859d3c
	void StartReconstruction(); // Function MRMesh.MeshReconstructorBase.StartReconstruction // (Native|Public|BlueprintCallable) // @ game+0x132bf94
	void PauseReconstruction(); // Function MRMesh.MeshReconstructorBase.PauseReconstruction // (Native|Public|BlueprintCallable) // @ game+0x1857ba8
	bool IsReconstructionStarted(); // Function MRMesh.MeshReconstructorBase.IsReconstructionStarted // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x239050c
	bool IsReconstructionPaused(); // Function MRMesh.MeshReconstructorBase.IsReconstructionPaused // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65096f4
	void DisconnectMRMesh(); // Function MRMesh.MeshReconstructorBase.DisconnectMRMesh // (Native|Public) // @ game+0x4447fbc
	void ConnectMRMesh(struct UMRMeshComponent* Mesh); // Function MRMesh.MeshReconstructorBase.ConnectMRMesh // (Native|Public) // @ game+0x8d909f8
};

// Class MRMesh.MockDataMeshTrackerComponent
// Size: 0x310 (Inherited: 0x2a0)
struct UMockDataMeshTrackerComponent : USceneComponent {
	struct FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x2a0(0x10)
	bool ScanWorld; // 0x2b0(0x01)
	bool RequestNormals; // 0x2b1(0x01)
	bool RequestVertexConfidence; // 0x2b2(0x01)
	enum class EMeshTrackerVertexColorMode VertexColorMode; // 0x2b3(0x01)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct TArray<struct FColor> BlockVertexColors; // 0x2b8(0x10)
	struct FLinearColor VertexColorFromConfidenceZero; // 0x2c8(0x10)
	struct FLinearColor VertexColorFromConfidenceOne; // 0x2d8(0x10)
	float UpdateInterval; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct UMRMeshComponent* MRMesh; // 0x2f0(0x08)
	char pad_2F8[0x18]; // 0x2f8(0x18)

	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<float>& Confidence); // DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0xda071c
	void DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x8d90b58
	void ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x8d90a7c
};

// Class MRMesh.MRMeshBodyHolder
// Size: 0x228 (Inherited: 0x28)
struct UMRMeshBodyHolder : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UBodySetup* BodySetup; // 0x30(0x08)
	struct FBodyInstance BodyInstance; // 0x38(0x188)
	char pad_1C0[0x68]; // 0x1c0(0x68)
};

// Class MRMesh.MRMeshComponent
// Size: 0x5b0 (Inherited: 0x530)
struct UMRMeshComponent : UPrimitiveComponent {
	char pad_530[0x8]; // 0x530(0x08)
	struct UMaterialInterface* Material; // 0x538(0x08)
	struct UMaterialInterface* WireframeMaterial; // 0x540(0x08)
	bool bCreateMeshProxySections; // 0x548(0x01)
	bool bUpdateNavMeshOnMeshUpdate; // 0x549(0x01)
	char pad_54A[0x1]; // 0x54a(0x01)
	bool bNeverCreateCollisionMesh; // 0x54b(0x01)
	char pad_54C[0x44]; // 0x54c(0x44)
	struct TArray<struct UMRMeshBodyHolder*> BodyHolders; // 0x590(0x10)
	char pad_5A0[0x10]; // 0x5a0(0x10)

	void SetWireframeMaterial(struct UMaterialInterface* InMaterial); // Function MRMesh.MRMeshComponent.SetWireframeMaterial // (Native|Public|BlueprintCallable) // @ game+0x65bf994
	void SetWireframeColor(struct FLinearColor& InColor); // Function MRMesh.MRMeshComponent.SetWireframeColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x8d90d90
	void SetUseWireframe(bool bUseWireframe); // Function MRMesh.MRMeshComponent.SetUseWireframe // (Final|Native|Public|BlueprintCallable) // @ game+0x8d90d08
	void SetEnableMeshOcclusion(bool bEnable); // Function MRMesh.MRMeshComponent.SetEnableMeshOcclusion // (Final|Native|Public|BlueprintCallable) // @ game+0x8d90c88
	void RequestNavMeshUpdate(); // Function MRMesh.MRMeshComponent.RequestNavMeshUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x8d90c64
	bool IsConnected(); // Function MRMesh.MRMeshComponent.IsConnected // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8d90c38
	struct FLinearColor GetWireframeColor(); // Function MRMesh.MRMeshComponent.GetWireframeColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x8d90c1c
	bool GetUseWireframe(); // Function MRMesh.MRMeshComponent.GetUseWireframe // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8d90c04
	bool GetEnableMeshOcclusion(); // Function MRMesh.MRMeshComponent.GetEnableMeshOcclusion // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8d90bec
	void ForceNavMeshUpdate(); // Function MRMesh.MRMeshComponent.ForceNavMeshUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x8d90bd8
	void Clear(); // Function MRMesh.MRMeshComponent.Clear // (Final|Native|Public|BlueprintCallable) // @ game+0x8d909dc
};

