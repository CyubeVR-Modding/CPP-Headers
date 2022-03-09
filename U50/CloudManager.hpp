#ifndef UE4SS_SDK_CloudManager_HPP
#define UE4SS_SDK_CloudManager_HPP

class ACloudManager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    float CurrentDensity;                                                             // 0x0230 (size: 0x4)
    float DensityTarget;                                                              // 0x0234 (size: 0x4)
    class AUltra_Dynamic_Sky_BP_Child2_C* SkyRef;                                     // 0x0238 (size: 0x8)
    float MinDensity;                                                                 // 0x0240 (size: 0x4)
    float MaxDensity;                                                                 // 0x0244 (size: 0x4)
    float NewDensityTime;                                                             // 0x0248 (size: 0x4)
    float InterpSpeed;                                                                // 0x024C (size: 0x4)
    float AuroraTargetIntensity;                                                      // 0x0250 (size: 0x4)
    float CurrentAuroraIntensity;                                                     // 0x0254 (size: 0x4)
    float MinAuroraIntensity;                                                         // 0x0258 (size: 0x4)
    float MaxAuroraIntensity;                                                         // 0x025C (size: 0x4)
    float AuroraInterpSpeed;                                                          // 0x0260 (size: 0x4)

    void SetOneCloudLayer(bool One Cloud Layer);
    void UpdateDensityTarget();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_CloudManager(int32 EntryPoint);
}; // Size: 0x264

#endif
