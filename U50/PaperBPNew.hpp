#ifndef UE4SS_SDK_PaperBPNew_HPP
#define UE4SS_SDK_PaperBPNew_HPP

class APaperBPNew_C : public ADraftUnlockingPaper
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)
    class UAudioComponent* Sound;                                                     // 0x0240 (size: 0x8)
    class UParticleSystemComponent* P_Loot_Idle_Loop;                                 // 0x0248 (size: 0x8)
    class UParticleSystemComponent* P_levelUp_Detail2;                                // 0x0250 (size: 0x8)
    class UStaticMeshComponent* PaperE;                                               // 0x0258 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0260 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0268 (size: 0x8)
    float Timeline_0_Amount_17986A02463FACAAF3572DAA849A810E;                         // 0x0270 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_17986A02463FACAAF3572DAA849A810E; // 0x0274 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0278 (size: 0x8)
    float Dissolve_Amount_DFB4F0014398027AD02C47849C81CA16;                           // 0x0280 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Dissolve__Direction_DFB4F0014398027AD02C47849C81CA16; // 0x0284 (size: 0x1)
    class UTimelineComponent* Dissolve;                                               // 0x0288 (size: 0x8)
    TEnumAsByte<hand> CurrentSelectedHand;                                            // 0x0290 (size: 0x1)
    class UMaterialInstanceDynamic* MaterialInstance;                                 // 0x0298 (size: 0x8)
    bool IsDissolving;                                                                // 0x02A0 (size: 0x1)

    void SetGravityGloveTargetIndicatorActive(bool Active, bool Left, bool& _);
    void GetRealWorldLocation(FVector& Location);
    void DeactivateTelekinesis(class UStaticMeshComponent*& Return);
    void ActivateTelekinesis(TEnumAsByte<hand> hand, bool GravityGlove, class UPrimitiveComponent*& SimulatingComponent);
    void CanTelekinesis(bool LineOfSight, bool& Can, class AActor*& ActorToGrab);
    void Release(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component, bool& success);
    void Grab(class AFirstPersonCharacterVR_C* Player, class UBoxComponent* HandComponent, class UMeshComponent* HandMesh, class USphereComponent* HandOverlap, class UBoxComponent* OtherHandComponent, class UMeshComponent* OtherHandParentComponent, TEnumAsByte<hand> hand, bool IsDistanceGrab, bool AfterSpawn, class AActor*& GrabbedActorMain, class AActor*& GrabbedActorDirect);
    void SetType(EBlockTypeBP Type);
    void SetSelected(bool Selected, TEnumAsByte<hand> hand);
    void UserConstructionScript();
    void Dissolve__FinishedFunc();
    void Dissolve__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BndEvt__Box_K2Node_ComponentBoundEvent_25_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_32_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void SetObjectRotation(class AVRHandFingers_C* hand, float Percent);
    void StartDissolveBP(bool bWithType);
    void UnlockItem();
    void StartDissolve(bool bWithType);
    void Release_1(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component);
    void ReceiveTick(float DeltaSeconds);
    void ShowType();
    void ExecuteUbergraph_PaperBPNew(int32 EntryPoint);
}; // Size: 0x2A1

#endif
