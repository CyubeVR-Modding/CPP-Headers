#ifndef UE4SS_SDK_VRHandFingers_HPP
#define UE4SS_SDK_VRHandFingers_HPP

class AVRHandFingers_C : public AReceiveLightActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UStaticMeshComponent* LeftThumbCone;                                        // 0x0270 (size: 0x8)
    class UArrowComponent* RadialMenuLocation;                                        // 0x0278 (size: 0x8)
    class UStaticMeshComponent* HealthIndicator;                                      // 0x0280 (size: 0x8)
    class USphereComponent* Controller_OverlapBehindBackAdd;                          // 0x0288 (size: 0x8)
    class USphereComponent* SliderOverlap;                                            // 0x0290 (size: 0x8)
    class USteamVRTrackingReferences* SteamVRTrackingReferences;                      // 0x0298 (size: 0x8)
    class UArrowComponent* TempArrow;                                                 // 0x02A0 (size: 0x8)
    class UArrowComponent* ArrowBowDrawLocation;                                      // 0x02A8 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x02B0 (size: 0x8)
    class UBoxComponent* SimulatePhysicsBox;                                          // 0x02B8 (size: 0x8)
    class USphereComponent* Controller_Overlap;                                       // 0x02C0 (size: 0x8)
    class USkeletalMeshComponent* HandMesh;                                           // 0x02C8 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x02D0 (size: 0x8)
    class AFirstPersonCharacterVR_C* ParentCharacter;                                 // 0x02D8 (size: 0x8)
    TEnumAsByte<hand> Side;                                                           // 0x02E0 (size: 0x1)
    FVector OriginalOffset;                                                           // 0x02E4 (size: 0xC)
    FRotator OriginalOffsetRot;                                                       // 0x02F0 (size: 0xC)
    class USkeletalMesh* LeftHandMesh;                                                // 0x0300 (size: 0x8)
    class USkeletalMesh* RightHandMesh;                                               // 0x0308 (size: 0x8)
    TSubclassOf<class UAnimInstance> LeftHandAnimBP;                                  // 0x0310 (size: 0x8)
    TSubclassOf<class UAnimInstance> RightHandAnimBP;                                 // 0x0318 (size: 0x8)
    bool DoConstantCheckForWMR;                                                       // 0x0320 (size: 0x1)
    bool IsGrabSomething;                                                             // 0x0321 (size: 0x1)
    bool bCanGrabSomething;                                                           // 0x0322 (size: 0x1)
    float NoCollisionFeedbackUntil;                                                   // 0x0324 (size: 0x4)
    FVector LastCollisionWorldLocation;                                               // 0x0328 (size: 0xC)

    void CollisionHaptics();
    void SetGlowIndicatorActive(bool Active);
    void SetHandSize(float Percentage);
    void EnableWMROffset(TEnumAsByte<hand> Side);
    void SetVisible(bool Visible);
    void SetAlternativeModeActive(bool Active);
    void Init(class AFirstPersonCharacterVR_C* Parent, TEnumAsByte<hand> Side);
    void SetSide(TEnumAsByte<hand> Side);
    void UserConstructionScript();
    void OnTrackedDeviceActivated(int32 DeviceID, FName DeviceClass, FString DeviceModel);
    void ReceiveBeginPlay();
    void GrabSomething(TEnumAsByte<HandPoseEnum> Type, bool PlaySound);
    void NoLongerGrip();
    void CanGrabSomething(TEnumAsByte<HandPoseEnum> Type);
    void IfCanGrabOpen();
    void ReceiveTick(float DeltaSeconds);
    void SetWorldScale(FVector Scale);
    void SetVisibility(bool Visible);
    void ExecuteUbergraph_VRHandFingers(int32 EntryPoint);
}; // Size: 0x334

#endif
