#ifndef UE4SS_SDK_DeerAnimBP_HPP
#define UE4SS_SDK_DeerAnimBP_HPP

class UDeerAnimBP_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x02F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x0320 (size: 0x28)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;                      // 0x0348 (size: 0xE8)
    FAnimNode_StateResult AnimGraphNode_StateResult_12;                               // 0x0430 (size: 0x30)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_3;      // 0x0460 (size: 0x190)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13;                         // 0x05F0 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_11;                               // 0x0670 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;                      // 0x06A0 (size: 0xE8)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_1;                            // 0x0788 (size: 0xC8)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12;                         // 0x0850 (size: 0x80)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_2;      // 0x08D0 (size: 0x190)
    FAnimNode_StateResult AnimGraphNode_StateResult_10;                               // 0x0A60 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11;                         // 0x0A90 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_9;                                // 0x0B10 (size: 0x30)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0B40 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10;                         // 0x0BE0 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9;                          // 0x0C60 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_8;                                // 0x0CE0 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x0D10 (size: 0xE8)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8;                          // 0x0DF8 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;                          // 0x0E78 (size: 0x80)
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;                            // 0x0EF8 (size: 0xA0)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;                              // 0x0F98 (size: 0xC8)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;                          // 0x1060 (size: 0x80)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_1;      // 0x10E0 (size: 0x190)
    FAnimNode_StateResult AnimGraphNode_StateResult_7;                                // 0x1270 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;                          // 0x12A0 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_6;                                // 0x1320 (size: 0x30)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace;        // 0x1350 (size: 0x190)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x14E0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x1508 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x1530 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x1558 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x1580 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_5;                                // 0x1600 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x1630 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_4;                                // 0x16B0 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x16E0 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x1760 (size: 0x30)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x1790 (size: 0x20)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x17B0 (size: 0x20)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x17D0 (size: 0x1B0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x1980 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x1A00 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1;                              // 0x1A30 (size: 0xB0)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x1AE0 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x1B10 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x1B90 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x1BC0 (size: 0xB0)
    float Speed;                                                                      // 0x1C70 (size: 0x4)
    FRotator InclineRotation;                                                         // 0x1C74 (size: 0xC)
    float TurnRateSmoothed;                                                           // 0x1C80 (size: 0x4)
    int32 RunStartIndex;                                                              // 0x1C84 (size: 0x4)
    float RunAnimationSpeed;                                                          // 0x1C88 (size: 0x4)
    bool bIsMoving;                                                                   // 0x1C8C (size: 0x1)
    int32 Random;                                                                     // 0x1C90 (size: 0x4)
    FVector PlayerLocation;                                                           // 0x1C94 (size: 0xC)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_DeerAnimBP_AnimGraphNode_TransitionResult_B165A3564BB8987CA78C6DB65012D5E1();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_DeerAnimBP_AnimGraphNode_TransitionResult_1F84D71F439E63594D52FB9A32576A00();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_DeerAnimBP_AnimGraphNode_TransitionResult_858129CD41474A56C0091687DDB3867A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_DeerAnimBP_AnimGraphNode_TransitionResult_FF357BA3465FB5D379B9A49ED7CB4749();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_DeerAnimBP_AnimGraphNode_BlendSpacePlayer_41B343B745BA1268D8E1E9A13FB8DC33();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_DeerAnimBP_AnimGraphNode_BlendListByBool_E2507F4F4F7C2C85A7D9C0B0AFF8B6F9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_DeerAnimBP_AnimGraphNode_BlendSpacePlayer_31C261204D4ED7384ADA5E8804098E2E();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_DeerAnimBP(int32 EntryPoint);
}; // Size: 0x1CA0

#endif
