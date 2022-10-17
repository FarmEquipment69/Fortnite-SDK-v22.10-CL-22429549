// Class StructUtils.PropertyBagMissingObject
// Size: 0x28 (Inherited: 0x28)
struct UPropertyBagMissingObject : UObject {
};

// Class StructUtils.PropertyBag
// Size: 0xd8 (Inherited: 0xc0)
struct UPropertyBag : UScriptStruct {
	struct TArray<struct FPropertyBagPropertyDesc> PropertyDescs; // 0xc0(0x10)
	char pad_D0[0x8]; // 0xd0(0x08)
};

// Class StructUtils.StructUtilsFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UStructUtilsFunctionLibrary : UBlueprintFunctionLibrary {

	void SetInstancedStructValue(struct FInstancedStruct& InstancedStruct, int32_t& Value); // Function StructUtils.StructUtilsFunctionLibrary.SetInstancedStructValue // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4c50e30
	void Reset(struct FInstancedStruct& InstancedStruct, struct UScriptStruct* StructType); // Function StructUtils.StructUtilsFunctionLibrary.Reset // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4c50ce0
	bool NotEqual_InstancedStruct(struct FInstancedStruct& A, struct FInstancedStruct& B); // Function StructUtils.StructUtilsFunctionLibrary.NotEqual_InstancedStruct // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4c50bc0
	struct FInstancedStruct MakeInstancedStruct(int32_t& Value); // Function StructUtils.StructUtilsFunctionLibrary.MakeInstancedStruct // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4c50a80
	bool IsValid_InstancedStruct(struct FInstancedStruct& InstancedStruct); // Function StructUtils.StructUtilsFunctionLibrary.IsValid_InstancedStruct // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4c509d0
	enum class EStructUtilsResult IsInstancedStructValid(struct FInstancedStruct& InstancedStruct); // Function StructUtils.StructUtilsFunctionLibrary.IsInstancedStructValid // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4c50920
	void GetInstancedStructValue(enum class EStructUtilsResult& ExecResult, struct FInstancedStruct& InstancedStruct, int32_t& Value); // Function StructUtils.StructUtilsFunctionLibrary.GetInstancedStructValue // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4c50700
	bool EqualEqual_InstancedStruct(struct FInstancedStruct& A, struct FInstancedStruct& B); // Function StructUtils.StructUtilsFunctionLibrary.EqualEqual_InstancedStruct // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4c505e0
};

