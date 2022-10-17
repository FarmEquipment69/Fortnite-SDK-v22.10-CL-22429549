// Class ControlRig.ControlRig
// Size: 0x540 (Inherited: 0x28)
struct UControlRig : UObject {
	char pad_28[0x1e]; // 0x28(0x1e)
	enum class ERigExecutionType ExecutionType; // 0x46(0x01)
	char pad_47[0x1]; // 0x47(0x01)
	struct FRigHierarchySettings HierarchySettings; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FRigVMRuntimeSettings VMRuntimeSettings; // 0x50(0x18)
	struct TMap<struct FRigElementKey, struct FRigControlElementCustomization> ControlCustomizations; // 0x68(0x50)
	struct URigVM* VM; // 0xb8(0x08)
	struct TMap<uint32_t, struct URigVM*> InitializedVMSnapshots; // 0xc0(0x50)
	char pad_110[0x8]; // 0x110(0x08)
	struct URigHierarchy* DynamicHierarchy; // 0x118(0x08)
	struct TSoftObjectPtr<UControlRigShapeLibrary> GizmoLibrary; // 0x120(0x28)
	struct TArray<struct TSoftObjectPtr<UControlRigShapeLibrary>> ShapeLibraries; // 0x148(0x10)
	char pad_158[0x10]; // 0x158(0x10)
	struct TMap<struct FName, struct FCachedPropertyPath> InputProperties; // 0x168(0x50)
	struct TMap<struct FName, struct FCachedPropertyPath> OutputProperties; // 0x1b8(0x50)
	char pad_208[0xa8]; // 0x208(0xa8)
	struct FControlRigDrawContainer DrawContainer; // 0x2b0(0x18)
	char pad_2C8[0x18]; // 0x2c8(0x18)
	struct UAnimationDataSourceRegistry* DataSourceRegistry; // 0x2e0(0x08)
	struct TArray<struct FName> EventQueue; // 0x2e8(0x10)
	char pad_2F8[0xd0]; // 0x2f8(0xd0)
	struct FRigInfluenceMapPerEvent Influences; // 0x3c8(0x60)
	struct UControlRig* InteractionRig; // 0x428(0x08)
	struct UControlRig* InteractionRigClass; // 0x430(0x08)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x438(0x10)
	char pad_448[0xb0]; // 0x448(0xb0)
	struct FMulticastSparseDelegate OnControlSelected_BP; // 0x4f8(0x01)
	char pad_4F9[0x47]; // 0x4f9(0x47)

	bool SupportsEvent(struct FName& InEventName); // Function ControlRig.ControlRig.SupportsEvent // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x65c13e8
	bool SetVariableFromString(struct FName& InVariableName, struct FString InValue); // Function ControlRig.ControlRig.SetVariableFromString // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x65c1260
	void SetInteractionRigClass(struct UControlRig* InInteractionRigClass); // Function ControlRig.ControlRig.SetInteractionRigClass // (Final|Native|Public|BlueprintCallable) // @ game+0x65c1084
	void SetInteractionRig(struct UControlRig* InInteractionRig); // Function ControlRig.ControlRig.SetInteractionRig // (Final|Native|Public|BlueprintCallable) // @ game+0x65c1004
	void SetFramesPerSecond(float InFramesPerSecond); // Function ControlRig.ControlRig.SetFramesPerSecond // (Final|Native|Public|BlueprintCallable) // @ game+0x65c0bfc
	void SetDeltaTime(float InDeltaTime); // Function ControlRig.ControlRig.SetDeltaTime // (Final|Native|Public|BlueprintCallable) // @ game+0x65c0b78
	void SetAbsoluteTime(float InAbsoluteTime, bool InSetDeltaTimeZero); // Function ControlRig.ControlRig.SetAbsoluteTime // (Final|Native|Public|BlueprintCallable) // @ game+0x65bfdf4
	void SetAbsoluteAndDeltaTime(float InAbsoluteTime, float InDeltaTime); // Function ControlRig.ControlRig.SetAbsoluteAndDeltaTime // (Final|Native|Public|BlueprintCallable) // @ game+0x65bfd2c
	void SelectControl(struct FName& InControlName, bool bSelect); // Function ControlRig.ControlRig.SelectControl // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x65bfc58
	void RequestInit(); // Function ControlRig.ControlRig.RequestInit // (Final|Native|Public|BlueprintCallable) // @ game+0x65bfc40
	void RequestConstruction(); // Function ControlRig.ControlRig.RequestConstruction // (Final|Native|Public|BlueprintCallable) // @ game+0x65bfc28
	void OnControlSelectedBP__DelegateSignature(struct UControlRig* Rig, struct FRigControlElement& Control, bool bSelected); // SparseDelegateFunction ControlRig.ControlRig.OnControlSelectedBP__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0xda071c
	bool IsControlSelected(struct FName& InControlName); // Function ControlRig.ControlRig.IsControlSelected // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x65bf870
	struct URigVM* GetVM(); // Function ControlRig.ControlRig.GetVM // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x65bf6e4
	struct FName GetVariableType(struct FName& InVariableName); // Function ControlRig.ControlRig.GetVariableType // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x65bf798
	struct FString GetVariableAsString(struct FName& InVariableName); // Function ControlRig.ControlRig.GetVariableAsString // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x65bf708
	struct TArray<struct FName> GetSupportedEvents(); // Function ControlRig.ControlRig.GetSupportedEvents // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65bf1e8
	struct TArray<struct FName> GetScriptAccessibleVariables(); // Function ControlRig.ControlRig.GetScriptAccessibleVariables // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65bf55c
	struct UControlRig* GetInteractionRigClass(); // Function ControlRig.ControlRig.GetInteractionRigClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65bf544
	struct UControlRig* GetInteractionRig(); // Function ControlRig.ControlRig.GetInteractionRig // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65bf52c
	struct AActor* GetHostingActor(); // Function ControlRig.ControlRig.GetHostingActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65bf2cc
	struct URigHierarchy* GetHierarchy(); // Function ControlRig.ControlRig.GetHierarchy // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x65bf2b4
	struct TArray<struct FName> GetEvents(); // Function ControlRig.ControlRig.GetEvents // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65bf1e8
	float GetCurrentFramesPerSecond(); // Function ControlRig.ControlRig.GetCurrentFramesPerSecond // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65bf124
	float GetAbsoluteTime(); // Function ControlRig.ControlRig.GetAbsoluteTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x23f7268
	struct TArray<struct UControlRig*> FindControlRigs(struct UObject* Outer, struct UControlRig* OptionalClass); // Function ControlRig.ControlRig.FindControlRigs // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x65be750
	bool ExecuteEvent(struct FName& InEventName); // Function ControlRig.ControlRig.ExecuteEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x65be6b8
	bool Execute(enum class EControlRigState State, struct FName& InEventName); // Function ControlRig.ControlRig.Execute // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x65be5ec
	struct TArray<struct FName> CurrentControlSelection(); // Function ControlRig.ControlRig.CurrentControlSelection // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65be4b4
	struct UTransformableControlHandle* CreateTransformableControlHandle(struct UObject* Outer, struct FName& ControlName); // Function ControlRig.ControlRig.CreateTransformableControlHandle // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x65be3e4
	bool ContainsEvent(struct FName& InEventName); // Function ControlRig.ControlRig.ContainsEvent // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x65be34c
	bool ClearControlSelection(); // Function ControlRig.ControlRig.ClearControlSelection // (Native|Public|BlueprintCallable) // @ game+0x2318770
	bool CanExecute(); // Function ControlRig.ControlRig.CanExecute // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24efbe0
};

