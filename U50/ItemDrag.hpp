#ifndef UE4SS_SDK_ItemDrag_HPP
#define UE4SS_SDK_ItemDrag_HPP

class UItemDrag_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCustomBlockPreviewWidget1_C* CustomBlockPreviewWidget1;                    // 0x0268 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0270 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0278 (size: 0x8)
    class USizeBox* SizeBox_0;                                                        // 0x0280 (size: 0x8)
    class UTextBlock* TextAmount;                                                     // 0x0288 (size: 0x8)
    int32 Amount;                                                                     // 0x0290 (size: 0x4)
    EBlockTypeBP Type;                                                                // 0x0294 (size: 0x1)
    class UCanvasPanelSlot* MySlot;                                                   // 0x0298 (size: 0x8)
    int32 SourceIndex;                                                                // 0x02A0 (size: 0x4)
    bool FromToolHolder;                                                              // 0x02A4 (size: 0x1)
    int32 UniqueId;                                                                   // 0x02A8 (size: 0x4)
    FLinearColor CrystalColor;                                                        // 0x02AC (size: 0x10)
    float ChargeState;                                                                // 0x02BC (size: 0x4)
    class UUserWidget* OriginalParentWidget;                                          // 0x02C0 (size: 0x8)
    class UUserWidget* CurrentParentWidget;                                           // 0x02C8 (size: 0x8)
    bool HasLeftItsSourceUIAlready;                                                   // 0x02D0 (size: 0x1)
    bool EndedWithSuccessfullDrop;                                                    // 0x02D1 (size: 0x1)

    void OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void UpdateLook();
    void SetData(TEnumAsByte<OLD2_BlockType> Type, int32 Amount);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_ItemDrag(int32 EntryPoint);
}; // Size: 0x2D2

#endif
