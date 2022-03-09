#ifndef UE4SS_SDK_MonitorLizardAnimBP_HPP
#define UE4SS_SDK_MonitorLizardAnimBP_HPP

class UMonitorLizardAnimBP_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;                      // 0x02F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;                      // 0x0320 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;                      // 0x0348 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;                      // 0x0370 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x0398 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x03C0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x03E8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0410 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0438 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0460 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x0488 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_6;                                // 0x0508 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x0538 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_5;                                // 0x05B8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x05E8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_4;                                // 0x0668 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0698 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x0718 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0748 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x07C8 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1;                              // 0x07F8 (size: 0xB0)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x08A8 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x08D8 (size: 0xE8)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x09C0 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x09F0 (size: 0xB0)
    float Speed;                                                                      // 0x0AA0 (size: 0x4)
    bool bIsMoving;                                                                   // 0x0AA4 (size: 0x1)
    int32 Random200;                                                                  // 0x0AA8 (size: 0x4)
    int32 Random50;                                                                   // 0x0AAC (size: 0x4)
    int32 Random2000;                                                                 // 0x0AB0 (size: 0x4)
    float RandomIdleSpeed;                                                            // 0x0AB4 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_MonitorLizardAnimBP_AnimGraphNode_TransitionResult_0FAAD1F84DFA454F84468A8FD50DB61F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_MonitorLizardAnimBP_AnimGraphNode_TransitionResult_AA628789437316A7232A6F896008D3E4();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_MonitorLizardAnimBP_AnimGraphNode_TransitionResult_4C4C2E0B424731351D053386DEAECD0C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_MonitorLizardAnimBP_AnimGraphNode_TransitionResult_B3E349984559FBFAA89CDD82FA07BB58();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_MonitorLizardAnimBP_AnimGraphNode_TransitionResult_DF4850CF483EDE2EA64D83842936D273();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_MonitorLizardAnimBP_AnimGraphNode_TransitionResult_929D2AAB4D7F44EF69D4158E2D55357E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_MonitorLizardAnimBP_AnimGraphNode_TransitionResult_BF4030DB46BA557134528482BF49C067();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_MonitorLizardAnimBP_AnimGraphNode_TransitionResult_9D48BF144862485C4B1F4FB3F73D723F();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void UpdateIdleSpeed();
    void BlueprintInitializeAnimation();
    void ExecuteUbergraph_MonitorLizardAnimBP(int32 EntryPoint);
}; // Size: 0xAB8

#endif
