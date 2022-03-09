#ifndef UE4SS_SDK_BP_AttachedRain_HPP
#define UE4SS_SDK_BP_AttachedRain_HPP

class ABP_AttachedRain_C : public AAttachedRain
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class USceneCaptureComponent2D* SceneCaptureComponent2D;                          // 0x0268 (size: 0x8)
    class UParticleSystemComponent* PS_Rain;                                          // 0x0270 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0278 (size: 0x8)
    TArray<class UAudioComponent*> RainAudioComponentsBP;                             // 0x0280 (size: 0x10)
    float AudioDistanceBP;                                                            // 0x0290 (size: 0x4)
    int32 RowsY_BP;                                                                   // 0x0294 (size: 0x4)
    int32 RowsX_BP;                                                                   // 0x0298 (size: 0x4)
    float TimeTillDestroy;                                                            // 0x029C (size: 0x4)
    bool Cinematic;                                                                   // 0x02A0 (size: 0x1)
    bool Inactive;                                                                    // 0x02A1 (size: 0x1)

    void DestroyAudioComponents();
    void FadeMatBack(class AWeatherManagerBP_C* WeatherManager);
    void UpdateAudioLocationsBP();
    void GetOffsetBP(int32 Indice, float& Offse);
    void InitAudioComponents();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void FadeOutAndDestroy();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void Initialize();
    void PopulateCollectionParameters();
    void ExecuteUbergraph_BP_AttachedRain(int32 EntryPoint);
}; // Size: 0x2A2

#endif
