// Class RigVM.RigVMUserWorkflowOptions
// Size: 0x98 (Inherited: 0x28)
struct URigVMUserWorkflowOptions : UObject {
	struct UObject* Subject; // 0x28(0x08)
	struct FRigVMUserWorkflow Workflow; // 0x30(0x58)
	char pad_88[0x10]; // 0x88(0x10)

	bool RequiresDialog(); // Function RigVM.RigVMUserWorkflowOptions.RequiresDialog // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa0359dc
	void ReportWarning(struct FString InMessage); // Function RigVM.RigVMUserWorkflowOptions.ReportWarning // (Final|Native|Public|BlueprintCallable) // @ game+0xa035884
	void ReportInfo(struct FString InMessage); // Function RigVM.RigVMUserWorkflowOptions.ReportInfo // (Final|Native|Public|BlueprintCallable) // @ game+0xa03572c
	void ReportError(struct FString InMessage); // Function RigVM.RigVMUserWorkflowOptions.ReportError // (Final|Native|Public|BlueprintCallable) // @ game+0xa0355d4
	bool IsValid(); // Function RigVM.RigVMUserWorkflowOptions.IsValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa0355b8
};

// Class RigVM.RigVM
// Size: 0x2a0 (Inherited: 0x28)
struct URigVM : UObject {
	struct URigVMMemoryStorage* WorkMemoryStorageObject; // 0x28(0x08)
	struct URigVMMemoryStorage* LiteralMemoryStorageObject; // 0x30(0x08)
	struct URigVMMemoryStorage* DebugMemoryStorageObject; // 0x38(0x08)
	char pad_40[0x20]; // 0x40(0x20)
	struct FRigVMByteCode ByteCodeStorage; // 0x60(0x30)
	char pad_90[0x8]; // 0x90(0x08)
	struct FRigVMInstructionArray Instructions; // 0x98(0x10)
	struct FRigVMExtendedExecuteContext Context; // 0xa8(0x70)
	uint32_t NumExecutions; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct TArray<struct FName> FunctionNamesStorage; // 0x120(0x10)
	char pad_130[0x38]; // 0x130(0x38)
	struct TArray<struct FRigVMParameter> Parameters; // 0x168(0x10)
	struct TMap<struct FName, int32_t> ParametersNameMap; // 0x178(0x50)
	char pad_1C8[0xb8]; // 0x1c8(0xb8)
	struct URigVM* DeferredVMToCopy; // 0x280(0x08)
	char pad_288[0x18]; // 0x288(0x18)

	void SetParameterValueVector2D(struct FName& InParameterName, struct FVector2D& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueVector2D // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xa02dcf4
	void SetParameterValueVector(struct FName& InParameterName, struct FVector& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueVector // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xa02de48
	void SetParameterValueTransform(struct FName& InParameterName, struct FTransform& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xa02db34
	void SetParameterValueString(struct FName& InParameterName, struct FString InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueString // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xa02d920
	void SetParameterValueQuat(struct FName& InParameterName, struct FQuat& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueQuat // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xa02d7cc
	void SetParameterValueName(struct FName& InParameterName, struct FName& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xa02d678
	void SetParameterValueInt(struct FName& InParameterName, int32_t InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueInt // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xa02d538
	void SetParameterValueFloat(struct FName& InParameterName, float InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueFloat // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xa02d420
	void SetParameterValueDouble(struct FName& InParameterName, double InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueDouble // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xa02d308
	void SetParameterValueBool(struct FName& InParameterName, bool InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueBool // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xa02d1b8
	struct FRigVMStatistics GetStatistics(); // Function RigVM.RigVM.GetStatistics // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa02d170
	struct FString GetRigVMFunctionName(int32_t InFunctionIndex); // Function RigVM.RigVM.GetRigVMFunctionName // (Native|Public|Const) // @ game+0xa02d0c8
	struct FVector2D GetParameterValueVector2D(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueVector2D // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xa02cec4
	struct FVector GetParameterValueVector(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueVector // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xa02cfbc
	struct FTransform GetParameterValueTransform(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xa02cd60
	struct FString GetParameterValueString(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueString // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xa02cc50
	struct FQuat GetParameterValueQuat(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueQuat // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xa02cb48
	struct FName GetParameterValueName(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xa02ca30
	int32_t GetParameterValueInt(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueInt // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xa02c924
	float GetParameterValueFloat(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueFloat // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xa02c844
	double GetParameterValueDouble(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueDouble // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xa02c764
	bool GetParameterValueBool(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueBool // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xa02c658
	bool Execute(struct FName& InEntryName); // Function RigVM.RigVM.Execute // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xa02c5b8
	int32_t AddRigVMFunction(struct UScriptStruct* InRigVMStruct, struct FName& InMethodName); // Function RigVM.RigVM.AddRigVMFunction // (Native|Public|HasOutParms) // @ game+0xa02c4e4
};

// Class RigVM.RigVMMemoryStorageGeneratorClass
// Size: 0x270 (Inherited: 0x230)
struct URigVMMemoryStorageGeneratorClass : UClass {
	char pad_230[0x40]; // 0x230(0x40)
};

// Class RigVM.RigVMMemoryStorage
// Size: 0x28 (Inherited: 0x28)
struct URigVMMemoryStorage : UObject {
};

// Class RigVM.RigVMNativized
// Size: 0x2a8 (Inherited: 0x2a0)
struct URigVMNativized : URigVM {
	char pad_2A0[0x8]; // 0x2a0(0x08)
};

