#ifndef UE4SS_SDK_DeerC_HPP
#define UE4SS_SDK_DeerC_HPP

class ADeerC_C : public ADeerCPP
{
    class UStaticMeshComponent* RedNose;                                              // 0x0530 (size: 0x8)
    class UStaticMeshComponent* BirthdayHat;                                          // 0x0538 (size: 0x8)
    class UNavigationInvokerComponent* NavigationInvoker;                             // 0x0540 (size: 0x8)
    class UStaticMeshComponent* Horn;                                                 // 0x0548 (size: 0x8)
    TArray<class UStaticMesh*> Horns;                                                 // 0x0550 (size: 0x10)
    FVector Target;                                                                   // 0x0560 (size: 0xC)
    FTimerHandle CurrentTimer;                                                        // 0x0570 (size: 0x8)
    bool Dead;                                                                        // 0x0578 (size: 0x1)
    class URuntimeMeshComponent* RMC;                                                 // 0x0580 (size: 0x8)
    bool WasRendered;                                                                 // 0x0588 (size: 0x1)
    bool DebugStart;                                                                  // 0x0589 (size: 0x1)
    float DeadBodyHealth;                                                             // 0x058C (size: 0x4)
    bool Cinematic;                                                                   // 0x0590 (size: 0x1)
    float MaxWalkDistance;                                                            // 0x0594 (size: 0x4)
    class USkeletalMeshComponent* RabbitOnTop;                                        // 0x0598 (size: 0x8)
    float ImpulseMultiplier;                                                          // 0x05A0 (size: 0x4)
    bool WasVisibleLast;                                                              // 0x05A4 (size: 0x1)
    bool Astronaut;                                                                   // 0x05A5 (size: 0x1)
    class USkeletalMesh* TempSkelValue;                                               // 0x05A8 (size: 0x8)
    bool UsingTelekinesis;                                                            // 0x05B0 (size: 0x1)
    float IdleWaitMultiplier;                                                         // 0x05B4 (size: 0x4)
    float Temp_float_Variable;                                                        // 0x05B8 (size: 0x4)
    FDeerC_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate; // 0x05BC (size: 0x10)
    void TimerDynamicDelegate();
    bool Temp_bool_Variable;                                                          // 0x05CC (size: 0x1)
    TEnumAsByte<EComponentMobility::Type> Temp_byte_Variable;                         // 0x05CD (size: 0x1)
    bool CallFunc_IsAprilFirst_Is;                                                    // 0x05CE (size: 0x1)
    TEnumAsByte<EComponentMobility::Type> Temp_byte_Variable_1;                       // 0x05CF (size: 0x1)
    bool Temp_bool_Variable_1;                                                        // 0x05D0 (size: 0x1)
    TEnumAsByte<EComponentMobility::Type> K2Node_Select_Default;                      // 0x05D1 (size: 0x1)
    TEnumAsByte<ECollisionEnabled::Type> Temp_byte_Variable_2;                        // 0x05D2 (size: 0x1)
    FVector K2Node_CustomEvent_Location;                                              // 0x05D4 (size: 0xC)
    FVector K2Node_CustomEvent_Impulse;                                               // 0x05E0 (size: 0xC)
    FName K2Node_CustomEvent_BoneName;                                                // 0x05EC (size: 0x8)
    TEnumAsByte<ECollisionEnabled::Type> Temp_byte_Variable_3;                        // 0x05F4 (size: 0x1)
    class AAIController* K2Node_DynamicCast_AsAIController;                           // 0x05F8 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess;                                                 // 0x0600 (size: 0x1)
    class AMC_GameState* K2Node_DynamicCast_AsCube_Game_State_BP;                     // 0x0608 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess_1;                                               // 0x0610 (size: 0x1)
    class AChunkManager* K2Node_DynamicCast_AsMy_Chunk_Manager;                       // 0x0618 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess_2;                                               // 0x0620 (size: 0x1)
    bool Temp_bool_Variable_2;                                                        // 0x0621 (size: 0x1)
    TEnumAsByte<ECollisionEnabled::Type> K2Node_Select_Default_1;                     // 0x0622 (size: 0x1)
    TEnumAsByte<EPathFollowingResult::Type> Temp_byte_Variable_4;                     // 0x0623 (size: 0x1)
    FDeerC_CK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1; // 0x0624 (size: 0x10)
    void TimerDynamicDelegate();
    bool Temp_bool_Variable_3;                                                        // 0x0634 (size: 0x1)
    class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue;   // 0x0638 (size: 0x8)
    bool CallFunc_IsValid_ReturnValue_1;                                              // 0x0640 (size: 0x1)
    bool K2Node_CustomEvent_Enabled;                                                  // 0x0641 (size: 0x1)
    FVector CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation;               // 0x0644 (size: 0xC)
    class AAIController* K2Node_DynamicCast_AsAIController_1;                         // 0x0650 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess_3;                                               // 0x0658 (size: 0x1)
    TEnumAsByte<EComponentMobility::Type> K2Node_CustomEvent_NewMobility;             // 0x0659 (size: 0x1)
    TEnumAsByte<EComponentMobility::Type> K2Node_Event_NewMobility;                   // 0x065A (size: 0x1)
    TEnumAsByte<EPathFollowingResult::Type> K2Node_CustomEvent_MovementResult;        // 0x065B (size: 0x1)
    bool CallFunc_IsChristmas_Is;                                                     // 0x065C (size: 0x1)
    class ARabbitC_C* K2Node_DynamicCast_AsRabbit_C;                                  // 0x0660 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess_4;                                               // 0x0668 (size: 0x1)
    FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;                            // 0x0670 (size: 0x8)
    class AMC_GameState* K2Node_DynamicCast_AsCube_Game_State_BP_1;                   // 0x0678 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess_5;                                               // 0x0680 (size: 0x1)
    FDeerC_CK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2; // 0x0684 (size: 0x10)
    void OAISimpleDelegate(TEnumAsByte<EPathFollowingResult::Type> bpp__MovementResult__pf);
    TEnumAsByte<EPathFollowingResult::Type> K2Node_CustomEvent_MovementResult_1;      // 0x0694 (size: 0x1)
    class AMC_GameState* K2Node_DynamicCast_AsCube_Game_State_BP_2;                   // 0x0698 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess_6;                                               // 0x06A0 (size: 0x1)
    class AChunkManager* K2Node_DynamicCast_AsMy_Chunk_Manager_1;                     // 0x06A8 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess_7;                                               // 0x06B0 (size: 0x1)
    class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue;        // 0x06B8 (size: 0x8)
    float K2Node_Select_Default_2;                                                    // 0x06C0 (size: 0x4)
    FDeerC_CK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3; // 0x06C4 (size: 0x10)
    void OAISimpleDelegate(TEnumAsByte<EPathFollowingResult::Type> bpp__MovementResult__pf);
    float Temp_float_Variable_1;                                                      // 0x06D4 (size: 0x4)
    float K2Node_Select_Default_3;                                                    // 0x06D8 (size: 0x4)

