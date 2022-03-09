#ifndef UE4SS_SDK_GeckoAnimBlueprint_HPP
#define UE4SS_SDK_GeckoAnimBlueprint_HPP

class UGeckoAnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16;                     // 0x02F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15;                     // 0x0320 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14;                     // 0x0348 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13;                     // 0x0370 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12;                     // 0x0398 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11;                     // 0x03C0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;                     // 0x03E8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;                      // 0x0410 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;                      // 0x0438 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;                          // 0x0460 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_10;                               // 0x04E0 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;                          // 0x0510 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_9;                                // 0x0590 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;                          // 0x05C0 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_8;                                // 0x0640 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_2;                              // 0x0670 (size: 0xB0)
    FAnimNode_StateResult AnimGraphNode_StateResult_7;                                // 0x0720 (size: 0x30)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x0750 (size: 0xE8)
    FAnimNode_StateResult AnimGraphNode_StateResult_6;                                // 0x0838 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;                      // 0x0868 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;                      // 0x0890 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x08B8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x08E0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0908 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0930 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0958 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0980 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x09A8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_5;                                // 0x0A28 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x0A58 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_4;                                // 0x0AD8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0B08 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x0B88 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0BB8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0C38 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0C68 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0CE8 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1;                              // 0x0D18 (size: 0xB0)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0DC8 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0DF8 (size: 0xB0)
    float Speed;                                                                      // 0x0EA8 (size: 0x4)
    bool bIsMoving;                                                                   // 0x0EAC (size: 0x1)
    int32 Random200;                                                                  // 0x0EB0 (size: 0x4)
    int32 Random50;                                                                   // 0x0EB4 (size: 0x4)
    int32 Random2000;                                                                 // 0x0EB8 (size: 0x4)
    float RandomIdleSpeed;                                                            // 0x0EBC (size: 0x4)
    bool bIsGrabbed;                                                                  // 0x0EC0 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_GeckoAnimBlueprint_AnimGraphNode_TransitionResult_EC7670FD42570204D39870B403217D63();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_GeckoAnimBlueprint_AnimGraphNode_TransitionResult_153B34D84504C03E1C9E6AA55FBEB4B9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_GeckoAnimBlueprint_AnimGraphNode_TransitionResult_2FA21F104F8E7E7307D3F986DC403BD5();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_GeckoAnimBlueprint_AnimGraphNode_TransitionResult_A073FE644D3E86BFDC451D96BC20EA07();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_GeckoAnimBlueprint_AnimGraphNode_TransitionResult_83F457B9442EE625164A58980B9AB2B9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_GeckoAnimBlueprint_AnimGraphNode_TransitionResult_DA6D443348A53F448D44AFBC376116FA();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_GeckoAnimBlueprint_AnimGraphNode_TransitionResult_BF7991B749585BAABE751786E2B9E4E0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_GeckoAnimBlueprint_AnimGraphNode_TransitionResult_8FBFE953428AD887652400A12FB94FD2();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_GeckoAnimBlueprint_AnimGraphNode_TransitionResult_7123CFCF487FF010B4F24C8F894FAB17();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_GeckoAnimBlueprint_AnimGraphNode_TransitionResult_443EB0FA4247599C7BFDF9BB31E16167();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_GeckoAnimBlueprint_AnimGraphNode_TransitionResult_51EA520E43F27B760CD88DAFF613E451();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_GeckoAnimBlueprint_AnimGraphNode_TransitionResult_6931A3254EFC10F6064DEEAD5B85539A();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void UpdateIdleSpeed();
    void BlueprintInitializeAnimation();
    void ExecuteUbergraph_GeckoAnimBlueprint(int32 EntryPoint);
}; // Size: 0xEC1

#endif
