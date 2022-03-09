#ifndef UE4SS_SDK_MonitorLizardTongueAnimBP_HPP
#define UE4SS_SDK_MonitorLizardTongueAnimBP_HPP

class UMonitorLizardTongueAnimBP_C : public UAnimInstance
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
    int32 Random50;                                                                   // 0x0558 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_MonitorLizardTongueAnimBP_AnimGraphNode_TransitionResult_E90CECD74771B26C8357B0BA27859EBB();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_MonitorLizardTongueAnimBP_AnimGraphNode_TransitionResult_9DC8084F46D527E4C7689EBBE34778CD();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_MonitorLizardTongueAnimBP(int32 EntryPoint);
}; // Size: 0x55C

#endif
