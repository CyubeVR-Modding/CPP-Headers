#ifndef UE4SS_SDK_ToolBP_HPP
#define UE4SS_SDK_ToolBP_HPP

class AToolBP_C : public ATool
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* WallMountHint;                                        // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* ToolMesh;                                             // 0x02B8 (size: 0x8)
    float Timeline_2_FadePercentage_0CAD3C564938463DCD41BA961A6F98A9;                 // 0x02C0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_0CAD3C564938463DCD41BA961A6F98A9; // 0x02C4 (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x02C8 (size: 0x8)
    float Timeline_1_1_29561E1A4E5533F4AA5F03B46CD247CA;                              // 0x02D0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_29561E1A4E5533F4AA5F03B46CD247CA; // 0x02D4 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x02D8 (size: 0x8)
    float Timeline_0_Percent_D88BA42547C3FBCFDAD02FB1CC007561;                        // 0x02E0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_D88BA42547C3FBCFDAD02FB1CC007561; // 0x02E4 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x02E8 (size: 0x8)
    bool Active;                                                                      // 0x02F0 (size: 0x1)
    FVector LastFrontLocation;                                                        // 0x02F4 (size: 0xC)
    FVector LastFrameFrontLocation;                                                   // 0x0300 (size: 0xC)
    FVector LastLastFrameFrontLocation;                                               // 0x030C (size: 0xC)
    FVector LastVelocity;                                                             // 0x0318 (size: 0xC)
    FVector LastVelocityAvg;                                                          // 0x0324 (size: 0xC)
    TArray<FVector> LastVelocities;                                                   // 0x0330 (size: 0x10)
    float LastHit;                                                                    // 0x0340 (size: 0x4)
    FVector ToolLocationLastHit;                                                      // 0x0344 (size: 0xC)
    bool HitFreeAgain;                                                                // 0x0350 (size: 0x1)
    class AChunkManager* ChunkManager;                                                // 0x0358 (size: 0x8)
    class AFirstPersonCharacterVR_C* Player;                                          // 0x0360 (size: 0x8)
    class UMaterialInstanceDynamic* MeshMaterial;                                     // 0x0368 (size: 0x8)
    bool CanHitTree;                                                                  // 0x0370 (size: 0x1)
    bool CollisionPhysicsBodyBlock;                                                   // 0x0371 (size: 0x1)
    bool InsideMesh;                                                                  // 0x0372 (size: 0x1)
    float LastSpeed;                                                                  // 0x0374 (size: 0x4)
    FVector EnterBlockLocation;                                                       // 0x0378 (size: 0xC)
    FVector FrontLocationOnEnter;                                                     // 0x0384 (size: 0xC)
    FVector LastFrameShoveBlockLocation;                                              // 0x0390 (size: 0xC)
    bool IsRealTool;                                                                  // 0x039C (size: 0x1)
    bool IsFreeTool;                                                                  // 0x039D (size: 0x1)
    bool IsFreeToolUsed;                                                              // 0x039E (size: 0x1)
    TEnumAsByte<hand> CurrentSelectedHand;                                            // 0x039F (size: 0x1)
    class AActor* ParentHandUsed;                                                     // 0x03A0 (size: 0x8)
    class UPhysicsHandleComponent* CurrentAttachedHandle;                             // 0x03A8 (size: 0x8)
    TEnumAsByte<hand> CurrentAttachedHand;                                            // 0x03B0 (size: 0x1)
    bool DontBlockStatic;                                                             // 0x03B1 (size: 0x1)
    bool OneReleaseDone;                                                              // 0x03B2 (size: 0x1)
    class UGripMotionControllerComponent* GrippedByGrip;                              // 0x03B8 (size: 0x8)
    bool L_BehindBack;                                                                // 0x03C0 (size: 0x1)
    float LastCantMineHintShown;                                                      // 0x03C4 (size: 0x4)
    float LastCantDestroyHintShown;                                                   // 0x03C8 (size: 0x4)
    FTimerHandle WallMountNearTimer;                                                  // 0x03D0 (size: 0x8)

    void SetGravityGloveTargetIndicatorActive(bool Active, bool Left, bool& _);
    void GetRealWorldLocation(FVector& Location);
    void DeactivateTelekinesis(class UStaticMeshComponent*& Return);
    void ActivateTelekinesis(TEnumAsByte<hand> hand, bool GravityGlove, class UPrimitiveComponent*& SimulatingComponent);
    void CanTelekinesis(bool LineOfSight, bool& Can, class AActor*& ActorToGrab);
    void Release(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component, bool& success);
    void Grab(class AFirstPersonCharacterVR_C* Player, class UBoxComponent* HandComponent, class UMeshComponent* HandMesh, class USphereComponent* HandOverlap, class UBoxComponent* OtherHandComponent, class UMeshComponent* OtherHandParentComponent, TEnumAsByte<hand> hand, bool IsDistanceGrab, bool AfterSpawn, class AActor*& GrabbedActorMain, class AActor*& GrabbedActorDirect);
    void CheckWallMountNear(bool OverrideFalse);
    void Check Release Behind Back(class AFirstPersonCharacterVR_C* Player, EControllerHand hand, bool& Result);
    void GetRealBlockHitType(EBlockTypeBP BlockType, int32 UniqueId, EBlockTypeBP& RealBlockType);
    void GetAcceptableLocHitRadius(float& Radius);
    void AxeInTree(bool InTree);
    void HitMeshObject(class AMeshObject* MeshObject, class UPrimitiveComponent* Component, FHitResult Hit);
    void ShovelLeaveBlockNew(FVector LeftAt);
    void TickShovel();
    void GetHitSound(EBlockTypeBP BlockType, bool& Result, class USoundBase*& Sound);
    void GetHitHoldParticle(EBlockTypeBP BlockType, bool& Result, class UParticleSystem*& ParticleSystem);
    void SetLastHit();
    void DamageBlock(class AActor* Actor, FVector Block Location, bool ShouldDamage, bool Shovel, EBlockTypeBP ShovelHit, FVector BlockNormal, bool& CanDamage, EBlockTypeBP& HitType, bool& HitSomethingTotallyWrong);
    void ShovelLeaveBlock(class AActor* Actor, class UPrimitiveComponent* Component);
    void GetHitParticle(EBlockTypeBP BlockType, class UParticleSystem*& ParticleSystem);
    void HitSomething(class AActor* Actor, class UPrimitiveComponent* Component, FHitResult Hit);
    void GetDamageOnBlock(EBlockTypeBP Type, bool& Result, float& Damage);
    void FindLastSpeed(float& Speed);
    void IsOverlapToolType(bool& TRUE);
    void GetForwardRotation(FRotator& Rotation);
    void CheckFrontLeaveHit();
    void SetType(EBlockTypeBP New Type);
    void GetFrontVelocity(FVector& Velocity, float& Speed);
    void Set Active(bool Active, TEnumAsByte<hand> hand, class AFirstPersonCharacterVR_C* Player);
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BndEvt__ToolMesh_K2Node_ComponentBoundEvent_33_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ShiftArrayUp();
    void SetAverageVelocity();
    void CheckHitFreeAgain();
    void PlayHaptics();
    void EnableFreeFall();
    void OverlapWithHand(class AVRHandFingers_C* HandController, class UPrimitiveComponent* OtherComp);
    void BndEvt__ToolMesh_K2Node_ComponentBoundEvent_26_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void InitTool(EBlockTypeBP Type_, class AChunkManager* ChunkManager_, class ACharacter* Player_);
    void AddToBucket(bool BehindBack);
    void SetInTree();
    void AttachToPossibleWallmount();
    void Release_1(class AFirstPersonCharacterVR_C* Player, class UMotionControllerComponent* Component);
    void FadeToGrab();
    void StopFadeToGrab();
    void SetToolVisibility(bool Visibility, class AFirstPersonCharacterVR_C* Player, bool RightHand);
    void SetObjectRotation(class AVRHandFingers_C* hand, float Percent);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__ToolMesh_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void CheckWallMountNearEvent();
    void DestroyWallMountHint();
    void ExecuteUbergraph_ToolBP(int32 EntryPoint);
}; // Size: 0x3D8

#endif
