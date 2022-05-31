#ifndef UE4SS_SDK_PostProcessManager_HPP
#define UE4SS_SDK_PostProcessManager_HPP

class APostProcessManager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPostProcessComponent* Water;
    class USceneComponent* DefaultSceneRoot;
    bool WaterEnabled;
    float BlackAmount;
    float BlackAmountFade;
    class UPPWidget_C* PPWidget;
    class APostProcessVolume* PPVolume;
    bool HighBloomQuality;
    bool AlwaysShow;
    bool CaptureActive;
    float BloomIntensity;
    FString RealBloomIntensity;
    bool CurrentlyFadeToColor;
    float FadeInSeconds;
    FLinearColor ColorToFadeTo;
    float FadeUntil;

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
};

#endif
