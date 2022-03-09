#ifndef UE4SS_SDK_RabbitC_HPP
#define UE4SS_SDK_RabbitC_HPP

class ARabbitC_C : public ADeerC_C
{
    class UCapsuleComponent* GrabCapsule;                                             // 0x06F8 (size: 0x8)
    FVector LastFrameWorldLocation;                                                   // 0x0700 (size: 0xC)
    FTimerHandle RotTImer;                                                            // 0x0710 (size: 0x8)
    class UPhysicsHandleComponent* HandleGrabbed;                                     // 0x0718 (size: 0x8)
    class UGripMotionControllerComponent* GripGrabbed;                                // 0x0720 (size: 0x8)
    bool DropEasterEgg;                                                               // 0x0728 (size: 0x1)
    bool TelekinesisActive;                                                           // 0x0729 (size: 0x1)
    bool IsOnFire;                                                                    // 0x072A (size: 0x1)
    float MinScale;                                                                   // 0x072C (size: 0x4)
    float MaxScale;                                                                   // 0x0730 (size: 0x4)
    bool IsRabbit;                                                                    // 0x0734 (size: 0x1)
    FTransform MeshCapsuleOffset;                                                     // 0x0740 (size: 0x30)
    class UGripMotionControllerComponent* K2Node_Event_GrippingController;            // 0x0770 (size: 0x8)
    FBPActorGripInformation K2Node_Event_GripInformation;                             // 0x0780 (size: 0x1A0)
    bool K2Node_Event_Enabled;                                                        // 0x0920 (size: 0x1)
    FTransform CallFunc_GetTransform_ReturnValue;                                     // 0x0930 (size: 0x30)
    class UGripMotionControllerComponent* K2Node_Event_ReleasingController;           // 0x0960 (size: 0x8)
    FBPActorGripInformation K2Node_Event_GripInformation_1;                           // 0x0970 (size: 0x1A0)
    bool K2Node_Event_bWasSocketed;                                                   // 0x0B10 (size: 0x1)
    class AReceiveLightActor* K2Node_Event_Hand;                                      // 0x0B18 (size: 0x8)
    float K2Node_Event_Percent;                                                       // 0x0B20 (size: 0x4)
    class UGripMotionControllerComponent* K2Node_Event_GrippingController_1;          // 0x0B28 (size: 0x8)
    FBPActorGripInformation K2Node_Event_GripInformation_2;                           // 0x0B30 (size: 0x1A0)
    float K2Node_Event_DeltaTime;                                                     // 0x0CD0 (size: 0x4)
    class UGripMotionControllerComponent* K2Node_Event_HoldingController;             // 0x0CD8 (size: 0x8)
    uint8 K2Node_Event_GripID;                                                        // 0x0CE0 (size: 0x1)
    bool K2Node_Event_bIsHeld;                                                        // 0x0CE1 (size: 0x1)
    float CallFunc_BreakVector_X;                                                     // 0x0CE4 (size: 0x4)
    float CallFunc_BreakVector_Y;                                                     // 0x0CE8 (size: 0x4)
    float CallFunc_BreakVector_Z;                                                     // 0x0CEC (size: 0x4)
    FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult;                        // 0x0CF0 (size: 0x8C)
    class UGripMotionControllerComponent* K2Node_Event_GripOwningController;          // 0x0D80 (size: 0x8)
    class USceneComponent* K2Node_Event_ReleasingSecondaryGripComponent;              // 0x0D88 (size: 0x8)
    FBPActorGripInformation K2Node_Event_GripInformation_3;                           // 0x0D90 (size: 0x1A0)
    class UGripMotionControllerComponent* K2Node_Event_GripOwningController_1;        // 0x0F30 (size: 0x8)
    class USceneComponent* K2Node_Event_SecondaryGripComponent;                       // 0x0F38 (size: 0x8)
    FBPActorGripInformation K2Node_Event_GripInformation_4;                           // 0x0F40 (size: 0x1A0)
    FKey K2Node_Event_Key;                                                            // 0x10E0 (size: 0x18)
    TEnumAsByte<EInputEvent> K2Node_Event_KeyEvent;                                   // 0x10F8 (size: 0x1)
    class UGripMotionControllerComponent* K2Node_Event_ReleasingController_1;         // 0x1100 (size: 0x8)
    FBPActorGripInformation K2Node_Event_GripInformation_5;                           // 0x1110 (size: 0x1A0)
    bool K2Node_Event_bWasSocketed_1;                                                 // 0x12B0 (size: 0x1)
    class UGripMotionControllerComponent* K2Node_Event_GrippingController_2;          // 0x12B8 (size: 0x8)
    FBPActorGripInformation K2Node_Event_GripInformation_6;                           // 0x12C0 (size: 0x1A0)
    class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1;      // 0x1460 (size: 0x8)
    class AActor* K2Node_ComponentBoundEvent_OtherActor_1;                            // 0x1468 (size: 0x8)
    class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1;                // 0x1470 (size: 0x8)
    int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1;                                // 0x1478 (size: 0x4)
    bool K2Node_ComponentBoundEvent_bFromSweep;                                       // 0x147C (size: 0x1)
    FHitResult K2Node_ComponentBoundEvent_SweepResult;                                // 0x1480 (size: 0x8C)
    class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent;        // 0x1510 (size: 0x8)
    class AActor* K2Node_ComponentBoundEvent_OtherActor;                              // 0x1518 (size: 0x8)
    class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp;                  // 0x1520 (size: 0x8)
    int32 K2Node_ComponentBoundEvent_OtherBodyIndex;                                  // 0x1528 (size: 0x4)
    class AReceiveLightActor* K2Node_DynamicCast_AsVRHand_Fingers;                    // 0x1530 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess;                                                 // 0x1538 (size: 0x1)
    class AReceiveLightActor* K2Node_DynamicCast_AsVRHand_Fingers_1;                  // 0x1540 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess_1;                                               // 0x1548 (size: 0x1)
    float CallFunc_BreakRotator_Roll;                                                 // 0x154C (size: 0x4)
    float CallFunc_BreakRotator_Pitch;                                                // 0x1550 (size: 0x4)
    float CallFunc_BreakRotator_Yaw;                                                  // 0x1554 (size: 0x4)
    class AMC_GameState* K2Node_DynamicCast_AsCube_Game_State_BP;                     // 0x1558 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess_2;                                               // 0x1560 (size: 0x1)
    bool CallFunc_IsEaster_Is;                                                        // 0x1561 (size: 0x1)
    float CallFunc_BreakRotator_Roll_1;                                               // 0x1564 (size: 0x4)
    float CallFunc_BreakRotator_Pitch_1;                                              // 0x1568 (size: 0x4)
    float CallFunc_BreakRotator_Yaw_1;                                                // 0x156C (size: 0x4)
    FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult;                           // 0x1570 (size: 0x8C)

