#ifndef UE4SS_SDK_RuntimeTreeBP_HPP
#define UE4SS_SDK_RuntimeTreeBP_HPP

class ARuntimeTreeBP_C : public ARuntimeTree
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProceduralMeshComponent* TreePMC;
    class UStaticMeshComponent* TreeSMCCollision;
    class UStaticMeshComponent* TreeSMC;
    class UStaticMeshComponent* SliceLocation;
    float DissolveLeaves_NewTrack_0_AE701CB545DAF5A4A01D85AF3B252CC9;
    TEnumAsByte<ETimelineDirection::Type> DissolveLeaves__Direction_AE701CB545DAF5A4A01D85AF3B252CC9;
    class UTimelineComponent* DissolveLeaves;
    class UProceduralMeshComponent* Cut;
    class URuntimeMeshComponent* CutNew;
    TArray<FTransform> SpawnLocation;
    class UStaticMesh* TreeMesh;
    class UStaticMesh* TreeMeshCollision;
    class UStaticMesh* TreeMeshCollisionLow;
    bool DoBeginPlay;
    FVector L_PlanePosition;
    FVector L_PlaneNormal;
    FVector L_Force;
    int32 HitCounter;
    bool ToolInside;
    class ASphereActor_C* SphereActor;
    float ToolOutLast;
    class AToolBP_C* ToolInsideRef;
    FRotator ToolLastRot;
    float ToolFreedAmount;
    FVector ImpactPoint;
    FVector ImpactNormal;
    TArray<class UDecalComponent*> SpawnedDecals;
    bool TreeCut;
    FVector ImpactNormalTool;
    int32 LeaveMaterialIndex;
    class UMaterialInterface* LeavesDissolveMat;
    class UProceduralMeshComponent* CutNewPMC;

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
};

#endif
