// Class Solaris.SolarisArrayLibrary
// Size: 0x28 (Inherited: 0x28)
struct USolarisArrayLibrary : UObject {

	void UnsafeCall(struct TArray<struct FGenericElementType>& Array, int64_t Index); // Function Solaris.SolarisArrayLibrary.UnsafeCall // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fa9a3c
	void RefCall(struct TArray<struct FGenericElementType>& Array, int64_t Index); // Function Solaris.SolarisArrayLibrary.RefCall // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fa98c8
	void Move(struct TArray<struct FGenericElementType>& Target, struct TArray<struct FGenericElementType>& Source); // Function Solaris.SolarisArrayLibrary.Move // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fa974c
	int64_t Length(struct TArray<struct FGenericElementType>& Array); // Function Solaris.SolarisArrayLibrary.Length // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fa968c
	void Empty(struct TArray<struct FGenericElementType>& Array); // Function Solaris.SolarisArrayLibrary.Empty // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fa9600
	struct TArray<struct FGenericElementType> ConcatEquals(struct TArray<struct FGenericElementType>& Lhs, struct TArray<struct FGenericElementType>& Rhs); // Function Solaris.SolarisArrayLibrary.ConcatEquals // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fa94b4
	struct TArray<struct FGenericElementType> Concat(struct TArray<struct FGenericElementType>& Lhs, struct TArray<struct FGenericElementType>& Rhs); // Function Solaris.SolarisArrayLibrary.Concat // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fa93a4
	void Call(struct TArray<struct FGenericElementType>& Array, int64_t Index); // Function Solaris.SolarisArrayLibrary.Call // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fa9090
	int64_t Add(struct TArray<struct FGenericElementType>& Array, struct FGenericElementType& new_item); // Function Solaris.SolarisArrayLibrary.Add // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fa8ee4
};

// Class Solaris.SolarisCoroutineLibrary
// Size: 0x28 (Inherited: 0x28)
struct USolarisCoroutineLibrary : UObject {

	struct UObject* TaskMake(struct UObject* Type, struct UObject* Caller, int64_t CallerResumeState, int64_t CallerCancelState, struct UObject* OwnerInstance); // Function Solaris.SolarisCoroutineLibrary.TaskMake // (Final|Native|Static|Public) // @ game+0x5fa84d8
	int64_t TaskGetState(struct UObject* Task); // Function Solaris.SolarisCoroutineLibrary.TaskGetState // (Final|Native|Static|Public) // @ game+0x5fa8454
	void TaskGetReturnProperty(struct UObject* Task); // Function Solaris.SolarisCoroutineLibrary.TaskGetReturnProperty // (Final|Native|Static|Public) // @ game+0x5fc0470
	void TaskFree(struct UObject* Task); // Function Solaris.SolarisCoroutineLibrary.TaskFree // (Final|Native|Static|Public) // @ game+0x5fa83dc
	void TaskCancel(struct UObject* Task); // Function Solaris.SolarisCoroutineLibrary.TaskCancel // (Final|Native|Static|Public) // @ game+0x5fa836c
};

// Class Solaris.SolarisDebugData
// Size: 0x38 (Inherited: 0x28)
struct USolarisDebugData : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class Solaris.SolarisDigest
// Size: 0x50 (Inherited: 0x28)
struct USolarisDigest : UObject {
	struct TArray<char> DigestCode; // 0x28(0x10)
	struct FString ProjectName; // 0x38(0x10)
	enum class EVerseDigestVariant Variant; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class Solaris.GameFeature_SolarisObserver
// Size: 0x40 (Inherited: 0x28)
struct UGameFeature_SolarisObserver : UObject {
	char pad_28[0x18]; // 0x28(0x18)
};

// Class Solaris.VerseStruct
// Size: 0xd0 (Inherited: 0xc0)
struct UVerseStruct : UScriptStruct {
	struct UFunction* InitFunction; // 0xc0(0x08)
	struct UObject* ModuleClass; // 0xc8(0x08)
};

// Class Solaris.SolarisMapLibrary
// Size: 0x28 (Inherited: 0x28)
struct USolarisMapLibrary : UObject {

