#ifndef UE4SS_SDK_ChairBP_HPP
#define UE4SS_SDK_ChairBP_HPP

class AChairBP_C : public AMeshObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* Chair_old;                                            // 0x02B0 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x02B8 (size: 0x8)
    class UBoxComponent* ManualBoundingBox;                                           // 0x02C0 (size: 0x8)
    class UDragComponent_C* DragComponent;                                            // 0x02C8 (size: 0x8)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void SetIsPreview(bool IsPreview);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_ChairBP(int32 EntryPoint);
}; // Size: 0x2D0

#endif
