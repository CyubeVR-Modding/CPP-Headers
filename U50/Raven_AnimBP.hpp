#ifndef UE4SS_SDK_Raven_AnimBP_HPP
#define UE4SS_SDK_Raven_AnimBP_HPP

class URaven_AnimBP_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x02F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0320 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0348 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x03C8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x03F8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0478 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x04A8 (size: 0xB0)
    float Roll;                                                                       // 0x0558 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Raven_AnimBP_AnimGraphNode_TransitionResult_26A0641C44D29B43D587F4AAB1F7D69E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Raven_AnimBP_AnimGraphNode_TransitionResult_A6486FED40AF7063CADD0AB581E54AF1();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_Raven_AnimBP(int32 EntryPoint);
}; // Size: 0x55C

#endif