    void StopGrabbed();
    void SetVerticalRot();
    void SetObjectRotation(class AReceiveLightActor* bpp__Hand__pf, float bpp__Percent__pf);
    void SetGravityGloveTargetIndicatorActive(bool bpp__Active__pf, bool bpp__Left__pf, bool& bpp_____pf);
    void Release(class AVRCharacter* bpp__Player__pf, class UMotionControllerComponent* bpp__Component__pf, bool& bpp__Success__pf);
    void NowGrabbed(hand bpp__Hand__pf);
    void LightOnFire(bool& bpp__Ret__pf);
    void Grab(class AVRCharacter* bpp__Player__pf, class UBoxComponent* bpp__HandComponent__pf, class UMeshComponent* bpp__HandMesh__pf, class USphereComponent* bpp__HandOverlap__pf, class UBoxComponent* bpp__OtherHandComponent__pf, class UMeshComponent* bpp__OtherHandParentComponent__pf, hand bpp__Hand__pf, bool bpp__IsDistanceGrab__pf, bool bpp__AfterSpawn__pf, class AActor*& bpp__GrabbedActorMain__pf, class AActor*& bpp__GrabbedActorDirect__pf);
    void GetRealWorldLocation(FVector& bpp__Location__pf);
    void DeactivateTelekinesis(class UStaticMeshComponent*& bpp__Return__pf);
    void DeactivatePhysicsOnCapsuleAgain();
    void CanTelekinesis(bool bpp__LineOfSight__pf, bool& bpp__Can__pf, class AActor*& bpp__ActorToGrab__pf);
    void BndEvt__GrabCapsule_K2Node_ComponentBoundEvent_9_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* bpp__OverlappedComponent__pf, class AActor* bpp__OtherActor__pf, class UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf);
    void BndEvt__GrabCapsule_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* bpp__OverlappedComponent__pf, class AActor* bpp__OtherActor__pf, class UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, const FHitResult& bpp__SweepResult__pf__const);
    void ActivateTelekinesis(hand bpp__Hand__pf, bool bpp__GravityGlove__pf, class UPrimitiveComponent*& bpp__SimulatingComponent__pf);
}; // Size: 0x1600

#endif
