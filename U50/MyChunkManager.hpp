#ifndef UE4SS_SDK_MyChunkManager_HPP
#define UE4SS_SDK_MyChunkManager_HPP

class AMyChunkManager_C : public AChunkManager
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x2460 (size: 0x8)
    float BiomeTransitionTimeline_NewTrack_0_225DF62E40B9F962D883E1864F070B0F;        // 0x2468 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> BiomeTransitionTimeline__Direction_225DF62E40B9F962D883E1864F070B0F; // 0x246C (size: 0x1)
    class UTimelineComponent* BiomeTransitionTimeline;                                // 0x2470 (size: 0x8)
    class AInventoryBP_C* InventoryBP;                                                // 0x2478 (size: 0x8)
    TMap<class FString, class FString> GraphicSettings;                               // 0x2480 (size: 0x50)
    TMap<class FString, class FString> GraphicSettingsHighPreset;                     // 0x24D0 (size: 0x50)
    class AUltra_Dynamic_Sky_BP_Child2_C* SkyRef;                                     // 0x2520 (size: 0x8)
    class ADirectionalLight* LightRef;                                                // 0x2528 (size: 0x8)
    class ACloudManager_C* CloudManager;                                              // 0x2530 (size: 0x8)
    class AMusicManager_C* MusicManager;                                              // 0x2538 (size: 0x8)
    class APostProcessManager_C* PostProcessManager;                                  // 0x2540 (size: 0x8)
    class USGGraphicsSettings_C* GraphicsSGObject;                                    // 0x2548 (size: 0x8)
    TMap<class FString, class FString> GraphicsSettingsDefault;                       // 0x2550 (size: 0x50)
    TMap<class FString, class FString> GraphicsSettingsToUse;                         // 0x25A0 (size: 0x50)
    TMap<class EBlockTypeBP, class UParticleSystem*> TorchParticleReguar;             // 0x25F0 (size: 0x50)
    TMap<class EBlockTypeBP, class UParticleSystem*> TorchParticleAdd;                // 0x2640 (size: 0x50)
    TMap<class EBlockTypeBP, class UParticleSystem*> TorchParticleLOD;                // 0x2690 (size: 0x50)
    float ResolutionOffset;                                                           // 0x26E0 (size: 0x4)
    float MusicVolume;                                                                // 0x26E4 (size: 0x4)
    EBiome BiomeTransitionFrom;                                                       // 0x26E8 (size: 0x1)
    EBiome BiomeTransitionTo;                                                         // 0x26E9 (size: 0x1)
    float BiomeCurrentTransitionValue;                                                // 0x26EC (size: 0x4)
    bool AstronautDeer;                                                               // 0x26F0 (size: 0x1)
    float AA_Strength;                                                                // 0x26F4 (size: 0x4)
    class AWeatherManagerBP_C* WeatherManagerBP;                                      // 0x26F8 (size: 0x8)
    float Saturation;                                                                 // 0x2700 (size: 0x4)
    float DayLength;                                                                  // 0x2704 (size: 0x4)
    float NightLength;                                                                // 0x2708 (size: 0x4)
    float ScreenshotMultiplier;                                                       // 0x270C (size: 0x4)
    float HandSize;                                                                   // 0x2710 (size: 0x4)
    float SmoothTurnSpeed;                                                            // 0x2714 (size: 0x4)
    float SmoothLocoSpeed;                                                            // 0x2718 (size: 0x4)
    bool DistanceFieldShadowsEnabled;                                                 // 0x271C (size: 0x1)
    bool ViewDistanceOver50;                                                          // 0x271D (size: 0x1)
    bool ToolHitItemSmoke;                                                            // 0x271E (size: 0x1)
    float Sharpness;                                                                  // 0x2720 (size: 0x4)
    float BucketAnglePitch;                                                           // 0x2724 (size: 0x4)
    float BucketAngleRoll;                                                            // 0x2728 (size: 0x4)

    bool MovePlayerToStartLocation(FVector Location);
    void GetNewBlockItemBP(EBlockTypeBP BlockType, int32 UniqueId, const FTransform& NewTransform, int32 Amount, bool DoFadeScale, FColor CrystalColor, float ChargeState, bool ActivatePhysics, class ABlockItemVR_C*& BlockItem);
    void StartBiomeTransition(EBiome From, EBiome To);
    void ResetGraphicsSettingsAfterScreenshot();
    void SetupGraphicsSettingsForScreenshot();
    void ApplyGraphicsSliders();
    class ADraftUnlockingPaper* SpawnDraftUnlocker(FVector Location, EBlockTypeBP Type);
    void LoadGraphicsFromDisk();
    void SaveGraphicsToDisk();
    void ApplyGraphicsSettingInWorld(FString Name, FString Option);
    void ApplyGraphicSettingsOnWidgets(class USettingsUI_New_C* SettingsWidget);
    void InitGraphicSettings();
    void SetGraphicsSetting(FString Name, FString Option, class USettingsUI_New_C* SettingsWidget);
    void BiomeTransitionTimeline__FinishedFunc();
    void BiomeTransitionTimeline__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void UpdateSkyEvent(float NewTimeOfDay);
    void RunBiomeTransition();
    void SetDevRecordingMode();
    void CheckTimeChange();
    void InitChargeColor();
    void HaveUnlockedAllRecipes();
    void ExecuteUbergraph_MyChunkManager(int32 EntryPoint);
}; // Size: 0x272C

#endif
