#ifndef UE4SS_SDK_FirstPersonCharacterVR_HPP
#define UE4SS_SDK_FirstPersonCharacterVR_HPP

class AFirstPersonCharacterVR_C : public AVRCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* LeftControllerCone;
    class UStaticMeshComponent* LeftControllerPlaneCustom;
    class UStaticMeshComponent* LeftControllerPlane;
    class UBoxComponent* ShoulderSlotOverlapRight;
    class UBoxComponent* ShoulderSlotOverlapLeft;
    class UChildActorComponent* Bow;
    class UStaticMeshComponent* ArrowMeshLeft;
    class UChildActorComponent* PreviewTorchStandingLeft;
    class UChildActorComponent* PreviewTorchLeft;
    class UAudioComponent* PreviewTorchSoundLeft;
    class UParticleSystemComponent* PreviewTorchParticlesLeft;
    class UStaticMeshComponent* TorchPreviewLeft;
    class UStaticMeshComponent* PreviewPlacedBlockLeft;
    class UChildActorComponent* BlockHolderSliderLeft;
    class UChildActorComponent* HolderChildActorLeft;
    class USceneComponent* PlaceSceneLeft;
    class UChildActorComponent* CompassA_Left;
    class UChildActorComponent* CrystalSlotChildActor;
    class UStaticMeshComponent* HealthLimitSphereBig;
    class UWidgetComponent* YouAreDeadWidgetNew;
    class UStaticMeshComponent* HealthLimitSphere;
    class UStaticMeshComponent* WorldPointerLeft;
    class USceneComponent* WorldPointerLeftParent;
    class UStaticMeshComponent* WorldPointerRight;
    class USceneComponent* WorldPointerRightParent;
    class UChildActorComponent* TeleportBootsActor;
    class UBoxComponent* AlyxStyleInventoryAddOverlap;
    class UVRStereoWidgetComponent* FocusWarningWidget;
    class UVRStereoWidgetComponent* FreeSpaceWarningWidget;
    class UChildActorComponent* HolderChildActorRight;
    class UChildActorComponent* BlockHolderSliderRight;
    class UChildActorComponent* GravityGloveActorLeft;
    class UChildActorComponent* GravityGloveActorRight;
    class UArrowComponent* TelekinesisLocationLeft;
    class UChildActorComponent* TelekinesisActorLeft;
    class UArrowComponent* TelekinesisLocationRight;
    class UChildActorComponent* TelekinesisActorRight;
    class UChildActorComponent* PreviewTorchStandingRight;
    class UGripMotionControllerComponent* GripLeft;
    class UGripMotionControllerComponent* GripRight;
    class UVRStereoWidgetComponent* WidgetWorldEdgeStereo;
    class UVRStereoWidgetComponent* VRStereoWidget_TargetPoint;
    class UVRStereoWidgetComponent* VRStereoWidget3;
    class UVRStereoWidgetComponent* VRStereoWidget2;
    class UVRStereoWidgetComponent* VRStereoWidget1;
    class USceneComponent* StereoPointerHolder;
    class UVRStereoWidgetComponent* VRStereoWidget;
    class UChildActorComponent* PictureSelector;
    class UWidgetComponent* WidgetWorldEdge;
    class UStaticMeshComponent* NewArrow;
    class USceneComponent* Scene1;
    class UParticleSystemComponent* P_FewBirds_Near;
    class UStaticMeshComponent* TeleportCylinder;
    class UChildActorComponent* PreviewTorchRight;
    class UParticleSystemComponent* Fly_Generic_FX;
    class UStaticMeshComponent* PreviewPlacedBlockRight;
    class UTextRenderComponent* TextRender;
    class UBoxComponent* ArrowDrawBox;
    class UChildActorComponent* CompassA_Right;
    class UAudioComponent* PreviewTorchSoundRight;
    class UParticleSystemComponent* PreviewTorchParticlesRight;
    class UStaticMeshComponent* LeftDot;
    class UStaticMeshComponent* RightDot;
    class UStaticMeshComponent* ArrowMeshRight;
    class UChildActorComponent* Briefcase;
    class USphereComponent* Sphere1;
    class USceneComponent* MotionControllerLeftChild;
    class UArrowComponent* Arrow2;
    class UWidgetComponent* BlockVisualizer;
    class UWidgetComponent* ToolVisualizer;
    class UChildActorComponent* InventoryBucketA;
    class UWidgetInteractionComponent* WidgetInteraction;
    class UStaticMeshComponent* WidgetDot;
    class UStaticMeshComponent* WidgetPointer;
    class UStaticMeshComponent* TorchPreviewRight;
    class USceneComponent* PlaceSceneRight;
    class USceneComponent* MotionControllerRightChild;
    class UStaticMeshComponent* V3;
    class UPhysicsHandleComponent* LeftHandHandle;
    class UNavigationInvokerComponent* NavigationInvoker;
    class UStaticMeshComponent* Sphere;
    class UArrowComponent* Arrow1;
    class UPhysicsHandleComponent* RIghtHandHandle;
    class UCameraComponent* Camera;
    class UMotionControllerComponent* MotionControllerLeft;
    class UMotionControllerComponent* MotionControllerRight;
    class UCapsuleComponent* Capsule;
    float Timeline_2_MusicCurve_74797C2540B792E60935CFA563DE5ED8;
    float Timeline_2_RegularSphereMaskPower_74797C2540B792E60935CFA563DE5ED8;
    float Timeline_2_MaskPower_74797C2540B792E60935CFA563DE5ED8;
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_74797C2540B792E60935CFA563DE5ED8;
    class UTimelineComponent* Timeline_2;
    float FadeToDeathTimeline_SphereScale_323E25ED4273A891EC878E80993C7310;
    float FadeToDeathTimeline_MaskPower_323E25ED4273A891EC878E80993C7310;
    TEnumAsByte<ETimelineDirection::Type> FadeToDeathTimeline__Direction_323E25ED4273A891EC878E80993C7310;
    class UTimelineComponent* FadeToDeathTimeline;
    float ReduceHealthTimeline_MaskPower_D9992D4B4315954E97D6DCB4C008385E;
    TEnumAsByte<ETimelineDirection::Type> ReduceHealthTimeline__Direction_D9992D4B4315954E97D6DCB4C008385E;
    class UTimelineComponent* ReduceHealthTimeline;
    float Timeline_3_NewTrack_0_00808692424886B98DE63BB4631A6991;
    TEnumAsByte<ETimelineDirection::Type> Timeline_3__Direction_00808692424886B98DE63BB4631A6991;
    class UTimelineComponent* Timeline_3;
    float Timeline_1_Percent_66D517D2453DAE63FDAF83BC2710280D;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_66D517D2453DAE63FDAF83BC2710280D;
    class UTimelineComponent* Timeline_1;
    float Timeline_0_Percent_2A04D9FA449B97B8A7E78E8EDF166184;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_2A04D9FA449B97B8A7E78E8EDF166184;
    class UTimelineComponent* Timeline_0;
    float PlayFade_NewTrack_0_B827A1174BD51783426288B65D6064D0;
    TEnumAsByte<ETimelineDirection::Type> PlayFade__Direction_B827A1174BD51783426288B65D6064D0;
    class UTimelineComponent* PlayFade;
    TEnumAsByte<Enum_Tools> ItemInHand;
    class AChunkManagerBP_C* ChunkManager;
    class APostProcessManager_C* PostProcessManager;
    bool SpaceDown;
    bool RightMouseDown;
    FVector PointLocation;
    bool PointAtSomething;
    bool PointAtSomethingTorch;
    bool GravityStarted;
    TEnumAsByte<InteractMode> LeftMode;
    TEnumAsByte<InteractMode> LeftModeBefore;
    TEnumAsByte<InteractMode> RightMode;
    TEnumAsByte<InteractMode> RightModeBefore;
    FVector ToolLocationLastHit;
    bool HitFreeAgain;
    class AActor* CurrentItemOverlapLeft;
    class AActor* CurrentItemOverlapRight;
    class AActor* AttachedToHandLeftMain;
    class AActor* AttachedToHandRightMain;
    bool BucketActive;
    EBlockTypeBP BlockInHandRight;
    EBlockTypeBP ToolInHandRight;
    class UMaterialInstanceDynamic* PreviewBlockMaterialRight;
    class UMaterialInstanceDynamic* HandBlockMaterial;
    FVector GridLocationRight;
    class UMaterialInstanceDynamic* MarkerMaterialInstance;
    class UMaterialInstanceDynamic* MarkerMaterialInstance2;
    class UMaterialInstanceDynamic* MarkerMaterialInstance3;
    class UMaterialInstanceDynamic* TeleportDotMaterialInstance;
    bool MarkerValid;
    float LastHit;
    FVector LastFrontLocation;
    float FrontVelocity;
    FVector LastVelocity;
    FVector PreviewBlockTargetLocationRight;
    bool PlaceBlockValidRight;
    float PointerTraceDistanceMax;
    float PointerTraceDistance;
    float PointerThickness;
    TEnumAsByte<Environment> Environment;
    FVector OldWorldLocation;
    class ACraftRoom_C* CraftRoom;
    class ADirectionalLight* SunLight;
    class ASkyLight* SkyLight;
    class AExponentialHeightFog* HeightFog;
    FVector TempVector;
    FVector LastLeftLocation;
    FVector LastLeftVelocity;
    class UStaticMeshComponent* CurrentOverlapSMCLeft;
    class UStaticMeshComponent* CurrentOverlapSMCRight;
    FVector LastRightLocation;
    FVector LastRightVelocity;
    class ABowActorBP_C* BowRef;
    bool BowEnabled;
    TEnumAsByte<InteractMode> LeftModeBeforeBow;
    TEnumAsByte<InteractMode> RightModeBeforeBow;
    class UItemDrag_C* DrawWidget;
    class UInGameSelector_New_C* MainLeftUI;
    class ULeftSelectorMain_New_C* MainLeftSelectorUI;
    bool WidgetNeedVisSet;
    class ABriefcaseBP_C* BriefcaseRef;
    FVector TeleportTarget;
    float TimeTest;
    FVector TeleportStart;
    class AInventoryBucketBP_C* InventoryBucketRef;
    EBlockTypeBP BlockInHandLeft;
    int32 BlockInHandSelectionRight;
    int32 BlockInHandSelectionLeft;
    EBlockTypeBP ToolInHandLeft;
    int32 ToolInHandSelectionRight;
    int32 ToolInHandSelectionLeft;
    ERotation CurrentPlaceRotationRight;
    class AActor* DragOutInventoryItem;
    float WidgetInteractionDistance;
    TEnumAsByte<InteractMode> RightModeBeforeBucket;
    FRotator TargetRotationTeleport;
    FRotator StartRotationTeleport;
    TArray<class AToolBP_C*> ToolsRight;
    EBlockTypeBP RightToolBefore;
    bool ManualRotationForTeleport;
    class AActor* AttachedToHandLeftDirect;
    class AActor* AttachedToHandRightDirect;
    bool MouseCurrentlyInUI;
    class UToolSelectionVisualizer_C* ToolVisualizerWidgetRef;
    class UToolSelectionVisualizer_C* BlockVisualizerWidgetRef;
    bool IsInMainMenu;
    class UMediaPlayer* MediaPlayer;
    class ACaptureActorBP_C* CaptureActor;
    class USphereComponent* Controller_Right_Overlap;
    class USphereComponent* Controller_Left_Overlap;
    class UBoxComponent* SimulatePhysicsBoxLeft;
    class UBoxComponent* SimulatePhysicsBoxRight;
    class UMeshComponent* Controller_Right;
    class UMeshComponent* Controller_Left;
    class AVRHandFingersBP_C* ControllerHandActorRight;
    class AVRHandFingersBP_C* ControllerHandActorLeft;
    bool HMDIsRift;
    EHMDType HMDType;
    FString Resolution;
    class UPPWidget_C* PPWidget;
    bool CaptureActive;
    bool SmoothLocomotionEnabledLeft;
    FVector SmoothLocomotionTarget;
    float SmoothLocoLastEnabled;
    float SmoothLocoStartMovement;
    bool SmoothLocoDoneLastFrame;
    float Last10SecondsSmoothTravelled;
    FVector LastGoodKnownLocation;
    float BlackSince;
    bool LoadingDone;
    bool HeadBasedSmoothLoco;
    float ScreenshotHoldBegan;
    bool ScreenshotHoldActive;
    FFirstPersonCharacterVR_CGrab Grab;
    void Grab(TEnumAsByte<hand> Side, class AFirstPersonCharacterVR_C* Character, class AVRHandFingersBP_C* HandActor);
    FFirstPersonCharacterVR_CGrabEnd GrabEnd;
    void GrabEnd(TEnumAsByte<hand> hand, class AFirstPersonCharacterVR_C* Character, class AVRHandFingersBP_C* HandActor);
    class AChestInternalsBP_C* CurrentlyOverlappingChestWithDragOutItem;
    TArray<class AChestInternalsBP_C*> CurrentlyOverlappingChestsWithItems;
    class AMeshObject* PreviewMeshObjectRight;
    bool PlaceMeshObjectValidRight;
    FTransform PreviewMeshTargetTransformRight;
    TSubclassOf<class AActor> PreviewMeshClassRight;
    bool TutorialTabEnabled;
    EBiome CurrentBiome;
    bool ChunkResetHoldActive;
    float ChunkResetHoldBegan;
    int32 ViewDistanceOriginal;
    bool AnySmoothLocoButtonPressed;
    FVector FallingVelocity;
    bool FallingActive;
    bool NaturalLocomotionActive;
    class UObject* NaLoSocket;
    class APictureSelector_C* PictureSelectorRef;
    bool PictureSelectorEnabled;
    TEnumAsByte<InteractMode> LeftModeBeforePictureSelector;
    bool RightModeBeforePictureSelector;
    bool SpecialFlyingMode;
    class ABP_AttachedRain_C* CurrentlyAttachedWeather;
    bool BlockMoveActiveRight;
    class AModifiedBlockActorVR_BP_C* MBA_ForMoveRight;
    bool BlockMovePossibleRight;
    bool AlternativeMoveTurn;
    bool MoveTurnModeActive;
    bool SnapTurnReady;
    float SnapTurningDegree;
    bool SmoothTurning;
    bool DoBlackFadeOnTeleport;
    bool DoBlackFadeOnTurn;
    bool HighResVideoModeEnabled;
    bool UseKnucklesControls;
    bool TeleportHoldActiveRight;
    bool TeleportHoldActiveLeft;
    bool CurrentlyGrabbingRightHand;
    bool RightSmoothLocoPressed;
    bool LeftSmoothLocoPressed;
    bool LeftTriggerPressed;
    bool RightTriggerPressed;
    bool 8KScreenshotComboPressed;
    bool CurrentlyGrabbingLeftHand;
    bool HandWaitingGripOpenRight;
    bool UsingTouchControllers;
    bool WaitingForGrabBlockPlaceToolRight;
    bool CurrentlyAdjustingBlockPlacementDistanceRight;
    bool LeftBlockPlacementDragActive;
    bool UsingWMRControllers;
    bool UsingIndexControllers;
    bool TelekinesisActiveRight;
    bool LeftGrabPressed;
    bool RightGrabPressed;
    bool TelekinesisActiveLeft;
    float HandSize;
    bool ButtonMappingViewVisible;
    int32 BlockInHandUniqueIDRight;
    FVector BlockMoveStartLocationRight;
    TArray<FVector> MeshObjectPlaceLocationsSmoothRight;
    float LastMultiItemDropped;
    bool SmoothLocoControllerOriented;
    bool GravityGloveActive;
    bool ViveControllerLeftTouchpadPressed;
    TArray<FRotator> RightWidgetPointerRotations;
    TArray<FVector> RightWidgetPointerLocations;
    TArray<FRotator> BriefcaseRotations;
    TArray<FVector> BriefcaseLocations;
    FVector BriefcaseRelativeLocation;
    FRotator BriefcaseRelativeRotation;
    class ALoadingScreenActor_C* LoadingScreenActor;
    bool CrystalAssistedPlaceActiveRight;
    FVector CrystalAssistedPlaceStartRight;
    TArray<FVector> CrystalAssistedValidLocationsRight;
    TArray<class AStaticMeshActor*> PreviewBlocksRight;
    float CrystalAssistedDuplicationAmount;
    bool bLocationFadeOnTeleport;
    TArray<FVector> TeleportPointLocationSmooth;
    TArray<FRotator> TeleportPointerRotationRightSmooth;
    TArray<FRotator> TeleportPointerRotationLeftSmooth;
    float MovedDeadTextRecentlyTime;
    bool PointingAtCurvedLootWidget;
    class AInventoryBP_C* MouseCurrentlyInThisInventory;
    bool NowDying;
    FVector LocationOnFallStart;
    bool SurvivalMode;
    bool HasCrystalOnHead;
    float HasCrystalOnHeadSince;
    float HealthRegenPerSecond;
    float LastDamage;
    bool WaitingForScreenshotHoldAgain;
    FTimerHandle OutOfFocusTimer;
    class ALoadingScreenActorProgress_C* LoadingScreenActorProgress;
    float LoadingScreenEndBeganAt;
    TArray<float> DraggedOutItemsLast;
    float LastDragOutHintShown;
    TArray<float> DroppedItemFromChestLast;
    float LastChestOutHintShown;
    class ARadialMenu_C* RadialMenuLeft;
    class ARadialMenu_C* RadialMenuRight;
    bool IsGrabControlledAdvancedControlScheme;
    TArray<class AToolBP_C*> ToolsLeft;
    int32 BlockInHandUniqueIDLeft;
    class UMaterialInstanceDynamic* PreviewBlockMaterialLeft;
    FVector PreviewBlockTargetLocationLeft;
    FVector GridLocationLeft;
    bool BlockMoveActiveLeft;
    bool CrystalAssistedPlaceActiveLeft;
    bool BlockMovePossibleLeft;
    bool PlaceBlockValidLeft;
    FVector BlockMoveStartLocationLeft;
    class AModifiedBlockActorVR_BP_C* MBA_ForMoveLeft;
    ERotation CurrentPlaceRotationLeft;
    TArray<FVector> MeshObjectPlaceLocationsSmoothLeft;
    class AMeshObject* PreviewMeshObjectLeft;
    FTransform PreviewMeshTargetTransformLeft;
    TSubclassOf<class AActor> PreviewMeshClassLeft;
    bool PlaceMeshObjectValidLeft;
    FVector CrystalAssistedPlaceStartLeft;
    TArray<FVector> CrystalAssistedValidLocationsLeft;
    TArray<class AStaticMeshActor*> PreviewBlocksLeft;
    bool BowEnabledIsRight;
    bool BowEnabledLeftBeforeInventory;
    bool WaitingForGrabBlockPlaceToolLeft;
    bool RightBlockPlacementDragActive;
    bool CurrentlyAdjustingBlockPlacementDistanceLeft;
    bool WalkActive;
    bool SmoothTurnActive;
    bool SmoothLocoNotAllowed;
    bool SmoothTurnNotAllowed;
    bool HasEverPlacedAnyWood;
    bool LeftShoulderSlotActive;
    bool RightShoulderSlotActive;
    bool RightHandHasOppositeShoulderSlotActive;
    bool LeftHandHasOppositeShoulderSlotActive;
    bool UsingViveControllers;
    bool HybridWalkOrientation;
    bool SC_Good;
    FHintTextSave HintTextSave;
    class UHintTextSaveGame_C* HintTextSaveObject;
    float LastTorchHintTextShown;
    FIntVector LastGoodKnownLocationAbsolute;
    float LastResizeMeshObjectHintShown;
    int32 PlaceBlockCounter;
    bool MoveBlockDone;
    float LastMoveBlockHintShown;
    class AModLoadBP_C* ModLoadBPActor;

    void AttachCrystal(FColor CrystalColor, float CrystalChargeState, bool& Attached);
    void CanGrabCrystal(bool& CanGrab, FColor& Color, float& ChargeState);
    void FUNNY_MoveRabbitToPlayer();
    void BehindBackHapticFeedback();
    FVector GetActorLocationForCameraLocationCPP(FVector NewCameraLocation);
    void UpdateChunkManagerHandLocations();
    void DebugTickStuff();
    void SpawnModActor();
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
    void InpActEvt_PictureFrameCenterClickRight_K2Node_InputActionEvent_49(FKey Key);
    void InpActEvt_PictureFrameCenterClickRight_K2Node_InputActionEvent_48(FKey Key);
    void InpActEvt_8KScreenshot_K2Node_InputActionEvent_47(FKey Key);
    void InpActEvt_8KScreenshot_K2Node_InputActionEvent_46(FKey Key);
    void InpActEvt_SmoothTurnNotAllowed_K2Node_InputActionEvent_45(FKey Key);
    void InpActEvt_SmoothTurnNotAllowed_K2Node_InputActionEvent_44(FKey Key);
    void InpActEvt_TriggerGrabRight_K2Node_InputActionEvent_43(FKey Key);
    void InpActEvt_TriggerGrabRight_K2Node_InputActionEvent_42(FKey Key);
    void InpActEvt_SmoothLocoNotAllowed_K2Node_InputActionEvent_41(FKey Key);
    void InpActEvt_SmoothLocoNotAllowed_K2Node_InputActionEvent_40(FKey Key);
    void InpActEvt_SmoothTurningActive_K2Node_InputActionEvent_39(FKey Key);
    void InpActEvt_SmoothTurningActive_K2Node_InputActionEvent_38(FKey Key);
    void InpActEvt_WalkActive_K2Node_InputActionEvent_37(FKey Key);
    void InpActEvt_WalkActive_K2Node_InputActionEvent_36(FKey Key);
    void InpActEvt_PlaceBlockRight_K2Node_InputActionEvent_35(FKey Key);
    void InpActEvt_PlaceBlockRight_K2Node_InputActionEvent_34(FKey Key);
    void InpActEvt_PlaceBlockLeft_K2Node_InputActionEvent_33(FKey Key);
    void InpActEvt_PlaceBlockLeft_K2Node_InputActionEvent_32(FKey Key);
    void InpActEvt_SelectDownLeft_K2Node_InputActionEvent_31(FKey Key);
    void InpActEvt_SelectUpLeft_K2Node_InputActionEvent_30(FKey Key);
    void InpActEvt_SelectDownRight_K2Node_InputActionEvent_29(FKey Key);
    void InpActEvt_SelectUpRight_K2Node_InputActionEvent_28(FKey Key);
    void InpActEvt_Shift_Escape_K2Node_InputKeyEvent_9(FKey Key);
    void InpActEvt_PictureFrameCenterClickLeft_K2Node_InputActionEvent_27(FKey Key);
    void InpActEvt_PictureFrameCenterClickLeft_K2Node_InputActionEvent_26(FKey Key);
    void InpActEvt_DrawReleaseArrowLeftHand_K2Node_InputActionEvent_25(FKey Key);
    void InpActEvt_DrawReleaseArrowLeftHand_K2Node_InputActionEvent_24(FKey Key);
    void InpActEvt_ControllerOrientedSmoothLocoLeftController_K2Node_InputActionEvent_23(FKey Key);
    void InpActEvt_ControllerOrientedSmoothLocoLeftController_K2Node_InputActionEvent_22(FKey Key);
    void InpActEvt_ControllerOrientedSmoothLocoRightController_K2Node_InputActionEvent_21(FKey Key);
    void InpActEvt_ControllerOrientedSmoothLocoRightController_K2Node_InputActionEvent_20(FKey Key);
    void InpActEvt_Bucket_Hold_K2Node_InputActionEvent_19(FKey Key);
    void InpActEvt_Bucket_Hold_K2Node_InputActionEvent_18(FKey Key);
    void InpActEvt_Inventory_K2Node_InputActionEvent_17(FKey Key);
    void InpActEvt_GrabLeft_K2Node_InputActionEvent_16(FKey Key);
    void InpActEvt_GrabLeft_K2Node_InputActionEvent_15(FKey Key);
    void InpActEvt_GrabRight_K2Node_InputActionEvent_14(FKey Key);
    void InpActEvt_GrabRight_K2Node_InputActionEvent_13(FKey Key);
    void InpActEvt_RightTeleportMode_ViveController_K2Node_InputActionEvent_12(FKey Key);
    void InpActEvt_RightHandMode_ViveController_K2Node_InputActionEvent_11(FKey Key);
    void InpActEvt_RightToolMode_ViveController_K2Node_InputActionEvent_10(FKey Key);
    void InpActEvt_RightBlockPlaceMode_ViveController_K2Node_InputActionEvent_9(FKey Key);
    void InpActEvt_LeftTeleportMode_ViveController_K2Node_InputActionEvent_8(FKey Key);
    void InpActEvt_LeftHandMode_ViveController_K2Node_InputActionEvent_7(FKey Key);
    void InpActEvt_ControllerOrientedSmoothLocoLeftController_K2Node_InputActionEvent_6(FKey Key);
    void InpActEvt_DrawReleaseArrowRightHand_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_DrawReleaseArrowRightHand_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_Enter_K2Node_InputKeyEvent_8(FKey Key);
    void InpActEvt_One_K2Node_InputKeyEvent_7(FKey Key);
    void InpActEvt_RadialMenuLeft_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_RadialMenuLeft_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_RadialMenuRight_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_RadialMenuRight_K2Node_InputActionEvent_0(FKey Key);
    void InpActEvt_Eight_K2Node_InputKeyEvent_6(FKey Key);
    void InpActEvt_Ctrl+Alt+Shift_Q_K2Node_InputKeyEvent_5(FKey Key);
    void InpActEvt_Ctrl+Alt+Shift_W_K2Node_InputKeyEvent_4(FKey Key);
    void InpActEvt_Ctrl+Alt+Shift_E_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_Ctrl+Alt+Shift_T_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_Ctrl+Cmd+Alt+Shift_C_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_Ctrl+Alt+Shift_Z_K2Node_InputKeyEvent_0(FKey Key);
    void InpAxisEvt_SqueezeRight_K2Node_InputAxisEvent_2(float AxisValue);
    void ExitSpecialModeLeft();
    void InpAxisEvt_RightTouchpadTouch_K2Node_InputAxisEvent_5(float AxisValue);
    void InpAxisEvt_TouchpadScrollRight_Y_K2Node_InputAxisEvent_0(float AxisValue);
    void DisableTelekinesisIfActiveRight();
    void InpAxisEvt_LeftTouchpadTouch_K2Node_InputAxisEvent_4(float AxisValue);
    void InpAxisEvt_GripCapSenseLeft_K2Node_InputAxisEvent_3(float AxisValue);
    void InpAxisEvt_GripCapSenseRight_K2Node_InputAxisEvent_1(float AxisValue);
    void DisableTelekinesisIfActiveLeft();
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
    void PrintControllerName();
    void UpdateBlockItemOverlap();
    void OpenHandPose(class AVRHandFingersBP_C* hand);
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
    void MoveCraftRoom();
    void VisTrueRight();
    void VisFalseRight();
    void VisTrueLeft();
    void VisFalseLeft();
    void DoDashTeleport();
    void MouseEnterUI();
    void CheckItemSpheres(bool Fall);
    void ExitSpecialModeRight();
    void SetBucketEnabled(bool Enabled);
    void TeleportImmediately();
    void RemoveSplashScreenVR();
    void BackToMainMenu();
    void BeginEndSplashScreen();
    void WasRotated();
    void SetMirrorRes();
    void CheckCaptureActorRef();
    void PlaceHaptics(bool IsRightHand);
    void UpdateNav();
    void SetBowEnabledNew(bool Enabled, bool bIsRightSide);
    void TakeScreenshotEvent();
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
    void ReduceHealthCPP(float Amount);
    void ExecuteUbergraph_FirstPersonCharacterVR(int32 EntryPoint);
    void GrabEnd__DelegateSignature(TEnumAsByte<hand> hand, class AFirstPersonCharacterVR_C* Character, class AVRHandFingersBP_C* HandActor);
    void Grab__DelegateSignature(TEnumAsByte<hand> Side, class AFirstPersonCharacterVR_C* Character, class AVRHandFingersBP_C* HandActor);
};

#endif
