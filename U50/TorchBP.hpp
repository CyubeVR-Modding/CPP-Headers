#ifndef UE4SS_SDK_TorchBP_HPP
#define UE4SS_SDK_TorchBP_HPP

class ATorchBP_C : public ATorch
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0258 (size: 0x8)
    class USHISMC_C* SHISMC;                                                          // 0x0260 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0268 (size: 0x8)
    class USphereComponent* OverlapSphere;                                            // 0x0270 (size: 0x8)
    class UParticleSystemComponent* P_Fire_Torch_Regular_Add_LOD;                     // 0x0278 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0280 (size: 0x8)
    class UAudioComponent* Fire01;                                                    // 0x0288 (size: 0x8)
    class UStaticMeshComponent* torch_mount;                                          // 0x0290 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0298 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* FireTorchFBX;                                         // 0x02A8 (size: 0x8)
    class UParticleSystemComponent* FireRegular;                                      // 0x02B0 (size: 0x8)
    class UParticleSystemComponent* FireAdd;                                          // 0x02B8 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x02C0 (size: 0x8)
    float Timeline_0_1_AF8280984BD858CD0B8F8C95C0A8358C;                              // 0x02C8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_AF8280984BD858CD0B8F8C95C0A8358C; // 0x02CC (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x02D0 (size: 0x8)
    TEnumAsByte<hand> CurrentSelectedHand;                                            // 0x02D8 (size: 0x1)
    bool IsPreviewTorch;                                                              // 0x02D9 (size: 0x1)
    bool IsFree;                                                                      // 0x02DA (size: 0x1)
    EBlockTypeBP Type;                                                                // 0x02DB (size: 0x1)
    int32 LOD;                                                                        // 0x02DC (size: 0x4)
    bool L_BehindBack;                                                                // 0x02E0 (size: 0x1)

    void SetGravityGloveTargetIndicatorActive(bool Active, bool Left, bool& _);
    void GetRealWorldLocation(FVector& Location);
    void DeactivateTelekinesis(class UStaticMeshComponent*& Return);
    void ActivateTelekinesis(TEnumAsByte<hand> hand, bool GravityGlove, class UPrimitiveComponent*& SimulatingComponent);
    void CanTelekinesis(bool LineOfSight, bool& Can, class AActor*& ActorToGrab);
    void Release(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component, bool& success);
    void Grab(class AFirstPersonCharacterVR_C* Player, class UBoxComponent* HandComponent, class UMeshComponent* HandMesh, class USphereComponent* HandOverlap, class UBoxComponent* OtherHandComponent, class UMeshComponent* OtherHandParentComponent, TEnumAsByte<hand> hand, bool IsDistanceGrab, bool AfterSpawn, class AActor*& GrabbedActorMain, class AActor*& GrabbedActorDirect);
    void DeactivateLightOnGrab();
    void CanGrabTorch(bool& CanGrab);
    void Check Release Behind Back(class AFirstPersonCharacterVR_C* Player, EControllerHand hand, bool& Result);
    void SetStaticOnWall(bool StaticOnWall);
    void SetMobilityAll(TEnumAsByte<EComponentMobility::Type> NewMobility);
    void ChangeColor(EBlockTypeBP NewType);
    void DetachFromChunkBP();
    void SetSelected(bool Selected, TEnumAsByte<hand> hand);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void SetActive(bool Active);
    void SetActiveBP(bool Enabled);
    void SetActiveM (bool Enabled);
    void SetObjectRotation(class AVRHandFingers_C* hand, float Percent);
    void SetIsPreviewTorch();
    void BndEvt__FireTorchFBX_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void AddToBucket(bool BehindBack);
    void DetachFromChunk();
    void SetColor(FColor Color_, EBlockTypeBP Type);
    void Release_1(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component);
    void SetLOD(int32 LOD);
    void BndEvt__FireTorchFBX_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void SetTrans();
    void SetColorBP(FLinearColor NewLightColor, EBlockTypeBP Type);
    void OverlapBlockItem(class ABlockItemVR_C* Item);
    void ExecuteUbergraph_TorchBP(int32 EntryPoint);
}; // Size: 0x2E1

#endif
