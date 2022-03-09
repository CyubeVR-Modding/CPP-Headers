#ifndef UE4SS_SDK_BlockHolder_HPP
#define UE4SS_SDK_BlockHolder_HPP

class ABlockHolder_C : public AReceiveLightActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UNiagaraComponent* Niagara5;                                                // 0x0270 (size: 0x8)
    class UNiagaraComponent* Niagara4;                                                // 0x0278 (size: 0x8)
    class UNiagaraComponent* Niagara3;                                                // 0x0280 (size: 0x8)
    class UNiagaraComponent* Niagara2;                                                // 0x0288 (size: 0x8)
    class UNiagaraComponent* Niagara1;                                                // 0x0290 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0298 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x02A0 (size: 0x8)
    class UNiagaraComponent* Niagara10;                                               // 0x02A8 (size: 0x8)
    class UNiagaraComponent* Niagara9;                                                // 0x02B0 (size: 0x8)
    class UNiagaraComponent* Niagara8;                                                // 0x02B8 (size: 0x8)
    class UNiagaraComponent* Niagara7;                                                // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* CubeInHand;                                           // 0x02C8 (size: 0x8)
    class UNiagaraComponent* Niagara6;                                                // 0x02D0 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x02D8 (size: 0x8)
    class UChildActorComponent* CrystalSlotChildActor;                                // 0x02E0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02E8 (size: 0x8)
    class UMaterialInstanceDynamic* HandBlockMaterial;                                // 0x02F0 (size: 0x8)
    TArray<class UMeshComponent*> Meshes;                                             // 0x02F8 (size: 0x10)
    bool HiddenBecauseMeshObjectSelected;                                             // 0x0308 (size: 0x1)
    bool Active;                                                                      // 0x0309 (size: 0x1)
    TArray<class UNiagaraComponent*> ParticleSystems;                                 // 0x0310 (size: 0x10)
    bool IsRightHand;                                                                 // 0x0320 (size: 0x1)
    bool EverUsedCrystalInBuildTool;                                                  // 0x0321 (size: 0x1)
    float LastCrystalHintShown;                                                       // 0x0324 (size: 0x4)
    bool DidEverNotUseCrystal;                                                        // 0x0328 (size: 0x1)

    void AttachCrystal(FColor CrystalColor, float CrystalChargeState, bool& Attached);
    void CanGrabCrystal(bool& CanGrab, FColor& Color, float& ChargeState);
    void ShowCrystalHintText();
    void SetCrystalProperties();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void SetHiddenBecauseMeshObjectSelected(bool Hidden);
    void UpdateVisibility();
    void SetActive(bool Active);
    void RemovedCrystal();
    void ReduceCrystalCharge(int32 BlocksPlaced, bool IsRightHandIn);
    void BndEvt__CubeInHand_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__CubeInHand_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void SetLength(float Length);
    void ExecuteUbergraph_BlockHolder(int32 EntryPoint);
}; // Size: 0x329

#endif
