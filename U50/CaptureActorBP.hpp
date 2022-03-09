#ifndef UE4SS_SDK_CaptureActorBP_HPP
#define UE4SS_SDK_CaptureActorBP_HPP

class ACaptureActorBP_C : public ACaptureActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UArrowComponent* MoveArrow;                                                 // 0x0288 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0290 (size: 0x8)
    class USceneCaptureComponent2D* SceneCaptureComponent2D;                          // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    int32 CaptureCounter;                                                             // 0x02A8 (size: 0x4)
    bool Move;                                                                        // 0x02AC (size: 0x1)
    float MoveSpeed;                                                                  // 0x02B0 (size: 0x4)
    FVector OriginalLocation;                                                         // 0x02B4 (size: 0xC)
    FVector MoveAroundLocation;                                                       // 0x02C0 (size: 0xC)
    FRotator OriginalRotation;                                                        // 0x02CC (size: 0xC)
    bool Active;                                                                      // 0x02D8 (size: 0x1)
    float OriginalAngle;                                                              // 0x02DC (size: 0x4)
    bool IsManualMovable;                                                             // 0x02E0 (size: 0x1)
    bool DevFOVEnabled;                                                               // 0x02E1 (size: 0x1)
    float DevFOVValue;                                                                // 0x02E4 (size: 0x4)
    bool SmoothMovement;                                                              // 0x02E8 (size: 0x1)
    float SmoothingSpeed;                                                             // 0x02EC (size: 0x4)

    void UserConstructionScript();
    void SetOriginalLocation(FVector OriginalLocation, FVector MoveAroundLocation, FRotator OriginalRotation, float MoveAngle);
    void EndMove();
    void UpdateRotation();
    void SetupFPV();
    void StartMove();
    void EndCaptureBP();
    void SetMirrorTexture();
    void StartCaptureBP();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void UpdateLocation();
    void ExecuteUbergraph_CaptureActorBP(int32 EntryPoint);
}; // Size: 0x2F0

#endif