	void RefCall(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Map, struct FGenericKeyType Key); // Function Solaris.SolarisMapLibrary.RefCall // (Final|Native|Static|Public|HasOutParms) // @ game+0x4c474e0
	void Move(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Dest, struct TMap<struct FGenericKeyType, struct FGenericValueType>& Src); // Function Solaris.SolarisMapLibrary.Move // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbf2e8
	int64_t Length(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Map); // Function Solaris.SolarisMapLibrary.Length // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbe328
	void InitMap(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Map); // Function Solaris.SolarisMapLibrary.InitMap // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbdcb4
	struct FGenericValueType GetValueByIndex(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Map, int64_t Index); // Function Solaris.SolarisMapLibrary.GetValueByIndex // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbd5b4
	int64_t GetNextValidIndex(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Map, int64_t InitialIndex); // Function Solaris.SolarisMapLibrary.GetNextValidIndex // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbd3d0
	struct FGenericKeyType GetKeyByIndex(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Map, int64_t Index); // Function Solaris.SolarisMapLibrary.GetKeyByIndex // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbd230
	struct TMap<struct FGenericKeyType, struct FGenericValueType> Concat(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Lhs, struct TMap<struct FGenericKeyType, struct FGenericValueType>& Rhs); // Function Solaris.SolarisMapLibrary.Concat // (Final|Native|Static|Public|HasOutParms) // @ game+0x4c46e80
	void Call(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Map, struct FGenericKeyType Key); // Function Solaris.SolarisMapLibrary.Call // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbbd84
	void Add(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Map, struct FGenericKeyType& Key, struct FGenericValueType& Value); // Function Solaris.SolarisMapLibrary.Add // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbb5e0
};

// Class Solaris.SolarisMathLibrary_Bool
// Size: 0x28 (Inherited: 0x28)
struct USolarisMathLibrary_Bool : UObject {

	void Query(); // Function Solaris.SolarisMathLibrary_Bool.Query // (Final|Native|Static|Public) // @ game+0x5fbfc8c
};

// Class Solaris.SolarisMathLibrary_Int
// Size: 0x28 (Inherited: 0x28)
struct USolarisMathLibrary_Int : UObject {

