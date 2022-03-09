#ifndef UE4SS_SDK_InventoryBucket_HPP
#define UE4SS_SDK_InventoryBucket_HPP

class AInventoryBucket_C : public AReceiveLightActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UArrowComponent* WidgetSpawnLocNotEnoughFreeSpace;                          // 0x0270 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0278 (size: 0x8)
    class USceneComponent* Scene1;                                                    // 0x0280 (size: 0x8)
    class UChildActorComponent* CrystalSlotChildActor;                                // 0x0288 (size: 0x8)
    class UStaticMeshComponent* ConeSuckDefault;                                      // 0x0290 (size: 0x8)
    class UStaticMeshComponent* ConeBlow;                                             // 0x0298 (size: 0x8)
    class UCapsuleComponent* CrystalHolderCollisionCapsule;                           // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* CrystalMesh;                                          // 0x02A8 (size: 0x8)
    class UParticleSystemComponent* SuckParticle1;                                    // 0x02B0 (size: 0x8)
    class UVectorFieldComponent* VectorField;                                         // 0x02B8 (size: 0x8)
    class UAudioComponent* BucketSound;                                               // 0x02C0 (size: 0x8)
    class UParticleSystemComponent* P_LevelExit_Ice;                                  // 0x02C8 (size: 0x8)
    class UParticleSystemComponent* SuckParticle;                                     // 0x02D0 (size: 0x8)
    class UArrowComponent* SucLoc;                                                    // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* Cone;                                                 // 0x02E0 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* BucketMesh;                                           // 0x02F0 (size: 0x8)
    class UBoxComponent* Box1;                                                        // 0x02F8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0300 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0308 (size: 0x8)
    class UArrowComponent* WidgetSpawnLoc;                                            // 0x0310 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0318 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0320 (size: 0x8)
    bool BucketActive;                                                                // 0x0328 (size: 0x1)
    TEnumAsByte<hand> WidgetSetFromHand;                                              // 0x0329 (size: 0x1)
    bool BucketReceiveActive;                                                         // 0x032A (size: 0x1)
    TSet<AActor*> IgnoreToSphere;                                                     // 0x0330 (size: 0x50)
    TEnumAsByte<hand> CurrentSelectedHand;                                            // 0x0380 (size: 0x1)
    class UMaterialInstanceDynamic* VeinMat;                                          // 0x0388 (size: 0x8)
    int32 BucketMode;                                                                 // 0x0390 (size: 0x4)
    float BucketSuckStrength;                                                         // 0x0394 (size: 0x4)
    bool MainParticleActive;                                                          // 0x0398 (size: 0x1)
    bool EverUsedCrystalInBucket;                                                     // 0x0399 (size: 0x1)
    float LastCrystalHintShown;                                                       // 0x039C (size: 0x4)
    float LastCrystalEmptyHintShown;                                                  // 0x03A0 (size: 0x4)

    void CanGrabCrystal(bool& CanGrab, FColor& Color, float& ChargeState);
    void AttachCrystal(FColor CrystalColor, float CrystalChargeState, bool& Attached);
    void SetGravityGloveTargetIndicatorActive(bool Active, bool Left, bool& _);
    void GetRealWorldLocation(FVector& Location);
    void Grab(class AFirstPersonCharacterVR_C* Player, class UBoxComponent* HandComponent, class UMeshComponent* HandMesh, class USphereComponent* HandOverlap, class UBoxComponent* OtherHandComponent, class UMeshComponent* OtherHandParentComponent, TEnumAsByte<hand> hand, bool IsDistanceGrab, bool AfterSpawn, class AActor*& GrabbedActorMain, class AActor*& GrabbedActorDirect);
    void Release(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component, bool& success);
    void CanTelekinesis(bool LineOfSight, bool& Can, class AActor*& ActorToGrab);
    void ActivateTelekinesis(TEnumAsByte<hand> hand, bool GravityGlove, class UPrimitiveComponent*& SimulatingComponent);
    void DeactivateTelekinesis(class UStaticMeshComponent*& Return);
    void ShowCrystalEmptyHintText();
    void ShowCrystalHintText();
    void AttachCrystalInternal(FColor CrystalColor, float CrystalChargeState, bool& Attach);
    void SetCrystalProperties();
    void SetWidgetLook(bool Active, EBlockTypeBP Type, TEnumAsByte<hand> FromHand, int32 Amount);
    void SpawnWidget(int32 Amount, EBlockTypeBP Type, int32 UniqueId);
    void UserConstructionScript();
    void OverlapCapsule(class AActor* OtherActor);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveTick(float DeltaSeconds);
    void AddForceToComponent(class UPrimitiveComponent* InputPin, bool SpecialType);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void SetBucketActive(bool Active);
    void ReceiveBeginPlay();
    void SetObjectRotation(class AVRHandFingers_C* hand, float Percent);
    void BndEvt__CrystalHolderCollisionCapsule_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__CrystalHolderCollisionCapsule_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void InitializeBucketMat();
    void ReduceCrystalCharge();
    void RemovedCrystal();
    void ShowNotEnoughFreeSpace(bool BehindBack);
    void ExecuteUbergraph_InventoryBucket(int32 EntryPoint);
}; // Size: 0x3A4

#endif
