#ifndef UE4SS_SDK_EasterEggBP_HPP
#define UE4SS_SDK_EasterEggBP_HPP

class AEasterEggBP_C : public AEasterEgg
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x0278 (size: 0x8)
    FVector Timeline_0_ItemScale_E046B3294F9A250C59017ABB8D02F17C;                    // 0x0280 (size: 0xC)
    float Timeline_0_EggScale_E046B3294F9A250C59017ABB8D02F17C;                       // 0x028C (size: 0x4)
    float Timeline_0_ItemRotation_E046B3294F9A250C59017ABB8D02F17C;                   // 0x0290 (size: 0x4)
    float Timeline_0_Amount_E046B3294F9A250C59017ABB8D02F17C;                         // 0x0294 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_E046B3294F9A250C59017ABB8D02F17C; // 0x0298 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x02A0 (size: 0x8)
    TEnumAsByte<hand> CurrentSelectedHand;                                            // 0x02A8 (size: 0x1)
    class ABlockItemVR_C* SpawnedBlockItem;                                           // 0x02B0 (size: 0x8)
    bool ReadyForDestroy;                                                             // 0x02B8 (size: 0x1)
    TArray<class UMaterialInterface*> DifferentMats;                                  // 0x02C0 (size: 0x10)
    TArray<class UMaterialInterface*> DifferentMatsChristmas;                         // 0x02D0 (size: 0x10)
    bool IsChristmasGift;                                                             // 0x02E0 (size: 0x1)

    void SetGravityGloveTargetIndicatorActive(bool Active, bool Left, bool& _);
    void GetRealWorldLocation(FVector& Location);
    void DeactivateTelekinesis(class UStaticMeshComponent*& Return);
    void ActivateTelekinesis(TEnumAsByte<hand> hand, bool GravityGlove, class UPrimitiveComponent*& SimulatingComponent);
    void CanTelekinesis(bool LineOfSight, bool& Can, class AActor*& ActorToGrab);
    void Grab(class AFirstPersonCharacterVR_C* Player, class UBoxComponent* HandComponent, class UMeshComponent* HandMesh, class USphereComponent* HandOverlap, class UBoxComponent* OtherHandComponent, class UMeshComponent* OtherHandParentComponent, TEnumAsByte<hand> hand, bool IsDistanceGrab, bool AfterSpawn, class AActor*& GrabbedActorMain, class AActor*& GrabbedActorDirect);
    void Release(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component, bool& success);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void SetObjectRotation(class AVRHandFingers_C* hand, float Percent);
    void ReceiveBeginPlay();
    void Disintegrate();
    void BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Mesh_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_EasterEggBP(int32 EntryPoint);
}; // Size: 0x2E1

#endif
