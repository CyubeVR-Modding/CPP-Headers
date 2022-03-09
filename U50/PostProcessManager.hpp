#ifndef UE4SS_SDK_PostProcessManager_HPP
#define UE4SS_SDK_PostProcessManager_HPP

class APostProcessManager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UPostProcessComponent* Water;                                               // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    bool WaterEnabled;                                                                // 0x0238 (size: 0x1)
    float BlackAmount;                                                                // 0x023C (size: 0x4)
    float BlackAmountFade;                                                            // 0x0240 (size: 0x4)
    class UPPWidget_C* PPWidget;                                                      // 0x0248 (size: 0x8)
    class APostProcessVolume* PPVolume;                                               // 0x0250 (size: 0x8)
    bool HighBloomQuality;                                                            // 0x0258 (size: 0x1)
    bool AlwaysShow;                                                                  // 0x0259 (size: 0x1)
    bool CaptureActive;                                                               // 0x025A (size: 0x1)
    float BloomIntensity;                                                             // 0x025C (size: 0x4)
    FString RealBloomIntensity;                                                       // 0x0260 (size: 0x10)
    bool CurrentlyFadeToColor;                                                        // 0x0270 (size: 0x1)
    float FadeInSeconds;                                                              // 0x0274 (size: 0x4)
    FLinearColor ColorToFadeTo;                                                       // 0x0278 (size: 0x10)
    float FadeUntil;                                                                  // 0x0288 (size: 0x4)

    void SetGeneralBrightness(bool Darker);
    void SetLightshaftIntensity(FString Setting, bool NewColorScheme);
    void SetSaturation(float Saturation);
    void SetBiomeInfo(EBiome Biome1, EBiome Biome2, float LerpPercentage);
    void SetBloomIntensity(FString Setting, bool Real);
    void SetSSAOQuality(int32 Quality);
    void InpActEvt_NumPadFive_K2Node_InputKeyEvent_0(FKey Key);
    void UpdatePP();
    void SetBlackFade(float BlackAmountFade);
    void CheckCaptureActorRef();
    void ReceiveBeginPlay();
    void SetWater(bool Enable);
    void SetBlack(float Amount);
    void FadeToColor(float Seconds, FLinearColor Color);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_PostProcessManager(int32 EntryPoint);
}; // Size: 0x28C

#endif
