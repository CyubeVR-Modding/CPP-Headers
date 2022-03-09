#ifndef UE4SS_SDK_ChestActor_HPP
#define UE4SS_SDK_ChestActor_HPP

class AChestActor_C : public AChest
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class UGrabRotateComponent_C* GrabRotateComponent;                                // 0x02B8 (size: 0x8)
    class UDragComponent_C* DragComponent;                                            // 0x02C0 (size: 0x8)
    class UBoxComponent* ManualBoundingBox;                                           // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* Old_Wooden_Chest_Wood000_pivot;                       // 0x02D0 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x02D8 (size: 0x8)
    class UChildActorComponent* ChestInternalsActor;                                  // 0x02E0 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* ChestClosingMechanismPivotFixed;                      // 0x02F0 (size: 0x8)
    class UStaticMeshComponent* Old_Wooden_Chest_Wood003_pivot;                       // 0x02F8 (size: 0x8)
    class UStaticMeshComponent* Old_Wooden_Chest_Wood002_pivot;                       // 0x0300 (size: 0x8)
    class UStaticMeshComponent* Old_Wooden_Chest_Wood001_pivot;                       // 0x0308 (size: 0x8)
    class UStaticMeshComponent* Old_Wooden_Chest_Steel003_pivot;                      // 0x0310 (size: 0x8)
    class UStaticMeshComponent* Old_Wooden_Chest_Steel002_pivot;                      // 0x0318 (size: 0x8)
    class USceneComponent* RotationPoint;                                             // 0x0320 (size: 0x8)
    class UStaticMeshComponent* Old_Wooden_Chest_Steel001_pivot;                      // 0x0328 (size: 0x8)
    class UStaticMeshComponent* Old_Wooden_Chest_Steel000_pivot;                      // 0x0330 (size: 0x8)
    float MovementRotatioNFunny_Rot_CD0BC77F4B8957E37B8B178481AED8C1;                 // 0x0338 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> MovementRotatioNFunny__Direction_CD0BC77F4B8957E37B8B178481AED8C1; // 0x033C (size: 0x1)
    class UTimelineComponent* MovementRotatioNFunny;                                  // 0x0340 (size: 0x8)
    TArray<class AVRHandFingers_C*> CurrentlyOverlappingHand;                         // 0x0348 (size: 0x10)
    bool HandGrabbing;                                                                // 0x0358 (size: 0x1)
    TEnumAsByte<hand> HandGrabbingSide;                                               // 0x0359 (size: 0x1)
    class AVRHandFingers_C* HandGrabbingActor;                                        // 0x0360 (size: 0x8)
    FVector StartingGrabLocation;                                                     // 0x0368 (size: 0xC)
    float TopStartRotation;                                                           // 0x0374 (size: 0x4)
    class AVRHandFingers_C* LockCurrentlyOverlappingHand;                             // 0x0378 (size: 0x8)
    class AVRHandFingers_C* LockHandGrabbingActor;                                    // 0x0380 (size: 0x8)
    bool LockHandGrabbing;                                                            // 0x0388 (size: 0x1)
    FVector StartingLockGrabLocation;                                                 // 0x038C (size: 0xC)
    float LockStartRotation;                                                          // 0x0398 (size: 0x4)
    FRotator LocalRotator;                                                            // 0x039C (size: 0xC)
    FVector LockStartXVector;                                                         // 0x03A8 (size: 0xC)
    bool OverlappingAnything;                                                         // 0x03B4 (size: 0x1)
    bool IsPreview;                                                                   // 0x03B5 (size: 0x1)
    bool DragOngoing;                                                                 // 0x03B6 (size: 0x1)
    float RotationBefore;                                                             // 0x03B8 (size: 0x4)
    float SoundLastPlayed;                                                            // 0x03BC (size: 0x4)
    TArray<class UAudioComponent*> SpawnedSounds;                                     // 0x03C0 (size: 0x10)

    void SetMobilityOfAll(TEnumAsByte<EComponentMobility::Type> NewMobility);
    void IsActive(bool& Active);
    FRotator GetChestRotation();
    void UserConstructionScript();
    void MovementRotatioNFunny__FinishedFunc();
    void MovementRotatioNFunny__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void OverlappedTop(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent);
    void ReceiveBeginPlay();
    void BndEvt__Old_Wooden_Chest_Wood002_pivot_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Old_Wooden_Chest_Wood001_pivot_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Old_Wooden_Chest_Steel002_pivot_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void GrabLockEnded(TEnumAsByte<hand> hand, class AFirstPersonCharacterVR_C* Character, class AVRHandFingers_C* HandActor);
    void GrabLockStarted(TEnumAsByte<hand> hand, class AFirstPersonCharacterVR_C* Character, class AVRHandFingers_C* HandActor);
    void OverlapTopStopped(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent);
    void SetIsPreview(bool IsPreview);
    void BndEvt__Old_Wooden_Chest_Steel002_pivot_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void SetChestRotation(FRotator rot);
    void CheckBothHandGrab();
    void BndEvt__ChestClosingMechanismPivotFixed_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__ChestClosingMechanismPivotFixed_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Old_Wooden_Chest_Wood001_pivot_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void DestroyEvent();
    void GrabTopEndedd(TEnumAsByte<hand> hand, class AFirstPersonCharacterVR_C* Character, class AVRHandFingers_C* HandActor);
    void BndEvt__Old_Wooden_Chest_Wood003_pivot_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Old_Wooden_Chest_Wood002_pivot_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Old_Wooden_Chest_Wood003_pivot_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void GrabTopStarted(TEnumAsByte<hand> hand, class AFirstPersonCharacterVR_C* Character, class AVRHandFingers_C* HandActor);
    void MaybeSpawnEasterEgg();
    void DragActivatedEvent();
    void TopWasGrabbed();
    void UpdateAngleLimitsForTop();
    void DoFunnyMovement();
    void ExecuteUbergraph_ChestActor(int32 EntryPoint);
}; // Size: 0x3D0

#endif
