#ifndef UE4SS_SDK_FurnaceBP_HPP
#define UE4SS_SDK_FurnaceBP_HPP

class AFurnaceBP_C : public AFurnace
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* UpperChamberOverlapCylinder;                          // 0x02C0 (size: 0x8)
    class UBoxComponent* IngotOverlapTestArea;                                        // 0x02C8 (size: 0x8)
    class UAudioComponent* Fire01;                                                    // 0x02D0 (size: 0x8)
    class UArrowComponent* IngotMoldLocation;                                         // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* Furnace_IngotMold_GameRes_Edit;                       // 0x02E0 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x02E8 (size: 0x8)
    class UDecalComponent* OpeningDecal;                                              // 0x02F0 (size: 0x8)
    class UPointLightComponent* PointLightUpperChamber;                               // 0x02F8 (size: 0x8)
    class UParticleSystemComponent* P_FireBottomActive1;                              // 0x0300 (size: 0x8)
    class UParticleSystemComponent* P_FireBottomActive;                               // 0x0308 (size: 0x8)
    class USceneComponent* FireParticles;                                             // 0x0310 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0318 (size: 0x8)
    class UArrowComponent* FireCheckLocation;                                         // 0x0320 (size: 0x8)
    class UGrabRotateComponent_C* GrabRotateComponentShutterBottom;                   // 0x0328 (size: 0x8)
    class UStaticMeshComponent* Furnace_ShutterBottom_GameRes;                        // 0x0330 (size: 0x8)
    class USceneComponent* RotationShutterBottom;                                     // 0x0338 (size: 0x8)
    class UStaticMeshComponent* Furnace_Shuttertop_GameRes;                           // 0x0340 (size: 0x8)
    class UGrabRotateComponent_C* GrabRotateComponentShutterTop;                      // 0x0348 (size: 0x8)
    class UGrabRotateComponent_C* GrabRotateComponentLever;                           // 0x0350 (size: 0x8)
    class UArrowComponent* FlintLoc2;                                                 // 0x0358 (size: 0x8)
    class UArrowComponent* FlintLoc1;                                                 // 0x0360 (size: 0x8)
    class UStaticMeshComponent* Furnace_GameRes_withoutMolten;                        // 0x0368 (size: 0x8)
    class UBoxComponent* ManualBoundingBox;                                           // 0x0370 (size: 0x8)
    class UParticleSystemComponent* P_FurnaceBottom;                                  // 0x0378 (size: 0x8)
    class UParticleSystemComponent* P_FurnaceChimney;                                 // 0x0380 (size: 0x8)
    class UPointLightComponent* PointLight1;                                          // 0x0388 (size: 0x8)
    class USceneComponent* Scene2;                                                    // 0x0390 (size: 0x8)
    class UStaticMeshComponent* Furnace_Handle_GameRes;                               // 0x0398 (size: 0x8)
    class USceneComponent* RotationShutterTop;                                        // 0x03A0 (size: 0x8)
    class USceneComponent* RotationHandle;                                            // 0x03A8 (size: 0x8)
    class UStaticMeshComponent* Furnace_MoltenOre;                                    // 0x03B0 (size: 0x8)
    class UStaticMeshComponent* Furnace_MoltenFilling;                                // 0x03B8 (size: 0x8)
    class UStaticMeshComponent* Furnace_MoltenPouring;                                // 0x03C0 (size: 0x8)
    class UStaticMeshComponent* Furnace_IngotMold_GameRes;                            // 0x03C8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x03D0 (size: 0x8)
    float Timeline_3_NewTrack_0_47FAD42D4D69E0E914140F873CCCCFE5;                     // 0x03D8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_3__Direction_47FAD42D4D69E0E914140F873CCCCFE5; // 0x03DC (size: 0x1)
    class UTimelineComponent* Timeline_3;                                             // 0x03E0 (size: 0x8)
    float Timeline_2_NewTrack_0_C272D8C744EBA714CA8542B356F58840;                     // 0x03E8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_C272D8C744EBA714CA8542B356F58840; // 0x03EC (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x03F0 (size: 0x8)
    float Timeline_1_NewTrack_0_589CE3254385859D68E57789F3C85D2C;                     // 0x03F8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_589CE3254385859D68E57789F3C85D2C; // 0x03FC (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0400 (size: 0x8)
    float Timeline_0_NewTrack_0_D0E59FD342927335F523658AFC4E5862;                     // 0x0408 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_D0E59FD342927335F523658AFC4E5862; // 0x040C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0410 (size: 0x8)
    float FlowOut_NewTrack_0_C431153E4CC8F480C54B05ACD9CB0C01;                        // 0x0418 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> FlowOut__Direction_C431153E4CC8F480C54B05ACD9CB0C01; // 0x041C (size: 0x1)
    class UTimelineComponent* FlowOut;                                                // 0x0420 (size: 0x8)
    class ABlockItemVR_C* Flint1Actor;                                                // 0x0428 (size: 0x8)
    class ABlockItemVR_C* Flint2Actor;                                                // 0x0430 (size: 0x8)
    FVector Flint1LastLoc;                                                            // 0x0438 (size: 0xC)
    FVector Flint2LastLoc;                                                            // 0x0444 (size: 0xC)
    bool FurnaceOnFireNow;                                                            // 0x0450 (size: 0x1)
    float HeatOnTop;                                                                  // 0x0454 (size: 0x4)
    float MoltenFillValue;                                                            // 0x0458 (size: 0x4)
    float MeltAmountSum;                                                              // 0x045C (size: 0x4)
    TArray<class UDecalComponent*> DecalPool;                                         // 0x0460 (size: 0x10)
    class UMaterialInstanceDynamic* OpeningDecalMat;                                  // 0x0470 (size: 0x8)
    class UFurnaceUpperUI_C* UpperUI;                                                 // 0x0478 (size: 0x8)
    int32 CountItemsToMelt;                                                           // 0x0480 (size: 0x4)
    int32 ItemsFullyFinishedMelt;                                                     // 0x0484 (size: 0x4)
    bool FurnaceFlowOutActive;                                                        // 0x0488 (size: 0x1)
    float FurnaceTimeMul;                                                             // 0x048C (size: 0x4)
    TArray<FTransform> IngotLocations;                                                // 0x0490 (size: 0x10)
    class AActor* AttachedMold;                                                       // 0x04A0 (size: 0x8)
    float CoolingDownProgress;                                                        // 0x04A8 (size: 0x4)
    bool CoolingDown;                                                                 // 0x04AC (size: 0x1)
    float TotalHeatComingFromBottom;                                                  // 0x04B0 (size: 0x4)
    class UCurveFloat* Curve;                                                         // 0x04B8 (size: 0x8)
    bool FlowOutStarted;                                                              // 0x04C0 (size: 0x1)
    bool MoldFreeAgain;                                                               // 0x04C1 (size: 0x1)
    bool MeltingIron;                                                                 // 0x04C2 (size: 0x1)
    bool MeltingSand;                                                                 // 0x04C3 (size: 0x1)
    EBlockTypeBP IngotToSpawn;                                                        // 0x04C4 (size: 0x1)

    void CanDamageObjectBP(bool& CanDamage);
    void CheckUpperChamberItemAmount();
    void GetFurnaceSaveVariables(float& HeatOnTop, float& MoltenFillValue, float& MeltAmountSum, int32& ItemFullyFinishedMelt, bool& FlowOutStarted, FRotator& RotationShutterTop, FRotator& RotationShutterBottom, FRotator& RotationLever);
    void UpdateCooldown();
    void FinishedFlowOut();
    void LeverWasRotated();
    void CheckFireActive();
    void UserConstructionScript();
    void FlowOut__FinishedFunc();
    void FlowOut__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void Timeline_3__FinishedFunc();
    void Timeline_3__UpdateFunc();
    void Timeline_3__NewTrack_1__EventFunc();
    void ReceiveBeginPlay();
    void Flint1Released();
    void Flint2Released();
    void ReceiveTick(float DeltaSeconds);
    void CreateDecalPool();
    void PlayFlowOutAnimation();
    void CheckAttachedMold();
    void SetupLightReceive();
    void SetIsPreview(bool IsPreview);
    void ManageFlints();
    void UpdateUI();
    void SetFurnaceSaveVariables(float HeatOnTop, float MoltenFillValue, float MeltAmountSum, int32 ItemFullyFinishedMelt, bool FlowOutStarted, FRotator RotationShutterTop, FRotator RotationShutterBottom, FRotator RotationLever);
    void AnythingRotated();
    void CheckIngotOverlap();
    void UpdateFillVisual();
    void DestroyEvent();
    void ExecuteUbergraph_FurnaceBP(int32 EntryPoint);
}; // Size: 0x4C5

#endif
