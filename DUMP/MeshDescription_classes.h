// Class MeshDescription.MeshDescriptionBase
// Size: 0x2f0 (Inherited: 0x28)
struct UMeshDescriptionBase : UObject {
	char pad_28[0x2c8]; // 0x28(0x2c8)

	void SetVertexPosition(struct FVertexID VertexID, struct FVector& Position); // Function MeshDescription.MeshDescriptionBase.SetVertexPosition // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x8ff590c
	void SetPolygonVertexInstances(struct FPolygonID PolygonID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs); // Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstances // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8ff5768
	void SetPolygonPolygonGroup(struct FPolygonID PolygonID, struct FPolygonGroupID PolygonGroupID); // Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x8ff56a4
	void ReversePolygonFacing(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing // (Final|Native|Public|BlueprintCallable) // @ game+0x8ff55f8
	void ReserveNewVertices(int32_t NumberOfNewVertices); // Function MeshDescription.MeshDescriptionBase.ReserveNewVertices // (Final|Native|Public|BlueprintCallable) // @ game+0x8ff5578
	void ReserveNewVertexInstances(int32_t NumberOfNewVertexInstances); // Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances // (Final|Native|Public|BlueprintCallable) // @ game+0x8ff5330
	void ReserveNewTriangles(int32_t NumberOfNewTriangles); // Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles // (Final|Native|Public|BlueprintCallable) // @ game+0x8ff54e0
	void ReserveNewPolygons(int32_t NumberOfNewPolygons); // Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons // (Final|Native|Public|BlueprintCallable) // @ game+0x8ff5448
	void ReserveNewPolygonGroups(int32_t NumberOfNewPolygonGroups); // Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups // (Final|Native|Public|BlueprintCallable) // @ game+0x8ff53b0
	void ReserveNewEdges(int32_t NumberOfNewEdges); // Function MeshDescription.MeshDescriptionBase.ReserveNewEdges // (Final|Native|Public|BlueprintCallable) // @ game+0x8ff5330
	bool IsVertexValid(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.IsVertexValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff5260
	bool IsVertexOrphaned(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff51a4
	bool IsVertexInstanceValid(struct FVertexInstanceID VertexInstanceID); // Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff50d4
	bool IsTriangleValid(struct FTriangleID TriangleID); // Function MeshDescription.MeshDescriptionBase.IsTriangleValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff5004
	bool IsTrianglePartOfNgon(struct FTriangleID TriangleID); // Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff4f18
	bool IsPolygonValid(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.IsPolygonValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff4e48
	bool IsPolygonGroupValid(struct FPolygonGroupID PolygonGroupID); // Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff4d78
	bool IsEmpty(); // Function MeshDescription.MeshDescriptionBase.IsEmpty // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff4ce8
	bool IsEdgeValid(struct FEdgeID EdgeID); // Function MeshDescription.MeshDescriptionBase.IsEdgeValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff4c18
	bool IsEdgeInternalToPolygon(struct FEdgeID EdgeID, struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff4b54
	bool IsEdgeInternal(struct FEdgeID EdgeID); // Function MeshDescription.MeshDescriptionBase.IsEdgeInternal // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff4a94
	void GetVertexVertexInstances(struct FVertexID VertexID, struct TArray<struct FVertexInstanceID>& OutVertexInstanceIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff489c
	struct FVector GetVertexPosition(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetVertexPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff47fc
	struct FEdgeID GetVertexPairEdge(struct FVertexID VertexID0, struct FVertexID VertexID1); // Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff4730
	struct FVertexID GetVertexInstanceVertex(struct FVertexInstanceID VertexInstanceID); // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff4654
	struct FEdgeID GetVertexInstancePairEdge(struct FVertexInstanceID VertexInstanceID0, struct FVertexInstanceID VertexInstanceID1); // Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff4588
	struct FVertexInstanceID GetVertexInstanceForTriangleVertex(struct FTriangleID TriangleID, struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff4488
	struct FVertexInstanceID GetVertexInstanceForPolygonVertex(struct FPolygonID PolygonID, struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff4388
	int32_t GetVertexInstanceCount(); // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff435c
	void GetVertexInstanceConnectedTriangles(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FTriangleID>& OutConnectedTriangleIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff4164
	void GetVertexInstanceConnectedPolygons(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff3f94
	int32_t GetVertexCount(); // Function MeshDescription.MeshDescriptionBase.GetVertexCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff3f68
	void GetVertexConnectedTriangles(struct FVertexID VertexID, struct TArray<struct FTriangleID>& OutConnectedTriangleIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff3d9c
	void GetVertexConnectedPolygons(struct FVertexID VertexID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff3bd0
	void GetVertexConnectedEdges(struct FVertexID VertexID, struct TArray<struct FEdgeID>& OutEdgeIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff39d8
	void GetVertexAdjacentVertices(struct FVertexID VertexID, struct TArray<struct FVertexID>& OutAdjacentVertexIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff380c
	void GetTriangleVertices(struct FTriangleID TriangleID, struct TArray<struct FVertexID>& OutVertexIDs); // Function MeshDescription.MeshDescriptionBase.GetTriangleVertices // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff3668
	void GetTriangleVertexInstances(struct FTriangleID TriangleID, struct TArray<struct FVertexInstanceID>& OutVertexInstanceIDs); // Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff34c4
	struct FVertexInstanceID GetTriangleVertexInstance(struct FTriangleID TriangleID, int32_t Index); // Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff33a0
	struct FPolygonGroupID GetTrianglePolygonGroup(struct FTriangleID TriangleID); // Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff32c4
	struct FPolygonID GetTrianglePolygon(struct FTriangleID TriangleID); // Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff31e8
	void GetTriangleEdges(struct FTriangleID TriangleID, struct TArray<struct FEdgeID>& OutEdgeIDs); // Function MeshDescription.MeshDescriptionBase.GetTriangleEdges // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff3044
	int32_t GetTriangleCount(); // Function MeshDescription.MeshDescriptionBase.GetTriangleCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff3018
	void GetTriangleAdjacentTriangles(struct FTriangleID TriangleID, struct TArray<struct FTriangleID>& OutTriangleIDs); // Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff2e48
	void GetPolygonVertices(struct FPolygonID PolygonID, struct TArray<struct FVertexID>& OutVertexIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonVertices // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff2c78
	void GetPolygonVertexInstances(struct FPolygonID PolygonID, struct TArray<struct FVertexInstanceID>& OutVertexInstanceIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff2ad4
	void GetPolygonTriangles(struct FPolygonID PolygonID, struct TArray<struct FTriangleID>& OutTriangleIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff28dc
	struct FPolygonGroupID GetPolygonPolygonGroup(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff2800
	void GetPolygonPerimeterEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OutEdgeIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff2630
	void GetPolygonInternalEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OutEdgeIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff2460
	void GetPolygonGroupPolygons(struct FPolygonGroupID PolygonGroupID, struct TArray<struct FPolygonID>& OutPolygonIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff22bc
	int32_t GetPolygonGroupCount(); // Function MeshDescription.MeshDescriptionBase.GetPolygonGroupCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff2290
	int32_t GetPolygonCount(); // Function MeshDescription.MeshDescriptionBase.GetPolygonCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff2264
	void GetPolygonAdjacentPolygons(struct FPolygonID PolygonID, struct TArray<struct FPolygonID>& OutPolygonIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff2094
	int32_t GetNumVertexVertexInstances(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff1fcc
	int32_t GetNumVertexInstanceConnectedTriangles(struct FVertexInstanceID VertexInstanceID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff1f04
	int32_t GetNumVertexInstanceConnectedPolygons(struct FVertexInstanceID VertexInstanceID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff1e48
	int32_t GetNumVertexConnectedTriangles(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff1d8c
	int32_t GetNumVertexConnectedPolygons(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff1cd0
	int32_t GetNumVertexConnectedEdges(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff1c08
	int32_t GetNumPolygonVertices(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff1b4c
	int32_t GetNumPolygonTriangles(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff1a84
	int32_t GetNumPolygonInternalEdges(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff19b8
	int32_t GetNumPolygonGroupPolygons(struct FPolygonGroupID PolygonGroupID); // Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff18f0
	int32_t GetNumEdgeConnectedTriangles(struct FEdgeID EdgeID); // Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff1828
	int32_t GetNumEdgeConnectedPolygons(struct FEdgeID EdgeID); // Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff179c
	void GetEdgeVertices(struct FEdgeID EdgeID, struct TArray<struct FVertexID>& OutVertexIDs); // Function MeshDescription.MeshDescriptionBase.GetEdgeVertices // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff15f8
	struct FVertexID GetEdgeVertex(struct FEdgeID EdgeID, int32_t VertexNumber); // Function MeshDescription.MeshDescriptionBase.GetEdgeVertex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff14d4
	int32_t GetEdgeCount(); // Function MeshDescription.MeshDescriptionBase.GetEdgeCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff14a8
	void GetEdgeConnectedTriangles(struct FEdgeID EdgeID, struct TArray<struct FTriangleID>& OutConnectedTriangleIDs); // Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff12b0
	void GetEdgeConnectedPolygons(struct FEdgeID EdgeID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs); // Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff10e0
	void Empty(); // Function MeshDescription.MeshDescriptionBase.Empty // (Final|Native|Public|BlueprintCallable) // @ game+0x8ff10c8
	void DeleteVertexInstance(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FVertexID>& OrphanedVertices); // Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8ff0ef8
	void DeleteVertex(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.DeleteVertex // (Final|Native|Public|BlueprintCallable) // @ game+0x8ff0e2c
	void DeleteTriangle(struct FTriangleID TriangleID, struct TArray<struct FEdgeID>& OrphanedEdges, struct TArray<struct FVertexInstanceID>& OrphanedVertexInstances, struct TArray<struct FPolygonGroupID>& OrphanedPolygonGroupsPtr); // Function MeshDescription.MeshDescriptionBase.DeleteTriangle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8ff0a14
	void DeletePolygonGroup(struct FPolygonGroupID PolygonGroupID); // Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x8ff0948
	void DeletePolygon(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OrphanedEdges, struct TArray<struct FVertexInstanceID>& OrphanedVertexInstances, struct TArray<struct FPolygonGroupID>& OrphanedPolygonGroups); // Function MeshDescription.MeshDescriptionBase.DeletePolygon // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8ff0530
	void DeleteEdge(struct FEdgeID EdgeID, struct TArray<struct FVertexID>& OrphanedVertices); // Function MeshDescription.MeshDescriptionBase.DeleteEdge // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8ff0360
	void CreateVertexWithID(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.CreateVertexWithID // (Final|Native|Public|BlueprintCallable) // @ game+0x8ff02ac
	void CreateVertexInstanceWithID(struct FVertexInstanceID VertexInstanceID, struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID // (Final|Native|Public|BlueprintCallable) // @ game+0x8ff01e8
	struct FVertexInstanceID CreateVertexInstance(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.CreateVertexInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x8ff0120
	struct FVertexID CreateVertex(); // Function MeshDescription.MeshDescriptionBase.CreateVertex // (Final|Native|Public|BlueprintCallable) // @ game+0x8ff00f0
	void CreateTriangleWithID(struct FTriangleID TriangleID, struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs); // Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8fefdf0
	struct FTriangleID CreateTriangle(struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs); // Function MeshDescription.MeshDescriptionBase.CreateTriangle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8fefb24
	void CreatePolygonWithID(struct FPolygonID PolygonID, struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs); // Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8fef824
	void CreatePolygonGroupWithID(struct FPolygonGroupID PolygonGroupID); // Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID // (Final|Native|Public|BlueprintCallable) // @ game+0x8fef76c
	struct FPolygonGroupID CreatePolygonGroup(); // Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x8fef734
	struct FPolygonID CreatePolygon(struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs); // Function MeshDescription.MeshDescriptionBase.CreatePolygon // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8fef468
	void CreateEdgeWithID(struct FEdgeID EdgeID, struct FVertexID VertexID0, struct FVertexID VertexID1); // Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID // (Final|Native|Public|BlueprintCallable) // @ game+0x8fef370
	struct FEdgeID CreateEdge(struct FVertexID VertexID0, struct FVertexID VertexID1); // Function MeshDescription.MeshDescriptionBase.CreateEdge // (Final|Native|Public|BlueprintCallable) // @ game+0x8fef2a4
	void ComputePolygonTriangulation(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation // (Final|Native|Public|BlueprintCallable) // @ game+0x8fef1f8
};

// Class MeshDescription.MeshDescriptionBaseBulkData
// Size: 0x28 (Inherited: 0x28)
struct UMeshDescriptionBaseBulkData : UObject {
};

