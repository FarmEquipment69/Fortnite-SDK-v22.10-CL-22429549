// AnimBlueprintGeneratedClass F_MED_CAU_Emmy_Head_Dyn_AnimBP.F_MED_CAU_Emmy_Head_Dyn_AnimBP_C
// Size: 0x31d8 (Inherited: 0x6f0)
struct UF_MED_CAU_Emmy_Head_Dyn_AnimBP_C : UCustomCharacterPartAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6f0(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x6f8(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x700(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x708(0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x728(0xc0)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x7e8(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x808(0x20)
	char pad_828[0x8]; // 0x828(0x08)
	struct FAnimNode_AnimDynamics ; // 0x830(0x510)
	struct FAnimNode_AnimDynamics ; // 0xd40(0x510)
	struct FAnimNode_AnimDynamics ; // 0x1250(0x510)
	struct FAnimNode_AnimDynamics ; // 0x1760(0x510)
	struct FAnimNode_AnimDynamics ; // 0x1c70(0x510)
	struct FAnimNode_AnimDynamics ; // 0x2180(0x510)
	struct FAnimNode_AnimDynamics ; // 0x2690(0x510)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x2ba0(0x510)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x30b0(0x128)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function F_MED_CAU_Emmy_Head_Dyn_AnimBP.F_MED_CAU_Emmy_Head_Dyn_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda071c
	void ExecuteUbergraph_F_MED_CAU_Emmy_Head_Dyn_AnimBP(int32_t EntryPoint); // Function F_MED_CAU_Emmy_Head_Dyn_AnimBP.F_MED_CAU_Emmy_Head_Dyn_AnimBP_C.ExecuteUbergraph_F_MED_CAU_Emmy_Head_Dyn_AnimBP // (Final|UbergraphFunction) // @ game+0xda071c
};

