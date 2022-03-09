#ifndef UE4SS_SDK_DragComponent_HPP
#define UE4SS_SDK_DragComponent_HPP

class UDragComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    class UStaticMeshComponent* OverlapMesh;                                          // 0x00B8 (size: 0x8)
    bool DragOngoing;                                                                 // 0x00C0 (size: 0x1)
    bool DragFree;                                                                    // 0x00C1 (size: 0x1)
    FVector DragStartCenter;                                                          // 0x00C4 (size: 0xC)
    FVector DragStartXVector;                                                         // 0x00D0 (size: 0xC)
    FVector DragStartActorLocation;                                                   // 0x00DC (size: 0xC)
    float DragStartActorYaw;                                                          // 0x00E8 (size: 0x4)
    FVector DragStartLeftController;                                                  // 0x00EC (size: 0xC)
    FVector DragStartRightController;                                                 // 0x00F8 (size: 0xC)
    FVector DragCenterLastFrame;                                                      // 0x0104 (size: 0xC)
    FTransform TargetTransform;                                                       // 0x0110 (size: 0x30)
    FDragComponent_CDragActivated DragActivated;                                      // 0x0140 (size: 0x10)
    void DragActivated();

    void DoDrag();
    void CheckBothHandGrab();
    void ReceiveTick(float DeltaSeconds);
    void Init(class UStaticMeshComponent* OverlapMesh);
    void DoLerp();
    void ExecuteUbergraph_DragComponent(int32 EntryPoint);
    void DragActivated__DelegateSignature();
}; // Size: 0x150

#endif
