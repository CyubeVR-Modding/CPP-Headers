#ifndef UE4SS_SDK_GravityGloveActor_HPP
#define UE4SS_SDK_GravityGloveActor_HPP

class AGravityGloveActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* Cone;                                                 // 0x0228 (size: 0x8)
    class UParticleSystemComponent* GravityGloveTargetParticle;                       // 0x0230 (size: 0x8)
    class UStaticMeshComponent* TargetSphere;                                         // 0x0238 (size: 0x8)
    class UArrowComponent* EndLocation;                                               // 0x0240 (size: 0x8)
    class UArrowComponent* StartLocation;                                             // 0x0248 (size: 0x8)
    class USplineMeshComponent* SplineMesh;                                           // 0x0250 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0258 (size: 0x8)
    float FadeTargetAnimIndicator_NewTrack_0_F43B8C9E4565B4E3F979D192AA87B762;        // 0x0260 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> FadeTargetAnimIndicator__Direction_F43B8C9E4565B4E3F979D192AA87B762; // 0x0264 (size: 0x1)
    class UTimelineComponent* FadeTargetAnimIndicator;                                // 0x0268 (size: 0x8)
    EHand hand;                                                                       // 0x0270 (size: 0x1)
    class AFirstPersonCharacterVR_C* ParentCharacter;                                 // 0x0278 (size: 0x8)
    bool CurrentlyActive;                                                             // 0x0280 (size: 0x1)
    bool CurrentlyGrabbingObject;                                                     // 0x0281 (size: 0x1)
    class AActor* CurrentTarget;                                                      // 0x0288 (size: 0x8)
    class UPrimitiveComponent* TargetSimulatingComponent;                             // 0x0290 (size: 0x8)
    float MaxTelekinesisDistance;                                                     // 0x0298 (size: 0x4)
    bool CurrentlyTriggerActiveOnTarget;                                              // 0x029C (size: 0x1)
    bool CurrentlyTriggerActive;                                                      // 0x029D (size: 0x1)
    float VisibilityTarget;                                                           // 0x02A0 (size: 0x4)
    float VisibilityFadeSpeed;                                                        // 0x02A4 (size: 0x4)
    float VisibilityNow;                                                              // 0x02A8 (size: 0x4)
    FTimerHandle ReleaseTimer;                                                        // 0x02B0 (size: 0x8)
    float HandToObjectDistance;                                                       // 0x02B8 (size: 0x4)
    FVector HandTipLocation;                                                          // 0x02BC (size: 0xC)
    bool LastFrameActive;                                                             // 0x02C8 (size: 0x1)
    float LastJumpTime;                                                               // 0x02CC (size: 0x4)
    bool TargetFlyingToHand;                                                          // 0x02D0 (size: 0x1)
    FVector FlyDirection;                                                             // 0x02D4 (size: 0xC)
    class AVRHandFingers_C* HandRef;                                                  // 0x02E0 (size: 0x8)
    class AActor* CurrentFlyingTarget;                                                // 0x02E8 (size: 0x8)
    class UCurveFloat* ImpulseCurve;                                                  // 0x02F0 (size: 0x8)
    bool FlybyCooldown;                                                               // 0x02F8 (size: 0x1)
    float LastHapticClosePlayed;                                                      // 0x02FC (size: 0x4)
    class UPrimitiveComponent* CurrentTargetComponent;                                // 0x0300 (size: 0x8)
    class AActor* HitActor;                                                           // 0x0308 (size: 0x8)

    void MoveActiveObject();
    void Rebuild();
    void DoTrace(bool& HasTarget);
    void UserConstructionScript();
    void FadeTargetAnimIndicator__FinishedFunc();
    void FadeTargetAnimIndicator__UpdateFunc();
    void ReceiveBeginPlay();
    void AquireTarget();
    void ReleaseTarget();
    void SetVisibilityFade(bool Visible);
    void ReleaseTargetDelay();
    void CheckHandFlick();
    void Init(EHand hand, class AFirstPersonCharacterVR_C* ParentCharacter);
    void AddTickPhysicsMovementToTarget();
    void UpdateLocation();
    void Grabbed();
    void NotDoAnything();
    void PlayHapticWhenCloseEnough();
    void ReceiveTick(float DeltaSeconds);
    void PlayFadeAtTarget();
    void DisableIndicatorAtTarget();
    void Activate();
    void Deactivate();
    void ExecuteUbergraph_GravityGloveActor(int32 EntryPoint);
}; // Size: 0x310

#endif
