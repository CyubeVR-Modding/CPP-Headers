#ifndef UE4SS_SDK_GrabRotateComponent_HPP
#define UE4SS_SDK_GrabRotateComponent_HPP

class UGrabRotateComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    TArray<class UStaticMeshComponent*> OverlapComponents;                            // 0x00B8 (size: 0x10)
    class AVRHandFingers_C* LockCurrentlyOverlappingHand;                             // 0x00C8 (size: 0x8)
    TEnumAsByte<hand> HandGrabbingSide;                                               // 0x00D0 (size: 0x1)
    bool HandGrabbing;                                                                // 0x00D1 (size: 0x1)
    class AVRHandFingers_C* HandGrabbingActor;                                        // 0x00D8 (size: 0x8)
    FVector StartingGrabLocation;                                                     // 0x00E0 (size: 0xC)
    float TopStartRotation;                                                           // 0x00EC (size: 0x4)
    FGrabRotateComponent_CStartedGrab StartedGrab;                                    // 0x00F0 (size: 0x10)
    void StartedGrab();
    FGrabRotateComponent_CEndedGrab EndedGrab;                                        // 0x0100 (size: 0x10)
    void EndedGrab();
    class USceneComponent* RotationPoint;                                             // 0x0110 (size: 0x8)
    TArray<class AVRHandFingers_C*> CurrentlyOverlappingHand;                         // 0x0118 (size: 0x10)
    TArray<class UAudioComponent*> SpawnedSounds;                                     // 0x0128 (size: 0x10)
    float MinAngle;                                                                   // 0x0138 (size: 0x4)
    float MaxAngle;                                                                   // 0x013C (size: 0x4)
    FGrabRotateComponent_CWasRotated WasRotated;                                      // 0x0140 (size: 0x10)
    void WasRotated();
    float SoundLastPlayed;                                                            // 0x0150 (size: 0x4)
    float RotationBefore;                                                             // 0x0154 (size: 0x4)
    FGrabRotateComponent_CUpdateAngleLimitsNowIfRequired UpdateAngleLimitsNowIfRequired; // 0x0158 (size: 0x10)
    void UpdateAngleLimitsNowIfRequired();
    FRotator RotationYZ;                                                              // 0x0168 (size: 0xC)
    bool GrabAllowed;                                                                 // 0x0174 (size: 0x1)

    void OnComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void GrabTopStarted(TEnumAsByte<hand> hand, class AFirstPersonCharacterVR_C* Character, class AVRHandFingers_C* HandActor);
    void GrabTopEndedd(TEnumAsByte<hand> hand, class AFirstPersonCharacterVR_C* Character, class AVRHandFingers_C* HandActor);
    void Init(const TArray<class UStaticMeshComponent*>& OverlapComponents, class USceneComponent* RotationPoint, float MinAngle, float MaxAngle, FRotator RotationYZ);
    void OnComponentEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveTick(float DeltaSeconds);
    void UpdateAngleLimits(float MinAngle, float MaxAngle);
    void ExecuteUbergraph_GrabRotateComponent(int32 EntryPoint);
    void UpdateAngleLimitsNowIfRequired__DelegateSignature();
    void WasRotated__DelegateSignature();
    void EndedGrab__DelegateSignature();
    void StartedGrab__DelegateSignature();
}; // Size: 0x175

#endif
