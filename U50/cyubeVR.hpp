#ifndef UE4SS_SDK_cyubeVR_HPP
#define UE4SS_SDK_cyubeVR_HPP

#include "cyubeVR_enums.hpp"

class AAttachedRain : public AActor
{
    bool bTemporary;                                                                  // 0x0220 (size: 0x1)
    class USceneCaptureComponent* SceneCapture;                                       // 0x0228 (size: 0x8)
    TArray<class UAudioComponent*> RainAudioComponents;                               // 0x0230 (size: 0x10)
    bool bHasAudio;                                                                   // 0x0240 (size: 0x1)
    float AudioDistance;                                                              // 0x0244 (size: 0x4)
    int32 RowsX;                                                                      // 0x0248 (size: 0x4)
    int32 RowsY;                                                                      // 0x024C (size: 0x4)

    void UpdateAudioLocations();
}; // Size: 0x260

class AAudioManager : public AActor
{
    TArray<class USoundBase*> NatureSoundsDay;                                        // 0x0258 (size: 0x10)
    TArray<class USoundBase*> NatureSoundsNight;                                      // 0x0268 (size: 0x10)
    TArray<class USoundBase*> NatureSoundsDayDesert;                                  // 0x0278 (size: 0x10)
    TArray<class USoundBase*> NatureSoundsNightDesert;                                // 0x0288 (size: 0x10)
    class USoundBase* BirdCue;                                                        // 0x0298 (size: 0x8)
    class USoundClass* SoundClassDay;                                                 // 0x02A0 (size: 0x8)
    class USoundClass* SoundClassNight;                                               // 0x02A8 (size: 0x8)
    class USoundClass* SoundClassMaster;                                              // 0x02B0 (size: 0x8)
    float SnowVolumeMultiplier;                                                       // 0x02B8 (size: 0x4)
    float GeneralVolumeMultiplier;                                                    // 0x02BC (size: 0x4)

}; // Size: 0x2C0

class ABenchmarkActor : public AActor
{
    int32 AmountFramesWithWrongTime;                                                  // 0x023C (size: 0x4)

    bool WereSteamVRSettingsModified();
    void StoreExistingSteamVRSettings();
    void StopBenchmark();
    void StartBenchmark();
    void SetupChaperoneForBenchmark(bool Benchmark);
    void SetSteamVRSettingsModified(bool Modified);
    void SetSteamVRSettings(bool Edit1, bool Edit2, bool Edit3, bool Edit4, bool ManualSS, float SSValue, bool MotionSmoothing, int32 SSValuePerApp, bool ForceDisableAsync);
    void SetSSValue(int32& Result);
    void SetSSPerAppValue(int32& Result);
    void SetMotionSmoothing(bool Enabled);
    void SetForceDisableAsyncReproForApp();
    void SetAudioSetting(bool bValue);
    void SetAsyncRepro(bool Enabled, int32& Result);
    void RestoreSteamVRSettings();
    void IsSteamVRHMDValid(bool& ValidHMD);
    bool IsRenderingActiveEnough();
    void GetSystemInfo(FString& CPU, FString& GPU, int32& Cores, int32& Threads, FString& OSName, FString& DriverVersionName, int32& SystemMemory, int32& VideoMemory);
    void GetSteamVRSettings(bool& ReproCorrect, bool& SSCorrect, bool& SSCorrectPerApp, bool& DashboardCorrect, bool& MotionSmoothingCorrect);
    void GetRenderingResolution(int32& H, int32& W);
    void GetHMDModelData(FString& ModelName, FString& ManufacturerName, float& DisplayFrequency, float& HorizontalFOVPerEye, float& VerticalFOVPerEye, FString& SteamVRVersion);
    void GetGPUName(FString& GPU);
    void GetFPS(float& FPS, float& FrametimeMS);
    void GetBenchmarkResults(float& AverageFPS, float& AverageFrametime, float& Low1Percent, float& Low001Percent, bool& ActiveRendering);
    bool GetAudioSetting();
    void EncodeScoreDetails(TArray<int32>& DetailsArray, FString CPUName, FString HeadsetName, FString GPUName, bool ShowName, int32 ResX, int32 ResY, int32 Version);
    void DisableMinimizeButton();
    void DecodeScoreDetails(TArray<int32> DetailsArray, FString& GPU, FString& CPU, FString& HeadsetName, bool& ShowName, int32& ResX, int32& ResY);
    void CopyToClipboardForReddit(FString FPS, FString FPSAverageNoFormatting, FString FPS1Low, FString FPS03Low, FString HMDName, FString res, FString RefreshRate, FString HorizontalFOV, FString VerticalFOV, FString RenderedPPD, FString GPU, FString GPUMemory, FString GPUDriver, FString CPU, FString CoresThreads, FString RAM, FString Windows, FString SteamVR, FString OpenVRBenchmark);
    void BenchmarkFinishedEvent();
    void ApplyAudioSetting();
}; // Size: 0x240

class ABenchmarkLeaderboardManager : public AActor
{
}; // Size: 0x220

struct FEntryData
{
    FString Rank;                                                                     // 0x0000 (size: 0x10)
    FString RankSameHeadset;                                                          // 0x0010 (size: 0x10)
    FString RankSameGPU;                                                              // 0x0020 (size: 0x10)
    FString RankSameHeadsetAndGPU;                                                    // 0x0030 (size: 0x10)
    FString score;                                                                    // 0x0040 (size: 0x10)
    int32 ScoreOriginal;                                                              // 0x0050 (size: 0x4)
    FString GPU;                                                                      // 0x0058 (size: 0x10)
    FString CPU;                                                                      // 0x0068 (size: 0x10)
    FString HeadsetName;                                                              // 0x0078 (size: 0x10)
    FString UserName;                                                                 // 0x0088 (size: 0x10)
    FString res;                                                                      // 0x0098 (size: 0x10)
    int32 ResOriginalX;                                                               // 0x00A8 (size: 0x4)
    int32 ResOriginalY;                                                               // 0x00AC (size: 0x4)
    bool IsCurrentUser;                                                               // 0x00B0 (size: 0x1)

}; // Size: 0xB8

class UBenchmarkLeaderboardsCPP : public UUserWidget
{
    class UScrollBox* ScrollBox_Entries;                                              // 0x0260 (size: 0x8)
    TSubclassOf<class UUserWidget> EntryWidgetClass;                                  // 0x0268 (size: 0x8)
    TArray<class ULeaderboardEntryCPP*> FakeEntryList;                                // 0x0270 (size: 0x10)
    int32 ArraySetting;                                                               // 0x0280 (size: 0x4)

    void UpdateFakeList(int32 Offset, int32& AmountToShow);
    void SetShowNameOwnResult(bool ShowName);
    void PopulateScrollBox(class UGameInstance* GameInstance, const FUWorksSteamLeaderboardEntries& Entries, int32 EntryCount, FString CurrentHeadsetName, FString CurrentGPUName, int32 CurrentResX, int32 CurrentResY, int32 ActualResultThisRun);
    void OpenSteamOverlayToDLC(int32 AppID);
    bool GetOwnEntryResultData(FEntryData& OwnResultEntryData);
    void GetAverageDeviation(float& Difference);
    void DeleteOwnEntryResult();
}; // Size: 0x2E8

class AReceiveLightActor : public AActor
{
    bool InitLightImmediate;                                                          // 0x0250 (size: 0x1)
    bool bUseLightAroundValue;                                                        // 0x0251 (size: 0x1)
    TArray<class UMeshComponent*> LightReceiveMeshes;                                 // 0x0258 (size: 0x10)

    bool UseLightAroundValue();
    void SetLightReceiveMeshes(TArray<class UMeshComponent*> NewMeshes);
    FVector ManualTickLight(class UMaterialInstanceDynamic* DynamicMaterial);
    TArray<class UMeshComponent*> GetMeshComponents();
}; // Size: 0x268

class ABlockItem : public AReceiveLightActor
{
    EBlockTypeBP BlockType;                                                           // 0x0268 (size: 0x1)
    int32 UniqueId;                                                                   // 0x026C (size: 0x4)
    FColor CrystalColor;                                                              // 0x0270 (size: 0x4)
    float ChargeState;                                                                // 0x0274 (size: 0x4)
    float LastRechargeTime;                                                           // 0x0278 (size: 0x4)
    bool bOnFire;                                                                     // 0x027C (size: 0x1)
    float Health;                                                                     // 0x0280 (size: 0x4)
    float MeltAmount;                                                                 // 0x0284 (size: 0x4)
    bool bLoadedScale;                                                                // 0x0288 (size: 0x1)
    EBlockTypeBP CurrentResult;                                                       // 0x0289 (size: 0x1)
    TArray<class ABlockItem*> AttachedItemsC;                                         // 0x0290 (size: 0x10)
    class UBoxComponent* BoxCollision;                                                // 0x02A0 (size: 0x8)
    TArray<class UTextRenderComponent*> TextAmounts;                                  // 0x02A8 (size: 0x10)
    bool IsChestItem;                                                                 // 0x02B8 (size: 0x1)
    bool bSpecialCosmeticItem;                                                        // 0x02B9 (size: 0x1)
    class UMaterialInstanceDynamic* CrystalMaterial;                                  // 0x02C0 (size: 0x8)
    class UParticleSystemComponent* ChargingParticleSystem;                           // 0x02C8 (size: 0x8)
    FString Debug_LastPhysicsEnableFrom;                                              // 0x02D0 (size: 0x10)
    float Debug_LastPhysicsEnableFromTime;                                            // 0x02E0 (size: 0x4)

    void WriteLastRecipeToDisk();
    void UpdateItemType(EBlockTypeBP NewType, int32 NewUniqueID, class AChunkManager* ChunkManager);
    void SetDebugLastPhysicsEnable(FString Reason);
    void SetCrystalProperties();
    void ResetToPoolBP();
    void RemoveFromOverlap();
    float GetHealthReduceOnFire();
    void FullyChargedNow();
    void FullUpdate(int32 Amount, EBlockTypeBP NewType, int32 NewUniqueID, bool DirectFromLoad);
    void DestroyToPool(FString FunctionName);
    void CheckRemove(class ABlockItem* RemovedItem, TArray<class ABlockItem*>& NeedRemoveToo, bool& AllowRemove);
    void CheckItems(bool& success, EBlockTypeBP& Result, int32& Amount, int32& OutUniqueID);
    bool CanBeLitOnFire();
    void AllowRelease(bool& Allow);
}; // Size: 0x2F8

class ACaptureActor : public AActor
{
    class USceneCaptureComponent2D* Source;                                           // 0x0220 (size: 0x8)
    int32 SizeX;                                                                      // 0x0228 (size: 0x4)
    int32 SizeY;                                                                      // 0x022C (size: 0x4)

    void StartCapture();
    void EndCapture();
}; // Size: 0x280

class AMeshObject : public AReceiveLightActor
{
    EBlockTypeBP Type;                                                                // 0x0268 (size: 0x1)
    float Life;                                                                       // 0x026C (size: 0x4)
    bool Destroyed;                                                                   // 0x0270 (size: 0x1)
    bool bDoInstantDestroy;                                                           // 0x0271 (size: 0x1)
    class UBoxComponent* OverlapBoundingBox;                                          // 0x0278 (size: 0x8)
    TArray<class UStaticMeshComponent*> PreviewMaterialIgnoreComponents;              // 0x0280 (size: 0x10)

    void SetReadyForSaving();
    void SetPreviewValid(bool IsValid);
    void SetIsPreview(bool IsPreview);
    void MarkForSave();
    void DestroyMeshObject();
    void DestroyEvent();
    void DamageMeshObject(float Damage, bool& Destroyed_);
    bool CanDamageObject();
}; // Size: 0x2A8

class AChest : public AMeshObject
{
    class AChestInternals* ChestInternals;                                            // 0x02A8 (size: 0x8)

    bool UseActorCustomLocation();
    void SetChestRotation(FRotator rot);
    FRotator GetChestRotation();
    FVector GetActorCustomLocation();
}; // Size: 0x2B0

struct FStorageItem
{
    EBlockTypeBP Type;                                                                // 0x0000 (size: 0x1)
    uint8 Amount;                                                                     // 0x0001 (size: 0x1)
    FColor CrystalColor;                                                              // 0x0004 (size: 0x4)
    float ChargeState;                                                                // 0x0008 (size: 0x4)

}; // Size: 0xC

class AStorage : public AActor
{
    TArray<FStorageItem> items;                                                       // 0x0220 (size: 0x10)
    TArray<int32> UniqueIDs;                                                          // 0x0230 (size: 0x10)
    int32 SlotLimit;                                                                  // 0x0240 (size: 0x4)
    bool bAllowShrinkOnLoad;                                                          // 0x0244 (size: 0x1)