	int32_t UncheckedConvertI32I64(int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.UncheckedConvertI32I64 // (Final|Native|Static|Public) // @ game+0x5fa8658
	void SubtractEquals(int64_t& Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.SubtractEquals // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fc02a4
	void Subtract(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.Subtract // (Final|Native|Static|Public) // @ game+0x5fc00d4
	bool PredicateNotEqual(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.PredicateNotEqual // (Final|Native|Static|Public) // @ game+0x5fa80f8
	bool PredicateLessEqual(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.PredicateLessEqual // (Final|Native|Static|Public) // @ game+0x5fa8038
	bool PredicateLess(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.PredicateLess // (Final|Native|Static|Public) // @ game+0x5fa7f78
	bool PredicateGreaterEqual(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.PredicateGreaterEqual // (Final|Native|Static|Public) // @ game+0x5fa7eb8
	bool PredicateGreater(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.PredicateGreater // (Final|Native|Static|Public) // @ game+0x5fa7df8
	bool PredicateEqual(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.PredicateEqual // (Final|Native|Static|Public) // @ game+0x5fa7d38
	void Negate(int64_t Value); // Function Solaris.SolarisMathLibrary_Int.Negate // (Final|Native|Static|Public) // @ game+0x5fbf864
	void MultiplyEquals(int64_t& Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.MultiplyEquals // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbf698
	void Multiply(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.Multiply // (Final|Native|Static|Public) // @ game+0x5fbf4c8
	void LessEqual(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.LessEqual // (Final|Native|Static|Public) // @ game+0x5fbe778
	void Less(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.Less // (Final|Native|Static|Public) // @ game+0x5fbe574
	void GreaterEqual(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.GreaterEqual // (Final|Native|Static|Public) // @ game+0x5fbda80
	void Greater(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.Greater // (Final|Native|Static|Public) // @ game+0x5fbd87c
	void Divide(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.Divide // (Final|Native|Static|Public) // @ game+0x5fbca64
	void AddEquals(int64_t& Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.AddEquals // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbbbb8
	void Add(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.Add // (Final|Native|Static|Public) // @ game+0x5fbb918
	void Abs(int64_t Value); // Function Solaris.SolarisMathLibrary_Int.Abs // (Final|Native|Static|Public) // @ game+0x5fbb460
};

// Class Solaris.SolarisMathLibrary_Rational
// Size: 0x28 (Inherited: 0x28)
struct USolarisMathLibrary_Rational : UObject {

	void Floor(struct FVerseRational Val); // Function Solaris.SolarisMathLibrary_Rational.Floor // (Final|Native|Static|Public) // @ game+0x5fbce24
	void Ceil(struct FVerseRational Val); // Function Solaris.SolarisMathLibrary_Rational.Ceil // (Final|Native|Static|Public) // @ game+0x5fbc44c
};

// Class Solaris.SolarisMathLibrary_Float
// Size: 0x28 (Inherited: 0x28)
struct USolarisMathLibrary_Float : UObject {

	double SubtractEquals(double& Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.SubtractEquals // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fa828c
	double Subtract(double Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.Subtract // (Final|Native|Static|Public) // @ game+0x5fa81b8
	double Negate(double Value); // Function Solaris.SolarisMathLibrary_Float.Negate // (Final|Native|Static|Public) // @ game+0x5fa7cb0
	double MultiplyIntFloat(int64_t Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.MultiplyIntFloat // (Final|Native|Static|Public) // @ game+0x5fa7be4
	double MultiplyFloatInt(double Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Float.MultiplyFloatInt // (Final|Native|Static|Public) // @ game+0x5fa7b18
	double MultiplyEquals(double& Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.MultiplyEquals // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fa7a38
	double Multiply(double Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.Multiply // (Final|Native|Static|Public) // @ game+0x5fa7964
	void LessEqual(double Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.LessEqual // (Final|Native|Static|Public) // @ game+0x5fbe664
	void Less(double Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.Less // (Final|Native|Static|Public) // @ game+0x5fbe460
	void GreaterEqual(double Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.GreaterEqual // (Final|Native|Static|Public) // @ game+0x5fbd96c
	void Greater(double Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.Greater // (Final|Native|Static|Public) // @ game+0x5fbd768
	double DivideEquals(double& Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.DivideEquals // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fa77c8
	double Divide(double Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.Divide // (Final|Native|Static|Public) // @ game+0x5fa76f4
	double AddEquals(double& Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.AddEquals // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fa7614
	double Add(double Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.Add // (Final|Native|Static|Public) // @ game+0x5fa7540
	double Abs(double Value); // Function Solaris.SolarisMathLibrary_Float.Abs // (Final|Native|Static|Public) // @ game+0x5fa74b8
};

// Class Solaris.SolarisMathLibrary_String
// Size: 0x28 (Inherited: 0x28)
struct USolarisMathLibrary_String : UObject {

	void UncheckedCall(int32_t& String, int64_t Index); // Function Solaris.SolarisMathLibrary_String.UncheckedCall // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fc0704
	void RefCall(int32_t& String, int64_t Index); // Function Solaris.SolarisMathLibrary_String.RefCall // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbfdac
	void Move(int32_t& Destination, int32_t& Source); // Function Solaris.SolarisMathLibrary_String.Move // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbf414
	int32_t MakeLiteral(); // Function Solaris.SolarisMathLibrary_String.MakeLiteral // (Final|Native|Static|Public) // @ game+0x5fbeab0
	void Make(); // Function Solaris.SolarisMathLibrary_String.Make // (Final|Native|Static|Public) // @ game+0x5fbe92c
	int64_t Length(int32_t& Array); // Function Solaris.SolarisMathLibrary_String.Length // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbe3e4
	int32_t ConcatEquals(int32_t& Lhs, int32_t& Rhs); // Function Solaris.SolarisMathLibrary_String.ConcatEquals // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbc6d8
	int32_t Concat(int32_t& Lhs, int32_t& Rhs); // Function Solaris.SolarisMathLibrary_String.Concat // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbc5fc
	void Call(int32_t& String, int64_t Index); // Function Solaris.SolarisMathLibrary_String.Call // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbc080
	void Add(int32_t& String, int8_t Character); // Function Solaris.SolarisMathLibrary_String.Add // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fbbae8
};

// Class Solaris.SolarisMathLibrary_Option
// Size: 0x28 (Inherited: 0x28)
struct USolarisMathLibrary_Option : UObject {

	void Query(); // Function Solaris.SolarisMathLibrary_Option.Query // (Final|Native|Static|Public) // @ game+0x5fbfd40
	void Make(); // Function Solaris.SolarisMathLibrary_Option.Make // (Final|Native|Static|Public) // @ game+0x5fbe868
};

// Class Solaris.SolarisGameSettings
// Size: 0x40 (Inherited: 0x28)
struct USolarisGameSettings : UObject {
	struct TArray<struct FString> Blacklist; // 0x28(0x10)
	int32_t MaxAllowedSize; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Solaris.SolarisUtilLibrary
// Size: 0x28 (Inherited: 0x28)
struct USolarisUtilLibrary : UObject {

	bool ReferenceIsValid(int64_t reference); // Function Solaris.SolarisUtilLibrary.ReferenceIsValid // (Final|Native|Static|Public) // @ game+0x5fbfecc
	int64_t MakeUnsetOption(); // Function Solaris.SolarisUtilLibrary.MakeUnsetOption // (Final|Native|Static|Public) // @ game+0x5fbf23c
	bool MakeOptionFromValue(struct UObject* Property, int64_t Value); // Function Solaris.SolarisUtilLibrary.MakeOptionFromValue // (Final|Native|Static|Public) // @ game+0x5fbeb88
	bool IsOptionSet(int64_t Option); // Function Solaris.SolarisUtilLibrary.IsOptionSet // (Final|Native|Static|Public) // @ game+0x5fbe258
	bool IsNonNullObject(struct UObject* Object); // Function Solaris.SolarisUtilLibrary.IsNonNullObject // (Final|Native|Static|Public) // @ game+0x5fbe1e4
	struct UObject* InstantiateObject(struct UObject* Type); // Function Solaris.SolarisUtilLibrary.InstantiateObject // (Final|Native|Static|Public) // @ game+0x5fbdfdc
	bool HasInterface(struct UObject* Object, struct UObject* InterfaceClass); // Function Solaris.SolarisUtilLibrary.HasInterface // (Final|Native|Static|Public) // @ game+0x5fbdb70
	int64_t GetOptionValue(int64_t Option); // Function Solaris.SolarisUtilLibrary.GetOptionValue // (Final|Native|Static|Public) // @ game+0x5fbd4f8
	void GetDelegateForInterfaceMethod(struct UObject* Object, struct FName MethodName); // Function Solaris.SolarisUtilLibrary.GetDelegateForInterfaceMethod // (Final|Native|Static|Public) // @ game+0x5fbcfd4
	struct UObject* GetCurrentlyInstantiatedObject(); // Function Solaris.SolarisUtilLibrary.GetCurrentlyInstantiatedObject // (Final|Native|Static|Public) // @ game+0x5fa78ac
	int64_t Dereference(int64_t reference); // Function Solaris.SolarisUtilLibrary.Dereference // (Final|Native|Static|Public) // @ game+0x5fbc9bc
	void CallDelegate(); // Function Solaris.SolarisUtilLibrary.CallDelegate // (Final|Native|Static|Public) // @ game+0x5fbc33c
};

// Class Solaris.VerseClass
// Size: 0x2f0 (Inherited: 0x230)
struct UVerseClass : UVerseClassBase {
	uint32_t SolClassFlags; // 0x230(0x04)
	char pad_234[0x4]; // 0x234(0x04)
	struct TArray<struct UObject*> TaskClasses; // 0x238(0x10)
	struct TSet<struct UObject*> InterfaceClasses; // 0x248(0x50)
	struct TMap<struct FName, struct TFieldPath<FProperty>> InterfaceMethodDelegateProperties; // 0x298(0x50)
	struct UFunction* InitInstanceFunction; // 0x2e8(0x08)
};

// Class Solaris.VerseDynamicallyTypedValueLibrary
// Size: 0x28 (Inherited: 0x28)
struct UVerseDynamicallyTypedValueLibrary : UObject {

	void NotEqual(int32_t Left, int32_t Right); // Function Solaris.VerseDynamicallyTypedValueLibrary.NotEqual // (Final|Native|Static|Public) // @ game+0x5fbf9e4
	void MakeRuntimeTypeTuple(struct TArray<int32_t> ValueType); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeTuple // (Final|Native|Static|Public) // @ game+0x5fbf09c
	void MakeRuntimeTypeString(); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeString // (Final|Native|Static|Public) // @ game+0x5fbf078
	void MakeRuntimeTypeOption(int32_t ValueType); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeOption // (Final|Native|Static|Public) // @ game+0x5fbeff8
	void MakeRuntimeTypeObject(); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeObject // (Final|Native|Static|Public) // @ game+0x5fbefd4
	void MakeRuntimeTypeMap(int32_t KeyType, int32_t ValueType); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeMap // (Final|Native|Static|Public) // @ game+0x5fbef10
	void MakeRuntimeTypeLogic(); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeLogic // (Final|Native|Static|Public) // @ game+0x5fbeeec
	void MakeRuntimeTypeInt64(); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeInt64 // (Final|Native|Static|Public) // @ game+0x5fbeec8
	void MakeRuntimeTypeFunction(); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeFunction // (Final|Native|Static|Public) // @ game+0x5fbeea4
	void MakeRuntimeTypeFloat(); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeFloat // (Final|Native|Static|Public) // @ game+0x5fbee80
	void MakeRuntimeTypeEnum(struct FName Name); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeEnum // (Final|Native|Static|Public) // @ game+0x5fbee00
	void MakeRuntimeTypeDynamic(); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeDynamic // (Final|Native|Static|Public) // @ game+0x5fbeddc
	void MakeRuntimeTypeClass(); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeClass // (Final|Native|Static|Public) // @ game+0x5fbedb8
	void MakeRuntimeTypeChar8(); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeChar8 // (Final|Native|Static|Public) // @ game+0x5fbed94
	void MakeRuntimeTypeChar32(); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeChar32 // (Final|Native|Static|Public) // @ game+0x5fbed70
	void MakeRuntimeTypeArray(int32_t ElementType); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeArray // (Final|Native|Static|Public) // @ game+0x5fbecf0
	void Equal(int32_t Left, int32_t Right); // Function Solaris.VerseDynamicallyTypedValueLibrary.Equal // (Final|Native|Static|Public) // @ game+0x5fbcb7c
	void ConvertToDynamicallyTypedValue(int32_t RuntimeType, int32_t Value); // Function Solaris.VerseDynamicallyTypedValueLibrary.ConvertToDynamicallyTypedValue // (Final|Native|Static|Public) // @ game+0x5fbc8fc
	void ConvertFromDynamicallyTypedValue(int32_t RuntimeType, int32_t Value); // Function Solaris.VerseDynamicallyTypedValueLibrary.ConvertFromDynamicallyTypedValue // (Final|Native|Static|Public) // @ game+0x5fbc7f4
};

// Class Solaris.VerseStmLibrary
// Size: 0x28 (Inherited: 0x28)
struct UVerseStmLibrary : UObject {

	void StmSave(struct FakeType& Property); // Function Solaris.VerseStmLibrary.StmSave // (Final|Native|Static|Public|HasOutParms) // @ game+0x5fc0060
	void StmRollback(); // Function Solaris.VerseStmLibrary.StmRollback // (Final|Native|Static|Public) // @ game+0x5fbfffc
	void StmCommit(); // Function Solaris.VerseStmLibrary.StmCommit // (Final|Native|Static|Public) // @ game+0x5fbff48
	void StmBegin(); // Function Solaris.VerseStmLibrary.StmBegin // (Final|Native|Static|Public) // @ game+0x5fbff34
};

