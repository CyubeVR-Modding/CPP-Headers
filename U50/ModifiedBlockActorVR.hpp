#ifndef UE4SS_SDK_ModifiedBlockActorVR_HPP
#define UE4SS_SDK_ModifiedBlockActorVR_HPP

class AModifiedBlockActorVR_C : public AModifiedBlockActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UStaticMeshComponent* bLock;                                                // 0x0318 (size: 0x8)
    float Timeline_1_Opacity_8B546AD246DD3C3541818D8FC042EFD0;                        // 0x0320 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_8B546AD246DD3C3541818D8FC042EFD0; // 0x0324 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0328 (size: 0x8)
    float Timeline_0_Scale_7AA6BC1B4B6280F33DA85792E1419A4B;                          // 0x0330 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_7AA6BC1B4B6280F33DA85792E1419A4B; // 0x0334 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0338 (size: 0x8)
    class UMaterialInstanceDynamic* MaterialInstanceDynamicBP;                        // 0x0340 (size: 0x8)
    class UTexture2D* ParticleTexture;                                                // 0x0348 (size: 0x8)
    float MaxHealthBP;                                                                // 0x0350 (size: 0x4)
    float CurrentHealthBP;                                                            // 0x0354 (size: 0x4)
    bool BackToNormal;                                                                // 0x0358 (size: 0x1)
    FTimerHandle RepairTimer;                                                         // 0x0360 (size: 0x8)
    class ABlockItemVR_C* SpawnedItem;                                                // 0x0368 (size: 0x8)
    EBlockTypeBP LastToolHitWith;                                                     // 0x0370 (size: 0x1)
    FVector MoveTargetLocation;                                                       // 0x0374 (size: 0xC)

    void UnlockAchievementOnItemSpawn(EBlockTypeBP ItemSpawned);
    void GetUniqueID(int32& UniqueId);
    void SetDestructionAmountNew(float Amount);
    void GetDamageTextureFalloff(float Level, float& Falloff);
    void SetRealMaterialF();
    void SpawnItems();
    void CopyMaterialInstance(class UMaterialInstanceDynamic* ToCopy, class UMaterialInstanceDynamic*& Copy);
    void PlayRemoveEffects(EBlockTypeBP Type, FVector Location);
    void RemoveSelfAndPotentialBlockAbove();
    void FinishedMining();
    void ReceiveTickFromPlayer(bool& Finished);
    void SetDestructionAmount(int32 Amount);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void DestroyNextFrame();
    void TransferBack();
    void DamageCPP(float Amount, EBlockTypeBP ToolType);
    void StartFadeScale();
    void ReceiveTick(float DeltaSeconds);
    void SetRealMaterial();
    void UpdateDestructionAmountBP();
    void ResetToPoolBP();
    void StartFadeOpacity();
    void StopFadeOpacity();
    void AddHealth();
    void IsForMoveNow();
    void SetNewMoveTargetLocation(FVector MoveTargetLocation);
    void FinishBlockMove();
    void HealthyAndFadeBackToChunk();
    void Hit(float Damage, EBlockTypeBP Tool);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_ModifiedBlockActorVR(int32 EntryPoint);
}; // Size: 0x380

#endif
