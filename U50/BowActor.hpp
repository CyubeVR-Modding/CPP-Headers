#ifndef UE4SS_SDK_BowActor_HPP
#define UE4SS_SDK_BowActor_HPP

class ABowActor_C : public AReceiveLightActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UArrowComponent* Arrow3;                                                    // 0x0270 (size: 0x8)
    class UAudioComponent* Audio1;                                                    // 0x0278 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0280 (size: 0x8)
    class UArrowComponent* Arrow2;                                                    // 0x0288 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x0290 (size: 0x8)
    class USkeletalMeshComponent* BowMesh;                                            // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    float Timeline_1_Float_6FAA2A284440C33F25489FA8F6E884A7;                          // 0x02A8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_6FAA2A284440C33F25489FA8F6E884A7; // 0x02AC (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x02B0 (size: 0x8)
    float Timeline_0_Float_21421F6B4A308727060ECABF68CC9E63;                          // 0x02B8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_21421F6B4A308727060ECABF68CC9E63; // 0x02BC (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x02C0 (size: 0x8)
    class USceneComponent* BowHand;                                                   // 0x02C8 (size: 0x8)
    class USceneComponent* ArrowHand;                                                 // 0x02D0 (size: 0x8)
    float MaxStringDistance;                                                          // 0x02D8 (size: 0x4)
    float HandStringLocation;                                                         // 0x02DC (size: 0x4)
    float HandStringLocationLastVib;                                                  // 0x02E0 (size: 0x4)
    bool StretchActive;                                                               // 0x02E4 (size: 0x1)
    class UStaticMeshComponent* ArrowMesh;                                            // 0x02E8 (size: 0x8)
    bool Locked;                                                                      // 0x02F0 (size: 0x1)
    float TImelineValue;                                                              // 0x02F4 (size: 0x4)
    bool LerpToNewRunning;                                                            // 0x02F8 (size: 0x1)
    FRotator OldRotation;                                                             // 0x02FC (size: 0xC)
    bool LerpToOldRunning;                                                            // 0x0308 (size: 0x1)
    bool Enabled;                                                                     // 0x0309 (size: 0x1)
    FTimerHandle StopSoundTimer;                                                      // 0x0310 (size: 0x8)
    bool HMDIsRift;                                                                   // 0x0318 (size: 0x1)
    bool FeedbackActive;                                                              // 0x0319 (size: 0x1)
    bool IsArrowVisible;                                                              // 0x031A (size: 0x1)
    class UGripMotionControllerComponent* GrippedByGrip;                              // 0x0320 (size: 0x8)
    FBowActor_CAttachedArrow AttachedArrow;                                           // 0x0328 (size: 0x10)
    void AttachedArrow();
    class UCurveFloat* ArrowRotationCurve;                                            // 0x0338 (size: 0x8)
    bool bIsRightSideBow;                                                             // 0x0340 (size: 0x1)
    FTimerHandle NotYetShotTimer;                                                     // 0x0348 (size: 0x8)
    bool HaveGrabbedArrowAlreadyThisSession;                                          // 0x0350 (size: 0x1)

    void ShowHintText();
    void DisableGrip(bool bIsRightSide);
    void EnableArrowDrawGrip();
    void EnableGrip(bool bIsRightSide);
    void SetEnabled(bool Enabled, bool bIsRightSide);
    void Init(class USceneComponent* BowHand, class USceneComponent* ArrowHand, class UStaticMeshComponent* ArrowMesh, bool HMDIsRift);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void ReceiveBeginPlay();
    void AttachArrowToHand();
    void AttachArrowToBow();
    void StopPlayingSound();
    void ReceiveTick(float DeltaSeconds);
    void ArrowHandTriggerPressed();
    void PlayVib_CLonk();
    void Shoot();
    void DrawDebugRotation(FVector Loc, FRotator rot, float Thickness);
    void LerpToNew();
    void LerpToOld();
    void PlayVib();
    void UpdateLerpOld();
    void StopLerpOld();
    void StopLerpNew();
    void UpdateArrowRotation();
    void ExecuteUbergraph_BowActor(int32 EntryPoint);
    void AttachedArrow__DelegateSignature();
}; // Size: 0x351

#endif
