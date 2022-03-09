#ifndef UE4SS_SDK_Nugget_HPP
#define UE4SS_SDK_Nugget_HPP

class ANugget_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* NuggetMesh;                                           // 0x0228 (size: 0x8)
    float Timeline_0_1_BFD5E63A4BD0D46F8D24B39400AA8676;                              // 0x0230 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_BFD5E63A4BD0D46F8D24B39400AA8676; // 0x0234 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0238 (size: 0x8)
    EBlockTypeBP Type;                                                                // 0x0240 (size: 0x1)
    bool IsFree;                                                                      // 0x0241 (size: 0x1)
    TEnumAsByte<hand> CurrentSelectedHand;                                            // 0x0242 (size: 0x1)
    FVector OriginalScale;                                                            // 0x0244 (size: 0xC)

    void SetGravityGloveTargetIndicatorActive(bool Active, bool Left, bool& _);
    void GetRealWorldLocation(FVector& Location);
    void DeactivateTelekinesis(class UStaticMeshComponent*& Return);
    void ActivateTelekinesis(TEnumAsByte<hand> hand, bool GravityGlove, class UPrimitiveComponent*& SimulatingComponent);
    void CanTelekinesis(bool LineOfSight, bool& Can, class AActor*& ActorToGrab);
    void Release(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component, bool& success);
    void Grab(class AFirstPersonCharacterVR_C* Player, class UBoxComponent* HandComponent, class UMeshComponent* HandMesh, class USphereComponent* HandOverlap, class UBoxComponent* OtherHandComponent, class UMeshComponent* OtherHandParentComponent, TEnumAsByte<hand> hand, bool IsDistanceGrab, bool AfterSpawn, class AActor*& GrabbedActorMain, class AActor*& GrabbedActorDirect);
    void SetSelected(bool Selected, TEnumAsByte<hand> hand);
    void SetType(EBlockTypeBP Type);
    void Randomize();
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void SetObjectRotation(class AVRHandFingers_C* hand, float Percent);
    void AddToBucket();
    void BndEvt__NuggetMesh_K2Node_ComponentBoundEvent_14_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__NuggetMesh_K2Node_ComponentBoundEvent_20_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveBeginPlay();
    void Release_1(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component);
    void ExecuteUbergraph_Nugget(int32 EntryPoint);
}; // Size: 0x250

#endif
