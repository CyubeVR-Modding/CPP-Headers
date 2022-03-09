#ifndef UE4SS_SDK_ANIM_Glove_Left_HPP
#define UE4SS_SDK_ANIM_Glove_Left_HPP

class UANIM_Glove_Left_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_SteamVRInputAnimPose AnimGraphNode_SteamVRInputAnimPose;                // 0x0300 (size: 0x620)
    FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_1;                                // 0x0920 (size: 0xC8)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;                          // 0x09E8 (size: 0x158)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;                            // 0x0B40 (size: 0x28)
    FAnimNode_SteamVRSetWristTransform AnimGraphNode_SteamVRSetWristTransform;        // 0x0B68 (size: 0x40)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;                            // 0x0BA8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15;                     // 0x0BD0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14;                     // 0x0BF8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13;                     // 0x0C20 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12;                     // 0x0C48 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11;                     // 0x0C70 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;                     // 0x0C98 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;                      // 0x0CC0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;                      // 0x0CE8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;                      // 0x0D10 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;                      // 0x0D38 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x0D60 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x0D88 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0DB0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0DD8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0E00 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0E28 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9;                          // 0x0E50 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_8;                                // 0x0ED0 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8;                          // 0x0F00 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_7;                                // 0x0F80 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;                          // 0x0FB0 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_6;                                // 0x1030 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;                          // 0x1060 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_5;                                // 0x10E0 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;                          // 0x1110 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x1190 (size: 0x80)
    FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;                                  // 0x1210 (size: 0xC8)
    FAnimNode_StateResult AnimGraphNode_StateResult_4;                                // 0x12D8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x1308 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x1388 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x13B8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x1438 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x1468 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x14E8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x1518 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x1598 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x15C8 (size: 0xB0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x1678 (size: 0xA0)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x1718 (size: 0x158)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x1870 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x1898 (size: 0x28)
    FSteamVRSkeletonTransform SteamVRTransformWithController;                         // 0x18C0 (size: 0x5D0)
    FSteamVRSkeletonTransform SteamVRTransformWithoutController;                      // 0x1E90 (size: 0x5D0)
    TEnumAsByte<GripEnum> GripState;                                                  // 0x2460 (size: 0x1)
    TEnumAsByte<HandPoseEnum> GripType;                                               // 0x2461 (size: 0x1)
    EControllerHand HandType;                                                         // 0x2462 (size: 0x1)
    float Squeeze;                                                                    // 0x2464 (size: 0x4)
    float Grip;                                                                       // 0x2468 (size: 0x4)
    EMotionRange MotionRange;                                                         // 0x246C (size: 0x1)
    float InterpolateSpeed;                                                           // 0x2470 (size: 0x4)
    bool ProceduralSkeletonEnabled;                                                   // 0x2474 (size: 0x1)
    bool MirrorSkeletalPose;                                                          // 0x2475 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIM_Glove_Left_AnimGraphNode_TwoWayBlend_6149ACDD491CE81E1BCEB7A897EA8133();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIM_Glove_Left_AnimGraphNode_SteamVRInputAnimPose_C3AA0D9746FCD466BE21998591DDCEF6();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIM_Glove_Left_AnimGraphNode_TwoWayBlend_BA4FF2474837DCE34CF03A99A8CBBEB7();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIM_Glove_Left_AnimGraphNode_TransitionResult_6392C56F4123269DDF704C9A3994652A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIM_Glove_Left_AnimGraphNode_TransitionResult_FED62521492C1DAFDFDAD4A7C77D677F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIM_Glove_Left_AnimGraphNode_TransitionResult_8CF3A48A47854ECD4C1C59B0DFD4FF55();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIM_Glove_Left_AnimGraphNode_TransitionResult_2B3B99AD442650095D7818B7C40A88BA();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIM_Glove_Left_AnimGraphNode_TransitionResult_7BB6E6C749A0F2FB3C2DA6827F92A7CB();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIM_Glove_Left_AnimGraphNode_TransitionResult_DFAA0BF749F89E0ABD73A1B5A7B4FFDB();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIM_Glove_Left_AnimGraphNode_TransitionResult_6EFF802E416C8CD46988F580943B1F40();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIM_Glove_Left_AnimGraphNode_TransitionResult_0F19408D4AE75B52F6EC06AD5D085676();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIM_Glove_Left_AnimGraphNode_TransitionResult_7CE552A44904B4C7FAA146B6C003B522();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIM_Glove_Left_AnimGraphNode_TransitionResult_5170BF77472E07B682D78698D450620F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIM_Glove_Left_AnimGraphNode_TransitionResult_CE30B744462F57DDD990B0B63AE1521C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIM_Glove_Left_AnimGraphNode_TransitionResult_EC924E7344ADBEA01E0493854E74D4B2();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIM_Glove_Left_AnimGraphNode_TransitionResult_3EB3AD6D4936E6306D81678105D92256();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIM_Glove_Left_AnimGraphNode_TransitionResult_EA9381424119079EC86FB688B91D731D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIM_Glove_Left_AnimGraphNode_TransitionResult_7F051C8D4EC6DF89882665AE907A60E3();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIM_Glove_Left_AnimGraphNode_TransitionResult_B8B29F0743314104EF340BA9DD8C0BFF();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void SetSqueeze(float Value);
    void SetGripState(TEnumAsByte<GripEnum> Value);
    void SetGripType(TEnumAsByte<HandPoseEnum> Value);
    void SetHandType(EControllerHand Value);
    void ExecuteUbergraph_ANIM_Glove_Left(int32 EntryPoint);
}; // Size: 0x2476

#endif