    bool TryToShrink();
    bool IsItemStackable(EBlockTypeBP Item);
    bool IsItemPlacable(EBlockTypeBP Item);
    bool IsFullyEmpty();
    EItemClass GetItemClass(EBlockTypeBP Item);
    int32 GetAmountAtIndex(int32 Index);
    int32 GetAmount(EBlockTypeBP Item, int32 UniqueId);
    int32 FindFittingIndex(EBlockTypeBP ToAdd, int32 Amount, int32 UniqueId);
    int32 FindAmountFree(EBlockTypeBP ToAdd, int32 UniqueId);
    void AddItemToSlotFromOtherChest(int32 ToIndex, int32 FromChestIndex, EBlockTypeBP Type, class AChestInternals* OtherChest, bool& success);
    bool AddItem(int32& Index, EBlockTypeBP ToAdd, int32 UniqueId, FColor CrystalColor, float ChargeState);
}; // Size: 0x248

class AChestInternals : public AStorage
{
    bool Initialized;                                                                 // 0x0258 (size: 0x1)

    void UpdateVisualsEvent(bool MarkForSave);
    void RemoveSingleItemFromSlot(int32 FromIndex, bool& success);
    void InitializeChestInternals(class AInventory* Inventory_, class AChest* ParentChest_);
    void AddItemToSlot(EBlockTypeBP ToAdd, int32 ToAddID, float ToAddChargeState, FColor ToAddCrystalColor, int32 Amount, int32 ToIndex, int32 FromInventoryIndex, bool& success);
}; // Size: 0x260

