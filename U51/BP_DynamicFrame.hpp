#ifndef UE4SS_SDK_BP_DynamicFrame_HPP
#define UE4SS_SDK_BP_DynamicFrame_HPP

class ABP_DynamicFrame_C : public APictureFrame
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* ManualBoundingBox;
    class UBoxComponent* CenterOverlap;
    class UBoxComponent* BottomHorizontalOverlap;
    class UBoxComponent* TopRightOverlap;
    class UBoxComponent* BottomLeftOverlap;
    class UHierarchicalInstancedStaticMeshComponent* Glass;
    class UHierarchicalInstancedStaticMeshComponent* Margin;
    class UInstancedStaticMeshComponent* Corners;
    class UInstancedStaticMeshComponent* VerticalPieces;
    class UInstancedStaticMeshComponent* HorizontalPieces;
    class USceneComponent* CanvasesRoot;
    class USceneComponent* Root;
    class UTexture2D* Picture;
    TArray<FCanvasBox> Canvases;
    TArray<FPictureFrameStyle> FrameStyles;
    bool bUseFraming;
    int32 FrameStyle;
    float Thickness;
    float FrameThicknessScale;
    float FrameDepthScale;
    float HolesCorrectionOffset;
    float MarginsSize;
    FLinearColor MarginColor;
    FLinearColor BacksideColor;
    bool bCustomFrameColor;
    FLinearColor FrameCornersColor;
    bool bUseCornerColorForSides;
    FLinearColor FrameSidesColor;
    bool bUseGlass;
    float GlassDistance;
    TArray<class UMaterialInstanceDynamic*> CornerMaterials;
    TArray<class UMaterialInstanceDynamic*> HorizontalMaterials;
    TArray<class UMaterialInstanceDynamic*> VerticalMaterials;
    float AreaLeft;
    float AreaBottom;
    float AreaRight;
    float AreaTop;
    float AreaWidth;
    float AreaHeight;
    bool bCreateCollision;
    float MarginForEdit;
    bool DragOngoingBoth;
    bool DragFree;
    FVector DragStartLeftController;
    FVector DragStartRightController;
    FVector DragStartXVector;
    FVector DragStartCenter;
    FVector DragCenterLastFrame;
    FVector DragStartActorLocation;
    float DragStartActorYaw;
    FTransform TargetTransform;
    FVector2D OriginalSize;
    TArray<class UStaticMeshComponent*> AddedComponents;
    bool EdgeGrab;
    bool WaitingForTrigger;
    TEnumAsByte<hand> WaitingForTriggerHand;
    FVector2D SizeLastDragEnd;
    FRotator RealCanvasRotation;
    bool IsPreview;

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
};

#endif
