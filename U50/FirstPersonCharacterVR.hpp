#ifndef UE4SS_SDK_FirstPersonCharacterVR_HPP
#define UE4SS_SDK_FirstPersonCharacterVR_HPP

class AFirstPersonCharacterVR_C : public AVRCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* LeftControllerCone;                                   // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* LeftControllerPlaneCustom;                            // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* LeftControllerPlane;                                  // 0x02E8 (size: 0x8)
    class UBoxComponent* ShoulderSlotOverlapRight;                                    // 0x02F0 (size: 0x8)
    class UBoxComponent* ShoulderSlotOverlapLeft;                                     // 0x02F8 (size: 0x8)
    class UChildActorComponent* Bow;                                                  // 0x0300 (size: 0x8)
    class UStaticMeshComponent* ArrowMeshLeft;                                        // 0x0308 (size: 0x8)
    class UChildActorComponent* PreviewTorchStandingLeft;                             // 0x0310 (size: 0x8)
    class UChildActorComponent* PreviewTorchLeft;                                     // 0x0318 (size: 0x8)
    class UAudioComponent* PreviewTorchSoundLeft;                                     // 0x0320 (size: 0x8)
    class UParticleSystemComponent* PreviewTorchParticlesLeft;                        // 0x0328 (size: 0x8)
    class UStaticMeshComponent* TorchPreviewLeft;                                     // 0x0330 (size: 0x8)
    class UStaticMeshComponent* PreviewPlacedBlockLeft;                               // 0x0338 (size: 0x8)
    class UChildActorComponent* BlockHolderSliderLeft;                                // 0x0340 (size: 0x8)
    class UChildActorComponent* HolderChildActorLeft;                                 // 0x0348 (size: 0x8)
    class USceneComponent* PlaceSceneLeft;                                            // 0x0350 (size: 0x8)
    class UChildActorComponent* CompassA_Left;                                        // 0x0358 (size: 0x8)
    class UChildActorComponent* CrystalSlotChildActor;                                // 0x0360 (size: 0x8)
    class UStaticMeshComponent* HealthLimitSphereBig;                                 // 0x0368 (size: 0x8)
    class UWidgetComponent* YouAreDeadWidgetNew;                                      // 0x0370 (size: 0x8)
    class UStaticMeshComponent* HealthLimitSphere;                                    // 0x0378 (size: 0x8)
    class UStaticMeshComponent* WorldPointerLeft;                                     // 0x0380 (size: 0x8)
    class USceneComponent* WorldPointerLeftParent;                                    // 0x0388 (size: 0x8)
    class UStaticMeshComponent* WorldPointerRight;                                    // 0x0390 (size: 0x8)
    class USceneComponent* WorldPointerRightParent;                                   // 0x0398 (size: 0x8)
    class UChildActorComponent* TeleportBootsActor;                                   // 0x03A0 (size: 0x8)
    class UBoxComponent* AlyxStyleInventoryAddOverlap;                                // 0x03A8 (size: 0x8)
    class UVRStereoWidgetComponent* FocusWarningWidget;                               // 0x03B0 (size: 0x8)
    class UVRStereoWidgetComponent* FreeSpaceWarningWidget;                           // 0x03B8 (size: 0x8)
    class UChildActorComponent* HolderChildActorRight;                                // 0x03C0 (size: 0x8)
    class UChildActorComponent* BlockHolderSliderRight;                               // 0x03C8 (size: 0x8)
    class UChildActorComponent* GravityGloveActorLeft;                                // 0x03D0 (size: 0x8)
    class UChildActorComponent* GravityGloveActorRight;                               // 0x03D8 (size: 0x8)
    class UArrowComponent* TelekinesisLocationLeft;                                   // 0x03E0 (size: 0x8)
    class UChildActorComponent* TelekinesisActorLeft;                                 // 0x03E8 (size: 0x8)
    class UArrowComponent* TelekinesisLocationRight;                                  // 0x03F0 (size: 0x8)
    class UChildActorComponent* TelekinesisActorRight;                                // 0x03F8 (size: 0x8)
    class UChildActorComponent* PreviewTorchStandingRight;                            // 0x0400 (size: 0x8)
    class UGripMotionControllerComponent* GripLeft;                                   // 0x0408 (size: 0x8)
    class UGripMotionControllerComponent* GripRight;                                  // 0x0410 (size: 0x8)
    class UVRStereoWidgetComponent* WidgetWorldEdgeStereo;                            // 0x0418 (size: 0x8)
    class UVRStereoWidgetComponent* VRStereoWidget_TargetPoint;                       // 0x0420 (size: 0x8)
    class UVRStereoWidgetComponent* VRStereoWidget3;                                  // 0x0428 (size: 0x8)
    class UVRStereoWidgetComponent* VRStereoWidget2;                                  // 0x0430 (size: 0x8)
    class UVRStereoWidgetComponent* VRStereoWidget1;                                  // 0x0438 (size: 0x8)
    class USceneComponent* StereoPointerHolder;                                       // 0x0440 (size: 0x8)
    class UVRStereoWidgetComponent* VRStereoWidget;                                   // 0x0448 (size: 0x8)
    class UChildActorComponent* PictureSelector;                                      // 0x0450 (size: 0x8)
    class UWidgetComponent* WidgetWorldEdge;                                          // 0x0458 (size: 0x8)
    class UStaticMeshComponent* NewArrow;                                             // 0x0460 (size: 0x8)
    class USceneComponent* Scene1;                                                    // 0x0468 (size: 0x8)
    class UParticleSystemComponent* P_FewBirds_Near;                                  // 0x0470 (size: 0x8)
    class UStaticMeshComponent* TeleportCylinder;                                     // 0x0478 (size: 0x8)
    class UChildActorComponent* PreviewTorchRight;                                    // 0x0480 (size: 0x8)
    class UParticleSystemComponent* Fly_Generic_FX;                                   // 0x0488 (size: 0x8)
    class UStaticMeshComponent* PreviewPlacedBlockRight;                              // 0x0490 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0498 (size: 0x8)
    class UBoxComponent* ArrowDrawBox;                                                // 0x04A0 (size: 0x8)
    class UChildActorComponent* CompassA_Right;                                       // 0x04A8 (size: 0x8)
    class UAudioComponent* PreviewTorchSoundRight;                                    // 0x04B0 (size: 0x8)
    class UParticleSystemComponent* PreviewTorchParticlesRight;                       // 0x04B8 (size: 0x8)
    class UStaticMeshComponent* LeftDot;                                              // 0x04C0 (size: 0x8)
    class UStaticMeshComponent* RightDot;                                             // 0x04C8 (size: 0x8)
    class UStaticMeshComponent* ArrowMeshRight;                                       // 0x04D0 (size: 0x8)
    class UChildActorComponent* Briefcase;                                            // 0x04D8 (size: 0x8)
    class USphereComponent* Sphere1;                                                  // 0x04E0 (size: 0x8)
    class USceneComponent* MotionControllerLeftChild;                                 // 0x04E8 (size: 0x8)
    class UArrowComponent* Arrow2;                                                    // 0x04F0 (size: 0x8)
    class UWidgetComponent* BlockVisualizer;                                          // 0x04F8 (size: 0x8)
    class UWidgetComponent* ToolVisualizer;                                           // 0x0500 (size: 0x8)
    class UChildActorComponent* InventoryBucketA;                                     // 0x0508 (size: 0x8)
    class UWidgetInteractionComponent* WidgetInteraction;                             // 0x0510 (size: 0x8)
    class UStaticMeshComponent* WidgetDot;                                            // 0x0518 (size: 0x8)
    class UStaticMeshComponent* WidgetPointer;                                        // 0x0520 (size: 0x8)
    class UStaticMeshComponent* TorchPreviewRight;                                    // 0x0528 (size: 0x8)
    class USceneComponent* PlaceSceneRight;                                           // 0x0530 (size: 0x8)
    class USceneComponent* MotionControllerRightChild;                                // 0x0538 (size: 0x8)
    class UStaticMeshComponent* V3;                                                   // 0x0540 (size: 0x8)
    class UPhysicsHandleComponent* LeftHandHandle;                                    // 0x0548 (size: 0x8)
    class UNavigationInvokerComponent* NavigationInvoker;                             // 0x0550 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0558 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x0560 (size: 0x8)
    class UPhysicsHandleComponent* RIghtHandHandle;                                   // 0x0568 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0570 (size: 0x8)
    class UMotionControllerComponent* MotionControllerLeft;                           // 0x0578 (size: 0x8)
    class UMotionControllerComponent* MotionControllerRight;                          // 0x0580 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0588 (size: 0x8)
    float Timeline_2_MusicCurve_74797C2540B792E60935CFA563DE5ED8;                     // 0x0590 (size: 0x4)
    float Timeline_2_RegularSphereMaskPower_74797C2540B792E60935CFA563DE5ED8;         // 0x0594 (size: 0x4)
    float Timeline_2_MaskPower_74797C2540B792E60935CFA563DE5ED8;                      // 0x0598 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_74797C2540B792E60935CFA563DE5ED8; // 0x059C (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x05A0 (size: 0x8)
    float FadeToDeathTimeline_SphereScale_323E25ED4273A891EC878E80993C7310;           // 0x05A8 (size: 0x4)
    float FadeToDeathTimeline_MaskPower_323E25ED4273A891EC878E80993C7310;             // 0x05AC (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> FadeToDeathTimeline__Direction_323E25ED4273A891EC878E80993C7310; // 0x05B0 (size: 0x1)
    class UTimelineComponent* FadeToDeathTimeline;                                    // 0x05B8 (size: 0x8)
    float ReduceHealthTimeline_MaskPower_D9992D4B4315954E97D6DCB4C008385E;            // 0x05C0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ReduceHealthTimeline__Direction_D9992D4B4315954E97D6DCB4C008385E; // 0x05C4 (size: 0x1)
    class UTimelineComponent* ReduceHealthTimeline;                                   // 0x05C8 (size: 0x8)
    float Timeline_3_NewTrack_0_00808692424886B98DE63BB4631A6991;                     // 0x05D0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_3__Direction_00808692424886B98DE63BB4631A6991; // 0x05D4 (size: 0x1)
    class UTimelineComponent* Timeline_3;                                             // 0x05D8 (size: 0x8)
    float Timeline_1_Percent_66D517D2453DAE63FDAF83BC2710280D;                        // 0x05E0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_66D517D2453DAE63FDAF83BC2710280D; // 0x05E4 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x05E8 (size: 0x8)
    float Timeline_0_Percent_2A04D9FA449B97B8A7E78E8EDF166184;                        // 0x05F0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_2A04D9FA449B97B8A7E78E8EDF166184; // 0x05F4 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x05F8 (size: 0x8)
    float PlayFade_NewTrack_0_B827A1174BD51783426288B65D6064D0;                       // 0x0600 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> PlayFade__Direction_B827A1174BD51783426288B65D6064D0; // 0x0604 (size: 0x1)
    class UTimelineComponent* PlayFade;                                               // 0x0608 (size: 0x8)
    TEnumAsByte<Enum_Tools> ItemInHand;                                               // 0x0610 (size: 0x1)
    class AMyChunkManager_C* ChunkManager;                                            // 0x0618 (size: 0x8)
    class APostProcessManager_C* PostProcessManager;                                  // 0x0620 (size: 0x8)
    bool SpaceDown;                                                                   // 0x0628 (size: 0x1)
    bool RightMouseDown;                                                              // 0x0629 (size: 0x1)
    FVector PointLocation;                                                            // 0x062C (size: 0xC)
    bool PointAtSomething;                                                            // 0x0638 (size: 0x1)
    bool PointAtSomethingTorch;                                                       // 0x0639 (size: 0x1)
    bool GravityStarted;                                                              // 0x063A (size: 0x1)
    TEnumAsByte<InteractMode> LeftMode;                                               // 0x063B (size: 0x1)
    TEnumAsByte<InteractMode> LeftModeBefore;                                         // 0x063C (size: 0x1)
    TEnumAsByte<InteractMode> RightMode;                                              // 0x063D (size: 0x1)
    TEnumAsByte<InteractMode> RightModeBefore;                                        // 0x063E (size: 0x1)
    FVector ToolLocationLastHit;                                                      // 0x0640 (size: 0xC)
    bool HitFreeAgain;                                                                // 0x064C (size: 0x1)
    class AActor* CurrentItemOverlapLeft;                                             // 0x0650 (size: 0x8)
    class AActor* CurrentItemOverlapRight;                                            // 0x0658 (size: 0x8)
    class AActor* AttachedToHandLeftMain;                                             // 0x0660 (size: 0x8)
    class AActor* AttachedToHandRightMain;                                            // 0x0668 (size: 0x8)
    bool BucketActive;                                                                // 0x0670 (size: 0x1)
    EBlockTypeBP BlockInHandRight;                                                    // 0x0671 (size: 0x1)
    EBlockTypeBP ToolInHandRight;                                                     // 0x0672 (size: 0x1)
    class UMaterialInstanceDynamic* PreviewBlockMaterialRight;                        // 0x0678 (size: 0x8)
    class UMaterialInstanceDynamic* HandBlockMaterial;                                // 0x0680 (size: 0x8)
    FVector GridLocationRight;                                                        // 0x0688 (size: 0xC)
    class UMaterialInstanceDynamic* MarkerMaterialInstance;                           // 0x0698 (size: 0x8)
    class UMaterialInstanceDynamic* MarkerMaterialInstance2;                          // 0x06A0 (size: 0x8)
    class UMaterialInstanceDynamic* MarkerMaterialInstance3;                          // 0x06A8 (size: 0x8)
    class UMaterialInstanceDynamic* TeleportDotMaterialInstance;                      // 0x06B0 (size: 0x8)
    bool MarkerValid;                                                                 // 0x06B8 (size: 0x1)
    float LastHit;                                                                    // 0x06BC (size: 0x4)
    FVector LastFrontLocation;                                                        // 0x06C0 (size: 0xC)
    float FrontVelocity;                                                              // 0x06CC (size: 0x4)
    FVector LastVelocity;                                                             // 0x06D0 (size: 0xC)
    FVector PreviewBlockTargetLocationRight;                                          // 0x06DC (size: 0xC)
    bool PlaceBlockValidRight;                                                        // 0x06E8 (size: 0x1)
    float PointerTraceDistanceMax;                                                    // 0x06EC (size: 0x4)
    float PointerTraceDistance;                                                       // 0x06F0 (size: 0x4)
    float PointerThickness;                                                           // 0x06F4 (size: 0x4)
    TEnumAsByte<Environment> Environment;                                             // 0x06F8 (size: 0x1)
    FVector OldWorldLocation;                                                         // 0x06FC (size: 0xC)
    class ACraftRoom_C* CraftRoom;                                                    // 0x0708 (size: 0x8)
    class ADirectionalLight* SunLight;                                                // 0x0710 (size: 0x8)
    class ASkyLight* SkyLight;                                                        // 0x0718 (size: 0x8)
    class AExponentialHeightFog* HeightFog;                                           // 0x0720 (size: 0x8)
    FVector TempVector;                                                               // 0x0728 (size: 0xC)
    FVector LastLeftLocation;                                                         // 0x0734 (size: 0xC)
    FVector LastLeftVelocity;                                                         // 0x0740 (size: 0xC)
    class UStaticMeshComponent* CurrentOverlapSMCLeft;                                // 0x0750 (size: 0x8)
    class UStaticMeshComponent* CurrentOverlapSMCRight;                               // 0x0758 (size: 0x8)
    FVector LastRightLocation;                                                        // 0x0760 (size: 0xC)
    FVector LastRightVelocity;                                                        // 0x076C (size: 0xC)
    class ABowActor_C* BowRef;                                                        // 0x0778 (size: 0x8)
    bool BowEnabled;                                                                  // 0x0780 (size: 0x1)
    TEnumAsByte<InteractMode> LeftModeBeforeBow;                                      // 0x0781 (size: 0x1)
    TEnumAsByte<InteractMode> RightModeBeforeBow;                                     // 0x0782 (size: 0x1)
    class UItemDrag_C* DrawWidget;                                                    // 0x0788 (size: 0x8)
    class UInGameSelector_New_C* MainLeftUI;                                          // 0x0790 (size: 0x8)
    class ULeftSelectorMain_New_C* MainLeftSelectorUI;                                // 0x0798 (size: 0x8)
    bool WidgetNeedVisSet;                                                            // 0x07A0 (size: 0x1)
    class ABriefcase_C* BriefcaseRef;                                                 // 0x07A8 (size: 0x8)
    FVector TeleportTarget;                                                           // 0x07B0 (size: 0xC)
    float TimeTest;                                                                   // 0x07BC (size: 0x4)
    FVector TeleportStart;                                                            // 0x07C0 (size: 0xC)
    class AInventoryBucket_C* InventoryBucketRef;                                     // 0x07D0 (size: 0x8)
    EBlockTypeBP BlockInHandLeft;                                                     // 0x07D8 (size: 0x1)
    int32 BlockInHandSelectionRight;                                                  // 0x07DC (size: 0x4)
    int32 BlockInHandSelectionLeft;                                                   // 0x07E0 (size: 0x4)
    EBlockTypeBP ToolInHandLeft;                                                      // 0x07E4 (size: 0x1)
    int32 ToolInHandSelectionRight;                                                   // 0x07E8 (size: 0x4)
    int32 ToolInHandSelectionLeft;                                                    // 0x07EC (size: 0x4)
    ERotation CurrentPlaceRotationRight;                                              // 0x07F0 (size: 0x1)
    class AActor* DragOutInventoryItem;                                               // 0x07F8 (size: 0x8)
    float WidgetInteractionDistance;                                                  // 0x0800 (size: 0x4)
    TEnumAsByte<InteractMode> RightModeBeforeBucket;                                  // 0x0804 (size: 0x1)
    FRotator TargetRotationTeleport;                                                  // 0x0808 (size: 0xC)
    FRotator StartRotationTeleport;                                                   // 0x0814 (size: 0xC)
    TArray<class AToolBP_C*> ToolsRight;                                              // 0x0820 (size: 0x10)
    EBlockTypeBP RightToolBefore;                                                     // 0x0830 (size: 0x1)
    bool ManualRotationForTeleport;                                                   // 0x0831 (size: 0x1)
    class AActor* AttachedToHandLeftDirect;                                           // 0x0838 (size: 0x8)
    class AActor* AttachedToHandRightDirect;                                          // 0x0840 (size: 0x8)
    bool MouseCurrentlyInUI;                                                          // 0x0848 (size: 0x1)
    class UToolSelectionVisualizer_C* ToolVisualizerWidgetRef;                        // 0x0850 (size: 0x8)
    class UToolSelectionVisualizer_C* BlockVisualizerWidgetRef;                       // 0x0858 (size: 0x8)
    bool IsInMainMenu;                                                                // 0x0860 (size: 0x1)
    class UMediaPlayer* MediaPlayer;                                                  // 0x0868 (size: 0x8)
    class ACaptureActorBP_C* CaptureActor;                                            // 0x0870 (size: 0x8)
    class USphereComponent* Controller_Right_Overlap;                                 // 0x0878 (size: 0x8)
    class USphereComponent* Controller_Left_Overlap;                                  // 0x0880 (size: 0x8)
    class UBoxComponent* SimulatePhysicsBoxLeft;                                      // 0x0888 (size: 0x8)
    class UBoxComponent* SimulatePhysicsBoxRight;                                     // 0x0890 (size: 0x8)
    class UMeshComponent* Controller_Right;                                           // 0x0898 (size: 0x8)
    class UMeshComponent* Controller_Left;                                            // 0x08A0 (size: 0x8)
    class AVRHandFingers_C* ControllerHandActorRight;                                 // 0x08A8 (size: 0x8)
    class AVRHandFingers_C* ControllerHandActorLeft;                                  // 0x08B0 (size: 0x8)
    bool HMDIsRift;                                                                   // 0x08B8 (size: 0x1)
    EHMDType HMDType;                                                                 // 0x08B9 (size: 0x1)
    FString Resolution;                                                               // 0x08C0 (size: 0x10)
    class UPPWidget_C* PPWidget;                                                      // 0x08D0 (size: 0x8)
    bool CaptureActive;                                                               // 0x08D8 (size: 0x1)
    bool SmoothLocomotionEnabledLeft;                                                 // 0x08D9 (size: 0x1)
    FVector SmoothLocomotionTarget;                                                   // 0x08DC (size: 0xC)
    float SmoothLocoLastEnabled;                                                      // 0x08E8 (size: 0x4)
    float SmoothLocoStartMovement;                                                    // 0x08EC (size: 0x4)
    bool SmoothLocoDoneLastFrame;                                                     // 0x08F0 (size: 0x1)
    float Last10SecondsSmoothTravelled;                                               // 0x08F4 (size: 0x4)
    FVector LastGoodKnownLocation;                                                    // 0x08F8 (size: 0xC)
    float BlackSince;                                                                 // 0x0904 (size: 0x4)
    bool LoadingDone;                                                                 // 0x0908 (size: 0x1)
    bool HeadBasedSmoothLoco;                                                         // 0x0909 (size: 0x1)
    float ScreenshotHoldBegan;                                                        // 0x090C (size: 0x4)
    bool ScreenshotHoldActive;                                                        // 0x0910 (size: 0x1)
    FFirstPersonCharacterVR_CGrab Grab;                                               // 0x0918 (size: 0x10)
    void Grab(TEnumAsByte<hand> Side, class AFirstPersonCharacterVR_C* Character, class AVRHandFingers_C* HandActor);
    FFirstPersonCharacterVR_CGrabEnd GrabEnd;                                         // 0x0928 (size: 0x10)
    void GrabEnd(TEnumAsByte<hand> hand, class AFirstPersonCharacterVR_C* Character, class AVRHandFingers_C* HandActor);
    class AChestInternalsBP_C* CurrentlyOverlappingChestWithDragOutItem;              // 0x0938 (size: 0x8)
    TArray<class AChestInternalsBP_C*> CurrentlyOverlappingChestsWithItems;           // 0x0940 (size: 0x10)
    class AMeshObject* PreviewMeshObjectRight;                                        // 0x0950 (size: 0x8)
    bool PlaceMeshObjectValidRight;                                                   // 0x0958 (size: 0x1)
    FTransform PreviewMeshTargetTransformRight;                                       // 0x0960 (size: 0x30)
    TSubclassOf<class AActor> PreviewMeshClassRight;                                  // 0x0990 (size: 0x8)
    bool TutorialTabEnabled;                                                          // 0x0998 (size: 0x1)
    EBiome CurrentBiome;                                                              // 0x0999 (size: 0x1)
    bool ChunkResetHoldActive;                                                        // 0x099A (size: 0x1)
    float ChunkResetHoldBegan;                                                        // 0x099C (size: 0x4)
    int32 ViewDistanceOriginal;                                                       // 0x09A0 (size: 0x4)
    bool AnySmoothLocoButtonPressed;                                                  // 0x09A4 (size: 0x1)
    FVector FallingVelocity;                                                          // 0x09A8 (size: 0xC)
    bool FallingActive;                                                               // 0x09B4 (size: 0x1)
    bool NaturalLocomotionActive;                                                     // 0x09B5 (size: 0x1)
    class UObject* NaLoSocket;                                                        // 0x09B8 (size: 0x8)
    class APictureSelector_C* PictureSelectorRef;                                     // 0x09C0 (size: 0x8)
    bool PictureSelectorEnabled;                                                      // 0x09C8 (size: 0x1)
    TEnumAsByte<InteractMode> LeftModeBeforePictureSelector;                          // 0x09C9 (size: 0x1)
    bool RightModeBeforePictureSelector;                                              // 0x09CA (size: 0x1)
    bool SpecialFlyingMode;                                                           // 0x09CB (size: 0x1)
    class ABP_AttachedRain_C* CurrentlyAttachedWeather;                               // 0x09D0 (size: 0x8)
    bool BlockMoveActiveRight;                                                        // 0x09D8 (size: 0x1)
    class AModifiedBlockActorVR_C* MBA_ForMoveRight;                                  // 0x09E0 (size: 0x8)
    bool BlockMovePossibleRight;                                                      // 0x09E8 (size: 0x1)
    bool AlternativeMoveTurn;                                                         // 0x09E9 (size: 0x1)
    bool MoveTurnModeActive;                                                          // 0x09EA (size: 0x1)
    bool SnapTurnReady;                                                               // 0x09EB (size: 0x1)
    float SnapTurningDegree;                                                          // 0x09EC (size: 0x4)
    bool SmoothTurning;                                                               // 0x09F0 (size: 0x1)
    bool DoBlackFadeOnTeleport;                                                       // 0x09F1 (size: 0x1)
    bool DoBlackFadeOnTurn;                                                           // 0x09F2 (size: 0x1)
    bool HighResVideoModeEnabled;                                                     // 0x09F3 (size: 0x1)
    bool UseKnucklesControls;                                                         // 0x09F4 (size: 0x1)
    bool TeleportHoldActiveRight;                                                     // 0x09F5 (size: 0x1)
    bool TeleportHoldActiveLeft;                                                      // 0x09F6 (size: 0x1)
    bool CurrentlyGrabbingRightHand;                                                  // 0x09F7 (size: 0x1)
    bool RightSmoothLocoPressed;                                                      // 0x09F8 (size: 0x1)
    bool LeftSmoothLocoPressed;                                                       // 0x09F9 (size: 0x1)
    bool LeftTriggerPressed;                                                          // 0x09FA (size: 0x1)
    bool RightTriggerPressed;                                                         // 0x09FB (size: 0x1)
    bool 8KScreenshotComboPressed;                                                    // 0x09FC (size: 0x1)
    bool CurrentlyGrabbingLeftHand;                                                   // 0x09FD (size: 0x1)
    bool HandWaitingGripOpenRight;                                                    // 0x09FE (size: 0x1)
    bool UsingTouchControllers;                                                       // 0x09FF (size: 0x1)
    bool WaitingForGrabBlockPlaceToolRight;                                           // 0x0A00 (size: 0x1)
    bool CurrentlyAdjustingBlockPlacementDistanceRight;                               // 0x0A01 (size: 0x1)
    bool LeftBlockPlacementDragActive;                                                // 0x0A02 (size: 0x1)
    bool UsingWMRControllers;                                                         // 0x0A03 (size: 0x1)
    bool UsingIndexControllers;                                                       // 0x0A04 (size: 0x1)
    bool TelekinesisActiveRight;                                                      // 0x0A05 (size: 0x1)
    bool LeftGrabPressed;                                                             // 0x0A06 (size: 0x1)
    bool RightGrabPressed;                                                            // 0x0A07 (size: 0x1)
    bool TelekinesisActiveLeft;                                                       // 0x0A08 (size: 0x1)
    float HandSize;                                                                   // 0x0A0C (size: 0x4)
    bool ButtonMappingViewVisible;                                                    // 0x0A10 (size: 0x1)
    int32 BlockInHandUniqueIDRight;                                                   // 0x0A14 (size: 0x4)
    FVector BlockMoveStartLocationRight;                                              // 0x0A18 (size: 0xC)
    TArray<FVector> MeshObjectPlaceLocationsSmoothRight;                              // 0x0A28 (size: 0x10)
    float LastMultiItemDropped;                                                       // 0x0A38 (size: 0x4)
    bool SmoothLocoControllerOriented;                                                // 0x0A3C (size: 0x1)
    bool GravityGloveActive;                                                          // 0x0A3D (size: 0x1)
    bool ViveControllerLeftTouchpadPressed;                                           // 0x0A3E (size: 0x1)
    TArray<FRotator> RightWidgetPointerRotations;                                     // 0x0A40 (size: 0x10)
    TArray<FVector> RightWidgetPointerLocations;                                      // 0x0A50 (size: 0x10)
    TArray<FRotator> BriefcaseRotations;                                              // 0x0A60 (size: 0x10)
    TArray<FVector> BriefcaseLocations;                                               // 0x0A70 (size: 0x10)
    FVector BriefcaseRelativeLocation;                                                // 0x0A80 (size: 0xC)
    FRotator BriefcaseRelativeRotation;                                               // 0x0A8C (size: 0xC)
    class ALoadingScreenActor_C* LoadingScreenActor;                                  // 0x0A98 (size: 0x8)
    bool CrystalAssistedPlaceActiveRight;                                             // 0x0AA0 (size: 0x1)
    FVector CrystalAssistedPlaceStartRight;                                           // 0x0AA4 (size: 0xC)
    TArray<FVector> CrystalAssistedValidLocationsRight;                               // 0x0AB0 (size: 0x10)
    TArray<class AStaticMeshActor*> PreviewBlocksRight;                               // 0x0AC0 (size: 0x10)
    float CrystalAssistedDuplicationAmount;                                           // 0x0AD0 (size: 0x4)
    bool bLocationFadeOnTeleport;                                                     // 0x0AD4 (size: 0x1)
    TArray<FVector> TeleportPointLocationSmooth;                                      // 0x0AD8 (size: 0x10)
    TArray<FRotator> TeleportPointerRotationRightSmooth;                              // 0x0AE8 (size: 0x10)
    TArray<FRotator> TeleportPointerRotationLeftSmooth;                               // 0x0AF8 (size: 0x10)
    float MovedDeadTextRecentlyTime;                                                  // 0x0B08 (size: 0x4)
    bool PointingAtCurvedLootWidget;                                                  // 0x0B0C (size: 0x1)
    class AInventoryBP_C* MouseCurrentlyInThisInventory;                              // 0x0B10 (size: 0x8)
    bool NowDying;                                                                    // 0x0B18 (size: 0x1)
    FVector LocationOnFallStart;                                                      // 0x0B1C (size: 0xC)
    bool SurvivalMode;                                                                // 0x0B28 (size: 0x1)
    bool HasCrystalOnHead;                                                            // 0x0B29 (size: 0x1)
    float HasCrystalOnHeadSince;                                                      // 0x0B2C (size: 0x4)
    float HealthRegenPerSecond;                                                       // 0x0B30 (size: 0x4)
    float LastDamage;                                                                 // 0x0B34 (size: 0x4)
    bool WaitingForScreenshotHoldAgain;                                               // 0x0B38 (size: 0x1)
    FTimerHandle OutOfFocusTimer;                                                     // 0x0B40 (size: 0x8)
    class ALoadingScreenActorProgress_C* LoadingScreenActorProgress;                  // 0x0B48 (size: 0x8)
    float LoadingScreenEndBeganAt;                                                    // 0x0B50 (size: 0x4)
    TArray<float> DraggedOutItemsLast;                                                // 0x0B58 (size: 0x10)
    float LastDragOutHintShown;                                                       // 0x0B68 (size: 0x4)
    TArray<float> DroppedItemFromChestLast;                                           // 0x0B70 (size: 0x10)
    float LastChestOutHintShown;                                                      // 0x0B80 (size: 0x4)
    class ARadialMenu_C* RadialMenuLeft;                                              // 0x0B88 (size: 0x8)
    class ARadialMenu_C* RadialMenuRight;                                             // 0x0B90 (size: 0x8)
    bool IsGrabControlledAdvancedControlScheme;                                       // 0x0B98 (size: 0x1)
    TArray<class AToolBP_C*> ToolsLeft;                                               // 0x0BA0 (size: 0x10)
    int32 BlockInHandUniqueIDLeft;                                                    // 0x0BB0 (size: 0x4)
    class UMaterialInstanceDynamic* PreviewBlockMaterialLeft;                         // 0x0BB8 (size: 0x8)
    FVector PreviewBlockTargetLocationLeft;                                           // 0x0BC0 (size: 0xC)
    FVector GridLocationLeft;                                                         // 0x0BCC (size: 0xC)
    bool BlockMoveActiveLeft;                                                         // 0x0BD8 (size: 0x1)
    bool CrystalAssistedPlaceActiveLeft;                                              // 0x0BD9 (size: 0x1)
    bool BlockMovePossibleLeft;                                                       // 0x0BDA (size: 0x1)
    bool PlaceBlockValidLeft;                                                         // 0x0BDB (size: 0x1)
    FVector BlockMoveStartLocationLeft;                                               // 0x0BDC (size: 0xC)
    class AModifiedBlockActorVR_C* MBA_ForMoveLeft;                                   // 0x0BE8 (size: 0x8)
    ERotation CurrentPlaceRotationLeft;                                               // 0x0BF0 (size: 0x1)
    TArray<FVector> MeshObjectPlaceLocationsSmoothLeft;                               // 0x0BF8 (size: 0x10)
    class AMeshObject* PreviewMeshObjectLeft;                                         // 0x0C08 (size: 0x8)
    FTransform PreviewMeshTargetTransformLeft;                                        // 0x0C10 (size: 0x30)
    TSubclassOf<class AActor> PreviewMeshClassLeft;                                   // 0x0C40 (size: 0x8)
    bool PlaceMeshObjectValidLeft;                                                    // 0x0C48 (size: 0x1)
    FVector CrystalAssistedPlaceStartLeft;                                            // 0x0C4C (size: 0xC)
    TArray<FVector> CrystalAssistedValidLocationsLeft;                                // 0x0C58 (size: 0x10)
    TArray<class AStaticMeshActor*> PreviewBlocksLeft;                                // 0x0C68 (size: 0x10)
    bool BowEnabledIsRight;                                                           // 0x0C78 (size: 0x1)
    bool BowEnabledLeftBeforeInventory;                                               // 0x0C79 (size: 0x1)
    bool WaitingForGrabBlockPlaceToolLeft;                                            // 0x0C7A (size: 0x1)
    bool RightBlockPlacementDragActive;                                               // 0x0C7B (size: 0x1)
    bool CurrentlyAdjustingBlockPlacementDistanceLeft;                                // 0x0C7C (size: 0x1)
    bool WalkActive;                                                                  // 0x0C7D (size: 0x1)
    bool SmoothTurnActive;                                                            // 0x0C7E (size: 0x1)
    bool SmoothLocoNotAllowed;                                                        // 0x0C7F (size: 0x1)
    bool SmoothTurnNotAllowed;                                                        // 0x0C80 (size: 0x1)
    bool HasEverPlacedAnyWood;                                                        // 0x0C81 (size: 0x1)
    bool LeftShoulderSlotActive;                                                      // 0x0C82 (size: 0x1)
    bool RightShoulderSlotActive;                                                     // 0x0C83 (size: 0x1)
    bool RightHandHasOppositeShoulderSlotActive;                                      // 0x0C84 (size: 0x1)
    bool LeftHandHasOppositeShoulderSlotActive;                                       // 0x0C85 (size: 0x1)
    bool UsingViveControllers;                                                        // 0x0C86 (size: 0x1)
    bool HybridWalkOrientation;                                                       // 0x0C87 (size: 0x1)
    bool SC_Good;                                                                     // 0x0C88 (size: 0x1)
    FHintTextSave HintTextSave;                                                       // 0x0C89 (size: 0x3)
    class UHintTextSaveGame_C* HintTextSaveObject;                                    // 0x0C90 (size: 0x8)
    float LastTorchHintTextShown;                                                     // 0x0C98 (size: 0x4)
    FIntVector LastGoodKnownLocationAbsolute;                                         // 0x0C9C (size: 0xC)
    float LastResizeMeshObjectHintShown;                                              // 0x0CA8 (size: 0x4)
    int32 PlaceBlockCounter;                                                          // 0x0CAC (size: 0x4)
    bool MoveBlockDone;                                                               // 0x0CB0 (size: 0x1)
    float LastMoveBlockHintShown;                                                     // 0x0CB4 (size: 0x4)

    void AttachCrystal(FColor CrystalColor, float CrystalChargeState, bool& Attached);
    void CanGrabCrystal(bool& CanGrab, FColor& Color, float& ChargeState);
    void MaybeShowMoveHintText(bool IsRightHand, EBlockTypeBP Type);
    void UpdateHintTextSaveIfChanged();
    void AfterRadialMenuOptionSelected();
    void CF();
    void ShoulderSlotChanged(int32 SlotTo, int32 SlotFrom);
    void TryShoulderSlotGrab(bool RightHand, bool& success);
    void PlayHapticWhenCanShoulderDrop();
    void SwitchHandBackToHandIfLastBlockPlaced(EBlockTypeBP BlockTypePlaced, int32 BlockIDPlaced, bool IsRightHand);
    void MovePreviewBlockF(bool IsRightHand);
    void SetRadialMenuOptionSelected(int32 Index, bool IsRightHand);
    void FUNNY_KnockDownTorch();
    void FUNNY_MakeRandomBlockAppear();
    void FUNNY_DoChestStuff();
    void FUNNY_MoveDeerToPlayer();
    void MaybeShowHintChestDrop(EBlockTypeBP Type, FVector Location);
    void Maybe Show Hint Quick Drop(EBlockTypeBP Type);
    void TickLoadingScreenProgress();
    void CheckWorldEdge();
    void SpawnDeadBodyF();
    void ReduceHealth(float Amount);
    void IsAliveF(bool& Alive);
    void TickHealth();
    void GetCurrentHoveredWidget(class UUserWidget*& Widget);
    void GetCurrentHoveredInventory(class AInventoryBP_C*& Inventory);
    void CheckAnyUIClose();
    void UpdateDeadWidgetText();
    void UpdateTeleportPointerTransform();
    void CheckIfReleasesBehindBack(EControllerHand hand, bool& Overlaps);
    void CheckFreeSpace();
    void GetCrystalAssistedRemoveAmount(int32 RealAmount, int32& Amount);
    void FinalPlaceBlockCrystalAssisted(bool IsRightHand);
    void CreatePreviewBlocks();
    void CheckPlaceCrystalAssisted(FVector StartLocation, FVector EndLocation, bool IsRightHand);
    void DoSmoothTurn();
    void ClearSmoothingArrays();
    void SmoothLocations();
    void ManageDragOutMultipleItems(float Intensity);
    void UnlockAchievementOnPlace(EBlockTypeBP PlacedType);
    void SetButtonMappingOverviewVisible(bool Visible);
    void SetHandSize(float Percentage);
    void DoSnapTurn(bool Left);
    void SetBlockHolderDistance(float Percentage, bool IsRightHand);
    void TickAlternativeMoveTurnModeKnuckles();
    void MoveRightTypeSelection(int32 Difference);
    void AdjustControllerRotationsKnuckles(bool IsRift, EHMDType HMDType);
    void TickAlternativeMoveTurnMode();
    void StartBlockMove(bool IsRightHand);
    void GetGripForHand(TEnumAsByte<hand> NewParam, class UGripMotionControllerComponent*& Handle);
    void GetPhysicsHandleForHand(TEnumAsByte<hand> NewParam, class UPhysicsHandleComponent*& Handle);
    void SetMainUI_TextToBlockName(EBlockTypeBP Type);
    void SetMainUI_DescribeText(FText InText, FLinearColor Specified Color);
    void TriggerPressedWithToolSelected();
    void InitLiv();
    void CheckValidMeshObjectLocationWall(FVector LocationToCheck, FVector RightVector, class AMeshObject* MeshObject, FVector ForwardVector, bool& SetHidden, bool& IsValid);
    void TryInitNaLo();
    void SetTeleportScreenshotVis(bool Enable);
    void TickFallBP();
    void SetBowArrowVisible(bool BowArrowVisible);
    void CheckChunkResetTriggered();
    void TickBiome();
    void SetTutorialTabEnabled(bool Enabled);
    void CheckValidMeshObjectLocation(FVector LocationToCheck, FVector RightVector, class AMeshObject* MeshObject, bool& SetHidden, bool& IsValid);
    void CheckPlaceMeshObject(bool IsRightHand);
    void AddItemToAnyChest(class AActor* DragOutItem, class UItemDrag_C* DragWidget, bool OneDirect, bool& success);
    void CheckScreenshotTriggered();
    void PlayBlockPlacedSound(EBlockTypeBP Placed, EBlockTypeBP On, FVector At Location);
    void CheckFocus();
    void GrabItemWithHand(TEnumAsByte<hand> hand, class AActor* Item, bool IsDistanceGrab, bool AfterSpawn);
    void TryGrabGrass(TEnumAsByte<hand> hand);
    void GetActorLocationForCameraLocation(FVector NewCameraLocation, FVector& NewActorLocation);
    void UpdateHandTorchLocation(bool IsRightHand);
    void SendAccumulatedAnalytics();
    void CalculateSmoothLocoNew();
    void CalculateSmoothLoco();
    void ManageTeleportRotation();
    void SetMirrorResolution();
    void GetRiftThumbstickArea(float X, float Y, TEnumAsByte<Side>& Area, bool& Valid);
    void AdjustControllerRotations(bool IsRift, EHMDType HMDType);
    void SetupController();
    void InitForMainMenu();
    void MouseLeftUI();
    void UpdateBirdSpawnLocation();
    void RotateView(float NewYaw);
    void InitializeTools();
    void UpdateToolType(int32 OldSelection, bool IsRightHand);
    void RightTick();
    void SetAreaF();
    void ManageRightThumbX();
    void SetOverlapItem(TEnumAsByte<hand> hand, class AActor* NewItem);
    void UpdateWidgetDotLocation();
    void Check Place(bool IsRightHand);
    void UpdatePlaceBlockType(bool IsRightHand);
    void SetVisibilityController(TEnumAsByte<hand> hand, bool Visibility);
    void TickLocationVariables();
    void WidgetTick();
    void RebaseOrigin();
    void CheckButtonOverlap(TEnumAsByte<hand> Side);
    void UpdateEnvironment(TEnumAsByte<Environment> NewEnvironment);
    void ConsoleCommands();
    void PlaceBlock(bool AfterMove, bool IsRightHand);
    void GetFrontVelocity(FVector& Velocity, float& Speed);
    void SetMarkerValid(bool Valid, bool PointAtNothing);
    void SetMarkerColor(bool Green);
    void CreateMarkerMaterial();
    void FindDistanceToBlock(float& Black);
    void SetPlaceBlockType(EBlockTypeBP NewType, int32 UniqueId, bool IsRightHand);
    void GridLocationToBlock(FVector Location, FVector& BlockLocation);
    void UpdateModeHand(EControllerHand hand, TEnumAsByte<InteractMode> NewMode, bool AlwaysRefresh, bool KeepToolAndBlockSelected);
    void Teleport(bool Important);
    void SetWaterVisible(bool Visible);
    void UserConstructionScript();
    void PlayFade__FinishedFunc();
    void PlayFade__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_3__FinishedFunc();
    void Timeline_3__UpdateFunc();
    void ReduceHealthTimeline__FinishedFunc();
    void ReduceHealthTimeline__UpdateFunc();
    void FadeToDeathTimeline__FinishedFunc();
    void FadeToDeathTimeline__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void InpActEvt_AdjustBlockPlacementDistance_K2Node_InputActionEvent_67(FKey Key);
    void InpActEvt_AdjustBlockPlacementDistance_K2Node_InputActionEvent_66(FKey Key);
    void InpActEvt_Teleport_Right_Hold_WMR_K2Node_InputActionEvent_65(FKey Key);
    void InpActEvt_Teleport_Right_Hold_WMR_K2Node_InputActionEvent_64(FKey Key);
    void InpActEvt_Teleport_Left_Hold_WMR_K2Node_InputActionEvent_63(FKey Key);
    void InpActEvt_Teleport_Left_Hold_WMR_K2Node_InputActionEvent_62(FKey Key);
    void InpActEvt_GrabRight_K2Node_InputActionEvent_61(FKey Key);
    void InpActEvt_GrabRight_K2Node_InputActionEvent_60(FKey Key);
    void InpActEvt_Teleport_Left_Hold_K2Node_InputActionEvent_59(FKey Key);
    void InpActEvt_Teleport_Left_Hold_K2Node_InputActionEvent_58(FKey Key);
    void InpActEvt_Teleport_Right_Hold_K2Node_InputActionEvent_57(FKey Key);
    void InpActEvt_Teleport_Right_Hold_K2Node_InputActionEvent_56(FKey Key);
    void InpActEvt_InventoryClick_K2Node_InputActionEvent_55(FKey Key);
    void InpActEvt_InventoryClick_K2Node_InputActionEvent_54(FKey Key);
    void InpActEvt_SnapTurnLeft_K2Node_InputActionEvent_53(FKey Key);
    void InpActEvt_SnapTurnRight_K2Node_InputActionEvent_52(FKey Key);
    void InpActEvt_GrabLeft_K2Node_InputActionEvent_51(FKey Key);
    void InpActEvt_GrabLeft_K2Node_InputActionEvent_50(FKey Key);
    void InpActEvt_TriggerGrabRight_K2Node_InputActionEvent_49(FKey Key);
    void InpActEvt_TriggerGrabRight_K2Node_InputActionEvent_48(FKey Key);
    void InpActEvt_SmoothTurnNotAllowed_K2Node_InputActionEvent_47(FKey Key);
    void InpActEvt_SmoothTurnNotAllowed_K2Node_InputActionEvent_46(FKey Key);
    void InpActEvt_SmoothLocoNotAllowed_K2Node_InputActionEvent_45(FKey Key);
    void InpActEvt_SmoothLocoNotAllowed_K2Node_InputActionEvent_44(FKey Key);
    void InpActEvt_PlaceBlockRight_K2Node_InputActionEvent_43(FKey Key);
    void InpActEvt_PlaceBlockRight_K2Node_InputActionEvent_42(FKey Key);
    void InpActEvt_PlaceBlockLeft_K2Node_InputActionEvent_41(FKey Key);
    void InpActEvt_PlaceBlockLeft_K2Node_InputActionEvent_40(FKey Key);
    void InpActEvt_SmoothTurningActive_K2Node_InputActionEvent_39(FKey Key);
    void InpActEvt_SmoothTurningActive_K2Node_InputActionEvent_38(FKey Key);
    void InpActEvt_WalkActive_K2Node_InputActionEvent_37(FKey Key);
    void InpActEvt_WalkActive_K2Node_InputActionEvent_36(FKey Key);
    void InpActEvt_SelectDownLeft_K2Node_InputActionEvent_35(FKey Key);
    void InpActEvt_SelectUpLeft_K2Node_InputActionEvent_34(FKey Key);
    void InpActEvt_SelectDownRight_K2Node_InputActionEvent_33(FKey Key);
    void InpActEvt_SelectUpRight_K2Node_InputActionEvent_32(FKey Key);
    void InpActEvt_Shift_Escape_K2Node_InputKeyEvent_7(FKey Key);
    void InpActEvt_PictureFrameCenterClickRight_K2Node_InputActionEvent_31(FKey Key);
    void InpActEvt_PictureFrameCenterClickRight_K2Node_InputActionEvent_30(FKey Key);
    void InpActEvt_8KScreenshot_K2Node_InputActionEvent_29(FKey Key);
    void InpActEvt_8KScreenshot_K2Node_InputActionEvent_28(FKey Key);
    void InpActEvt_PictureFrameCenterClickLeft_K2Node_InputActionEvent_27(FKey Key);
    void InpActEvt_PictureFrameCenterClickLeft_K2Node_InputActionEvent_26(FKey Key);
    void InpActEvt_ControllerOrientedSmoothLocoLeftController_K2Node_InputActionEvent_25(FKey Key);
    void InpActEvt_ControllerOrientedSmoothLocoLeftController_K2Node_InputActionEvent_24(FKey Key);
    void InpActEvt_DrawReleaseArrowLeftHand_K2Node_InputActionEvent_23(FKey Key);
    void InpActEvt_DrawReleaseArrowLeftHand_K2Node_InputActionEvent_22(FKey Key);
    void InpActEvt_Bucket_Hold_K2Node_InputActionEvent_21(FKey Key);
    void InpActEvt_Bucket_Hold_K2Node_InputActionEvent_20(FKey Key);
    void InpActEvt_Inventory_K2Node_InputActionEvent_19(FKey Key);
    void InpActEvt_GrabLeft_K2Node_InputActionEvent_18(FKey Key);
    void InpActEvt_GrabLeft_K2Node_InputActionEvent_17(FKey Key);
    void InpActEvt_GrabRight_K2Node_InputActionEvent_16(FKey Key);
    void InpActEvt_GrabRight_K2Node_InputActionEvent_15(FKey Key);
    void InpActEvt_RightTeleportMode_ViveController_K2Node_InputActionEvent_14(FKey Key);
    void InpActEvt_RightHandMode_ViveController_K2Node_InputActionEvent_13(FKey Key);
    void InpActEvt_RightToolMode_ViveController_K2Node_InputActionEvent_12(FKey Key);
    void InpActEvt_RightBlockPlaceMode_ViveController_K2Node_InputActionEvent_11(FKey Key);
    void InpActEvt_LeftTeleportMode_ViveController_K2Node_InputActionEvent_10(FKey Key);
    void InpActEvt_LeftHandMode_ViveController_K2Node_InputActionEvent_9(FKey Key);
    void InpActEvt_ControllerOrientedSmoothLocoLeftController_K2Node_InputActionEvent_8(FKey Key);
    void InpActEvt_ControllerOrientedSmoothLocoRightController_K2Node_InputActionEvent_7(FKey Key);
    void InpActEvt_ControllerOrientedSmoothLocoRightController_K2Node_InputActionEvent_6(FKey Key);
    void InpActEvt_Enter_K2Node_InputKeyEvent_6(FKey Key);
    void InpActEvt_DrawReleaseArrowRightHand_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_DrawReleaseArrowRightHand_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_One_K2Node_InputKeyEvent_5(FKey Key);
    void InpActEvt_RadialMenuLeft_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_RadialMenuLeft_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_RadialMenuRight_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_RadialMenuRight_K2Node_InputActionEvent_0(FKey Key);
    void InpActEvt_Eight_K2Node_InputKeyEvent_4(FKey Key);
    void InpActEvt_Ctrl+Alt+Shift_Q_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_Ctrl+Alt+Shift_W_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_Ctrl+Alt+Shift_E_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_Ctrl+Alt+Shift_T_K2Node_InputKeyEvent_0(FKey Key);
    void InpAxisEvt_SqueezeRight_K2Node_InputAxisEvent_2(float AxisValue);
    void InpAxisEvt_RightTouchpadTouch_K2Node_InputAxisEvent_5(float AxisValue);
    void DisableTelekinesisIfActiveRight();
    void InpAxisEvt_TouchpadScrollRight_Y_K2Node_InputAxisEvent_0(float AxisValue);
    void InpAxisEvt_LeftTouchpadTouch_K2Node_InputAxisEvent_4(float AxisValue);
    void ExitSpecialModeLeft();
    void DisableTelekinesisIfActiveLeft();
    void InpAxisEvt_GripCapSenseLeft_K2Node_InputAxisEvent_3(float AxisValue);
    void InpAxisEvt_GripCapSenseRight_K2Node_InputAxisEvent_1(float AxisValue);
    void InpAxisEvt_TouchpadForceRight_K2Node_InputAxisEvent_6(float AxisValue);
    void LetInventoryDragOutFall();
    void LetItemRightFall();
    void LetItemLeftFall();
    void PressedButtonSound(TEnumAsByte<hand> hand);
    void LeftHandFreeAgain();
    void SetCamera();
    void MotionControllerRightThumbUp();
    void MotionControllerRightThumbRight();
    void MotionControllerRightThumbLeft();
    void MotionControllerRightThumbDown();
    void MotionControllerLeftThumbUp();
    void MotionControllerLeftThumbDown();
    void MotionControllerLeftThumbLeft();
    void CloseInventory();
    void TickInputGraph();
    void DisableBucket();
    void KillDrawWidget();
    void EndBlockMoveIfActive(bool IsRightHand);
    void RemoveItemIfHold(class AActor* Actor);
    void LetInventoryDragOutFallBecauseItemWasDeleted(class AActor* Item);
    void GrabRightCustomPressed();
    void GrabRightCustomReleased();
    void UpdateBlockItemOverlap();
    void OpenHandPose(class AVRHandFingers_C* hand);
    void CheckWaitForTrigger();
    void AdjustBlockPlacementDistance();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Fall();
    void TestFeedback();
    void BndEvt__StaticMesh1_K2Node_ComponentBoundEvent_54_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void PlayFadeEvent();
    void MovePreviewBlock();
    void LightFeedback();
    void SetBowEnabled(bool Enabled);
    void PrintControllerName();
    void MoveCraftRoom();
    void VisTrueRight();
    void VisFalseRight();
    void VisTrueLeft();
    void VisFalseLeft();
    void DoDashTeleport();
    void MouseEnterUI();
    void CheckItemSpheres(bool Fall);
    void SetBucketEnabled(bool Enabled);
    void ExitSpecialModeRight();
    void TeleportImmediately();
    void RemoveSplashScreenVR();
    void BackToMainMenu();
    void BeginEndSplashScreen();
    void WasRotated();
    void SetMirrorRes();
    void CheckCaptureActorRef();
    void PlaceHaptics(bool IsRightHand);
    void UpdateNav();
    void TakeScreenshotEvent();
    void SetBowEnabledNew(bool Enabled, bool bIsRightSide);
    void ResetChunksEvent();
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ArrowHaptics();
    void TryNaLoInit();
    void NaLoConnect();
    void NaLoConnectError(FString Error);
    void ReceiveNaLoData(FString Data);
    void SetPictureSelectorEnabled(bool Enabled);
    void UsePictureSelector(class ABP_DynamicFrame_C* PictureFrame);
    void InitOutOfFocusCheck();
    void BlockMoveStartHaptics(bool IsRightHand);
    void SpawnSpawnChest();
    void PrintToLogBP(FString Text);
    void FadeToDead();
    void RemoveDeadEffect();
    void FadeToFinalDeath();
    void RemovedCrystal();
    void MoveOutsideUI_IfOriginal();
    void MoveToStartLocation(FVector Location);
    void SetOutOfFocusCheck(bool Enabled);
    void SC_Begin();
    void SC_Later();
    void SC_NC();
    void SC_Submit();
    void ExecuteUbergraph_FirstPersonCharacterVR(int32 EntryPoint);
    void GrabEnd__DelegateSignature(TEnumAsByte<hand> hand, class AFirstPersonCharacterVR_C* Character, class AVRHandFingers_C* HandActor);
    void Grab__DelegateSignature(TEnumAsByte<hand> Side, class AFirstPersonCharacterVR_C* Character, class AVRHandFingers_C* HandActor);
}; // Size: 0xCB8

#endif
