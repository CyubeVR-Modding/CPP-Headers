#ifndef UE4SS_SDK_BlockItemVR_HPP
#define UE4SS_SDK_BlockItemVR_HPP

class ABlockItemVR_C : public ABlockItem
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F8 (size: 0x8)
    class UNiagaraComponent* BlockItemSphereNiagaraSystem;                            // 0x0300 (size: 0x8)
    class UStaticMeshComponent* CubeOutline;                                          // 0x0308 (size: 0x8)
    class UTextRenderComponent* Amount2;                                              // 0x0310 (size: 0x8)
    class UStaticMeshComponent* CubeForSockets;                                       // 0x0318 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0320 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0328 (size: 0x8)
    class UStaticMeshComponent* Down;                                                 // 0x0330 (size: 0x8)
    class UStaticMeshComponent* Up;                                                   // 0x0338 (size: 0x8)
    class UStaticMeshComponent* Back;                                                 // 0x0340 (size: 0x8)
    class UStaticMeshComponent* Front;                                                // 0x0348 (size: 0x8)
    class UStaticMeshComponent* Right;                                                // 0x0350 (size: 0x8)
    class UStaticMeshComponent* Left;                                                 // 0x0358 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0360 (size: 0x8)
    float FadeToHand_FadePercentage_7EC1DF214A17A94362F2F69CB74CC75C;                 // 0x0368 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> FadeToHand__Direction_7EC1DF214A17A94362F2F69CB74CC75C; // 0x036C (size: 0x1)
    class UTimelineComponent* FadeToHand;                                             // 0x0370 (size: 0x8)
    float FadeCoalBurning_NewTrack_0_3F6EE20D4BCC90679D7B68B6F253FD41;                // 0x0378 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> FadeCoalBurning__Direction_3F6EE20D4BCC90679D7B68B6F253FD41; // 0x037C (size: 0x1)
    class UTimelineComponent* FadeCoalBurning;                                        // 0x0380 (size: 0x8)
    float FadeScale_Scale_B4E6C13B44D2D717C065229A41F60F19;                           // 0x0388 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> FadeScale__Direction_B4E6C13B44D2D717C065229A41F60F19; // 0x038C (size: 0x1)
    class UTimelineComponent* FadeScale;                                              // 0x0390 (size: 0x8)
    float GetSmaller_1_21C2406F41BB1B8C530318BF4C6355BC;                              // 0x0398 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> GetSmaller__Direction_21C2406F41BB1B8C530318BF4C6355BC; // 0x039C (size: 0x1)
    class UTimelineComponent* GetSmaller;                                             // 0x03A0 (size: 0x8)
    class UMaterialInstanceDynamic* Material;                                         // 0x03A8 (size: 0x8)
    class UMaterialInstanceDynamic* MaterialInstanceDynamic;                          // 0x03B0 (size: 0x8)
    class AMyChunkManager_C* ChunkManager;                                            // 0x03B8 (size: 0x8)
    bool Rotate;                                                                      // 0x03C0 (size: 0x1)
    float SphereDis;                                                                  // 0x03C4 (size: 0x4)
    TArray<class UStaticMeshComponent*> Spheres;                                      // 0x03C8 (size: 0x10)
    bool IsPartOfStructure;                                                           // 0x03D8 (size: 0x1)
    class ABlockItemVR_C* OverlapToAttachTo;                                          // 0x03E0 (size: 0x8)
    class ABlockItemVR_C* IsAttachedTo;                                               // 0x03E8 (size: 0x8)
    TArray<ERotation> SphereDirections;                                               // 0x03F0 (size: 0x10)
    class UStaticMeshComponent* SphereToAttachTo;                                     // 0x0400 (size: 0x8)
    bool HasSomethingAttachedTo;                                                      // 0x0408 (size: 0x1)
    class ABlockItemVR_C* StructureMainItem;                                          // 0x0410 (size: 0x8)
    TEnumAsByte<hand> LastGrabbedByHand;                                              // 0x0418 (size: 0x1)
    class ABlockItemVR_C* ItemOverlapWith;                                            // 0x0420 (size: 0x8)
    EItemClass CurrentItemClass;                                                      // 0x0428 (size: 0x1)
    FVector OriginalScale;                                                            // 0x042C (size: 0xC)
    bool DragOutUI;                                                                   // 0x0438 (size: 0x1)
    float LastVibration;                                                              // 0x043C (size: 0x4)
    TArray<class UParticleSystemComponent*> Particles;                                // 0x0440 (size: 0x10)
    EBlockTypeBP CraftingType;                                                        // 0x0450 (size: 0x1)
    int32 CraftingTypeUniqueID;                                                       // 0x0454 (size: 0x4)
    int32 CraftingAmount;                                                             // 0x0458 (size: 0x4)
    class AFirstPersonCharacterVR_C* OverlapCharacter;                                // 0x0460 (size: 0x8)
    ERotation SphereToAttachToDirection;                                              // 0x0468 (size: 0x1)
    bool DoBeginPlay;                                                                 // 0x0469 (size: 0x1)
    int32 Amount;                                                                     // 0x046C (size: 0x4)
    class AChestInternalsBP_C* IsInChest;                                             // 0x0470 (size: 0x8)
    int32 IsInChestIndex;                                                             // 0x0478 (size: 0x4)
    class AChestInternalsBP_C* FromChest;                                             // 0x0480 (size: 0x8)
    int32 FromChestIndex;                                                             // 0x0488 (size: 0x4)
    bool DoFadeScale;                                                                 // 0x048C (size: 0x1)
    FBlockItemVR_CReleased Released;                                                  // 0x0490 (size: 0x10)
    void Released();
    FVector Speed;                                                                    // 0x04A0 (size: 0xC)
    class UParticleSystemComponent* OnFireParticles;                                  // 0x04B0 (size: 0x8)
    bool IsMelting;                                                                   // 0x04B8 (size: 0x1)
    float MeltAmountBP;                                                               // 0x04BC (size: 0x4)
    bool GravGlovActive;                                                              // 0x04C0 (size: 0x1)
    FRotator FadeStartRotation;                                                       // 0x04C4 (size: 0xC)
    FVector FadeStartLocation;                                                        // 0x04D0 (size: 0xC)
    FTimerHandle SpreadFireTimer;                                                     // 0x04E0 (size: 0x8)
    bool L_BehindBack;                                                                // 0x04E8 (size: 0x1)
    bool PlayHapticFeedbackOnGrabbedHand;                                             // 0x04E9 (size: 0x1)
    FTimerHandle ShowCraftingHintTimer;                                               // 0x04F0 (size: 0x8)
    bool FadingToDestroyed;                                                           // 0x04F8 (size: 0x1)
    FTimerHandle NoLongerFromChestTimer;                                              // 0x0500 (size: 0x8)

    void SetGravityGloveTargetIndicatorActive(bool Active, bool Left, bool& _);
    void GetRealWorldLocation(FVector& Location);
    void DeactivateTelekinesis(class UStaticMeshComponent*& Return);
    void ActivateTelekinesis(TEnumAsByte<hand> hand, bool GravityGlove, class UPrimitiveComponent*& SimulatingComponent);
    void CanTelekinesis(bool LineOfSight, bool& Can, class AActor*& ActorToGrab);
    void Release(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component, bool& success);
    void Grab(class AFirstPersonCharacterVR_C* Player, class UBoxComponent* HandComponent, class UMeshComponent* HandMesh, class USphereComponent* HandOverlap, class UBoxComponent* OtherHandComponent, class UMeshComponent* OtherHandParentComponent, TEnumAsByte<hand> hand, bool IsDistanceGrab, bool AfterSpawn, class AActor*& GrabbedActorMain, class AActor*& GrabbedActorDirect);
    void IfHeldInHandThenRelease();
    void ShowCraftingHint();
    void Check Release Behind Back(class AFirstPersonCharacterVR_C* Player, EControllerHand hand, bool& Result);
    void ReduceHealthWhileOnFire(bool& Dead);
    void LightOnFire();
    void InitFlint();
    void UnlockAchievementOnCraft(EBlockTypeBP DidCraftType, int32 Num);
    void CheckAttachToBucket(bool& Destroyed);
    void SetCrystalPropertiesBP();
    void ActivateTelekinesisF();
    void DetachAll();
    void SetSphereLoc(class USceneComponent*& Sphere, float X, float Y, float Z);
    void FullUpdateBP(EBlockTypeBP BlockType, int32 UniqueId, int32 Amount, bool In_DoFadeScale, bool DirectFromLoad);
    void SetAmountVisible(bool Visible);
    void SetAmount(int32 Amount, bool Visible);
    void GetNuggetMeshInfo(class UStaticMesh*& Mesh, FVector& Scale);
    void DoCraftingCheck();
    void SetParticles(bool Active);
    void Vibrate(TEnumAsByte<hand> hand);
    void SetSphereSize();
    void SetFullScale();
    void SetNuggetType();
    void InitNugget();
    void AttachToOtherItemF();
    void CheckIfLocationAlreadyUsed(FVector WorldLocation, bool& AlreadyThere);
    void TransferOwnershipToNewItem();
    void SetHighlight(bool Enable, bool Regular);
    void SphereToDirection(class UStaticMeshComponent* AttachPoint, ERotation& Direction);
    void AddToInventory();
    void UpdateItemTypeBP(EBlockTypeBP BlockType, int32 UniqueId, bool Always);
    void UserConstructionScript();
    void GetSmaller__FinishedFunc();
    void GetSmaller__UpdateFunc();
    void FadeScale__FinishedFunc();
    void FadeScale__UpdateFunc();
    void FadeCoalBurning__FinishedFunc();
    void FadeCoalBurning__UpdateFunc();
    void FadeToHand__FinishedFunc();
    void FadeToHand__UpdateFunc();
    void SetSphereVisibility(bool bNewVisibility);
    void SetRotate(bool Rotate);
    void CheckSphereOverlaps();
    void OtherItemAttached(class ABlockItemVR_C* Item);
    void OtherItemDetached(class ABlockItemVR_C* Item);
    void OverlapHandCustom(EControllerHand hand);
    void AddToBucket(bool BehindBack);
    void DoCheck();
    void BndEvt__Cube_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__Box_K2Node_ComponentBoundEvent_318_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Cube_K2Node_ComponentBoundEvent_87_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, FHitResult HitResult);
    void EndOverlapM(class AActor* OtherActor, class UPrimitiveComponent* OtherComponent);
    void BndEvt__Cube_K2Node_ComponentBoundEvent_192_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Box_K2Node_ComponentBoundEvent_308_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveTick(float DeltaSeconds);
    void DisableAllOverlapEvents();
    void ReceiveBeginPlay();
    void StartFadeScale();
    void UpdateItemType(EBlockTypeBP NewType, int32 NewUniqueID, class AChunkManager* ChunkManager);
    void NoLongerFromChest();
    void EndOverlapCustom();
    void Release_1(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component);
    void ResetToPoolBP();
    void ResetAddBucket();
    void ResetAddBucket2();
    void FullUpdate(int32 Amount, EBlockTypeBP NewType, int32 NewUniqueID, bool DirectFromLoad);
    void RemoveFromOverlap();
    void FullyChargedNow();
    void SpreadFire();
    void TimerForSpreadFire();
    void FadeCoalToBurning();
    void EnablePhysicsSoon();
    void FadeToGrab();
    void StopFadeToGrab();
    void SetObjectRotation(class AVRHandFingers_C* hand, float Percent);
    void ExecuteUbergraph_BlockItemVR(int32 EntryPoint);
    void Released__DelegateSignature();
}; // Size: 0x508

#endif