// Class ControlRig.AdditiveControlRig
// Size: 0x550 (Inherited: 0x540)
struct UAdditiveControlRig : UControlRig {
	char pad_540[0x10]; // 0x540(0x10)
};

// Class ControlRig.ControlRigAnimInstance
// Size: 0x350 (Inherited: 0x350)
struct UControlRigAnimInstance : UAnimInstance {
};

// Class ControlRig.ControlRigBlueprintGeneratedClass
// Size: 0x380 (Inherited: 0x380)
struct UControlRigBlueprintGeneratedClass : UBlueprintGeneratedClass {
};

// Class ControlRig.ControlRigComponent
// Size: 0x690 (Inherited: 0x530)
struct UControlRigComponent : UPrimitiveComponent {
	struct UControlRig* ControlRigClass; // 0x530(0x08)
	struct FMulticastInlineDelegate OnPreInitializeDelegate; // 0x538(0x10)
	struct FMulticastInlineDelegate OnPostInitializeDelegate; // 0x548(0x10)
	struct FMulticastInlineDelegate OnPreConstructionDelegate; // 0x558(0x10)
	struct FMulticastInlineDelegate OnPostConstructionDelegate; // 0x568(0x10)
	struct FMulticastInlineDelegate OnPreForwardsSolveDelegate; // 0x578(0x10)
	struct FMulticastInlineDelegate OnPostForwardsSolveDelegate; // 0x588(0x10)
	struct TArray<struct FControlRigComponentMappedElement> UserDefinedElements; // 0x598(0x10)
	struct TArray<struct FControlRigComponentMappedElement> MappedElements; // 0x5a8(0x10)
	bool bEnableLazyEvaluation; // 0x5b8(0x01)
	char pad_5B9[0x3]; // 0x5b9(0x03)
	float LazyEvaluationPositionThreshold; // 0x5bc(0x04)
	float LazyEvaluationRotationThreshold; // 0x5c0(0x04)
	float LazyEvaluationScaleThreshold; // 0x5c4(0x04)
	bool bResetTransformBeforeTick; // 0x5c8(0x01)
	bool bResetInitialsBeforeConstruction; // 0x5c9(0x01)
	bool bUpdateRigOnTick; // 0x5ca(0x01)
	bool bUpdateInEditor; // 0x5cb(0x01)
	bool bDrawBones; // 0x5cc(0x01)
	bool bShowDebugDrawing; // 0x5cd(0x01)
	char pad_5CE[0x2]; // 0x5ce(0x02)
	struct UControlRig* ControlRig; // 0x5d0(0x08)
	char pad_5D8[0xb8]; // 0x5d8(0xb8)

