#ifndef UE4SS_SDK_CrystalSlotActor_HPP
#define UE4SS_SDK_CrystalSlotActor_HPP

class ACrystalSlotActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* CrystalMesh;                                          // 0x0228 (size: 0x8)
    class UCapsuleComponent* CrystalHolderCollisionCapsule;                           // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    TEnumAsByte<hand> CurrentSelectedHand;                                            // 0x0240 (size: 0x1)
    FVector CapsuleOffset;                                                            // 0x0244 (size: 0xC)
    FVector CapsuleScale;                                                             // 0x0250 (size: 0xC)
    FVector CurrentColor;                                                             // 0x025C (size: 0xC)
    bool IsRightHandSlot;                                                             // 0x0268 (size: 0x1)
    bool IsHolderCrystal;                                                             // 0x0269 (size: 0x1)

    void Grab(class AFirstPersonCharacterVR_C* Player, class UBoxComponent* HandComponent, class UMeshComponent* HandMesh, class USphereComponent* HandOverlap, class UBoxComponent* OtherHandComponent, class UMeshComponent* OtherHandParentComponent, TEnumAsByte<hand> hand, bool IsDistanceGrab, bool AfterSpawn, class AActor*& GrabbedActorMain, class AActor*& GrabbedActorDirect);
    void Release(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component, bool& success);
    void CanTelekinesis(bool LineOfSight, bool& Can, class AActor*& ActorToGrab);
    void ActivateTelekinesis(TEnumAsByte<hand> hand, bool GravityGlove, class UPrimitiveComponent*& SimulatingComponent);
    void DeactivateTelekinesis(class UStaticMeshComponent*& Return);
    void GetRealWorldLocation(FVector& Location);
    void SetGravityGloveTargetIndicatorActive(bool Active, bool Left, bool& _);
    void SetParameters(const float EmissiveIntensity, const FVector Color);
    void UserConstructionScript();
    void BndEvt__CrystalHolderCollisionCapsule_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__CrystalHolderCollisionCapsule_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ChangedVisibility(bool Visible);
    void SetObjectRotation(class AVRHandFingers_C* hand, float Percent);
    void ExecuteUbergraph_CrystalSlotActor(int32 EntryPoint);
}; // Size: 0x26A

#endif
