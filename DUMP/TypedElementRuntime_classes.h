// Class TypedElementRuntime.TypedElementAssetDataInterface
// Size: 0x28 (Inherited: 0x28)
struct UTypedElementAssetDataInterface : UInterface {

	struct FAssetData GetAssetData(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementRuntime.TypedElementAssetDataInterface.GetAssetData // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x91939b4
	struct TArray<struct FAssetData> GetAllReferencedAssetDatas(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementRuntime.TypedElementAssetDataInterface.GetAllReferencedAssetDatas // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x91938e8
};

// Class TypedElementRuntime.TypedElementHierarchyInterface
// Size: 0x28 (Inherited: 0x28)
struct UTypedElementHierarchyInterface : UInterface {

	struct FScriptTypedElementHandle GetParentElement(struct FScriptTypedElementHandle& InElementHandle, bool bAllowCreate); // Function TypedElementRuntime.TypedElementHierarchyInterface.GetParentElement // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x919414c
	void GetChildElements(struct FScriptTypedElementHandle& InElementHandle, struct TArray<struct FScriptTypedElementHandle>& OutElementHandles, bool bAllowCreate); // Function TypedElementRuntime.TypedElementHierarchyInterface.GetChildElements // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9193b78
};

// Class TypedElementRuntime.TypedElementObjectInterface
// Size: 0x28 (Inherited: 0x28)
struct UTypedElementObjectInterface : UInterface {

	struct UObject* GetObjectClass(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementRuntime.TypedElementObjectInterface.GetObjectClass // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9194098
	struct UObject* GetObject(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementRuntime.TypedElementObjectInterface.GetObject // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9193fe4
};

// Class TypedElementRuntime.TypedElementSelectionInterface
// Size: 0x28 (Inherited: 0x28)
struct UTypedElementSelectionInterface : UInterface {

	bool SelectElement(struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy InSelectionSet, struct FTypedElementSelectionOptions& InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionInterface.SelectElement // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9194d64
	bool IsElementSelected(struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy InSelectionSet, struct FTypedElementIsSelectedOptions& InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionInterface.IsElementSelected // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9194964
	struct FScriptTypedElementHandle GetSelectionElement(struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy InCurrentSelection, enum class ETypedElementSelectionMethod InSelectionMethod); // Function TypedElementRuntime.TypedElementSelectionInterface.GetSelectionElement // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9194358
	bool DeselectElement(struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy InSelectionSet, struct FTypedElementSelectionOptions& InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionInterface.DeselectElement // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9193388
	bool CanSelectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions& InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionInterface.CanSelectElement // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9192f38
	bool CanDeselectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions& InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionInterface.CanDeselectElement // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9192d04
	bool AllowSelectionModifiers(struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy InSelectionSet); // Function TypedElementRuntime.TypedElementSelectionInterface.AllowSelectionModifiers // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9192ac8
};

// Class TypedElementRuntime.TypedElementSelectionSet
// Size: 0x898 (Inherited: 0x28)
struct UTypedElementSelectionSet : UObject {
	char pad_28[0x800]; // 0x28(0x800)
	struct FMulticastInlineDelegate OnPreSelectionChange; // 0x828(0x10)
	struct FMulticastInlineDelegate OnSelectionChange; // 0x838(0x10)
	char pad_848[0x50]; // 0x848(0x50)

	bool SetSelection(struct TArray<struct FScriptTypedElementHandle>& InElementHandles, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.SetSelection // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x91952c4
	bool SelectElements(struct TArray<struct FScriptTypedElementHandle>& InElementHandles, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.SelectElements // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x919503c
	bool SelectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.SelectElement // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9194f10
	void RestoreSelectionState(struct FTypedElementSelectionSetState& InSelectionState); // Function TypedElementRuntime.TypedElementSelectionSet.RestoreSelectionState // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9194cc8
	void OnPreChangeDynamic__DelegateSignature(struct UTypedElementSelectionSet* SelectionSet); // DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnPreChangeDynamic__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xda071c
	void OnChangeDynamic__DelegateSignature(struct UTypedElementSelectionSet* SelectionSet); // DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnChangeDynamic__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xda071c
	struct TArray<struct FScriptTypedElementHandle> K2_GetSelectedElementHandles(struct UInterface* InBaseInterfaceType); // Function TypedElementRuntime.TypedElementSelectionSet.K2_GetSelectedElementHandles // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x9194c20
	bool IsElementSelected(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementIsSelectedOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.IsElementSelected // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x9194b08
	bool HasSelectedObjects(struct UObject* InRequiredClass); // Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedObjects // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x919486c
	bool HasSelectedElements(struct UInterface* InBaseInterfaceType); // Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedElements // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x91946f4
	struct UObject* GetTopSelectedObject(struct UObject* InRequiredClass); // Function TypedElementRuntime.TypedElementSelectionSet.GetTopSelectedObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91945fc
	struct FScriptTypedElementHandle GetSelectionElement(struct FScriptTypedElementHandle& InElementHandle, enum class ETypedElementSelectionMethod InSelectionMethod); // Function TypedElementRuntime.TypedElementSelectionSet.GetSelectionElement // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x91944fc
	struct TArray<struct UObject*> GetSelectedObjects(struct UObject* InRequiredClass); // Function TypedElementRuntime.TypedElementSelectionSet.GetSelectedObjects // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x9194250
	int32_t GetNumSelectedElements(); // Function TypedElementRuntime.TypedElementSelectionSet.GetNumSelectedElements // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9193fc8
	struct FTypedElementSelectionSetState GetCurrentSelectionState(); // Function TypedElementRuntime.TypedElementSelectionSet.GetCurrentSelectionState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9193cc8
	struct UObject* GetBottomSelectedObject(struct UObject* InRequiredClass); // Function TypedElementRuntime.TypedElementSelectionSet.GetBottomSelectedObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9193a80
	bool DeselectElements(struct TArray<struct FScriptTypedElementHandle>& InElementHandles, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.DeselectElements // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9193660
	bool DeselectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.DeselectElement // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9193534
	int32_t CountSelectedObjects(struct UObject* InRequiredClass); // Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedObjects // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x9193294
	int32_t CountSelectedElements(struct UInterface* InBaseInterfaceType); // Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedElements // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x9193208
	bool ClearSelection(struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.ClearSelection // (Final|Native|Public|BlueprintCallable) // @ game+0x919316c
	bool CanSelectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.CanSelectElement // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x9193040
	bool CanDeselectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.CanDeselectElement // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x9192e0c
	bool AllowSelectionModifiers(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementRuntime.TypedElementSelectionSet.AllowSelectionModifiers // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x9192c24
};

// Class TypedElementRuntime.TypedElementSelectionSetLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTypedElementSelectionSetLibrary : UObject {

	bool SetSelectionFromList(struct UTypedElementSelectionSet* SelectionSet, struct FScriptTypedElementListProxy ElementList, struct FTypedElementSelectionOptions SelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSetLibrary.SetSelectionFromList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x91953f0
	bool SelectElementsFromList(struct UTypedElementSelectionSet* SelectionSet, struct FScriptTypedElementListProxy ElementList, struct FTypedElementSelectionOptions SelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSetLibrary.SelectElementsFromList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9195168
	struct FScriptTypedElementListProxy GetNormalizedSelection(struct UTypedElementSelectionSet* SelectionSet, struct FTypedElementSelectionNormalizationOptions NormalizationOptions); // Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedSelection // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9193eec
	struct FScriptTypedElementListProxy GetNormalizedElementList(struct UTypedElementSelectionSet* SelectionSet, struct FScriptTypedElementListProxy ElementList, struct FTypedElementSelectionNormalizationOptions NormalizationOptions); // Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedElementList // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9193d7c
	bool DeselectElementsFromList(struct UTypedElementSelectionSet* SelectionSet, struct FScriptTypedElementListProxy ElementList, struct FTypedElementSelectionOptions SelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSetLibrary.DeselectElementsFromList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x919378c
};