    void WasVisible(bool& bpp__Result__pf);
    void UserConstructionScript();
    void StartMovingBP();
    void SetTick(bool bpp__Enabled__pf);
    void SetMobilityAll(TEnumAsByte<EComponentMobility::Type> bpp__NewMobility__pf);
    void SetCorrectMesh();
    void ReceiveBeginPlay();
    void OnSuccess_3B8A1AEB47958811683CCA836E3D046D(TEnumAsByte<EPathFollowingResult::Type> bpp__MovementResult__pf);
    void OnFail_3B8A1AEB47958811683CCA836E3D046D(TEnumAsByte<EPathFollowingResult::Type> bpp__MovementResult__pf);
    void Move();
    void KillTest();
    void IsKilled();
    void HitWithKnifeF(FVector bpp__Location__pf);
    void Hit(FVector bpp__Location__pf, FVector bpp__Impulse__pf, FName bpp__BoneName__pf);
    void ExecuteUbergraph_DeerC_7(int32 bpp__EntryPoint__pf);
    void ExecuteUbergraph_DeerC_3(int32 bpp__EntryPoint__pf);
    void ExecuteUbergraph_DeerC_11(int32 bpp__EntryPoint__pf);
    void ExecuteUbergraph_DeerC_0(int32 bpp__EntryPoint__pf);
    void EnableTick();
    void ElephantSound();
    void DeleteHatIfNotBirthday();
    void OAISimpleDelegate__DelegateSignature(TEnumAsByte<EPathFollowingResult::Type> bpp__MovementResult__pf);
}; // Size: 0x6E0

#endif
