#ifndef UE4SS_SDK_BowAnimBlueprint_HPP
#define UE4SS_SDK_BowAnimBlueprint_HPP

class UBowAnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose;                             // 0x02C8 (size: 0x10)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x02D8 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x02F8 (size: 0x108)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0400 (size: 0x30)
    float StringLocation;                                                             // 0x0430 (size: 0x4)
    bool Active;                                                                      // 0x0434 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_BowAnimBlueprint_AnimGraphNode_ModifyBone_462680774593EE224395FF871E3C4DC8();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_BowAnimBlueprint(int32 EntryPoint);
}; // Size: 0x435

#endif
