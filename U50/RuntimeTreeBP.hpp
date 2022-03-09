#ifndef UE4SS_SDK_RuntimeTreeBP_HPP
#define UE4SS_SDK_RuntimeTreeBP_HPP

class ARuntimeTreeBP_C : public ARuntimeTree
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UProceduralMeshComponent* TreePMC;                                          // 0x0298 (size: 0x8)
    class UStaticMeshComponent* TreeSMCCollision;                                     // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* TreeSMC;                                              // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* SliceLocation;                                        // 0x02B0 (size: 0x8)
    float DissolveLeaves_NewTrack_0_AE701CB545DAF5A4A01D85AF3B252CC9;                 // 0x02B8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> DissolveLeaves__Direction_AE701CB545DAF5A4A01D85AF3B252CC9; // 0x02BC (size: 0x1)
    class UTimelineComponent* DissolveLeaves;                                         // 0x02C0 (size: 0x8)
    class UProceduralMeshComponent* Cut;                                              // 0x02C8 (size: 0x8)
    class URuntimeMeshComponent* CutNew;                                              // 0x02D0 (size: 0x8)
    TArray<FTransform> SpawnLocation;                                                 // 0x02D8 (size: 0x10)
    class UStaticMesh* TreeMesh;                                                      // 0x02E8 (size: 0x8)
    class UStaticMesh* TreeMeshCollision;                                             // 0x02F0 (size: 0x8)
    class UStaticMesh* TreeMeshCollisionLow;                                          // 0x02F8 (size: 0x8)
    bool DoBeginPlay;                                                                 // 0x0300 (size: 0x1)
    FVector L_PlanePosition;                                                          // 0x0304 (size: 0xC)
    FVector L_PlaneNormal;                                                            // 0x0310 (size: 0xC)
    FVector L_Force;                                                                  // 0x031C (size: 0xC)
    int32 HitCounter;                                                                 // 0x0328 (size: 0x4)
    bool ToolInside;                                                                  // 0x032C (size: 0x1)
    class ASphereActor_C* SphereActor;                                                // 0x0330 (size: 0x8)
    float ToolOutLast;                                                                // 0x0338 (size: 0x4)
    class AToolBP_C* ToolInsideRef;                                                   // 0x0340 (size: 0x8)
    FRotator ToolLastRot;                                                             // 0x0348 (size: 0xC)
    float ToolFreedAmount;                                                            // 0x0354 (size: 0x4)
    FVector ImpactPoint;                                                              // 0x0358 (size: 0xC)
    FVector ImpactNormal;                                                             // 0x0364 (size: 0xC)
    TArray<class UDecalComponent*> SpawnedDecals;                                     // 0x0370 (size: 0x10)
    bool TreeCut;                                                                     // 0x0380 (size: 0x1)
    FVector ImpactNormalTool;                                                         // 0x0384 (size: 0xC)
    int32 LeaveMaterialIndex;                                                         // 0x0390 (size: 0x4)
    class UMaterialInterface* LeavesDissolveMat;                                      // 0x0398 (size: 0x8)
    class UProceduralMeshComponent* CutNewPMC;                                        // 0x03A0 (size: 0x8)

    void SetMaterials();
    void DissolveLeaves__FinishedFunc();
    void DissolveLeaves__UpdateFunc();
    void ReceiveBeginPlay();
    void Slice(FVector PlanePosition, FVector PlaneNormal, FVector Force);
    void BndEvt__TreeSMCCollision_K2Node_ComponentBoundEvent_108_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveTick(float DeltaSeconds);
    void UpdateToolStuckLocation();
    void FreeTool();
    void AddTreeMesh();
    void SpawnItems();
    void ResetToPoolBP();
    void SpawnWoodItem(FVector Location, FVector Normal, class AToolBP_C* Tool);
    void FirstSliice(FVector PlanePosition, FVector PlaneNormal, FVector Force);
    void DeleteExistingDecals();
    void Dissolve();
    void SetToolInside(bool ToolInside);
    void SetActive();
    void CheckHint(FVector WorldLocation);
    void ExecuteUbergraph_RuntimeTreeBP(int32 EntryPoint);
}; // Size: 0x3A8

#endif
