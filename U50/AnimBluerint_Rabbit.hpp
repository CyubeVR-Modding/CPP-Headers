#ifndef UE4SS_SDK_AnimBluerint_Rabbit_HPP
#define UE4SS_SDK_AnimBluerint_Rabbit_HPP

class UAnimBluerint_Rabbit_C : public UAnimInstance
{
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;     // 0x02B8 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4;                                  // 0x02D8 (size: 0x108)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;     // 0x03E0 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x0400 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x0428 (size: 0x28)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x0450 (size: 0xE8)
    FAnimNode_StateResult AnimGraphNode_StateResult_4;                                // 0x0538 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0568 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0590 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x05B8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x05E0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x0608 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x0688 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x06B8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0738 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0768 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x07E8 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1;                              // 0x0818 (size: 0xB0)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x08C8 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x08F8 (size: 0xB0)
    FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;                                  // 0x09A8 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0A70 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0AA0 (size: 0x80)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0B20 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;                                  // 0x0B40 (size: 0x108)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0C48 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;                                  // 0x0C68 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x0D70 (size: 0x108)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x0E78 (size: 0x108)
    int32 Random200;                                                                  // 0x0F80 (size: 0x4)
    int32 Random50;                                                                   // 0x0F84 (size: 0x4)
    float PlayRate;                                                                   // 0x0F88 (size: 0x4)
    bool Up;                                                                          // 0x0F8C (size: 0x1)
    FRotator HeadRotationFinal;                                                       // 0x0F90 (size: 0xC)
    FRotator HeadRotation;                                                            // 0x0F9C (size: 0xC)
    float Speed;                                                                      // 0x0FA8 (size: 0x4)
    bool bIsMoving;                                                                   // 0x0FAC (size: 0x1)
    bool IsGrabbed;                                                                   // 0x0FAD (size: 0x1)
    TArray<FRotator> RandomRotations;                                                 // 0x0FB0 (size: 0x10)
    TArray<FRotator> RandomRotationsFinal;                                            // 0x0FC0 (size: 0x10)
    hand GrabbedByHand;                                                               // 0x0FD0 (size: 0x1)
    bool Temp_bool_Variable;                                                          // 0x0FD1 (size: 0x1)
    hand Temp_byte_Variable;                                                          // 0x0FD2 (size: 0x1)
    ESteamVRHand Temp_byte_Variable_1;                                                // 0x0FD3 (size: 0x1)
    ESteamVRHand Temp_byte_Variable_2;                                                // 0x0FD4 (size: 0x1)
    FAnimBluerint_Rabbit_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate; // 0x0FD8 (size: 0x10)
    void TimerDynamicDelegate();
    FAnimBluerint_Rabbit_CK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1; // 0x0FE8 (size: 0x10)
    void TimerDynamicDelegate();
    FAnimBluerint_Rabbit_CK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2; // 0x0FF8 (size: 0x10)
    void TimerDynamicDelegate();
    float K2Node_Event_DeltaTimeX;                                                    // 0x1008 (size: 0x4)
    FAnimBluerint_Rabbit_CK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3; // 0x100C (size: 0x10)
    void TimerDynamicDelegate();
    int32 Temp_int_Variable;                                                          // 0x101C (size: 0x4)
    class ARabbitC_C* K2Node_DynamicCast_AsRabbit_C;                                  // 0x1020 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess;                                                 // 0x1028 (size: 0x1)
    hand K2Node_CustomEvent_Hand;                                                     // 0x1029 (size: 0x1)
    TArray<FRotator> K2Node_MakeArray_Array;                                          // 0x1030 (size: 0x10)
    float K2Node_Select_Default;                                                      // 0x1040 (size: 0x4)
    ESteamVRHand K2Node_Select_Default_1;                                             // 0x1044 (size: 0x1)

    void UpdateRandomPlayback();
    void UpdateRandomLegs();
    void UpdateRandom();
    void StopGrab();
    void NowGrab(hand bpp__Hand__pf);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBluerint_Rabbit_AnimGraphNode_TwoWayBlend_43E89AA04B3DE0BDB96E9B8C8B09408D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBluerint_Rabbit_AnimGraphNode_TransitionResult_D5152DB94B974EFBB8D00683DD7CDF23();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBluerint_Rabbit_AnimGraphNode_TransitionResult_887F7D1A41CCC1F84C5CA7B02FC46476();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBluerint_Rabbit_AnimGraphNode_TransitionResult_650DFB2E4CE38027AAB0C687F8D10291();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBluerint_Rabbit_AnimGraphNode_TransitionResult_54BB598E431F70BA298B13A8587449BE();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBluerint_Rabbit_AnimGraphNode_TransitionResult_4A468A754B5BE42926E4BDA07656C43A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBluerint_Rabbit_AnimGraphNode_TransitionResult_18D94D234A876860ABF0A1B2AD3E5B39();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBluerint_Rabbit_AnimGraphNode_SequencePlayer_FC1392EC43CB185E836122A0C8445339();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBluerint_Rabbit_AnimGraphNode_SequencePlayer_B7B7AC6042C7B848700AFEB41CD13C85();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBluerint_Rabbit_AnimGraphNode_ModifyBone_BC9A83D945C34F324A78C4A178482BE0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBluerint_Rabbit_AnimGraphNode_ModifyBone_87BAF668460C11FA075F8B8F92C2E2D1();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBluerint_Rabbit_AnimGraphNode_ModifyBone_726B206849832F60C1BC29B6D89CEBA2();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBluerint_Rabbit_AnimGraphNode_ModifyBone_51C9F933461DB7E79C6F4FAB72A541B3();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBluerint_Rabbit_AnimGraphNode_ModifyBone_4652209B4E7DEC14F69934BA5726DC78();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBluerint_Rabbit_AnimGraphNode_BlendSpacePlayer_C6E8760D48B43BBA72EEAD8062F10013();
    void BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf);
    void BlueprintInitializeAnimation();
    void AnimGraph(FPoseLink& bpp__AnimGraph__pf);
}; // Size: 0x1050

#endif