struct FChunkAboutBP
{
    int32 ChunkID;                                                                    // 0x0000 (size: 0x4)
    int32 LevelLOD;                                                                   // 0x0004 (size: 0x4)
    int32 LocationX;                                                                  // 0x0008 (size: 0x4)
    int32 LocationY;                                                                  // 0x000C (size: 0x4)
    float SpawnTime;                                                                  // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FBlockInfoBP
{
    FChunkAboutBP ChunkAbout;                                                         // 0x0008 (size: 0x14)
    int32 X;                                                                          // 0x001C (size: 0x4)
    int32 Y;                                                                          // 0x0020 (size: 0x4)
    int32 Z;                                                                          // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FModifiedBlockActorToSpawn
{
    EBlockTypeBP BlockType;                                                           // 0x0000 (size: 0x1)
    int32 UniqueId;                                                                   // 0x0004 (size: 0x4)
    FVector Location;                                                                 // 0x0008 (size: 0xC)
    FBlockInfoBP BlockInfo;                                                           // 0x0018 (size: 0x28)
    float Damage;                                                                     // 0x0040 (size: 0x4)
    bool IsForMove;                                                                   // 0x0044 (size: 0x1)

}; // Size: 0x48

class AChunkManager : public AActor
{
    bool ForceKnucklesControls;                                                       // 0x03F0 (size: 0x1)
    TArray<class ABlockItem*> BlockItemPool;                                          // 0x04C0 (size: 0x10)
    bool InitialLoadFinished;                                                         // 0x0612 (size: 0x1)
    int32 ViewDistanceByINI;                                                          // 0x11CC (size: 0x4)
    bool DoAnything;                                                                  // 0x11D0 (size: 0x1)
    bool DevMode;                                                                     // 0x11D1 (size: 0x1)
    bool DevModeLoadWorld;                                                            // 0x11D2 (size: 0x1)
    bool BenchmarkDevMode;                                                            // 0x11D3 (size: 0x1)
    int32 N_Type;                                                                     // 0x11D4 (size: 0x4)
    int32 N_Octaves;                                                                  // 0x11D8 (size: 0x4)
    float N_Frequency;                                                                // 0x11DC (size: 0x4)
    float N_Lacunarity;                                                               // 0x11E0 (size: 0x4)
    float N_Gain;                                                                     // 0x11E4 (size: 0x4)
    float N_Scale;                                                                    // 0x11E8 (size: 0x4)
    int32 N_Interp;                                                                   // 0x11EC (size: 0x4)
    int32 N_FracType;                                                                 // 0x11F0 (size: 0x4)
    int32 N_Seed;                                                                     // 0x11F4 (size: 0x4)
    UClass* DeerClass;                                                                // 0x11F8 (size: 0x8)
    UClass* RabbitClass;                                                              // 0x1200 (size: 0x8)
    UClass* MonitorLizardClass;                                                       // 0x1208 (size: 0x8)
    UClass* GeckoClass;                                                               // 0x1210 (size: 0x8)
    UClass* TorchClass;                                                               // 0x1218 (size: 0x8)
    UClass* TorchStandingClass;                                                       // 0x1220 (size: 0x8)
    UClass* TorchRespawnClass;                                                        // 0x1228 (size: 0x8)
    UClass* DeathBeaconClass;                                                         // 0x1230 (size: 0x8)
    UClass* BlockItemBPClass;                                                         // 0x1238 (size: 0x8)
    UClass* TreeBPClass;                                                              // 0x1240 (size: 0x8)
    UClass* CactusBPClass;                                                            // 0x1248 (size: 0x8)
    UClass* DesertGrassBPClass;                                                       // 0x1250 (size: 0x8)
    UClass* LogBPClass;                                                               // 0x1258 (size: 0x8)
    UClass* ModifiedBlockActorBPClass;                                                // 0x1260 (size: 0x8)
    class UMaterialParameterCollection* FogParameters;                                // 0x1268 (size: 0x8)
    class UParticleSystem* TreeEmitter;                                               // 0x1270 (size: 0x8)
    UClass* CustomAudioComponentClass;                                                // 0x1278 (size: 0x8)
    UClass* EasterEggClass;                                                           // 0x1280 (size: 0x8)
    class AActor* SphereActor;                                                        // 0x1288 (size: 0x8)
    class ATreeManager* TreeManager;                                                  // 0x1290 (size: 0x8)
    class AActor* WorldTrackingActor;                                                 // 0x1298 (size: 0x8)
    class AActor* NavMeshBoundsVolume;                                                // 0x12A0 (size: 0x8)
    TMap<class EBlockTypeBP, class EBlockTypeBP> ItemToSpawn;                         // 0x12A8 (size: 0x50)
    TMap<EBlockTypeBP, int32> AmountToSpawn;                                          // 0x12F8 (size: 0x50)
    TMap<class EBlockTypeBP, class USoundBase*> MiningHitSound;                       // 0x1348 (size: 0x50)
    TMap<class EBlockTypeBP, class USoundBase*> MiningEndSound;                       // 0x1398 (size: 0x50)
    TMap<class EBlockTypeBP, class USoundBase*> BlockSpawnSound;                      // 0x13E8 (size: 0x50)
    TMap<class EBlockTypeBP, class UClass*> MeshObjectsTypeToClass;                   // 0x1438 (size: 0x50)
    float SkyTime;                                                                    // 0x1488 (size: 0x4)
    bool SkyIsDay;                                                                    // 0x148C (size: 0x1)
    bool RecordingDevMode;                                                            // 0x14F0 (size: 0x1)
    class UMaterialParameterCollection* FogParameter;                                 // 0x1550 (size: 0x8)
    bool PlayerNeedsPositionUpdateAfterLoad;                                          // 0x1620 (size: 0x1)
    class AInventory* Inventory;                                                      // 0x1770 (size: 0x8)
    class ADirectionalLight* Sun;                                                     // 0x1778 (size: 0x8)
    class AAudioManager* AudioManager;                                                // 0x1780 (size: 0x8)
    class AWeatherManager* WeatherManager;                                            // 0x1788 (size: 0x8)
    class UDataTable* TableMiningDamage;                                              // 0x1790 (size: 0x8)
    class UDataTable* TableMiningAmount;                                              // 0x1798 (size: 0x8)
    class UDataTable* TableMiningParticle;                                            // 0x17A0 (size: 0x8)
    class UDataTable* TableMiningParticleHold;                                        // 0x17A8 (size: 0x8)
    class UDataTable* TableMiningSound;                                               // 0x17B0 (size: 0x8)
    class UDataTable* TableHitSoundHard;                                              // 0x17B8 (size: 0x8)
    class UDataTable* TableHitSoundLight;                                             // 0x17C0 (size: 0x8)
    TArray<EBlockTypeBP> RecipeUnlockOrder;                                           // 0x23E8 (size: 0x10)
    class UStaticMesh* FoliageGrassMesh;                                              // 0x23F8 (size: 0x8)
    class UStaticMesh* FoliageLeavesMesh;                                             // 0x2400 (size: 0x8)
    class UStaticMesh* BirdMesh;                                                      // 0x2408 (size: 0x8)
    class UMaterialInterface* ChunkMatRegular;                                        // 0x2410 (size: 0x8)
    class UMaterialInterface* ChunkMatGlass;                                          // 0x2418 (size: 0x8)
    class UMaterialInterface* ChunkMatWaterRegular;                                   // 0x2420 (size: 0x8)
    class UMaterialInterface* GrassMaterial;                                          // 0x2428 (size: 0x8)
    class UMaterialInterface* MeshObjectPreviewMaterial;                              // 0x2430 (size: 0x8)
    class UMaterialInterface* ChunkMatLODRegular;                                     // 0x2438 (size: 0x8)
    class UMaterialInterface* ChunkMatLODFade;                                        // 0x2440 (size: 0x8)
    class UMaterialInterface* ChunkMatLODWRegular;                                    // 0x2448 (size: 0x8)
    class UMaterialInterface* ChunkMatLODWRegularFar;                                 // 0x2450 (size: 0x8)
    class UMaterialInterface* ChunkMatLODWFade;                                       // 0x2458 (size: 0x8)

    void UpdateSkyEvent(float NewTimeOfDay);
    void UpdateLightValueForActorImmediateGT(class AActor* Actor);
    void UnlockedDraftNew(class ADraftUnlockingPaper* UnlockedActor);
    void TestFunction();
    TArray<class AModifiedBlockActor*> SpawnModifiedBlockActorsAndInit(const TArray<FModifiedBlockActorToSpawn>& SpawnInfos, EBlockTypeBP ToolType);
    class ADraftUnlockingPaper* SpawnDraftUnlocker(FVector Location, EBlockTypeBP Type);
    class ADeathBeacon* SpawnDeathBeacon(FVector WorldLocation, bool FirstSpawn);
    void SpawnBlockItem(EBlockTypeBP Type, int32 UniqueId, FVector WorldLocation, FRotator WorldRotation);
    bool ShouldCharacterFall(FVector FloorLocation);
    void SetDevRecordingMode();
    void SetBlockItemsNeedToOverlapHand(bool bNeedToOverlap);
    void RemoveTreeAtLocation(const FVector WorldLocation, ETreeType Type, class AActor* Tree, bool& Valid);
    void RemoveDeathBeaconAtLocation(FVector WorldLocation);
    void RemoveBlockFinal(FBlockInfoBP BlockInfo, bool& AboveRemoved, FVector& AboveLocation, EBlockTypeBP& Type);
    void RemoveBlockAtLocation(const FVector Location, EBlockTypeBP& Type, int32& UniqueId, bool& Valid, FBlockInfoBP& BlockInfo, class AModifiedBlockActor*& ExistingModifiedBlockActor);
    void RemoveAllBirds();
    void RegisterMeshObject(EBlockTypeBP Type, class AMeshObject* MeshObject, bool& success);
    FIntVector RealWorldToAbsoluteWorldInt(FVector RealWorld);
    void PrintToLogBP(FString Text);
    bool MovePlayerToStartLocation(FVector Location);
    void MovePlayerToRespawnLocation(FVector CameraOffset, bool& FoundRespawnTorch);
    bool IsWaitingForNewOrigin();
    bool IsTorchType(EBlockTypeBP Type);
    void IsToolCausingAreaDamage(EBlockTypeBP Type, bool& AreaDamage);
    bool IsRespawnTorchActive(FVector WorldLocation);
    bool IsRecipeUnlocked(EBlockTypeBP Type);
    bool IsFoliageType(EBlockTypeBP Type);
    void IsFirstWorldLoad(bool& _DevMode, bool& _DevModeLoadWorld);
    bool IsDyeType(EBlockTypeBP Type);
    void HitBlockWithArrow(const FVector Location, EBlockTypeBP& HitType, bool& Valid);
    void HaveUnlockedAllRecipes();
    void GetWorldSomething();
    void GetTreeClass(ETreeType Type, ETreeClass& ItemClass);
    EBlockTypeBP GetTorchForDye(EBlockTypeBP Type);
    FColor GetTorchColor(EBlockTypeBP Type);
    void GetTextureIndexStatic(const EBlockTypeBP Type, int32 UniqueId, SideBP Side, float& Index);
    void GetTextureIndex(const EBlockTypeBP Type, int32 UniqueId, SideBP Side, float& Index);
    void GetNewBlockItem(FTransform NewTransform, class ABlockItem*& NewBlockItem, bool ActivatePhysics);
    class USoundBase* GetMiningSoundForBlockAndTool(EBlockTypeBP Type, EBlockTypeBP Tool, bool& Result);
    class UParticleSystem* GetMiningParticleHoldForBlockAndTool(EBlockTypeBP Type, EBlockTypeBP Tool, bool& Result);
    class UParticleSystem* GetMiningParticleForBlockAndTool(EBlockTypeBP Type, EBlockTypeBP Tool, bool& Result);
    void GetMiningDamageForBlockAndTool(EBlockTypeBP Type, EBlockTypeBP Tool, bool& Result, float& Damage);
    void GetMiningAmountForBlockAndTool(EBlockTypeBP Type, EBlockTypeBP Tool, bool& Result, float& AmountFloat, int32& AmountRound);
    void GetMeshObjectType(EBlockTypeBP Type, EMeshObjectType& MeshObjectType);
    void GetItemClass(EBlockTypeBP Type, EItemClass& ItemClass, bool& CanExistAsItem);
    class USoundBase* GetHitSoundForBlockAndTool(EBlockTypeBP Type, EBlockTypeBP Tool, bool HardHit, bool& Result);
    EBlockTypeBP GetDyeForFlower(EBlockTypeBP Type);
    void GetDevModeBP(bool& _DevMode, bool& _DevModeLoadWorld);
    void GetChunkWorldFormatAtLocation(const FVector& Location, int32& ChunkWorldFormat, int32& ChunkID);
    void GetBlockBelowPlayer(FVector CameraLocation, EBlockTypeBP& BlockType);
    void GetBlockAtLocation(FVector Location, EBlockTypeBP& Type, int32& UniqueId, FChunkAboutBP& Chunk);
    void GetBiomeAtLocation(FVector Location, EBiome& BiomeType, FChunkAboutBP& Chunk);
    FIntVector GetAbsolutePlayerCameraLocation();
    void FindExistingWorldData(TArray<FString>& Names, TArray<int32>& Seeds, bool& success);
    float FindDistanceToClosestBlock(FVector Location);
    void EndWorld();
    bool DoesRespawnTorchExist(int32& Amount);
    bool DidAlreadyCollectEasterEggAtLocation(FVector Location);
    void DestroyBlockItem(class ABlockItem* BlockItem, FString FunctionName);
    bool DeleteWorld(FString WorldName);
    void DeleteAllFreeCrystals();
    void DamageBlockAtLocation(const FVector Location, const float Damage, EBlockTypeBP& Type, int32& UniqueId, bool& Valid, bool& NeedSpawnBlockActor, class AModifiedBlockActor*& ExistingModifiedBlockActor, FBlockInfoBP& BlockInfo);
    void CollectEasterEggAtLocation(FVector Location);
    float CheckLoadingPercentage();
    void CheckItemNotPartOfBlockItemPool(const class ABlockItem* BlockItem);
    void ChangeTorchColorAtLocation(FVector Location, EBlockTypeBP NewTorchType);
    void CanStandAtLocation(FVector Location, bool& CanStand);
    void CanSmoothLocoToLocation(FVector Location, bool& CanStand);
    void CanMoveBlockAtLocation(FVector Location, bool& CanMove);
    bool CanModifyChunkAt(FVector Location);
    void CanBuildAtLocation(FVector Location, bool NoSolidIsFine, bool& CanBuild);
    void BlockHealthyAgain(FBlockInfoBP BlockInfo);
    void AreaDamageAtLocation(const FVector Location, const float Damage, EBlockTypeBP ToolType, TArray<FModifiedBlockActorToSpawn>& ModifiedBlockActorsToSpawn);
    void AddWorldOrigin(FIntVector Location);
    class AMeshObject* AddMeshObjectAtLocation(EBlockTypeBP Type, UClass* Class, FTransform WorldTransform, bool& success);
    void AddBlockAtLocation(EBlockTypeBP Type, int32 UniqueId, FVector Location, ERotation Rotation, float DuplicationAmount, bool& success, EBlockTypeBP& PlacedOn);
    void ActivateRespawnTorch(FVector WorldLocation);
    FVector AbsoluteWorldToRealWorld(FIntVector AbsoluteWorld);
}; // Size: 0x2460

class AChunkRenderManager : public AActor
{
}; // Size: 0x3E0

class ACraftDraftVisualizer : public AActor
{

    void GetDraft(EBlockTypeBP Type, int32& SizeX, int32& SizeY, int32& SizeZ, int32& TotalSize, int32& ItemAmount, TArray<EBlockTypeBP>& Data);
}; // Size: 0x220

struct FCustomBlockInfoForBP
{
    int32 UniqueId;                                                                   // 0x0000 (size: 0x4)
    FString Name;                                                                     // 0x0008 (size: 0x10)
    class UTexture2D* RecipePreviewTexture;                                           // 0x0018 (size: 0x8)
    FString CreatorName;                                                              // 0x0020 (size: 0x10)

}; // Size: 0x30

class UCraftingListParent : public UUserWidget
{

    void GetDraftsMod(TArray<FCustomBlockInfoForBP>& DraftsInfoArray);
    void GetDrafts(TArray<EBlockTypeBP>& DraftsArray);
    TMap<EBlockTypeBP, int32> GetDraftAmounts(EBlockTypeBP Type, int32 UniqueId);
}; // Size: 0x260

struct FBenchmarkResults
{
    float AverageFPS;                                                                 // 0x0000 (size: 0x4)
    float AverageFrametime;                                                           // 0x0004 (size: 0x4)
    float Low1Percent;                                                                // 0x0008 (size: 0x4)
    float Low01Percent;                                                               // 0x000C (size: 0x4)
    bool ActiveRendering;                                                             // 0x0010 (size: 0x1)

}; // Size: 0x14

class UCubeGameInstance : public UGameInstance
{
    bool LoadExistingWorld;                                                           // 0x01A9 (size: 0x1)
    FString WorldName;                                                                // 0x01B0 (size: 0x10)
    class USoundBase* LoadingScreenMusic;                                             // 0x01F0 (size: 0x8)
    class UAudioComponent* LoadingScreenMusicComponent;                               // 0x01F8 (size: 0x8)
    class UCustomBlockManager* CBM;                                                   // 0x0208 (size: 0x8)
    bool bDoLaterCBMInit;                                                             // 0x0218 (size: 0x1)
    bool AccurateSettings;                                                            // 0x0231 (size: 0x1)
    class UTexture2DArray* TextureArrayMain;                                          // 0x0238 (size: 0x8)
    class UTexture2DArray* TextureArrayNormal;                                        // 0x0240 (size: 0x8)
    class UTexture2DArray* TextureArraySnowMask;                                      // 0x0248 (size: 0x8)
    class UTexture2DArray* TextureArrayEmissive;                                      // 0x0250 (size: 0x8)
    class UTexture2D* EmptyNormalTexture;                                             // 0x0258 (size: 0x8)
    class UTexture2D* EmptyEmissiveTexture;                                           // 0x0260 (size: 0x8)
    class UTexture2D* TestTexture;                                                    // 0x0268 (size: 0x8)
    class UTextureRenderTarget2D* LUT;                                                // 0x0270 (size: 0x8)
    class UMaterialParameterCollection* MPC;                                          // 0x0278 (size: 0x8)

    void UpdateTextureArrays();
    void UpdateMPC(float Value);
    void UpdateArraySize(class UTexture2DArray* ArrayToResize, int32 NumSlices);
    void TestCopyTextureArray(class UTexture2DArray* TextureArray);
    void TestCopyTexture2(class UTexture2D* Texture, class UTexture2D* TextureNew);
    void TestCopyTexture(class UTexture2D* Texture);
    void StopLoadingVideo();
    void StopLoadingScreenMusic();
    void StartLoadingScreenMusic();
    void SetupWorldLoad(bool LoadExistingWorld_, FString WorldName_, FString NewSeed_, TArray<FString> WorldNames, TArray<int32> WorldSeeds);
    void RenderCustomBlockLUT();
    void LaterCBMInit();
    void GetBenchmarkResults(FBenchmarkResults& Results, bool& Valid);
    void CopyTextureToArraySlice(class UTexture2DArray* DestArray, int32 DestSlice, class UTexture2D* SourceTexture);
    void AddTextureToTextureArray(class UTexture2DArray* TargetArray, class UTexture2DArray* SourceArray);
}; // Size: 0x280

class ACubeGameMode : public AGameModeBase
{
}; // Size: 0x2C0

class ACubePlayerController : public APlayerController
{
    int32 STAT_BlocksDestroyed;                                                       // 0x0578 (size: 0x4)
    int32 STAT_BlocksDestroyedInLast10Minutes;                                        // 0x057C (size: 0x4)
    int32 STAT_BlocksDestroyedInLast10MinutesBest;                                    // 0x0580 (size: 0x4)
    bool bUnrealisticCameraHeight;                                                    // 0x0598 (size: 0x1)

    void IncrementBlocksDestroyed(int32 Increment, EBlockTypeBP Type);
}; // Size: 0x5A0

class UCustomAudioComponent : public UAudioComponent
{
}; // Size: 0x860

struct FCustomBlockData
{
    class UTexture2D* TextureAll;                                                     // 0x0050 (size: 0x8)
    class UTexture2D* TextureSides;                                                   // 0x0058 (size: 0x8)
    class UTexture2D* TextureUpDown;                                                  // 0x0060 (size: 0x8)
    class UTexture2D* TextureUp;                                                      // 0x0068 (size: 0x8)
    class UTexture2D* TextureDown;                                                    // 0x0070 (size: 0x8)
    class UTexture2D* TextureLeft;                                                    // 0x0078 (size: 0x8)
    class UTexture2D* TextureRight;                                                   // 0x0080 (size: 0x8)
    class UTexture2D* TextureFront;                                                   // 0x0088 (size: 0x8)
    class UTexture2D* TextureBack;                                                    // 0x0090 (size: 0x8)
    class UTexture2D* Snow_TextureAll;                                                // 0x0098 (size: 0x8)
    class UTexture2D* Snow_TextureSides;                                              // 0x00A0 (size: 0x8)
    class UTexture2D* Snow_TextureUpDown;                                             // 0x00A8 (size: 0x8)
    class UTexture2D* Snow_TextureUp;                                                 // 0x00B0 (size: 0x8)
    class UTexture2D* Snow_TextureDown;                                               // 0x00B8 (size: 0x8)
    class UTexture2D* Snow_TextureLeft;                                               // 0x00C0 (size: 0x8)
    class UTexture2D* Snow_TextureRight;                                              // 0x00C8 (size: 0x8)
    class UTexture2D* Snow_TextureFront;                                              // 0x00D0 (size: 0x8)
    class UTexture2D* Snow_TextureBack;                                               // 0x00D8 (size: 0x8)
    class UTexture2D* Normal_TextureAll;                                              // 0x00E0 (size: 0x8)
    class UTexture2D* Normal_TextureSides;                                            // 0x00E8 (size: 0x8)
    class UTexture2D* Normal_TextureUpDown;                                           // 0x00F0 (size: 0x8)
    class UTexture2D* Normal_TextureUp;                                               // 0x00F8 (size: 0x8)
    class UTexture2D* Normal_TextureDown;                                             // 0x0100 (size: 0x8)
    class UTexture2D* Normal_TextureLeft;                                             // 0x0108 (size: 0x8)
    class UTexture2D* Normal_TextureRight;                                            // 0x0110 (size: 0x8)
    class UTexture2D* Normal_TextureFront;                                            // 0x0118 (size: 0x8)
    class UTexture2D* Normal_TextureBack;                                             // 0x0120 (size: 0x8)
    class UTexture2D* Emissive_TextureAll;                                            // 0x0128 (size: 0x8)
    class UTexture2D* Emissive_TextureSides;                                          // 0x0130 (size: 0x8)
    class UTexture2D* Emissive_TextureUpDown;                                         // 0x0138 (size: 0x8)
    class UTexture2D* Emissive_TextureUp;                                             // 0x0140 (size: 0x8)
    class UTexture2D* Emissive_TextureDown;                                           // 0x0148 (size: 0x8)
    class UTexture2D* Emissive_TextureLeft;                                           // 0x0150 (size: 0x8)
    class UTexture2D* Emissive_TextureRight;                                          // 0x0158 (size: 0x8)
    class UTexture2D* Emissive_TextureFront;                                          // 0x0160 (size: 0x8)
    class UTexture2D* Emissive_TextureBack;                                           // 0x0168 (size: 0x8)
    class UTexture2D* RecipePreviewTexture;                                           // 0x0170 (size: 0x8)

}; // Size: 0x198

class UCustomBlockManager : public UObject
{
    TArray<FCustomBlockData> AllCustomBlocks;                                         // 0x0028 (size: 0x10)
    class UTexture2D* EmptyNormalTexture;                                             // 0x0038 (size: 0x8)
    class UTexture2D* EmptyEmissiveTexture;                                           // 0x0040 (size: 0x8)
    TSet<int32> ExistingIDs;                                                          // 0x0048 (size: 0x50)

    int32 GetTextureIndexForCustomBlock(int32 UniqueId, uint8 Side);
    void GetSpecialBlockInfo(TMap<int32, float>& AnimationSpeed, int32& NumTextures);
    EBlockTypeBP GetPropertyBlockForCustomBlock(int32 UniqueId);
    FString GetNameOfCustomBlock(int32 UniqueId);
}; // Size: 0x1E0

class UCustomStereoLayerComponent : public UStereoLayerComponent
{
    bool DoDestroy;                                                                   // 0x02D8 (size: 0x1)

    void UseOldLayerId();
    void MarkDirty();
    void ManualDestroy();
}; // Size: 0x2E0

class ADeathBeacon : public AActor
{
    float RemainingLife;                                                              // 0x0220 (size: 0x4)

}; // Size: 0x228

class ADeerCPP : public ACharacter
{
    TArray<class UMeshComponent*> Meshes;                                             // 0x04E8 (size: 0x10)
    FColor Color1;                                                                    // 0x04FC (size: 0x4)
    FColor Color2;                                                                    // 0x0500 (size: 0x4)
    FColor Color3;                                                                    // 0x0504 (size: 0x4)
    FColor Color4;                                                                    // 0x0508 (size: 0x4)
    bool WasLoaded;                                                                   // 0x050C (size: 0x1)
    bool RecentlyRendered;                                                            // 0x050D (size: 0x1)
    bool WasVisibleLastFrame;                                                         // 0x050E (size: 0x1)
    bool IsDead;                                                                      // 0x050F (size: 0x1)

    void UpdateColorsFromLoaded();
    void StartMoving();
    void SetMobilityAllEvent(TEnumAsByte<EComponentMobility::Type> NewMobility);
    void SetDeadRagdoll();
    void SetDead(class AChunkManager* ChunkManager);
    void SetComponentTickBP();
    void ResetToPoolBP();
    TArray<class UMeshComponent*> GetMeshComponents();
    void DoWeirdStuff();
    void DoTick();
}; // Size: 0x530

class ADraftUnlockingPaper : public AActor
{
    EBlockTypeBP Type;                                                                // 0x0220 (size: 0x1)

    void StartDissolve(bool bWithType);
}; // Size: 0x238

class ADynamicResolutionScalingActor : public AActor
{
    bool DynamicResolutionScalingActive;                                              // 0x0230 (size: 0x1)
    bool DynamicResolutionScalingActiveNew;                                           // 0x0231 (size: 0x1)
    int32 DynamicResolutionScalingActiveInt;                                          // 0x0234 (size: 0x4)

    bool IsHighEndGPU();
}; // Size: 0x238

class AEasterEgg : public AReceiveLightActor
{
    EBlockTypeBP ItemType;                                                            // 0x0268 (size: 0x1)
    bool bChristmasGift;                                                              // 0x0269 (size: 0x1)

}; // Size: 0x270

class UFunctionLibrary : public UBlueprintFunctionLibrary
{

    FVector RandVectorRange(float Size);
}; // Size: 0x28

class AFurnace : public AMeshObject
{
    bool Initialized;                                                                 // 0x02A8 (size: 0x1)

    bool UseActorCustomLocation();
    void SetFurnaceSaveVariables(float HeatOnTop, float MoltenFillValue, float MeltAmountSum, int32 ItemFullyFinishedMelt, bool FlowOutStarted, FRotator RotationShutterTop, FRotator RotationShutterBottom, FRotator RotationLever);
    void GetFurnaceSaveVariables(float& HeatOnTop, float& MoltenFillValue, float& MeltAmountSum, int32& ItemFullyFinishedMelt, bool& FlowOutStarted, FRotator& RotationShutterTop, FRotator& RotationShutterBottom, FRotator& RotationLever);
    FVector GetActorCustomLocation();
    void CanDamageObjectBP(bool& CanDamage);
}; // Size: 0x2B0

struct FTransform_NetQuantize : public FTransform
{
}; // Size: 0x30

struct FBPAdvGripPhysicsSettings
{
    bool bUsePhysicsSettings;                                                         // 0x0000 (size: 0x1)
    EPhysicsGripConstraintType PhysicsConstraintType;                                 // 0x0001 (size: 0x1)
    EPhysicsGripCOMType PhysicsGripLocationSettings;                                  // 0x0002 (size: 0x1)
    bool bTurnOffGravityDuringGrip;                                                   // 0x0003 (size: 0x1)
    bool bSkipSettingSimulating;                                                      // 0x0004 (size: 0x1)
    float LinearMaxForceCoefficient;                                                  // 0x0008 (size: 0x4)
    float AngularMaxForceCoefficient;                                                 // 0x000C (size: 0x4)
    bool bUseCustomAngularValues;                                                     // 0x0010 (size: 0x1)
    float AngularStiffness;                                                           // 0x0014 (size: 0x4)
    float AngularDamping;                                                             // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FBPAdvGripSettings
{
    uint8 GripPriority;                                                               // 0x0000 (size: 0x1)
    bool bSetOwnerOnGrip;                                                             // 0x0001 (size: 0x1)
    FBPAdvGripPhysicsSettings PhysicsSettings;                                        // 0x0004 (size: 0x1C)

}; // Size: 0x20

struct FBPSecondaryGripInfo
{
    bool bHasSecondaryAttachment;                                                     // 0x0000 (size: 0x1)
    class USceneComponent* SecondaryAttachment;                                       // 0x0008 (size: 0x8)
    FTransform_NetQuantize SecondaryRelativeTransform;                                // 0x0010 (size: 0x30)
    bool bIsSlotGrip;                                                                 // 0x0040 (size: 0x1)
    FName SecondarySlotName;                                                          // 0x0044 (size: 0x8)
    float LerpToRate;                                                                 // 0x004C (size: 0x4)
    float SecondaryGripDistance;                                                      // 0x0050 (size: 0x4)

}; // Size: 0x70

struct FBPActorGripInformation
{
    uint8 GripID;                                                                     // 0x0000 (size: 0x1)
    EGripTargetType GripTargetType;                                                   // 0x0001 (size: 0x1)
    class UObject* GrippedObject;                                                     // 0x0008 (size: 0x8)
    EGripCollisionType GripCollisionType;                                             // 0x0010 (size: 0x1)
    EGripLateUpdateSettings GripLateUpdateSetting;                                    // 0x0011 (size: 0x1)
    bool bColliding;                                                                  // 0x0012 (size: 0x1)
    FTransform_NetQuantize RelativeTransform;                                         // 0x0020 (size: 0x30)
    bool bIsSlotGrip;                                                                 // 0x0050 (size: 0x1)
    FName GrippedBoneName;                                                            // 0x0054 (size: 0x8)
    FName SlotName;                                                                   // 0x005C (size: 0x8)
    EGripMovementReplicationSettings GripMovementReplicationSetting;                  // 0x0064 (size: 0x1)
    bool bIsPaused;                                                                   // 0x0065 (size: 0x1)
    bool bLockHybridGrip;                                                             // 0x0066 (size: 0x1)
    bool bOriginalReplicatesMovement;                                                 // 0x0067 (size: 0x1)
    bool bOriginalGravity;                                                            // 0x0068 (size: 0x1)
    float Damping;                                                                    // 0x006C (size: 0x4)
    float Stiffness;                                                                  // 0x0070 (size: 0x4)
    FBPAdvGripSettings AdvancedGripSettings;                                          // 0x0074 (size: 0x20)
    FBPSecondaryGripInfo SecondaryGripInfo;                                           // 0x00A0 (size: 0x70)
    FTransform AdditionTransform;                                                     // 0x0110 (size: 0x30)
    float GripDistance;                                                               // 0x0140 (size: 0x4)

}; // Size: 0x1A0

struct FBPVRComponentPosRep
{
    FVector Position;                                                                 // 0x0000 (size: 0xC)
    FRotator Rotation;                                                                // 0x000C (size: 0xC)
    EVRVectorQuantization QuantizationLevel;                                          // 0x0018 (size: 0x1)
    EVRRotationQuantization RotationQuantizationLevel;                                // 0x0019 (size: 0x1)

}; // Size: 0x1C

struct FBPAdvancedPhysicsHandleAxisSettings
{
    float Stiffness;                                                                  // 0x0000 (size: 0x4)
    float Damping;                                                                    // 0x0004 (size: 0x4)
    float MaxForceCoefficient;                                                        // 0x0008 (size: 0x4)
    bool bEnablePositionDrive;                                                        // 0x000C (size: 0x1)
    bool bEnableVelocityDrive;                                                        // 0x000D (size: 0x1)

}; // Size: 0x10

struct FBPAdvancedPhysicsHandleSettings
{
    FBPAdvancedPhysicsHandleAxisSettings XAxisSettings;                               // 0x0000 (size: 0x10)
    FBPAdvancedPhysicsHandleAxisSettings YAxisSettings;                               // 0x0010 (size: 0x10)
    FBPAdvancedPhysicsHandleAxisSettings ZAxisSettings;                               // 0x0020 (size: 0x10)
    FBPAdvancedPhysicsHandleAxisSettings SlerpSettings;                               // 0x0030 (size: 0x10)
    FBPAdvancedPhysicsHandleAxisSettings TwistSettings;                               // 0x0040 (size: 0x10)
    FBPAdvancedPhysicsHandleAxisSettings SwingSettings;                               // 0x0050 (size: 0x10)

}; // Size: 0x60

class UGripMotionControllerComponent : public UMotionControllerComponent
{
    TSubclassOf<class UVRGripScriptBase> DefaultGripScriptClass;                      // 0x0528 (size: 0x8)
    class UVRGripScriptBase* DefaultGripScript;                                       // 0x0530 (size: 0x8)
    bool bOffsetByHMD;                                                                // 0x0538 (size: 0x1)
    TWeakObjectPtr<class APawn> AttachChar;                                           // 0x053C (size: 0x8)
    EVRVelocityType VelocityCalculationType;                                          // 0x0580 (size: 0x1)
    bool bSampleVelocityInWorldSpace;                                                 // 0x0581 (size: 0x1)
    int32 VelocitySamples;                                                            // 0x0584 (size: 0x4)
    bool bOffsetByControllerProfile;                                                  // 0x05A8 (size: 0x1)
    FGripMotionControllerComponentOnControllerProfileTransformChanged OnControllerProfileTransformChanged; // 0x05E0 (size: 0x10)
    void VRGripControllerOnProfileTransformChanged(const FTransform& NewRelTransForProcComps, const FTransform& NewProfileTransform);
    FGripMotionControllerComponentOnGripOutOfRange OnGripOutOfRange;                  // 0x05F0 (size: 0x10)
    void VRGripControllerOnGripOutOfRange(const FBPActorGripInformation& GripInformation, float Distance);
    FGripMotionControllerComponentOnTrackingChanged OnTrackingChanged;                // 0x0678 (size: 0x10)
    void VRGripControllerOnTrackingEventSignature(const ETrackingStatus& NewTrackingStatus);
    FGripMotionControllerComponentOnGrippedObject OnGrippedObject;                    // 0x0688 (size: 0x10)
    void VROnControllerGripSignature(const FBPActorGripInformation& GripInformation);
    FGripMotionControllerComponentOnDroppedObject OnDroppedObject;                    // 0x0698 (size: 0x10)
    void VROnControllerDropSignature(const FBPActorGripInformation& GripInformation, bool bWasSocketed);
    FGripMotionControllerComponentOnSecondaryGripAdded OnSecondaryGripAdded;          // 0x06A8 (size: 0x10)
    void VROnControllerGripSignature(const FBPActorGripInformation& GripInformation);
    FGripMotionControllerComponentOnSecondaryGripRemoved OnSecondaryGripRemoved;      // 0x06B8 (size: 0x10)
    void VROnControllerGripSignature(const FBPActorGripInformation& GripInformation);
    TWeakObjectPtr<class USceneComponent> CustomPivotComponent;                       // 0x06C8 (size: 0x8)
    TArray<FBPActorGripInformation> GrippedObjects;                                   // 0x06D8 (size: 0x10)
    TArray<FBPActorGripInformation> LocallyGrippedObjects;                            // 0x06E8 (size: 0x10)
    TArray<FBPActorGripInformation> LocalTransactionBuffer;                           // 0x06F8 (size: 0x10)
    bool bAlwaysSendTickGrip;                                                         // 0x0708 (size: 0x1)
    TArray<class UPrimitiveComponent*> AdditionalLateUpdateComponents;                // 0x0710 (size: 0x10)
    FBPVRComponentPosRep ReplicatedControllerTransform;                               // 0x0720 (size: 0x1C)
    float ControllerNetUpdateRate;                                                    // 0x0758 (size: 0x4)
    bool bSmoothReplicatedMotion;                                                     // 0x0760 (size: 0x1)
    bool bReplicateWithoutTracking;                                                   // 0x0761 (size: 0x1)
    TArray<class UObject*> ObjectsWaitingForSocketUpdate;                             // 0x0768 (size: 0x10)
    bool bUseWithoutTracking;                                                         // 0x0779 (size: 0x1)

    void UpdatePhysicsHandleTransform_BP(const FBPActorGripInformation& GrippedActor, const FTransform& NewTransform);
    bool UpdatePhysicsHandle_BP(const FBPActorGripInformation& Grip, bool bFullyRecreate);
    void TeleportMoveGrips(bool bTeleportPhysicsGrips, bool bIsForPostTeleport);
    bool TeleportMoveGrippedComponent(class UPrimitiveComponent* ComponentToMove, bool bTeleportPhysicsGrips);
    bool TeleportMoveGrippedActor(class AActor* GrippedActorToMove, bool bTeleportPhysicsGrips);
    bool TeleportMoveGrip(FBPActorGripInformation& Grip, bool bTeleportPhysicsGrips, bool bIsForPostTeleport);
    bool SetUpPhysicsHandle_BP(const FBPActorGripInformation& Grip);
    void SetSocketTransform(class UObject* ObjectToSocket, const FTransform_NetQuantize RelativeTransformToParent);
    bool SetPhysicsHandleSettings(const FBPActorGripInformation& Grip, const FBPAdvancedPhysicsHandleSettings& PhysicsHandleSettingsIn);
    void SetPausedTransform(const FBPActorGripInformation& Grip, const FTransform& PausedTransform, bool bTeleport);
    void SetGripStiffnessAndDamping(const FBPActorGripInformation& Grip, EBPVRResultSwitch& Result, float NewStiffness, float NewDamping, bool bAlsoSetAngularValues, float OptionalAngularStiffness, float OptionalAngularDamping);
    void SetGripRelativeTransform(const FBPActorGripInformation& Grip, EBPVRResultSwitch& Result, const FTransform& NewRelativeTransform);
    void SetGripPaused(const FBPActorGripInformation& Grip, EBPVRResultSwitch& Result, bool bIsPaused, bool bNoConstraintWhenPaused);
    void SetGripLateUpdateSetting(const FBPActorGripInformation& Grip, EBPVRResultSwitch& Result, EGripLateUpdateSettings NewGripLateUpdateSetting);
    void SetGripHybridLock(const FBPActorGripInformation& Grip, EBPVRResultSwitch& Result, bool bIsLocked);
    void SetGripCollisionType(const FBPActorGripInformation& Grip, EBPVRResultSwitch& Result, EGripCollisionType NewGripCollisionType);
    void SetGripAdditionTransform(const FBPActorGripInformation& Grip, EBPVRResultSwitch& Result, const FTransform& NewAdditionTransform, bool bMakeGripRelative);
    void SetCustomPivotComponent(class USceneComponent* NewCustomPivotComponent);
    void Server_SendControllerTransform(FBPVRComponentPosRep NewTransform);
    void Server_NotifySecondaryAttachmentChanged_Retain(uint8 GripID, const FBPSecondaryGripInfo& SecondaryGripInfo, const FTransform_NetQuantize& NewRelativeTransform);
    void Server_NotifySecondaryAttachmentChanged(uint8 GripID, const FBPSecondaryGripInfo& SecondaryGripInfo);
    void Server_NotifyLocalGripRemoved(uint8 GripID, const FTransform_NetQuantize& TransformAtDrop, FVector_NetQuantize100 AngularVelocity, FVector_NetQuantize100 LinearVelocity);
    void Server_NotifyLocalGripAddedOrChanged(const FBPActorGripInformation& newGrip);
    void Server_NotifyHandledTransaction(uint8 GripID);
    void Server_NotifyDropAndSocketGrip(uint8 GripID, class USceneComponent* SocketingParent, FName OptionalSocketName, const FTransform_NetQuantize& RelativeTransformToParent, bool bWeldBodies);
    bool RemoveSecondaryAttachmentPoint(class UObject* GrippedObjectToRemoveAttachment, float LerpToTime);
    bool RemoveSecondaryAttachmentFromGrip(const FBPActorGripInformation& GripToRemoveAttachment, float LerpToTime);
    void PostTeleportMoveGrippedObjects();
    void OnRep_ReplicatedControllerTransform();
    void OnRep_LocalTransaction(TArray<FBPActorGripInformation> OriginalArrayState);
    void OnRep_LocallyGrippedObjects(TArray<FBPActorGripInformation> OriginalArrayState);
    void OnRep_GrippedObjects(TArray<FBPActorGripInformation> OriginalArrayState);
    void NotifyDropAndSocket(const FBPActorGripInformation& NewDrop, class USceneComponent* SocketingParent, FName OptionalSocketName, const FTransform_NetQuantize& RelativeTransformToParent, bool bWeldBodies);
    void NotifyDrop(const FBPActorGripInformation& NewDrop, bool bSimulate);
    void NewControllerProfileLoaded();
    bool HasGrippedObjects();
    bool GripObjectByInterface(class UObject* ObjectToGrip, const FTransform& WorldOffset, bool bWorldOffsetIsRelative, FName OptionalBoneToGripName, FName OptionalSnapToSocketName, bool bIsSlotGrip);
    bool GripObject(class UObject* ObjectToGrip, const FTransform& WorldOffset, bool bWorldOffsetIsRelative, FName OptionalSnapToSocketName, FName OptionalBoneToGripName, EGripCollisionType GripCollisionType, EGripLateUpdateSettings GripLateUpdateSetting, EGripMovementReplicationSettings GripMovementReplicationSetting, float GripStiffness, float GripDamping, bool bIsSlotGrip);
    bool GripControllerIsTracked();
    bool GripComponent(class UPrimitiveComponent* ComponentToGrip, const FTransform& WorldOffset, bool bWorldOffsetIsRelative, FName OptionalSnapToSocketName, FName OptionalBoneToGripName, EGripCollisionType GripCollisionType, EGripLateUpdateSettings GripLateUpdateSetting, EGripMovementReplicationSettings GripMovementReplicationSetting, float GripStiffness, float GripDamping, bool bIsSlotGrip);
    bool GripActor(class AActor* ActorToGrip, const FTransform& WorldOffset, bool bWorldOffsetIsRelative, FName OptionalSnapToSocketName, FName OptionalBoneToGripName, EGripCollisionType GripCollisionType, EGripLateUpdateSettings GripLateUpdateSetting, EGripMovementReplicationSettings GripMovementReplicationSetting, float GripStiffness, float GripDamping, bool bIsSlotGrip);
    FTransform GetPivotTransform_BP();
    FVector GetPivotLocation_BP();
    void GetPhysicsVelocities(const FBPActorGripInformation& Grip, FVector& AngularVelocity, FVector& LinearVelocity);
    bool GetPhysicsHandleSettings(const FBPActorGripInformation& Grip, FBPAdvancedPhysicsHandleSettings& PhysicsHandleSettingsOut);
    bool GetPhysicsConstraintForce(const FBPActorGripInformation& Grip, FVector& AngularForce, FVector& LinearForce);
    bool GetIsSecondaryAttachment(const class USceneComponent* ComponentToCheck, FBPActorGripInformation& Grip);
    bool GetIsObjectHeld(const class UObject* ObjectToCheck);
    bool GetIsHeld(const class AActor* ActorToCheck);
    bool GetIsComponentHeld(const class UPrimitiveComponent* ComponentToCheck);
    void GetHandType(EControllerHand& hand);
    void GetGrippedObjects(TArray<class UObject*>& GrippedObjectsArray);
    void GetGrippedComponents(TArray<class UPrimitiveComponent*>& GrippedComponentsArray);
    void GetGrippedActors(TArray<class AActor*>& GrippedActorArray);
    void GetGripMass(const FBPActorGripInformation& Grip, float& Mass);
    bool GetGripDistance_BP(FBPActorGripInformation& Grip, FVector ExpectedLocation, float& CurrentDistance);
    void GetGripByObject(FBPActorGripInformation& Grip, class UObject* ObjectToLookForGrip, EBPVRResultSwitch& Result);
    void GetGripByID(FBPActorGripInformation& Grip, uint8 IDToLookForGrip, EBPVRResultSwitch& Result);
    void GetGripByComponent(FBPActorGripInformation& Grip, class UPrimitiveComponent* ComponentToLookForGrip, EBPVRResultSwitch& Result);
    void GetGripByActor(FBPActorGripInformation& Grip, class AActor* ActorToLookForGrip, EBPVRResultSwitch& Result);
    void GetControllerDeviceID(FXRDeviceId& DeviceID, EBPVRResultSwitch& Result, bool bCheckOpenVROnly);
    void GetAllGrips(TArray<FBPActorGripInformation>& GripArray);
    bool DropObjectByInterface(class UObject* ObjectToDrop, uint8 GripIDToDrop, FVector OptionalAngularVelocity, FVector OptionalLinearVelocity);
    bool DropObject(class UObject* ObjectToDrop, uint8 GripIDToDrop, bool bSimulate, FVector OptionalAngularVelocity, FVector OptionalLinearVelocity);
    bool DropGrip(const FBPActorGripInformation& Grip, bool bSimulate, FVector OptionalAngularVelocity, FVector OptionalLinearVelocity);
    bool DropComponent(class UPrimitiveComponent* ComponentToDrop, bool bSimulate, FVector OptionalAngularVelocity, FVector OptionalLinearVelocity);
    bool DropAndSocketObject(const FTransform_NetQuantize& RelativeTransformToParent, class UObject* ObjectToDrop, uint8 GripIDToDrop, class USceneComponent* SocketingParent, FName OptionalSocketName, bool bWeldBodies);
    bool DropAndSocketGrip(const FBPActorGripInformation& GripToDrop, class USceneComponent* SocketingParent, FName OptionalSocketName, const FTransform_NetQuantize& RelativeTransformToParent, bool bWeldBodies);
    bool DropActor(class AActor* ActorToDrop, bool bSimulate, FVector OptionalAngularVelocity, FVector OptionalLinearVelocity);
    bool DestroyPhysicsHandle_BP(const FBPActorGripInformation& Grip);
    FTransform CreateGripRelativeAdditionTransform_BP(const FBPActorGripInformation& GripToSample, const FTransform& AdditionTransform, bool bGripRelative);
    FTransform ConvertToGripRelativeTransform(const FTransform& GrippedActorTransform, const FTransform& InTransform);
    FTransform ConvertToControllerRelativeTransform(const FTransform& InTransform);
    void Client_NotifyInvalidLocalGrip(class UObject* LocallyGrippedObject, uint8 GripID);
    bool BP_IsLocallyControlled();
    bool BP_HasGripMovementAuthority(const FBPActorGripInformation& Grip);
    bool BP_HasGripAuthorityForObject(const class UObject* ObjToCheck);
    bool BP_HasGripAuthority(const FBPActorGripInformation& Grip);
    bool AddSecondaryAttachmentToGrip(const FBPActorGripInformation& GripToAddAttachment, class USceneComponent* SecondaryPointComponent, const FTransform& OriginalTransform, bool bTransformIsAlreadyRelative, float LerpToTime, bool bIsSlotGrip, FName SecondarySlotName);
    bool AddSecondaryAttachmentPoint(class UObject* GrippedObjectToAddAttachment, class USceneComponent* SecondaryPointComponent, const FTransform& OriginalTransform, bool bTransformIsAlreadyRelative, float LerpToTime, bool bIsSlotGrip, FName SecondarySlotName);
}; // Size: 0x7B0

class UVRGripScriptBase : public UObject
{
    bool bIsActive;                                                                   // 0x0030 (size: 0x1)
    EGSTransformOverrideType WorldTransformOverrideType;                              // 0x0031 (size: 0x1)
    bool bDenyAutoDrop;                                                               // 0x0032 (size: 0x1)
    bool bForceDrop;                                                                  // 0x0033 (size: 0x1)
    bool bDenyLateUpdates;                                                            // 0x0034 (size: 0x1)
    bool bInjectPrePhysicsHandle;                                                     // 0x0035 (size: 0x1)
    bool bInjectPostPhysicsHandle;                                                    // 0x0036 (size: 0x1)
    bool bCanEverTick;                                                                // 0x0037 (size: 0x1)
    bool bAllowTicking;                                                               // 0x0038 (size: 0x1)

    bool Wants_DenyTeleport(class UGripMotionControllerComponent* Controller);
    void SetTickEnabled(bool bTickEnabled);
    void OnSecondaryGripRelease(class UGripMotionControllerComponent* Controller, class USceneComponent* ReleasingSecondaryGripComponent, const FBPActorGripInformation& GripInformation);
    void OnSecondaryGrip(class UGripMotionControllerComponent* Controller, class USceneComponent* SecondaryGripComponent, const FBPActorGripInformation& GripInformation);
    void OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const FBPActorGripInformation& GripInformation, bool bWasSocketed);
    void OnGrip(class UGripMotionControllerComponent* GrippingController, const FBPActorGripInformation& GripInformation);
    void OnEndPlay(const TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnBeginPlay(class UObject* CallingOwner);
    bool IsServer();
    bool HasAuthority();
    bool GetWorldTransform(class UGripMotionControllerComponent* GrippingController, float DeltaTime, FTransform& WorldTransform, const FTransform& ParentTransform, FBPActorGripInformation& Grip, class AActor* Actor, class UPrimitiveComponent* Root, bool bRootHasInterface, bool bActorHasInterface, bool bIsForTeleport);
    FTransform GetParentTransform(bool bGetWorldTransform, FName BoneName);
    class USceneComponent* GetParentSceneComp();
    class UObject* GetParent();
    class AActor* GetOwner();
    FTransform GetGripTransform(const FBPActorGripInformation& Grip, const FTransform& ParentTransform);
    class UVRGripScriptBase* GetGripScriptByClass(class UObject* WorldContextObject, TSubclassOf<class UVRGripScriptBase> GripScriptClass, EBPVRResultSwitch& Result);
    void ForceGripToDrop();
}; // Size: 0x40

class UGS_Default : public UVRGripScriptBase
{
}; // Size: 0x40

class UGS_ExtendedDefault : public UGS_Default
{
    bool bLimitGripScaling;                                                           // 0x0040 (size: 0x1)
    FVector_NetQuantize100 MinimumGripScaling;                                        // 0x0044 (size: 0xC)
    FVector_NetQuantize100 MaximumGripScaling;                                        // 0x0050 (size: 0xC)

}; // Size: 0x60

class AInventory : public AStorage
{
    TArray<int32> QuickBarItemIDs;                                                    // 0x0248 (size: 0x10)
    TArray<bool> QuickBarItemsReal;                                                   // 0x0258 (size: 0x10)
    TArray<EBlockTypeBP> QuickBarTools;                                               // 0x0268 (size: 0x10)
    FColor BucketCrystalColor;                                                        // 0x0278 (size: 0x4)
    float BucketCrystalChargeState;                                                   // 0x027C (size: 0x4)
    FColor BuildToolCrystalColorRight;                                                // 0x0280 (size: 0x4)
    float BuildToolCrystalChargeStateRight;                                           // 0x0284 (size: 0x4)
    FColor BuildToolCrystalColorLeft;                                                 // 0x0288 (size: 0x4)
    float BuildToolCrystalChargeStateLeft;                                            // 0x028C (size: 0x4)
    bool bIsLootableInventory;                                                        // 0x0290 (size: 0x1)

    void UpdateUIEvent();
    void UpdateBuildToolCrystalProperties(FColor BuildToolCrystalColor_, float BuildToolCrystalChargeState_, bool bIsRightHand);
    void UpdateBucketCrystalProperties(FColor BucketCrystalColor_, float BucketCrystalChargeState_);
    void RemoveItem(EBlockTypeBP ToRemove, int32 ToRemoveUniqueID, int32 RemoveAmount, bool& success, bool& NoMoreLeft);
    void MoveOverPlayerInventoryToLootInventory(class AInventory* LootInventory);
    void MoveOverAllItemsFromOtherInventory(class AInventory* FromInventory, bool& AnythingCollected);
    void MoveOutside(int32 From, bool FromToolHolder);
    void MoveInside(int32 From, EBlockTypeBP Type, int32 UniqueId, bool FromToolSlot);
    void DropOnToolsQuickBar(bool FromToolBar, int32 From, int32 To, class AInventory* FromInventory, EBlockTypeBP Type, bool& UpdateNeeded);
    void DropOnDelete(int32 From, bool FromToolHolder, bool& success);
    void Drop(bool FromToolBar, int32 From, int32 To, class AInventory* FromInventory, EBlockTypeBP Type, bool& UpdateNeeded);
    void AddItemFromChest(int32 FromChestIndex, class AChestInternals* Chest, EBlockTypeBP Type, bool& success);
}; // Size: 0x298

class ULeaderboardEntryCPP : public UUserWidget
{
    class UTextBlock* TextBlock_Rank;                                                 // 0x0260 (size: 0x8)
    class UTextBlock* TextBlock_Score;                                                // 0x0268 (size: 0x8)
    class UTextBlock* TextBlock_GPU;                                                  // 0x0270 (size: 0x8)
    class UTextBlock* TextBlock_Headset;                                              // 0x0278 (size: 0x8)
    class UTextBlock* TextBlock_CPU;                                                  // 0x0280 (size: 0x8)
    class UTextBlock* TextBlock_User;                                                 // 0x0288 (size: 0x8)
    class UTextBlock* TextBlock_Resolution;                                           // 0x0290 (size: 0x8)
    class UBorder* Border_BackgroundColor;                                            // 0x0298 (size: 0x8)

}; // Size: 0x2A0

class ILightReceiveInterface : public IInterface
{

    bool UseLightAroundValue();
    bool UseActorCustomLocation();
    bool TickReceiveLight();
    void LightInterfaceBeginPlay(class AActor* ThisActor);
    void LightInterfaceBeginDestroy(class AActor* ThisActor);
    TArray<class UMeshComponent*> GetMeshComponents();
    FVector GetActorCustomLocation();
}; // Size: 0x28

class ALogItem : public AReceiveLightActor
{
    ETreeType Type;                                                                   // 0x0268 (size: 0x1)
    FVector RelativeCenterLocation;                                                   // 0x026C (size: 0xC)
    class UMeshComponent* Mesh;                                                       // 0x0278 (size: 0x8)

    bool UseActorCustomLocation();
    void SetActive(ETreeType _Type);
    void ResetToPoolBP();
    FVector GetActorCustomLocation();
}; // Size: 0x280

class ALootableInventory : public AMeshObject
{
    class AInventory* Inventory;                                                      // 0x02A8 (size: 0x8)
    FLinearColor SphereColor;                                                         // 0x02B0 (size: 0x10)

    void UpdateVisuals();
}; // Size: 0x2C0

struct FCustomBlockInfoForModsBP
{
    int32 UniqueId;                                                                   // 0x0000 (size: 0x4)
    FString Name;                                                                     // 0x0008 (size: 0x10)
    FString Path;                                                                     // 0x0018 (size: 0x10)
    FString CreatorName;                                                              // 0x0028 (size: 0x10)

}; // Size: 0x38

class UManageModsWidgetParent : public UUserWidget
{

    void GetDraftsMod(bool bFromWorkshop, TArray<FCustomBlockInfoForModsBP>& DraftsInfoArray);
}; // Size: 0x260

class UMathBPLibrary : public UBlueprintFunctionLibrary
{

    void GridVector(FVector InVector, float GridSize, FVector& ReturnVector);
}; // Size: 0x28

class AMC_GameState : public AGameStateBase
{
    class AChunkManager* ChunkManager;                                                // 0x0270 (size: 0x8)
    TMap<class FString, class UTexture2D*> AlreadyLoadedTextures;                     // 0x0278 (size: 0x50)

}; // Size: 0x2C8

class UMeshOptimization : public UBlueprintFunctionLibrary
{
}; // Size: 0x28

class AModifiedBlockActor : public AActor
{
    bool bWasUsedForMove;                                                             // 0x023A (size: 0x1)
    float CurrentHealth;                                                              // 0x023C (size: 0x4)
    float MaxHealth;                                                                  // 0x0240 (size: 0x4)
    class UMaterialInstance* GlassMaterial;                                           // 0x0248 (size: 0x8)
    class UMaterialInstanceDynamic* MaterialInstance;                                 // 0x0250 (size: 0x8)
    class UMaterialInstanceDynamic* MaterialInstanceForDamage;                        // 0x0258 (size: 0x8)
    class UStaticMeshComponent* BlockMesh;                                            // 0x0268 (size: 0x8)
    class AChunkManager* ChunkManager;                                                // 0x0270 (size: 0x8)
    EBlockTypeBP BlockType;                                                           // 0x0278 (size: 0x1)
    int32 UniqueId;                                                                   // 0x027C (size: 0x4)
    FBlockInfoBP OriginalBlockInfo;                                                   // 0x0280 (size: 0x28)
    bool bIsForMove;                                                                  // 0x02A8 (size: 0x1)

    void UpdateMaterialInstanceValuesDefaultLighting();
    void UpdateMaterialInstanceValues();
    void UpdateDestructionAmount();
    void ResetToPoolBP();
    void ResetToPool();
    void MarkDestroyed(bool WasFullyMined);
    void MarkActiveAgain();
    void InitializeMaterialInstance();
    void DamageCPP(float Amount, EBlockTypeBP ToolType);
    void ConvertToForMove();
    bool CheckAllowSpawnItemsForBlock();
}; // Size: 0x310

struct FPerEyeRaw
{
    float pfLeft;                                                                     // 0x0000 (size: 0x4)
    float pfRight;                                                                    // 0x0004 (size: 0x4)
    float pfTop;                                                                      // 0x0008 (size: 0x4)
    float pfBottom;                                                                   // 0x000C (size: 0x4)

}; // Size: 0x10

class UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool WasMirrorResSet();
    void TakeSpecialScreenshot(class UObject* Context, class ADynamicResolutionScalingActor* DynResActor, float mul);
    void SetSpectatorTexture(class UTexture* Texture);
    void SetRetainerTexture(class UTextureRenderTarget2D* Texture);
    void SetResizeScreenshotForSave(bool ResizeScreenshots);
    void SetLeftHandedMode(bool Enabled);
    void SetDynamicRes(class UObject* Context, float Value);
    bool SavePixels(FString FullFilePath, int32 Width, int32 Height, const TArray<FLinearColor>& ImagePixels, FString& ErrorString);
    void SaveFileDialog(FString& FilePath, FString& Filename, bool& success);
    int32 RunTest();
    bool RunSC3();
    void RecreatePhysicsStateForComponent(class UActorComponent* Component);
    void PlayControllerMotorMusic();
    void OpenVR_ShowKeyboard(FString ExistingText, FTransform WorldTransform);
    void OpenVR_HideKeyboard();
    void OpenVR_GetKeyboardText(FString& KeyboardText);
    void LookAtWidgetDebug(TArray<class UWidget*> Widgets);
    class UTexture2D* LoadTexture2D_FromFile(FString FullFilePath, bool& IsValid, int32& Width, int32& Height, TEnumAsByte<EPixelFormat> PixelFormat, bool bGenerateMips);
    bool IsGameWindowInFocus(class UObject* Context);
    void IsEditorBuild(bool& bIsEditorBuild);
    bool IsDateEaster();
    bool IsDateChristmas();
    bool IsCDriveAlmostFull();
    void InitScreenshots();
    void InitO();
    void HookUpCustomSteamVRScreenshot();
    void GetVideoCaptureMirrorSettings(bool& UseVideoMirror, float& FOV, bool& UseSmoothing, float& SmoothingSpeed, bool& HideControllers);
    void GetVersionName(FString& VersionName);
    int32 GetSteamStat(FString StatName);
    FString GetSHA256_BP(const TArray<uint8>& ByteArray);
    FRotator GetRotatorArrayAverage(const TArray<FRotator>& Rotators);
    FString GetRHIName();
    void GetRawProjection(FPerEyeRaw& LeftEye, FPerEyeRaw& RightEye);
    EBlockTypeBP GetRandomEasterEggType();
    bool GetRAMInfo();
    void GetLeftHandedMode(bool& Enabled);
    void GetHMDName(FString& ModelName);
    bool GetHardwareInfo();
    void GetGPURenderTime(float& GPUTime);
    void GetFullscreenFocusSettings(bool& Fullscreen, bool& FocusWarning);
    void GetFullFOV(float& HorizontalFOV, float& VerticalFOV);
    FString GetBlockTypeNameAnalytics(EBlockTypeBP Type);
    bool GetAVX2Support();
    void GetArgs(FString& Args);
    void ForceExitGame();
    void FadeSteamVRColor(float Seconds, FLinearColor Color, bool Background);
    void DeleteInputIniFile();
    void CopyCollisionToPMC(class UStaticMesh* SMC, int32 LODIndex, class UProceduralMeshComponent* PMC);
    FVector2D ClosestPointOnLine(float lx1, float ly1, float lx2, float ly2, float x0, float y0);
    void BlueprintVerify(bool Result, FString FailMessage);
    int32 BlueprintCrashGame(FString ErrorMessage);
    void BenchmarkCRC(FVector TestVector);
    void AddToRootBP(class UObject* Object);
    void ActivateSteamOverlay(FString URL);
}; // Size: 0x28

struct FPictureFrameProperties
{
    float Width;                                                                      // 0x0000 (size: 0x4)
    float Height;                                                                     // 0x0004 (size: 0x4)
    float Margin;                                                                     // 0x0008 (size: 0x4)
    float FrameThickness;                                                             // 0x000C (size: 0x4)
    float FrameDepth;                                                                 // 0x0010 (size: 0x4)
    FColor Color;                                                                     // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FLoadedPicture
{
    FString Path;                                                                     // 0x0000 (size: 0x10)
    class UTexture2D* Texture;                                                        // 0x0010 (size: 0x8)
    int32 Width;                                                                      // 0x0018 (size: 0x4)
    int32 Height;                                                                     // 0x001C (size: 0x4)

}; // Size: 0x20

class APictureFrame : public AMeshObject
{

    bool UseActorCustomLocation();
    void SetFrameProperties(FPictureFrameProperties Properties);
    bool LoadImagesFromDisk(TArray<FLoadedPicture>& LoadedPictures);
    FPictureFrameProperties GetFrameProperties();
    FVector GetActorCustomLocation();
    bool ApplyNewImage(const FLoadedPicture& NewLoadedPicture);
    void ApplyLoadedTexture(class UTexture2D* LoadedTexture);
}; // Size: 0x2B8

class APreGenTestActor : public AActor
{

    void SubmitMesh(class UProceduralMeshComponent* PMC, const TArray<EBlockTypeBP>& StructureArray, FIntVector StructureSize);
    void GeneratePyramid(TArray<EBlockTypeBP>& StructureArray, FIntVector& StructureSize);
}; // Size: 0x220

class AProceduralRavenCrowds : public AActor
{
    class URuntimeMeshComponent* RMC;                                                 // 0x0360 (size: 0x8)
    class URuntimeMeshProviderStatic* RuntimeMeshProvider;                            // 0x0368 (size: 0x8)

}; // Size: 0x3D0

class ARuntimeCactus : public AReceiveLightActor
{
    class UStaticMeshComponent* SMC;                                                  // 0x0268 (size: 0x8)
    ETreeType Type;                                                                   // 0x0270 (size: 0x1)
    bool damaged;                                                                     // 0x0271 (size: 0x1)
    bool bDestroyed;                                                                  // 0x0272 (size: 0x1)

    void SetType(ETreeType NewType);
    void SetActive();
    void ResetToPoolBP();
}; // Size: 0x278

class URuntimeMeshProviderChunks : public URuntimeMeshProvider
{
}; // Size: 0x250

class ARuntimeTree : public AActor
{
    ETreeType Type;                                                                   // 0x0220 (size: 0x1)
    class AChunkManager* ChunkManager;                                                // 0x0228 (size: 0x8)
    bool damaged;                                                                     // 0x0230 (size: 0x1)
    bool IsFalling;                                                                   // 0x0231 (size: 0x1)
    class UProceduralMeshComponent* PMC;                                              // 0x0238 (size: 0x8)
    class UStaticMesh* StaticMeshReference;                                           // 0x0240 (size: 0x8)

    void SpawnLogs(class UProceduralMeshComponent* CutNew);
    void SetupWind(int32 From, int32 To);
    void SetActive();
    void ResetToPoolBP();
    void RegisterToolHit(FVector Location, bool& NowFall);
}; // Size: 0x290

class ATool : public AMeshObject
{

    void InitTool(EBlockTypeBP Type_, class AChunkManager* ChunkManager_, class ACharacter* Player_);
    void DestroyTool();
}; // Size: 0x2A8

class ATorch : public AActor
{
    FColor Color;                                                                     // 0x0220 (size: 0x4)
    class UParticleSystemComponent* P_LOD0;                                           // 0x0228 (size: 0x8)
    class UParticleSystemComponent* P_2_LOD0;                                         // 0x0230 (size: 0x8)
    class UParticleSystemComponent* P_LOD1;                                           // 0x0238 (size: 0x8)
    ERotation Rotation;                                                               // 0x0250 (size: 0x1)

    void SetColor(FColor Color_, EBlockTypeBP Type);
    void SetActive(bool Active);
    void DetachFromChunk();
}; // Size: 0x258

class ATreeManager : public AActor
{
    TArray<class UStaticMesh*> TreeMeshes;                                            // 0x0388 (size: 0x10)

}; // Size: 0x398

class AVRCharacter : public APawn
{
    class UCameraComponent* CameraRef;                                                // 0x02B0 (size: 0x8)
    bool LocationLoaded;                                                              // 0x02B8 (size: 0x1)
    float Health;                                                                     // 0x02BC (size: 0x4)
    TArray<class UMeshComponent*> Meshes;                                             // 0x02C0 (size: 0x10)

    void WasRotated();
    bool UseLightAroundValue();
    TArray<class UMeshComponent*> GetMeshComponents();
}; // Size: 0x2D0

struct FBPLowPassPeakFilter
{
    int32 VelocitySamples;                                                            // 0x0000 (size: 0x4)
    TArray<FVector> VelocitySampleLog;                                                // 0x0008 (size: 0x10)

}; // Size: 0x20

struct FBPEuroLowPassFilter
{
    float MinCutoff;                                                                  // 0x0000 (size: 0x4)
    float DeltaCutoff;                                                                // 0x0004 (size: 0x4)
    float CutoffSlope;                                                                // 0x0008 (size: 0x4)

}; // Size: 0x2C

struct FBPGripPair
{
    class UGripMotionControllerComponent* HoldingController;                          // 0x0000 (size: 0x8)
    uint8 GripID;                                                                     // 0x0008 (size: 0x1)

}; // Size: 0x10

class UVRExpansionFunctionLibrary : public UBlueprintFunctionLibrary
{

    void UpdatePeakLowPassFilter(FBPLowPassPeakFilter& TargetPeakFilter, FVector newSample);
    void SmoothUpdateLaserSpline(class USplineComponent* LaserSplineComponent, TArray<class USplineMeshComponent*> LaserSplineMeshComponents, FVector InStartLocation, FVector InEndLocation, FVector InForward, float LaserRadius);
    void SetObjectsIgnoreCollision(class UPrimitiveComponent* Prim1, FName OptionalBoneName1, class UPrimitiveComponent* Prim2, FName OptionalBoneName2, bool bIgnoreCollision);
    void RunEuroSmoothingFilter(FBPEuroLowPassFilter& TargetEuroFilter, FVector InRawValue, const float DeltaTime, FVector& SmoothedValue);
    void RotateAroundPivot(FRotator RotationDelta, FVector OriginalLocation, FRotator OriginalRotation, FVector PivotPoint, FVector& NewLocation, FRotator& NewRotation, bool bUseOriginalYawOnly);
    void ResetPeakLowPassFilter(FBPLowPassPeakFilter& TargetPeakFilter);
    void ResetEuroSmoothingFilter(FBPEuroLowPassFilter& TargetEuroFilter);
    void NonAuthorityMinimumAreaRectangle(class UObject* WorldContextObject, const TArray<FVector>& InVerts, const FVector& SampleSurfaceNormal, FVector& OutRectCenter, FRotator& OutRectRotation, float& OutSideLengthX, float& OutSideLengthY, bool bDebugDraw);
    FVector_NetQuantize100 MakeVector_NetQuantize100(FVector InVector);
    FVector_NetQuantize10 MakeVector_NetQuantize10(FVector InVector);
    FVector_NetQuantize MakeVector_NetQuantize(FVector InVector);
    FTransform_NetQuantize MakeTransform_NetQuantize(FVector Location, FRotator Rotation, FVector Scale);
    void LowPassFilter_RollingAverage(FVector lastAverage, FVector newSample, FVector& newAverage, int32 numSamples);
    void LowPassFilter_Exponential(FVector lastAverage, FVector newSample, FVector& newAverage, float sampleFactor);
    bool IsInVREditorPreviewOrGame();
    bool IsInVREditorPreview();
    FVector GetPeak_PeakLowPassFilter(FBPLowPassPeakFilter& TargetPeakFilter);
    EBPHMDWornState GetIsHMDWorn();
    bool GetIsHMDConnected();
    bool GetIsActorMovable(class AActor* ActorToCheck);
    EBPHMDDeviceType GetHMDType();
    FRotator GetHMDPureYaw(FRotator HMDRotation);
    bool GetHandFromMotionSourceName(FName MotionSource, EControllerHand& hand);
    void GetGripSlotInRangeByTypeName_Component(FName SlotType, class UPrimitiveComponent* Component, FVector WorldLocation, float MaxRange, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName& SlotName);
    void GetGripSlotInRangeByTypeName(FName SlotType, class AActor* Actor, FVector WorldLocation, float MaxRange, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName& SlotName);
    bool EqualEqual_FBPActorGripInformation(const FBPActorGripInformation& A, const FBPActorGripInformation& B);
    FTransform_NetQuantize Conv_TransformToTransformNetQuantize(const FTransform& InTransform);
    class UGripMotionControllerComponent* Conv_GripPairToMotionController(const FBPGripPair& GripPair);
    uint8 Conv_GripPairToGripID(const FBPGripPair& GripPair);
    FVector_NetQuantize100 Conv_FVectorToFVectorNetQuantize100(const FVector& InVector);
    FVector_NetQuantize10 Conv_FVectorToFVectorNetQuantize10(const FVector& InVector);
    FVector_NetQuantize Conv_FVectorToFVectorNetQuantize(const FVector& InVector);
    void BreakTransform_NetQuantize(const FTransform_NetQuantize& InTransform, FVector& Location, FRotator& Rotation, FVector& Scale);
    FRotator BPQuat_FindBetween(FVector Vec1, FVector Vec2);
    class USceneComponent* AddSceneComponentByClass(class UObject* Outer, TSubclassOf<class USceneComponent> Class, const FTransform& ComponentRelativeTransform);
}; // Size: 0x28

struct FBPVRControllerProfile
{
    FName ControllerName;                                                             // 0x0000 (size: 0x8)
    FTransform_NetQuantize SocketOffsetTransform;                                     // 0x0010 (size: 0x30)
    bool bUseSeperateHandOffsetTransforms;                                            // 0x0040 (size: 0x1)
    FTransform_NetQuantize SocketOffsetTransformRightHand;                            // 0x0050 (size: 0x30)

}; // Size: 0x80

class UVRGlobalSettings : public UObject
{
    int32 MaxCCDPasses;                                                               // 0x0028 (size: 0x4)
    float OneEuroMinCutoff;                                                           // 0x002C (size: 0x4)
    float OneEuroCutoffSlope;                                                         // 0x0030 (size: 0x4)
    float OneEuroDeltaCutoff;                                                         // 0x0034 (size: 0x4)
    TArray<FBPVRControllerProfile> ControllerProfiles;                                // 0x0050 (size: 0x10)

    void SaveControllerProfiles();
    void OverwriteControllerProfile(FBPVRControllerProfile& OverwritingProfile, bool bSaveOutToConfig);
    bool LoadControllerProfileByName(FName ControllerProfileName, bool bSetAsCurrentProfile);
    bool LoadControllerProfile(const FBPVRControllerProfile& ControllerProfile, bool bSetAsCurrentProfile);
    FName GetCurrentProfileName(bool& bHadLoadedProfile);
    FBPVRControllerProfile GetCurrentProfile(bool& bHadLoadedProfile);
    TArray<FBPVRControllerProfile> GetControllerProfiles();
    bool GetControllerProfile(FName ControllerProfileName, FBPVRControllerProfile& OutProfile);
    void DeleteControllerProfile(FName ControllerProfileName, bool bSaveOutToConfig);
    FTransform AdjustTransformByGivenControllerProfile(FBPVRControllerProfile& ControllerProfile, const FTransform& SocketTransform, bool bIsRightHand);
    FTransform AdjustTransformByControllerProfile(FName OptionalControllerProfileName, const FTransform& SocketTransform, bool bIsRightHand);
    void AddControllerProfile(FBPVRControllerProfile& NewProfile, bool bSaveOutToConfig);
}; // Size: 0xE0

class IVRGripInterface : public IInterface
{

    void TickGrip(class UGripMotionControllerComponent* GrippingController, const FBPActorGripInformation& GripInformation, float DeltaTime);
    EGripInterfaceTeleportBehavior TeleportBehavior();
    bool SimulateOnDrop();
    void SetHeld(class UGripMotionControllerComponent* HoldingController, uint8 GripID, bool bIsHeld);
    ESecondaryGripType SecondaryGripType();
    bool RequestsSocketing(class USceneComponent*& ParentToSocketTo, FName& OptionalSocketName, FTransform_NetQuantize& RelativeTransform);
    void OnUsed();
    void OnSecondaryUsed();
    void OnSecondaryGripRelease(class UGripMotionControllerComponent* GripOwningController, class USceneComponent* ReleasingSecondaryGripComponent, const FBPActorGripInformation& GripInformation);
    void OnSecondaryGrip(class UGripMotionControllerComponent* GripOwningController, class USceneComponent* SecondaryGripComponent, const FBPActorGripInformation& GripInformation);
    void OnInput(FKey Key, TEnumAsByte<EInputEvent> KeyEvent);
    void OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const FBPActorGripInformation& GripInformation, bool bWasSocketed);
    void OnGrip(class UGripMotionControllerComponent* GrippingController, const FBPActorGripInformation& GripInformation);
    void OnEndUsed();
    void OnEndSecondaryUsed();
    void OnChildGripRelease(class UGripMotionControllerComponent* ReleasingController, const FBPActorGripInformation& GripInformation, bool bWasSocketed);
    void OnChildGrip(class UGripMotionControllerComponent* GrippingController, const FBPActorGripInformation& GripInformation);
    void IsHeld(TArray<FBPGripPair>& HoldingControllers, bool& bIsHeld);
    EGripMovementReplicationSettings GripMovementReplicationType();
    EGripLateUpdateSettings GripLateUpdateSetting();
    float GripBreakDistance();
    EGripCollisionType GetPrimaryGripType(bool bIsSlot);
    void GetGripStiffnessAndDamping(float& GripStiffnessOut, float& GripDampingOut);
    bool GetGripScripts(TArray<class UVRGripScriptBase*>& ArrayReference);
    bool DenyGripping();
    void ClosestGripSlotInRange(FVector WorldLocation, bool bSecondarySlot, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName& SlotName, class UGripMotionControllerComponent* CallingController, FName OverridePrefix);
    bool AllowsMultipleGrips();
    FBPAdvGripSettings AdvancedGripSettings();
}; // Size: 0x28

class UVRGripScriptBaseBP : public UVRGripScriptBase
{

    void ReceiveTick(float DeltaSeconds);
}; // Size: 0x40

class UVRStereoWidgetComponent : public UWidgetComponent
{
    class UStereoLayerShape* Shape;                                                   // 0x0590 (size: 0x8)
    bool bUseEpicsWorldLockedStereo;                                                  // 0x0598 (size: 0x1)
    bool bIsSleeping;                                                                 // 0x0599 (size: 0x1)
    uint8 bNoAlphaChannel;                                                            // 0x059C (size: 0x1)
    uint8 bQuadPreserveTextureRatio;                                                  // 0x059C (size: 0x1)
    int32 Priority;                                                                   // 0x05B4 (size: 0x4)

    void SetPriority(int32 InPriority);
    int32 GetPriority();
}; // Size: 0x600

class AWallMount : public AMeshObject
{
}; // Size: 0x2A8

struct FWeatherStateData
{
    float CloudDensityTarget;                                                         // 0x0000 (size: 0x4)
    float OverallIntensityTarget;                                                     // 0x0004 (size: 0x4)
    float SaturationTarget;                                                           // 0x0008 (size: 0x4)
    float LightTemperatureTarget;                                                     // 0x000C (size: 0x4)
    float SunLightWeatherMultiplierTarget;                                            // 0x0010 (size: 0x4)
    float WindStrengthTarget;                                                         // 0x0014 (size: 0x4)
    float RainStrengthTarget;                                                         // 0x0018 (size: 0x4)
    FLinearColor FogWeatherColorTarget;                                               // 0x001C (size: 0x10)
    float CloudDensity;                                                               // 0x002C (size: 0x4)
    float OverallIntensity;                                                           // 0x0030 (size: 0x4)
    float LightTemperatur;                                                            // 0x0034 (size: 0x4)
    FLinearColor FogWeatherColor;                                                     // 0x0038 (size: 0x10)
    float RainStrength;                                                               // 0x0048 (size: 0x4)
    float SunLightWeatherMultiplier;                                                  // 0x004C (size: 0x4)
    float WindStrength;                                                               // 0x0050 (size: 0x4)
    float DelayTillParticles;                                                         // 0x0054 (size: 0x4)
    float SnowAmount;                                                                 // 0x0058 (size: 0x4)
    float SnowAmountTarget;                                                           // 0x005C (size: 0x4)
    float RainAmount;                                                                 // 0x0060 (size: 0x4)
    float RainAmountTarget;                                                           // 0x0064 (size: 0x4)
    EWeather Weather;                                                                 // 0x0068 (size: 0x1)
    float WindSpeed;                                                                  // 0x006C (size: 0x4)
    float WindSpeedTarget;                                                            // 0x0070 (size: 0x4)
    float TimeTillNewWeather;                                                         // 0x0074 (size: 0x4)

}; // Size: 0x78

class AWeatherManager : public AActor
{
    EWeather CurrentWeather;                                                          // 0x0220 (size: 0x1)
    EWeather PreviousWeather;                                                         // 0x0221 (size: 0x1)
    float WeatherInterp;                                                              // 0x0224 (size: 0x4)

    void LoadWeatherState(FWeatherStateData WeatherStateData);
    void GetWeatherState(FWeatherStateData& WeatherStateData);
}; // Size: 0x228

struct FMiningSound : public FTableRowBase
{
    class USoundBase* Stick;                                                          // 0x0008 (size: 0x8)
    class USoundBase* Stone_Pickaxe;                                                  // 0x0010 (size: 0x8)
    class USoundBase* Stone_Axe;                                                      // 0x0018 (size: 0x8)
    class USoundBase* Stone_Shovel;                                                   // 0x0020 (size: 0x8)
    class USoundBase* Copper_Pickaxe;                                                 // 0x0028 (size: 0x8)
    class USoundBase* Copper_Axe;                                                     // 0x0030 (size: 0x8)
    class USoundBase* Copper_Shovel;                                                  // 0x0038 (size: 0x8)
    class USoundBase* Copper_Sledgehammer;                                            // 0x0040 (size: 0x8)
    class USoundBase* Iron_Pickaxe;                                                   // 0x0048 (size: 0x8)
    class USoundBase* Iron_Axe;                                                       // 0x0050 (size: 0x8)
    class USoundBase* Iron_Shovel;                                                    // 0x0058 (size: 0x8)
    class USoundBase* Iron_Sledgehammer;                                              // 0x0060 (size: 0x8)

}; // Size: 0x68

struct FMiningParticle : public FTableRowBase
{
    class UParticleSystem* Stick;                                                     // 0x0008 (size: 0x8)
    class UParticleSystem* Stone_Pickaxe;                                             // 0x0010 (size: 0x8)
    class UParticleSystem* Stone_Axe;                                                 // 0x0018 (size: 0x8)
    class UParticleSystem* Stone_Shovel;                                              // 0x0020 (size: 0x8)
    class UParticleSystem* Copper_Pickaxe;                                            // 0x0028 (size: 0x8)
    class UParticleSystem* Copper_Axe;                                                // 0x0030 (size: 0x8)
    class UParticleSystem* Copper_Shovel;                                             // 0x0038 (size: 0x8)
    class UParticleSystem* Copper_Sledgehammer;                                       // 0x0040 (size: 0x8)
    class UParticleSystem* Iron_Pickaxe;                                              // 0x0048 (size: 0x8)
    class UParticleSystem* Iron_Axe;                                                  // 0x0050 (size: 0x8)
    class UParticleSystem* Iron_Shovel;                                               // 0x0058 (size: 0x8)
    class UParticleSystem* Iron_Sledgehammer;                                         // 0x0060 (size: 0x8)

}; // Size: 0x68

struct FMiningDamage : public FTableRowBase
{
    float Stick;                                                                      // 0x0008 (size: 0x4)
    float Stone_Pickaxe;                                                              // 0x000C (size: 0x4)
    float Stone_Axe;                                                                  // 0x0010 (size: 0x4)
    float Stone_Shovel;                                                               // 0x0014 (size: 0x4)
    float Copper_Pickaxe;                                                             // 0x0018 (size: 0x4)
    float Copper_Axe;                                                                 // 0x001C (size: 0x4)
    float Copper_Shovel;                                                              // 0x0020 (size: 0x4)
    float Arrow;                                                                      // 0x0024 (size: 0x4)
    float Copper_Sledgehammer;                                                        // 0x0028 (size: 0x4)
    float Iron_Pickaxe;                                                               // 0x002C (size: 0x4)
    float Iron_Axe;                                                                   // 0x0030 (size: 0x4)
    float Iron_Shovel;                                                                // 0x0034 (size: 0x4)
    float Iron_Sledgehammer;                                                          // 0x0038 (size: 0x4)

}; // Size: 0x40

struct FMeshComponentInfo
{
    class URuntimeMeshComponent* RMC;                                                 // 0x0000 (size: 0x8)
    class URuntimeMeshProviderChunks* RuntimeMeshProvider;                            // 0x0008 (size: 0x8)

}; // Size: 0x30

struct FGripComponentEndPhysicsTickFunction : public FTickFunction
{
}; // Size: 0x30

struct FVRClientAuthReplicationData
{
    bool bUseClientAuthThrowing;                                                      // 0x0000 (size: 0x1)
    int32 UpdateRate;                                                                 // 0x0004 (size: 0x4)

}; // Size: 0x50

struct FRepMovementVR : public FRepMovement
{
}; // Size: 0x34

struct FTexSource
{
    FGuid ID;                                                                         // 0x00A8 (size: 0x10)
    int32 SizeX;                                                                      // 0x00B8 (size: 0x4)
    int32 SizeY;                                                                      // 0x00BC (size: 0x4)
    int32 NumSlices;                                                                  // 0x00C0 (size: 0x4)
    int32 NumMips;                                                                    // 0x00C4 (size: 0x4)
    bool bGuidIsHash;                                                                 // 0x00C8 (size: 0x1)
    TEnumAsByte<ETextureSourceFormat> Format;                                         // 0x00C9 (size: 0x1)

}; // Size: 0xD0

struct FBPActorPhysicsHandleInformation
{
    class UObject* HandledObject;                                                     // 0x0000 (size: 0x8)

}; // Size: 0x160

struct FBPInterfaceProperties
{
    bool bDenyGripping;                                                               // 0x0000 (size: 0x1)
    bool bAllowMultipleGrips;                                                         // 0x0001 (size: 0x1)
    EGripInterfaceTeleportBehavior OnTeleportBehavior;                                // 0x0002 (size: 0x1)
    bool bSimulateOnDrop;                                                             // 0x0003 (size: 0x1)
    EGripCollisionType SlotDefaultGripType;                                           // 0x0004 (size: 0x1)
    EGripCollisionType FreeDefaultGripType;                                           // 0x0005 (size: 0x1)
    ESecondaryGripType SecondaryGripType;                                             // 0x0006 (size: 0x1)
    EGripMovementReplicationSettings MovementReplicationType;                         // 0x0007 (size: 0x1)
    EGripLateUpdateSettings LateUpdateSetting;                                        // 0x0008 (size: 0x1)
    float ConstraintStiffness;                                                        // 0x000C (size: 0x4)
    float ConstraintDamping;                                                          // 0x0010 (size: 0x4)
    float ConstraintBreakDistance;                                                    // 0x0014 (size: 0x4)
    float SecondarySlotRange;                                                         // 0x0018 (size: 0x4)
    float PrimarySlotRange;                                                           // 0x001C (size: 0x4)
    FBPAdvGripSettings AdvancedGripSettings;                                          // 0x0020 (size: 0x20)
    bool bIsHeld;                                                                     // 0x0040 (size: 0x1)
    TArray<FBPGripPair> HoldingControllers;                                           // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FBPVRWaistTracking_Info
{
    FRotator RestingRotation;                                                         // 0x0000 (size: 0xC)
    float WaistRadius;                                                                // 0x000C (size: 0x4)
    EBPVRWaistTrackingMode TrackingMode;                                              // 0x0010 (size: 0x1)
    class UPrimitiveComponent* TrackedDevice;                                         // 0x0018 (size: 0x8)

}; // Size: 0x20

#endif
