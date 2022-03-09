#ifndef UE4SS_SDK_BP_DynamicFrame_HPP
#define UE4SS_SDK_BP_DynamicFrame_HPP

class ABP_DynamicFrame_C : public APictureFrame
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)
    class UBoxComponent* ManualBoundingBox;                                           // 0x02C0 (size: 0x8)
    class UBoxComponent* CenterOverlap;                                               // 0x02C8 (size: 0x8)
    class UBoxComponent* BottomHorizontalOverlap;                                     // 0x02D0 (size: 0x8)
    class UBoxComponent* TopRightOverlap;                                             // 0x02D8 (size: 0x8)
    class UBoxComponent* BottomLeftOverlap;                                           // 0x02E0 (size: 0x8)
    class UHierarchicalInstancedStaticMeshComponent* Glass;                           // 0x02E8 (size: 0x8)
    class UHierarchicalInstancedStaticMeshComponent* Margin;                          // 0x02F0 (size: 0x8)
    class UInstancedStaticMeshComponent* Corners;                                     // 0x02F8 (size: 0x8)
    class UInstancedStaticMeshComponent* VerticalPieces;                              // 0x0300 (size: 0x8)
    class UInstancedStaticMeshComponent* HorizontalPieces;                            // 0x0308 (size: 0x8)
    class USceneComponent* CanvasesRoot;                                              // 0x0310 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x0318 (size: 0x8)
    class UTexture2D* Picture;                                                        // 0x0320 (size: 0x8)
    TArray<FCanvasBox> Canvases;                                                      // 0x0328 (size: 0x10)
    TArray<FPictureFrameStyle> FrameStyles;                                           // 0x0338 (size: 0x10)
    bool bUseFraming;                                                                 // 0x0348 (size: 0x1)
    int32 FrameStyle;                                                                 // 0x034C (size: 0x4)
    float Thickness;                                                                  // 0x0350 (size: 0x4)
    float FrameThicknessScale;                                                        // 0x0354 (size: 0x4)
    float FrameDepthScale;                                                            // 0x0358 (size: 0x4)
    float HolesCorrectionOffset;                                                      // 0x035C (size: 0x4)
    float MarginsSize;                                                                // 0x0360 (size: 0x4)
    FLinearColor MarginColor;                                                         // 0x0364 (size: 0x10)
    FLinearColor BacksideColor;                                                       // 0x0374 (size: 0x10)
    bool bCustomFrameColor;                                                           // 0x0384 (size: 0x1)
    FLinearColor FrameCornersColor;                                                   // 0x0388 (size: 0x10)
    bool bUseCornerColorForSides;                                                     // 0x0398 (size: 0x1)
    FLinearColor FrameSidesColor;                                                     // 0x039C (size: 0x10)
    bool bUseGlass;                                                                   // 0x03AC (size: 0x1)
    float GlassDistance;                                                              // 0x03B0 (size: 0x4)
    TArray<class UMaterialInstanceDynamic*> CornerMaterials;                          // 0x03B8 (size: 0x10)
    TArray<class UMaterialInstanceDynamic*> HorizontalMaterials;                      // 0x03C8 (size: 0x10)
    TArray<class UMaterialInstanceDynamic*> VerticalMaterials;                        // 0x03D8 (size: 0x10)
    float AreaLeft;                                                                   // 0x03E8 (size: 0x4)
    float AreaBottom;                                                                 // 0x03EC (size: 0x4)
    float AreaRight;                                                                  // 0x03F0 (size: 0x4)
    float AreaTop;                                                                    // 0x03F4 (size: 0x4)
    float AreaWidth;                                                                  // 0x03F8 (size: 0x4)
    float AreaHeight;                                                                 // 0x03FC (size: 0x4)
    bool bCreateCollision;                                                            // 0x0400 (size: 0x1)
    float MarginForEdit;                                                              // 0x0404 (size: 0x4)
    bool DragOngoingBoth;                                                             // 0x0408 (size: 0x1)
    bool DragFree;                                                                    // 0x0409 (size: 0x1)
    FVector DragStartLeftController;                                                  // 0x040C (size: 0xC)
    FVector DragStartRightController;                                                 // 0x0418 (size: 0xC)
    FVector DragStartXVector;                                                         // 0x0424 (size: 0xC)
    FVector DragStartCenter;                                                          // 0x0430 (size: 0xC)
    FVector DragCenterLastFrame;                                                      // 0x043C (size: 0xC)
    FVector DragStartActorLocation;                                                   // 0x0448 (size: 0xC)
    float DragStartActorYaw;                                                          // 0x0454 (size: 0x4)
    FTransform TargetTransform;                                                       // 0x0460 (size: 0x30)
    FVector2D OriginalSize;                                                           // 0x0490 (size: 0x8)
    TArray<class UStaticMeshComponent*> AddedComponents;                              // 0x0498 (size: 0x10)
    bool EdgeGrab;                                                                    // 0x04A8 (size: 0x1)
    bool WaitingForTrigger;                                                           // 0x04A9 (size: 0x1)
    TEnumAsByte<hand> WaitingForTriggerHand;                                          // 0x04AA (size: 0x1)
    FVector2D SizeLastDragEnd;                                                        // 0x04AC (size: 0x8)
    FRotator RealCanvasRotation;                                                      // 0x04B4 (size: 0xC)
    bool IsPreview;                                                                   // 0x04C0 (size: 0x1)

    void SetPropertyValues(bool SetFrameThickness, float FrameThicknessScaleNew, bool SetMargin, float MarginsSizeNew, bool& ValidChange);
    void GetPropertyValues(float& FrameThickness, float& Margin);
    FPictureFrameProperties GetFrameProperties();
    void DoDrag();
    void UpdatePicture(class UTexture2D* Picture, float Width, float Height);
    void BuildCollision();
    void BuildVerticalPieces();
    void BuildHorizontalPieces();
    void BuildCorners();
    void BuildGlass();
    void BuildMargin();
    void BuildCanvases();
    void BuildFrame();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__CenterOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__CenterOverlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void CheckWaitForTrigger();
    void ReceiveTick(float DeltaSeconds);
    void ButtonPressed();
    void SetFrameProperties(FPictureFrameProperties Properties);
    void ApplyLoadedTexture(class UTexture2D* LoadedTexture);
    void SetIsPreview(bool IsPreview);
    void SetRealRot();
    void CheckBothHandGrab();
    void ExecuteUbergraph_BP_DynamicFrame(int32 EntryPoint);
}; // Size: 0x4C1

#endif
