#ifndef UE4SS_SDK_BlockItemVisual_HPP
#define UE4SS_SDK_BlockItemVisual_HPP

class ABlockItemVisual_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0230 (size: 0x8)
    float GetSmaller_1_51609EB34AF01E9B1477099685074680;                              // 0x0238 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> GetSmaller__Direction_51609EB34AF01E9B1477099685074680; // 0x023C (size: 0x1)
    class UTimelineComponent* GetSmaller;                                             // 0x0240 (size: 0x8)
    class ACharacter* Target;                                                         // 0x0248 (size: 0x8)
    class UMaterialInstanceDynamic* Material;                                         // 0x0250 (size: 0x8)
    EBlockTypeBP BlockType;                                                           // 0x0258 (size: 0x1)
    class UMaterialInstanceDynamic* MaterialInstanceDynamic;                          // 0x0260 (size: 0x8)
    bool Turn;                                                                        // 0x0268 (size: 0x1)
    bool AttachedToCraftRoom ;                                                        // 0x0269 (size: 0x1)
    class ACraftRoom_C* AttachedCraftRoom;                                            // 0x0270 (size: 0x8)
    TEnumAsByte<ItemType> ItemType;                                                   // 0x0278 (size: 0x1)

    void SetGravityGloveTargetIndicatorActive(bool Active, bool Left, bool& _);
    void GetRealWorldLocation(FVector& Location);
    void DeactivateTelekinesis(class UStaticMeshComponent*& Return);
    void ActivateTelekinesis(TEnumAsByte<hand> hand, bool GravityGlove, class UPrimitiveComponent*& SimulatingComponent);
    void CanTelekinesis(bool LineOfSight, bool& Can, class AActor*& ActorToGrab);
    void Release(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component, bool& success);
    void Grab(class AFirstPersonCharacterVR_C* Player, class UBoxComponent* HandComponent, class UMeshComponent* HandMesh, class USphereComponent* HandOverlap, class UBoxComponent* OtherHandComponent, class UMeshComponent* OtherHandParentComponent, TEnumAsByte<hand> hand, bool IsDistanceGrab, bool AfterSpawn, class AActor*& GrabbedActorMain, class AActor*& GrabbedActorDirect);
    void ChangeType(TEnumAsByte<ItemType> ItemType);
    void UpdateItemType(uint8 BlockType);
    void GetSmaller__FinishedFunc();
    void GetSmaller__UpdateFunc();
    void BndEvt__Cube_K2Node_ComponentBoundEvent_281_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Cube_K2Node_ComponentBoundEvent_330_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Destroy();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void SetObjectRotation(class AVRHandFingers_C* hand, float Percent);
    void AttachedToOverlap(EControllerHand Side, class ACraftRoom_C* Room);
    void MarkOverlapOnPlayer(EControllerHand Side);
    void Release_1(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component);
    void ExecuteUbergraph_BlockItemVisual(int32 EntryPoint);
}; // Size: 0x279

#endif