	void Update(float DeltaTime); // Function ControlRig.ControlRigComponent.Update // (Final|Native|Public|BlueprintCallable) // @ game+0x65c1490
	void SetObjectBinding(struct UObject* InObjectToBind); // Function ControlRig.ControlRigComponent.SetObjectBinding // (Final|Native|Public|BlueprintCallable) // @ game+0x65c11e0
	void SetMappedElements(struct TArray<struct FControlRigComponentMappedElement> NewMappedElements); // Function ControlRig.ControlRigComponent.SetMappedElements // (Final|Native|Public|BlueprintCallable) // @ game+0x65c1104
	void SetInitialSpaceTransform(struct FName SpaceName, struct FTransform InitialTransform, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetInitialSpaceTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x65c0e68
	void SetInitialBoneTransform(struct FName BoneName, struct FTransform InitialTransform, enum class EControlRigComponentSpace Space, bool bPropagateToChildren); // Function ControlRig.ControlRigComponent.SetInitialBoneTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x65c0c80
	void SetControlVector2D(struct FName ControlName, struct FVector2D Value); // Function ControlRig.ControlRigComponent.SetControlVector2D // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x65c0ab0
	void SetControlTransform(struct FName ControlName, struct FTransform Value, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetControlTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x65c0914
	void SetControlScale(struct FName ControlName, struct FVector Value, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetControlScale // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x65c080c
	void SetControlRotator(struct FName ControlName, struct FRotator Value, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetControlRotator // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x65c0704
	void SetControlRigClass(struct UControlRig* InControlRigClass); // Function ControlRig.ControlRigComponent.SetControlRigClass // (Final|Native|Public|BlueprintCallable) // @ game+0x65c067c
	void SetControlPosition(struct FName ControlName, struct FVector Value, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetControlPosition // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x65c0574
	void SetControlOffset(struct FName ControlName, struct FTransform OffsetTransform, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetControlOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x65c03d8
	void SetControlInt(struct FName ControlName, int32_t Value); // Function ControlRig.ControlRigComponent.SetControlInt // (Final|Native|Public|BlueprintCallable) // @ game+0x65c0318
	void SetControlFloat(struct FName ControlName, float Value); // Function ControlRig.ControlRigComponent.SetControlFloat // (Final|Native|Public|BlueprintCallable) // @ game+0x65c0250
	void SetControlBool(struct FName ControlName, bool Value); // Function ControlRig.ControlRigComponent.SetControlBool // (Final|Native|Public|BlueprintCallable) // @ game+0x65c018c
	void SetBoneTransform(struct FName BoneName, struct FTransform Transform, enum class EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren); // Function ControlRig.ControlRigComponent.SetBoneTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x65bff58
	void SetBoneInitialTransformsFromSkeletalMesh(struct USkeletalMesh* InSkeletalMesh); // Function ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x65bfec0
	void OnPreInitialize(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPreInitialize // (Native|Event|Public|BlueprintEvent) // @ game+0x65bfba4
	void OnPreForwardsSolve(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPreForwardsSolve // (Native|Event|Public|BlueprintEvent) // @ game+0x65bfb20
	void OnPreConstruction(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPreConstruction // (Native|Event|Public|BlueprintEvent) // @ game+0x65bfa9c
	void OnPostInitialize(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPostInitialize // (Native|Event|Public|BlueprintEvent) // @ game+0x65bfa18
	void OnPostForwardsSolve(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPostForwardsSolve // (Native|Event|Public|BlueprintEvent) // @ game+0x65bf994
	void OnPostConstruction(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPostConstruction // (Native|Event|Public|BlueprintEvent) // @ game+0x65bf910
	void Initialize(); // Function ControlRig.ControlRigComponent.Initialize // (Final|Native|Public|BlueprintCallable) // @ game+0x65bf85c
	struct FTransform GetSpaceTransform(struct FName SpaceName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetSpaceTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x65bf5d0
	struct FTransform GetInitialSpaceTransform(struct FName SpaceName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetInitialSpaceTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x65bf418
	struct FTransform GetInitialBoneTransform(struct FName BoneName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetInitialBoneTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x65bf304
	struct TArray<struct FName> GetElementNames(enum class ERigElementType ElementType); // Function ControlRig.ControlRigComponent.GetElementNames // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x65bf144
	struct FVector2D GetControlVector2D(struct FName ControlName); // Function ControlRig.ControlRigComponent.GetControlVector2D // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x65bf08c
	struct FTransform GetControlTransform(struct FName ControlName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetControlTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x65bef78
	struct FVector GetControlScale(struct FName ControlName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetControlScale // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x65bee78
	struct FRotator GetControlRotator(struct FName ControlName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetControlRotator // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x65bed6c
	struct UControlRig* GetControlRig(); // Function ControlRig.ControlRigComponent.GetControlRig // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x65bed48
	struct FVector GetControlPosition(struct FName ControlName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetControlPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x65bec48
	struct FTransform GetControlOffset(struct FName ControlName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetControlOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x65beb34
	int32_t GetControlInt(struct FName ControlName); // Function ControlRig.ControlRigComponent.GetControlInt // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x65beaa8
	float GetControlFloat(struct FName ControlName); // Function ControlRig.ControlRigComponent.GetControlFloat // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x65bea18
	bool GetControlBool(struct FName ControlName); // Function ControlRig.ControlRigComponent.GetControlBool // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x65be98c
	struct FTransform GetBoneTransform(struct FName BoneName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetBoneTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x65be878
	float GetAbsoluteTime(); // Function ControlRig.ControlRigComponent.GetAbsoluteTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65be84c
	bool DoesElementExist(struct FName Name, enum class ERigElementType ElementType); // Function ControlRig.ControlRigComponent.DoesElementExist // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x65be52c
	void ClearMappedElements(); // Function ControlRig.ControlRigComponent.ClearMappedElements // (Final|Native|Public|BlueprintCallable) // @ game+0x65be338
	bool CanExecute(); // Function ControlRig.ControlRigComponent.CanExecute // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x65be314
	void AddMappedSkeletalMesh(struct USkeletalMeshComponent* SkeletalMeshComponent, struct TArray<struct FControlRigComponentMappedBone> Bones, struct TArray<struct FControlRigComponentMappedCurve> Curves); // Function ControlRig.ControlRigComponent.AddMappedSkeletalMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x65be1b4
	void AddMappedElements(struct TArray<struct FControlRigComponentMappedElement> NewMappedElements); // Function ControlRig.ControlRigComponent.AddMappedElements // (Final|Native|Public|BlueprintCallable) // @ game+0x65be10c
	void AddMappedComponents(struct TArray<struct FControlRigComponentMappedComponent> Components); // Function ControlRig.ControlRigComponent.AddMappedComponents // (Final|Native|Public|BlueprintCallable) // @ game+0x65bdf70
	void AddMappedCompleteSkeletalMesh(struct USkeletalMeshComponent* SkeletalMeshComponent); // Function ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x65bdecc
};

// Class ControlRig.ControlRigControlActor
// Size: 0x340 (Inherited: 0x288)
struct AControlRigControlActor : AActor {
	struct AActor* ActorToTrack; // 0x288(0x08)
	struct UControlRig* ControlRigClass; // 0x290(0x08)
	bool bRefreshOnTick; // 0x298(0x01)
	bool bIsSelectable; // 0x299(0x01)
	char pad_29A[0x6]; // 0x29a(0x06)
	struct UMaterialInterface* MaterialOverride; // 0x2a0(0x08)
	struct FString ColorParameter; // 0x2a8(0x10)
	bool bCastShadows; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct USceneComponent* ActorRootComponent; // 0x2c0(0x08)
	struct TSoftObjectPtr<UControlRig> ControlRig; // 0x2c8(0x28)
	struct TArray<struct FName> ControlNames; // 0x2f0(0x10)
	struct TArray<struct FTransform> ShapeTransforms; // 0x300(0x10)
	struct TArray<struct UStaticMeshComponent*> Components; // 0x310(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> Materials; // 0x320(0x10)
	struct FName ColorParameterName; // 0x330(0x04)
	char pad_334[0xc]; // 0x334(0x0c)

	void Refresh(); // Function ControlRig.ControlRigControlActor.Refresh // (Final|Native|Public|BlueprintCallable) // @ game+0x65c352c
	void Clear(); // Function ControlRig.ControlRigControlActor.Clear // (Final|Native|Public|BlueprintCallable) // @ game+0x65c2f84
};

// Class ControlRig.ControlRigShapeActor
// Size: 0x2c8 (Inherited: 0x288)
struct AControlRigShapeActor : AActor {
	struct USceneComponent* ActorRootComponent; // 0x288(0x08)
	struct UStaticMeshComponent* StaticMeshComponent; // 0x290(0x08)
	uint32_t ControlRigIndex; // 0x298(0x04)
	struct TWeakObjectPtr<struct UControlRig> ControlRig; // 0x29c(0x08)
	struct FName ControlName; // 0x2a4(0x04)
	struct FName ShapeName; // 0x2a8(0x04)
	struct FName ColorParameterName; // 0x2ac(0x04)
	char pad_2B0[0x10]; // 0x2b0(0x10)
	char bSelected : 1; // 0x2c0(0x01)
	char bHovered : 1; // 0x2c0(0x01)
	char pad_2C0_2 : 6; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)

	void SetSelected(bool bInSelected); // Function ControlRig.ControlRigShapeActor.SetSelected // (Native|Public|BlueprintCallable) // @ game+0x65c3a44
	void SetSelectable(bool bInSelectable); // Function ControlRig.ControlRigShapeActor.SetSelectable // (Native|Public|BlueprintCallable) // @ game+0x65c39c0
	void SetHovered(bool bInHovered); // Function ControlRig.ControlRigShapeActor.SetHovered // (Native|Public|BlueprintCallable) // @ game+0x65c393c
	void SetGlobalTransform(struct FTransform& InTransform); // Function ControlRig.ControlRigShapeActor.SetGlobalTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x65c382c
	void SetEnabled(bool bInEnabled); // Function ControlRig.ControlRigShapeActor.SetEnabled // (Native|Public|BlueprintCallable) // @ game+0x65c37a8
	void OnTransformChanged(struct FTransform& NewTransform); // Function ControlRig.ControlRigShapeActor.OnTransformChanged // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0xda071c
	void OnSelectionChanged(bool bIsSelected); // Function ControlRig.ControlRigShapeActor.OnSelectionChanged // (Event|Public|BlueprintEvent) // @ game+0xda071c
	void OnManipulatingChanged(bool bIsManipulating); // Function ControlRig.ControlRigShapeActor.OnManipulatingChanged // (Event|Public|BlueprintEvent) // @ game+0xda071c
	void OnHoveredChanged(bool bIsSelected); // Function ControlRig.ControlRigShapeActor.OnHoveredChanged // (Event|Public|BlueprintEvent) // @ game+0xda071c
	void OnEnabledChanged(bool bIsEnabled); // Function ControlRig.ControlRigShapeActor.OnEnabledChanged // (Event|Public|BlueprintEvent) // @ game+0xda071c
	bool IsSelectedInEditor(); // Function ControlRig.ControlRigShapeActor.IsSelectedInEditor // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65c3348
	bool IsHovered(); // Function ControlRig.ControlRigShapeActor.IsHovered // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x172e710
	bool IsEnabled(); // Function ControlRig.ControlRigShapeActor.IsEnabled // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65c3320
	struct FTransform GetGlobalTransform(); // Function ControlRig.ControlRigShapeActor.GetGlobalTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x65c3264
};

// Class ControlRig.ControlRigShapeLibrary
// Size: 0x150 (Inherited: 0x28)
struct UControlRigShapeLibrary : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FControlRigShapeDefinition DefaultShape; // 0x30(0xa0)
	struct TSoftObjectPtr<UMaterial> DefaultMaterial; // 0xd0(0x28)
	struct TSoftObjectPtr<UMaterial> XRayMaterial; // 0xf8(0x28)
	struct FName MaterialColorParameter; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct TArray<struct FControlRigShapeDefinition> Shapes; // 0x128(0x10)
	char pad_138[0x18]; // 0x138(0x18)
};

// Class ControlRig.ControlRigLayerInstance
// Size: 0x350 (Inherited: 0x350)
struct UControlRigLayerInstance : UAnimInstance {
};

// Class ControlRig.ControlRigWorkflowOptions
// Size: 0xb0 (Inherited: 0x98)
struct UControlRigWorkflowOptions : URigVMUserWorkflowOptions {
	struct URigHierarchy* Hierarchy; // 0x98(0x08)
	struct TArray<struct FRigElementKey> Selection; // 0xa0(0x10)

	bool EnsureAtLeastOneRigElementSelected(); // Function ControlRig.ControlRigWorkflowOptions.EnsureAtLeastOneRigElementSelected // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65c3068
};

// Class ControlRig.ControlRigTransformWorkflowOptions
// Size: 0xb8 (Inherited: 0xb0)
struct UControlRigTransformWorkflowOptions : UControlRigWorkflowOptions {
	enum class ERigTransformType TransformType; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)

	struct TArray<struct FRigVMUserWorkflow> ProvideWorkflows(struct UObject* InSubject); // Function ControlRig.ControlRigTransformWorkflowOptions.ProvideWorkflows // (Final|Native|Public) // @ game+0x65c349c
};

// Class ControlRig.ControlRigValidationPass
// Size: 0x28 (Inherited: 0x28)
struct UControlRigValidationPass : UObject {
};

// Class ControlRig.ControlRigNumericalValidationPass
// Size: 0xb8 (Inherited: 0x28)
struct UControlRigNumericalValidationPass : UControlRigValidationPass {
	bool bCheckControls; // 0x28(0x01)
	bool bCheckBones; // 0x29(0x01)
	bool bCheckCurves; // 0x2a(0x01)
	char pad_2B[0x1]; // 0x2b(0x01)
	float TranslationPrecision; // 0x2c(0x04)
	float RotationPrecision; // 0x30(0x04)
	float ScalePrecision; // 0x34(0x04)
	float CurvePrecision; // 0x38(0x04)
	struct FName EventNameA; // 0x3c(0x04)
	struct FName EventNameB; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FRigPose Pose; // 0x48(0x70)
};

// Class ControlRig.ControlRigObjectHolder
// Size: 0x38 (Inherited: 0x28)
struct UControlRigObjectHolder : UObject {
	struct TArray<struct UObject*> Objects; // 0x28(0x10)
};

// Class ControlRig.ControlRigPoseAsset
// Size: 0x88 (Inherited: 0x28)
struct UControlRigPoseAsset : UObject {
	struct FControlRigControlPose Pose; // 0x28(0x60)

	void SelectControls(struct UControlRig* InControlRig, bool bDoMirror); // Function ControlRig.ControlRigPoseAsset.SelectControls // (Final|Native|Public|BlueprintCallable) // @ game+0x65c36e0
	void SavePose(struct UControlRig* InControlRig, bool bUseAll); // Function ControlRig.ControlRigPoseAsset.SavePose // (Final|Native|Public|BlueprintCallable) // @ game+0x65c3618
	void ReplaceControlName(struct FName& CurrentName, struct FName& NewName); // Function ControlRig.ControlRigPoseAsset.ReplaceControlName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x65c3540
	void PastePose(struct UControlRig* InControlRig, bool bDoKey, bool bDoMirror); // Function ControlRig.ControlRigPoseAsset.PastePose // (Final|Native|Public|BlueprintCallable) // @ game+0x65c3370
	void GetCurrentPose(struct UControlRig* InControlRig, struct FControlRigControlPose& OutPose); // Function ControlRig.ControlRigPoseAsset.GetCurrentPose // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x65c3148
	struct TArray<struct FName> GetControlNames(); // Function ControlRig.ControlRigPoseAsset.GetControlNames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65c30dc
	bool DoesMirrorMatch(struct UControlRig* ControlRig, struct FName& ControlName); // Function ControlRig.ControlRigPoseAsset.DoesMirrorMatch // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x65c2f98
};

// Class ControlRig.ControlRigPoseMirrorSettings
// Size: 0x50 (Inherited: 0x28)
struct UControlRigPoseMirrorSettings : UObject {
	struct FString RightSide; // 0x28(0x10)
	struct FString LeftSide; // 0x38(0x10)
	enum class EAxis MirrorAxis; // 0x48(0x01)
	enum class EAxis AxisToFlip; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// Class ControlRig.ControlRigPoseProjectSettings
// Size: 0x38 (Inherited: 0x28)
struct UControlRigPoseProjectSettings : UObject {
	struct TArray<struct FDirectoryPath> RootSaveDirs; // 0x28(0x10)
};

// Class ControlRig.ControlRigSequence
// Size: 0x228 (Inherited: 0x1d0)
struct UControlRigSequence : ULevelSequence {
	struct TSoftObjectPtr<UAnimSequence> LastExportedToAnimationSequence; // 0x1d0(0x28)
	struct TSoftObjectPtr<USkeletalMesh> LastExportedUsingSkeletalMesh; // 0x1f8(0x28)
	float LastExportedFrameRate; // 0x220(0x04)
	char pad_224[0x4]; // 0x224(0x04)
};

// Class ControlRig.ControlRigSettings
// Size: 0x30 (Inherited: 0x30)
struct UControlRigSettings : UDeveloperSettings {
};

// Class ControlRig.ControlRigEditorSettings
// Size: 0x30 (Inherited: 0x30)
struct UControlRigEditorSettings : UDeveloperSettings {
};

// Class ControlRig.ControlRigSnapSettings
// Size: 0x30 (Inherited: 0x28)
struct UControlRigSnapSettings : UObject {
	bool bKeepOffset; // 0x28(0x01)
	bool bSnapPosition; // 0x29(0x01)
	bool bSnapRotation; // 0x2a(0x01)
	bool bSnapScale; // 0x2b(0x01)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class ControlRig.TransformableControlHandle
// Size: 0x70 (Inherited: 0x40)
struct UTransformableControlHandle : UTransformableHandle {
	struct TSoftObjectPtr<UControlRig> ControlRig; // 0x40(0x28)
	struct FName ControlName; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class ControlRig.ControlRigValidator
// Size: 0x68 (Inherited: 0x28)
struct UControlRigValidator : UObject {
	struct TArray<struct UControlRigValidationPass*> Passes; // 0x28(0x10)
	char pad_38[0x30]; // 0x38(0x30)
};

// Class ControlRig.FKControlRig
// Size: 0x580 (Inherited: 0x540)
struct UFKControlRig : UControlRig {
	struct TArray<bool> IsControlActive; // 0x540(0x10)
	enum class EControlRigFKRigExecuteMode ApplyMode; // 0x550(0x01)
	char pad_551[0x2f]; // 0x551(0x2f)
};

// Class ControlRig.MovieSceneControlRigParameterSection
// Size: 0x390 (Inherited: 0x158)
struct UMovieSceneControlRigParameterSection : UMovieSceneParameterSection {
	char pad_158[0x40]; // 0x158(0x40)
	struct UControlRig* ControlRig; // 0x198(0x08)
	struct UControlRig* ControlRigClass; // 0x1a0(0x08)
	struct TArray<bool> ControlsMask; // 0x1a8(0x10)
	struct FMovieSceneTransformMask TransformMask; // 0x1b8(0x04)
	char pad_1BC[0x4]; // 0x1bc(0x04)
	struct FMovieSceneFloatChannel Weight; // 0x1c0(0xe8)
	struct TMap<struct FName, struct FChannelMapInfo> ControlChannelMap; // 0x2a8(0x50)
	struct TArray<struct FEnumParameterNameAndCurve> EnumParameterNamesAndCurves; // 0x2f8(0x10)
	struct TArray<struct FIntegerParameterNameAndCurve> IntegerParameterNamesAndCurves; // 0x308(0x10)
	struct TArray<struct FSpaceControlNameAndChannel> SpaceChannels; // 0x318(0x10)
	struct TArray<struct FConstraintAndActiveChannel> ConstraintsChannels; // 0x328(0x10)
	char pad_338[0x58]; // 0x338(0x58)
};

// Class ControlRig.MovieSceneControlRigParameterTrack
// Size: 0x100 (Inherited: 0x98)
struct UMovieSceneControlRigParameterTrack : UMovieSceneNameableTrack {
	char pad_98[0x40]; // 0x98(0x40)
	struct UControlRig* ControlRig; // 0xd8(0x08)
	struct UMovieSceneSection* SectionToKey; // 0xe0(0x08)
	struct TArray<struct UMovieSceneSection*> Sections; // 0xe8(0x10)
	struct FName TrackName; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// Class ControlRig.RigHierarchy
// Size: 0x320 (Inherited: 0x28)
struct URigHierarchy : UObject {
	char pad_28[0x60]; // 0x28(0x60)
	uint16_t TopologyVersion; // 0x88(0x02)
	uint16_t MetadataVersion; // 0x8a(0x02)
	uint16_t MetadataTagVersion; // 0x8c(0x02)
	bool bEnableDirtyPropagation; // 0x8e(0x01)
	char pad_8F[0x71]; // 0x8f(0x71)
	int32_t TransformStackIndex; // 0x100(0x04)
	char pad_104[0x6c]; // 0x104(0x6c)
	struct URigHierarchyController* HierarchyController; // 0x170(0x08)
	char pad_178[0x58]; // 0x178(0x58)
	struct TMap<struct FRigElementKey, struct FRigElementKey> PreviousNameMap; // 0x1d0(0x50)
	char pad_220[0x80]; // 0x220(0x80)
	struct URigHierarchy* HierarchyForCacheValidation; // 0x2a0(0x08)
	char pad_2A8[0x78]; // 0x2a8(0x78)

	void UnsetCurveValueByIndex(int32_t InElementIndex, bool bSetupUndo); // Function ControlRig.RigHierarchy.UnsetCurveValueByIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x65d82f4
	void UnsetCurveValue(struct FRigElementKey InKey, bool bSetupUndo); // Function ControlRig.RigHierarchy.UnsetCurveValue // (Final|Native|Public|BlueprintCallable) // @ game+0x65d81d0
	bool SwitchToWorldSpace(struct FRigElementKey InChild, bool bInitial, bool bAffectChildren); // Function ControlRig.RigHierarchy.SwitchToWorldSpace // (Final|Native|Public|BlueprintCallable) // @ game+0x65d80c0
	bool SwitchToParent(struct FRigElementKey InChild, struct FRigElementKey InParent, bool bInitial, bool bAffectChildren); // Function ControlRig.RigHierarchy.SwitchToParent // (Final|Native|Public|BlueprintCallable) // @ game+0x65d7f68
	bool SwitchToDefaultParent(struct FRigElementKey InChild, bool bInitial, bool bAffectChildren); // Function ControlRig.RigHierarchy.SwitchToDefaultParent // (Final|Native|Public|BlueprintCallable) // @ game+0x65d7e58
	struct TArray<struct FRigElementKey> SortKeys(struct TArray<struct FRigElementKey>& InKeys); // Function ControlRig.RigHierarchy.SortKeys // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x65d7cdc
	bool SetVectorMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FVector InValue); // Function ControlRig.RigHierarchy.SetVectorMetadata // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x65d7b18
	bool SetVectorArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FVector> InValue); // Function ControlRig.RigHierarchy.SetVectorArrayMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x65d7920
	bool SetTransformMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FTransform InValue); // Function ControlRig.RigHierarchy.SetTransformMetadata // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x65d76bc
	bool SetTransformArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FTransform> InValue); // Function ControlRig.RigHierarchy.SetTransformArrayMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x65d74c0
	bool SetTag(struct FRigElementKey InItem, struct FName InTag); // Function ControlRig.RigHierarchy.SetTag // (Final|Native|Public|BlueprintCallable) // @ game+0x65d70e4
	bool SetRotatorMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FRotator InValue); // Function ControlRig.RigHierarchy.SetRotatorMetadata // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x65d6f20
	bool SetRotatorArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FRotator> InValue); // Function ControlRig.RigHierarchy.SetRotatorArrayMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x65d6d2c
	bool SetRigElementKeyMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FRigElementKey InValue); // Function ControlRig.RigHierarchy.SetRigElementKeyMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x65d6b68
	bool SetRigElementKeyArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FRigElementKey> InValue); // Function ControlRig.RigHierarchy.SetRigElementKeyArrayMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x65d6974
	bool SetQuatMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FQuat InValue); // Function ControlRig.RigHierarchy.SetQuatMetadata // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x65d67b0
	bool SetQuatArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FQuat> InValue); // Function ControlRig.RigHierarchy.SetQuatArrayMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x65d65b8
	void SetPose_ForBlueprint(struct FRigPose InPose); // Function ControlRig.RigHierarchy.SetPose_ForBlueprint // (Final|Native|Public|BlueprintCallable) // @ game+0x65d6428
	bool SetParentWeightArray(struct FRigElementKey InChild, struct TArray<struct FRigElementWeight> InWeights, bool bInitial, bool bAffectChildren); // Function ControlRig.RigHierarchy.SetParentWeightArray // (Final|Native|Public|BlueprintCallable) // @ game+0x65d61e8
	bool SetParentWeight(struct FRigElementKey InChild, struct FRigElementKey InParent, struct FRigElementWeight InWeight, bool bInitial, bool bAffectChildren); // Function ControlRig.RigHierarchy.SetParentWeight // (Final|Native|Public|BlueprintCallable) // @ game+0x65d602c
	bool SetNameMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FName InValue); // Function ControlRig.RigHierarchy.SetNameMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x65d5e70
	bool SetNameArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FName> InValue); // Function ControlRig.RigHierarchy.SetNameArrayMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x65d5c44
	void SetLocalTransformByIndex(int32_t InElementIndex, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetLocalTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x65d597c
	void SetLocalTransform(struct FRigElementKey InKey, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetLocalTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x65d5654
	bool SetLinearColorMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FLinearColor InValue); // Function ControlRig.RigHierarchy.SetLinearColorMetadata // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x65d5498
	bool SetLinearColorArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FLinearColor> InValue); // Function ControlRig.RigHierarchy.SetLinearColorArrayMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x65d52a0
	bool SetInt32Metadata(struct FRigElementKey InItem, struct FName InMetadataName, int32_t InValue); // Function ControlRig.RigHierarchy.SetInt32Metadata // (Final|Native|Public|BlueprintCallable) // @ game+0x65d50e4
	bool SetInt32ArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<int32_t> InValue); // Function ControlRig.RigHierarchy.SetInt32ArrayMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x65d4ef0
	void SetGlobalTransformByIndex(int32_t InElementIndex, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchy.SetGlobalTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x65d4c28
	void SetGlobalTransform(struct FRigElementKey InKey, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchy.SetGlobalTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x65d4904
	bool SetFloatMetadata(struct FRigElementKey InItem, struct FName InMetadataName, float InValue); // Function ControlRig.RigHierarchy.SetFloatMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x65d4740
	bool SetFloatArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<float> InValue); // Function ControlRig.RigHierarchy.SetFloatArrayMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x65d454c
	void SetCurveValueByIndex(int32_t InElementIndex, float InValue, bool bSetupUndo); // Function ControlRig.RigHierarchy.SetCurveValueByIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x65d4428
	void SetCurveValue(struct FRigElementKey InKey, float InValue, bool bSetupUndo); // Function ControlRig.RigHierarchy.SetCurveValue // (Final|Native|Public|BlueprintCallable) // @ game+0x65d42c8
	void SetControlVisibilityByIndex(int32_t InElementIndex, bool bVisibility); // Function ControlRig.RigHierarchy.SetControlVisibilityByIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x65d41e4
	void SetControlVisibility(struct FRigElementKey InKey, bool bVisibility); // Function ControlRig.RigHierarchy.SetControlVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x65d40b4
	void SetControlValueByIndex(int32_t InElementIndex, struct FRigControlValue InValue, enum class ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetControlValueByIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x65d3de8
	void SetControlValue(struct FRigElementKey InKey, struct FRigControlValue InValue, enum class ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetControlValue // (Final|Native|Public|BlueprintCallable) // @ game+0x65d3ab8
	void SetControlShapeTransformByIndex(int32_t InElementIndex, struct FTransform InTransform, bool bInitial, bool bSetupUndo); // Function ControlRig.RigHierarchy.SetControlShapeTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x65d38ac
	void SetControlShapeTransform(struct FRigElementKey InKey, struct FTransform InTransform, bool bInitial, bool bSetupUndo); // Function ControlRig.RigHierarchy.SetControlShapeTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x65d3650
	void SetControlSettingsByIndex(int32_t InElementIndex, struct FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetControlSettingsByIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x65d3420
	void SetControlSettings(struct FRigElementKey InKey, struct FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetControlSettings // (Final|Native|Public|BlueprintCallable) // @ game+0x65d317c
	void SetControlPreferredRotatorByIndex(int32_t InElementIndex, struct FRotator& InValue, bool bInitial, bool bFixEulerFlips); // Function ControlRig.RigHierarchy.SetControlPreferredRotatorByIndex // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x65d2ff0
	void SetControlPreferredRotator(struct FRigElementKey InKey, struct FRotator& InValue, bool bInitial, bool bFixEulerFlips); // Function ControlRig.RigHierarchy.SetControlPreferredRotator // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x65d2e1c
	void SetControlOffsetTransformByIndex(int32_t InElementIndex, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetControlOffsetTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x65d2b6c
	void SetControlOffsetTransform(struct FRigElementKey InKey, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetControlOffsetTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x65d2860
	bool SetBoolMetadata(struct FRigElementKey InItem, struct FName InMetadataName, bool InValue); // Function ControlRig.RigHierarchy.SetBoolMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x65d26a0
	bool SetBoolArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<bool> InValue); // Function ControlRig.RigHierarchy.SetBoolArrayMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x65d24a8
	void SendAutoKeyEvent(struct FRigElementKey InElement, float InOffsetInSeconds, bool bAsynchronous); // Function ControlRig.RigHierarchy.SendAutoKeyEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x65d23a4
	void ResetToDefault(); // Function ControlRig.RigHierarchy.ResetToDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x65d2390
	void ResetPoseToInitial(enum class ERigElementType InTypeFilter); // Function ControlRig.RigHierarchy.ResetPoseToInitial // (Final|Native|Public|BlueprintCallable) // @ game+0x65d2310
	void ResetCurveValues(); // Function ControlRig.RigHierarchy.ResetCurveValues // (Final|Native|Public|BlueprintCallable) // @ game+0x65d22b8
	void Reset(); // Function ControlRig.RigHierarchy.Reset // (Final|Native|Public|BlueprintCallable) // @ game+0x65d22a4
	bool RemoveMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.RemoveMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x65d21dc
	bool RemoveAllMetadata(struct FRigElementKey InItem); // Function ControlRig.RigHierarchy.RemoveAllMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x65d20f4
	int32_t Num(); // Function ControlRig.RigHierarchy.Num // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65d20dc
	struct FRigControlValue MakeControlValueFromVector2D(struct FVector2D InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromVector2D // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x65d1d74
	struct FRigControlValue MakeControlValueFromVector(struct FVector InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromVector // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x65d1f24
	struct FRigControlValue MakeControlValueFromTransformNoScale(struct FTransformNoScale InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromTransformNoScale // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x65d1b98
	struct FRigControlValue MakeControlValueFromTransform(struct FTransform InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromTransform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x65d196c
	struct FRigControlValue MakeControlValueFromRotator(struct FRotator InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromRotator // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x65d17b4
	struct FRigControlValue MakeControlValueFromInt(int32_t InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromInt // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x65d163c
	struct FRigControlValue MakeControlValueFromFloat(float InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromFloat // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x65d14bc
	struct FRigControlValue MakeControlValueFromEulerTransform(struct FEulerTransform InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromEulerTransform // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x65d12b0
	struct FRigControlValue MakeControlValueFromBool(bool InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromBool // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x65d111c
	bool IsValidIndex(int32_t InElementIndex); // Function ControlRig.RigHierarchy.IsValidIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65d1088
	bool IsSelectedByIndex(int32_t InIndex); // Function ControlRig.RigHierarchy.IsSelectedByIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65d0fd8
	bool IsSelected(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.IsSelected // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65d0ee8
	bool IsProcedural(struct FRigElementKey& InKey); // Function ControlRig.RigHierarchy.IsProcedural // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x65d0df4
	bool IsParentedTo(struct FRigElementKey InChild, struct FRigElementKey InParent); // Function ControlRig.RigHierarchy.IsParentedTo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65d0bf0
	bool IsCurveValueSetByIndex(int32_t InElementIndex); // Function ControlRig.RigHierarchy.IsCurveValueSetByIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65d0b38
	bool IsCurveValueSet(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.IsCurveValueSet // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65d0a40
	bool IsControllerAvailable(); // Function ControlRig.RigHierarchy.IsControllerAvailable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65d0a28
	bool HasTag(struct FRigElementKey InItem, struct FName InTag); // Function ControlRig.RigHierarchy.HasTag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65d07ac
	struct FVector GetVectorMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FVector DefaultValue); // Function ControlRig.RigHierarchy.GetVectorMetadata // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x65d059c
	struct FVector GetVectorFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetVectorFromControlValue // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x65d0490
	struct TArray<struct FVector> GetVectorArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetVectorArrayMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65d025c
	struct FVector2D GetVector2DFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetVector2DFromControlValue // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x65d013c
	struct FTransformNoScale GetTransformNoScaleFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetTransformNoScaleFromControlValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x65d0018
	struct FTransform GetTransformMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FTransform DefaultValue); // Function ControlRig.RigHierarchy.GetTransformMetadata // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cfd40
	struct FTransform GetTransformFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetTransformFromControlValue // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x65cfbf4
	struct TArray<struct FTransform> GetTransformArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetTransformArrayMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cf9a4
	struct TArray<struct FName> GetTags(struct FRigElementKey InItem); // Function ControlRig.RigHierarchy.GetTags // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cf754
	struct TArray<struct FRigElementKey> GetSelectedKeys(enum class ERigElementType InTypeFilter); // Function ControlRig.RigHierarchy.GetSelectedKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cf688
	struct FRotator GetRotatorMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FRotator DefaultValue); // Function ControlRig.RigHierarchy.GetRotatorMetadata // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cf478
	struct FRotator GetRotatorFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetRotatorFromControlValue // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x65cf35c
	struct TArray<struct FRotator> GetRotatorArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetRotatorArrayMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cf0f4
	struct TArray<struct FRigElementKey> GetRigidBodyKeys(bool bTraverse); // Function ControlRig.RigHierarchy.GetRigidBodyKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65ced7c
	struct FRigElementKey GetRigElementKeyMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FRigElementKey DefaultValue); // Function ControlRig.RigHierarchy.GetRigElementKeyMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65ceb78
	struct TArray<struct FRigElementKey> GetRigElementKeyArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetRigElementKeyArrayMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65ce930
	struct TArray<struct FRigElementKey> GetReferenceKeys(bool bTraverse); // Function ControlRig.RigHierarchy.GetReferenceKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65ce5b8
	struct FQuat GetQuatMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FQuat DefaultValue); // Function ControlRig.RigHierarchy.GetQuatMetadata // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x65ce3ac
	struct TArray<struct FQuat> GetQuatArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetQuatArrayMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65ce178
	struct FRigElementKey GetPreviousParent(struct FRigElementKey& InKey); // Function ControlRig.RigHierarchy.GetPreviousParent // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x65ce0a4
	struct FName GetPreviousName(struct FRigElementKey& InKey); // Function ControlRig.RigHierarchy.GetPreviousName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x65ce010
	struct FRigPose GetPose(bool bInitial); // Function ControlRig.RigHierarchy.GetPose // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cdf38
	struct TArray<struct FRigElementWeight> GetParentWeightArray(struct FRigElementKey InChild, bool bInitial); // Function ControlRig.RigHierarchy.GetParentWeightArray // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cdd68
	struct FRigElementWeight GetParentWeight(struct FRigElementKey InChild, struct FRigElementKey InParent, bool bInitial); // Function ControlRig.RigHierarchy.GetParentWeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cdc50
	struct FTransform GetParentTransformByIndex(int32_t InElementIndex, bool bInitial); // Function ControlRig.RigHierarchy.GetParentTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cdaf0
	struct FTransform GetParentTransform(struct FRigElementKey InKey, bool bInitial); // Function ControlRig.RigHierarchy.GetParentTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cd94c
	struct TArray<struct FRigElementKey> GetParents(struct FRigElementKey InKey, bool bRecursive); // Function ControlRig.RigHierarchy.GetParents // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cde48
	int32_t GetNumberOfParents(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.GetNumberOfParents // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cd860
	struct TArray<struct FRigElementKey> GetNullKeys(bool bTraverse); // Function ControlRig.RigHierarchy.GetNullKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cd4e8
	struct FName GetNameMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FName DefaultValue); // Function ControlRig.RigHierarchy.GetNameMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cd2ec
	struct TArray<struct FName> GetNameArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetNameArrayMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cd084
	enum class ERigMetadataType GetMetadataType(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetMetadataType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x65ccfbc
	struct TArray<struct FName> GetMetadataNames(struct FRigElementKey InItem); // Function ControlRig.RigHierarchy.GetMetadataNames // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x65ccf14
	struct FTransform GetLocalTransformByIndex(int32_t InElementIndex, bool bInitial); // Function ControlRig.RigHierarchy.GetLocalTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x65ccdac
	struct FTransform GetLocalTransform(struct FRigElementKey InKey, bool bInitial); // Function ControlRig.RigHierarchy.GetLocalTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x65ccbfc
	struct FTransform GetLocalControlShapeTransformByIndex(int32_t InElementIndex, bool bInitial); // Function ControlRig.RigHierarchy.GetLocalControlShapeTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x65ccaa8
	struct FTransform GetLocalControlShapeTransform(struct FRigElementKey InKey, bool bInitial); // Function ControlRig.RigHierarchy.GetLocalControlShapeTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cc910
	struct FLinearColor GetLinearColorMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FLinearColor DefaultValue); // Function ControlRig.RigHierarchy.GetLinearColorMetadata // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cc710
	struct TArray<struct FLinearColor> GetLinearColorArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetLinearColorArrayMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cc4dc
	struct TArray<struct FRigElementKey> GetKeys(struct TArray<int32_t> InElementIndices); // Function ControlRig.RigHierarchy.GetKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cc374
	struct FRigElementKey GetKey(int32_t InElementIndex); // Function ControlRig.RigHierarchy.GetKey // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cc2c8
	int32_t GetIntFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetIntFromControlValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x65cc1bc
	int32_t GetInt32Metadata(struct FRigElementKey InItem, struct FName InMetadataName, int32_t DefaultValue); // Function ControlRig.RigHierarchy.GetInt32Metadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cbfc0
	struct TArray<int32_t> GetInt32ArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetInt32ArrayMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cbd88
	int32_t GetIndex_ForBlueprint(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.GetIndex_ForBlueprint // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cbcc4
	struct FTransform GetGlobalTransformByIndex(int32_t InElementIndex, bool bInitial); // Function ControlRig.RigHierarchy.GetGlobalTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cbb5c
	struct FTransform GetGlobalTransform(struct FRigElementKey InKey, bool bInitial); // Function ControlRig.RigHierarchy.GetGlobalTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cb9b0
	struct FTransform GetGlobalControlShapeTransformByIndex(int32_t InElementIndex, bool bInitial); // Function ControlRig.RigHierarchy.GetGlobalControlShapeTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cb85c
	struct FTransform GetGlobalControlShapeTransform(struct FRigElementKey InKey, bool bInitial); // Function ControlRig.RigHierarchy.GetGlobalControlShapeTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cb6c4
	struct FTransform GetGlobalControlOffsetTransformByIndex(int32_t InElementIndex, bool bInitial); // Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cb570
	struct FTransform GetGlobalControlOffsetTransform(struct FRigElementKey InKey, bool bInitial); // Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cb3d8
	float GetFloatMetadata(struct FRigElementKey InItem, struct FName InMetadataName, float DefaultValue); // Function ControlRig.RigHierarchy.GetFloatMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cb1d4
	float GetFloatFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetFloatFromControlValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x65cb0c4
	struct TArray<float> GetFloatArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetFloatArrayMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cae8c
	struct FRigElementKey GetFirstParent(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.GetFirstParent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cae00
	struct FEulerTransform GetEulerTransformFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetEulerTransformFromControlValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x65cacc0
	struct FRigElementKey GetDefaultParent(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.GetDefaultParent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cac34
	float GetCurveValueByIndex(int32_t InElementIndex); // Function ControlRig.RigHierarchy.GetCurveValueByIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65cab84
	float GetCurveValue(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.GetCurveValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65caa94
	struct TArray<struct FRigElementKey> GetCurveKeys(); // Function ControlRig.RigHierarchy.GetCurveKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65ca7c8
	struct FRigControlValue GetControlValueByIndex(int32_t InElementIndex, enum class ERigControlValueType InValueType); // Function ControlRig.RigHierarchy.GetControlValueByIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65ca548
	struct FRigControlValue GetControlValue(struct FRigElementKey InKey, enum class ERigControlValueType InValueType); // Function ControlRig.RigHierarchy.GetControlValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65ca308
	struct FRotator GetControlPreferredRotatorByIndex(int32_t InElementIndex, bool bInitial); // Function ControlRig.RigHierarchy.GetControlPreferredRotatorByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x65ca1e8
	struct FRotator GetControlPreferredRotator(struct FRigElementKey InKey, bool bInitial); // Function ControlRig.RigHierarchy.GetControlPreferredRotator // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x65ca08c
	struct URigHierarchyController* GetController(bool bCreateIfNeeded); // Function ControlRig.RigHierarchy.GetController // (Final|Native|Public|BlueprintCallable) // @ game+0x65ca738
	struct TArray<struct FRigElementKey> GetControlKeys(bool bTraverse); // Function ControlRig.RigHierarchy.GetControlKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65c9d14
	struct TArray<struct FRigElementKey> GetChildren(struct FRigElementKey InKey, bool bRecursive); // Function ControlRig.RigHierarchy.GetChildren // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65c9c24
	bool GetBoolMetadata(struct FRigElementKey InItem, struct FName InMetadataName, bool DefaultValue); // Function ControlRig.RigHierarchy.GetBoolMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65c9a24
	struct TArray<bool> GetBoolArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetBoolArrayMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65c97f0
	struct TArray<struct FRigElementKey> GetBoneKeys(bool bTraverse); // Function ControlRig.RigHierarchy.GetBoneKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65c9478
	struct TArray<struct FRigElementKey> GetAllKeys_ForBlueprint(bool bTraverse); // Function ControlRig.RigHierarchy.GetAllKeys_ForBlueprint // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65c93d0
	struct FRigNullElement FindNull_ForBlueprintOnly(struct FRigElementKey& InKey); // Function ControlRig.RigHierarchy.FindNull_ForBlueprintOnly // (Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x65c92f0
	struct FRigControlElement FindControl_ForBlueprintOnly(struct FRigElementKey& InKey); // Function ControlRig.RigHierarchy.FindControl_ForBlueprintOnly // (Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x65c921c
	struct FRigBoneElement FindBone_ForBlueprintOnly(struct FRigElementKey& InKey); // Function ControlRig.RigHierarchy.FindBone_ForBlueprintOnly // (Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x65c9120
	void CopyPose(struct URigHierarchy* InHierarchy, bool bCurrent, bool bInitial, bool bWeights, bool bMatchPoseInGlobalIfNeeded); // Function ControlRig.RigHierarchy.CopyPose // (Final|Native|Public|BlueprintCallable) // @ game+0x65c8f7c
	void CopyHierarchy(struct URigHierarchy* InHierarchy); // Function ControlRig.RigHierarchy.CopyHierarchy // (Final|Native|Public|BlueprintCallable) // @ game+0x65c8efc
	bool Contains_ForBlueprint(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.Contains_ForBlueprint // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65c8e30
};

// Class ControlRig.RigHierarchyController
// Size: 0xa0 (Inherited: 0x28)
struct URigHierarchyController : UObject {
	bool bReportWarningsAndErrors; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct TWeakObjectPtr<struct URigHierarchy> Hierarchy; // 0x2c(0x08)
	char pad_34[0x6c]; // 0x34(0x6c)

	bool SetSelection(struct TArray<struct FRigElementKey>& InKeys, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.SetSelection // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x65dbe68
	bool SetParent(struct FRigElementKey InChild, struct FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.SetParent // (Final|Native|Public|BlueprintCallable) // @ game+0x65dbce0
	void SetHierarchy(struct URigHierarchy* InHierarchy); // Function ControlRig.RigHierarchyController.SetHierarchy // (Final|Native|Public|BlueprintCallable) // @ game+0x65dbc60
	struct FName SetDisplayName(struct FRigElementKey InControl, struct FName InDisplayName, bool bRenameElement, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.SetDisplayName // (Final|Native|Public|BlueprintCallable) // @ game+0x65dbad0
	bool SetControlSettings(struct FRigElementKey InKey, struct FRigControlSettings InSettings, bool bSetupUndo); // Function ControlRig.RigHierarchyController.SetControlSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65db978
	bool SelectElement(struct FRigElementKey InKey, bool bSelect, bool bClearSelection); // Function ControlRig.RigHierarchyController.SelectElement // (Final|Native|Public|BlueprintCallable) // @ game+0x65db868
	struct FRigElementKey RenameElement(struct FRigElementKey InElement, struct FName InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection); // Function ControlRig.RigHierarchyController.RenameElement // (Final|Native|Public|BlueprintCallable) // @ game+0x65db6e8
	bool RemoveParent(struct FRigElementKey InChild, struct FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.RemoveParent // (Final|Native|Public|BlueprintCallable) // @ game+0x65db560
	bool RemoveElement(struct FRigElementKey InElement, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.RemoveElement // (Final|Native|Public|BlueprintCallable) // @ game+0x65db460
	bool RemoveAllParents(struct FRigElementKey InChild, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.RemoveAllParents // (Final|Native|Public|BlueprintCallable) // @ game+0x65db31c
	struct TArray<struct FRigElementKey> MirrorElements(struct TArray<struct FRigElementKey> InKeys, struct FRigMirrorSettings InSettings, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchyController.MirrorElements // (Final|Native|Public|BlueprintCallable) // @ game+0x65dae84
	struct TArray<struct FRigElementKey> ImportFromText(struct FString InContent, bool bReplaceExistingElements, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchyController.ImportFromText // (Final|Native|Public|BlueprintCallable) // @ game+0x65dabdc
	struct TArray<struct FRigElementKey> ImportCurves(struct USkeleton* InSkeleton, struct FName InNameSpace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.ImportCurves // (Final|Native|Public|BlueprintCallable) // @ game+0x65da4a8
	struct TArray<struct FRigElementKey> ImportBones(struct USkeleton* InSkeleton, struct FName InNameSpace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.ImportBones // (Final|Native|Public|BlueprintCallable) // @ game+0x65da218
	struct URigHierarchy* GetHierarchy(); // Function ControlRig.RigHierarchyController.GetHierarchy // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65da1b0
	struct FRigControlSettings GetControlSettings(struct FRigElementKey InKey); // Function ControlRig.RigHierarchyController.GetControlSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65da0e8
	struct FString ExportToText(struct TArray<struct FRigElementKey> InKeys); // Function ControlRig.RigHierarchyController.ExportToText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65d9f48
	struct FString ExportSelectionToText(); // Function ControlRig.RigHierarchyController.ExportSelectionToText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65d9ed4
	struct TArray<struct FRigElementKey> DuplicateElements(struct TArray<struct FRigElementKey> InKeys, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchyController.DuplicateElements // (Final|Native|Public|BlueprintCallable) // @ game+0x65d9d2c
	bool DeselectElement(struct FRigElementKey InKey); // Function ControlRig.RigHierarchyController.DeselectElement // (Final|Native|Public|BlueprintCallable) // @ game+0x65d9c94
	bool ClearSelection(); // Function ControlRig.RigHierarchyController.ClearSelection // (Final|Native|Public|BlueprintCallable) // @ game+0x65d9c40
	struct FRigElementKey AddRigidBody(struct FName InName, struct FRigElementKey InParent, struct FRigRigidBodySettings InSettings, struct FTransform InLocalTransform, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.AddRigidBody // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x65d99c4
	bool AddParent(struct FRigElementKey InChild, struct FRigElementKey InParent, float InWeight, bool bMaintainGlobalTransform, bool bSetupUndo); // Function ControlRig.RigHierarchyController.AddParent // (Final|Native|Public|BlueprintCallable) // @ game+0x65d9830
	struct FRigElementKey AddNull(struct FName InName, struct FRigElementKey InParent, struct FTransform InTransform, bool bTransformInGlobal, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.AddNull // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x65d95ac
	struct FRigElementKey AddCurve(struct FName InName, float InValue, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.AddCurve // (Final|Native|Public|BlueprintCallable) // @ game+0x65d9470
	struct FRigElementKey AddControl_ForBlueprint(struct FName InName, struct FRigElementKey InParent, struct FRigControlSettings InSettings, struct FRigControlValue InValue, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.AddControl_ForBlueprint // (Final|Native|Public|BlueprintCallable) // @ game+0x65d8ff8
	struct FRigElementKey AddBone(struct FName InName, struct FRigElementKey InParent, struct FTransform InTransform, bool bTransformInGlobal, enum class ERigBoneType InBoneType, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.AddBone // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x65d8d30
	struct FRigElementKey AddAnimationChannel_ForBlueprint(struct FName InName, struct FRigElementKey InParentControl, struct FRigControlSettings InSettings, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.AddAnimationChannel_ForBlueprint // (Final|Native|Public|BlueprintCallable) // @ game+0x65d8b20
};

