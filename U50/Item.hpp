#ifndef UE4SS_SDK_Item_HPP
#define UE4SS_SDK_Item_HPP

class UItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x0268 (size: 0x8)
    class UBorder* Border_ToolHolder;                                                 // 0x0270 (size: 0x8)
    class UBorder* Border_WithBackground;                                             // 0x0278 (size: 0x8)
    class UCustomBlockPreviewWidget1_C* CustomBlockPreviewWidget1;                    // 0x0280 (size: 0x8)
    class UCustomBlockPreviewWidget1_C* CustomBlockPreviewWidget1_1;                  // 0x0288 (size: 0x8)
    class UProgressBar* HealthBar;                                                    // 0x0290 (size: 0x8)
    class UHorizontalBox* HorizontalBox_RegularItem;                                  // 0x0298 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02A0 (size: 0x8)
    class UImage* Image_ToolHolder;                                                   // 0x02A8 (size: 0x8)
    class UInvalidationBox* InvalidationBoxMain;                                      // 0x02B0 (size: 0x8)
    class UVerticalBox* ProgressBarOverlay;                                           // 0x02B8 (size: 0x8)
    class UTextBlock* Text_Amount;                                                    // 0x02C0 (size: 0x8)
    int32 Amount;                                                                     // 0x02C8 (size: 0x4)
    EBlockTypeBP Type;                                                                // 0x02CC (size: 0x1)
    int32 Index;                                                                      // 0x02D0 (size: 0x4)
    bool Dragging;                                                                    // 0x02D4 (size: 0x1)
    bool IsToolHolder;                                                                // 0x02D5 (size: 0x1)
    bool CanDrag;                                                                     // 0x02D6 (size: 0x1)
    bool IsStackable;                                                                 // 0x02D7 (size: 0x1)
    FLinearColor Color;                                                               // 0x02D8 (size: 0x10)
    int32 UniqueId;                                                                   // 0x02E8 (size: 0x4)
    FString BlockName;                                                                // 0x02F0 (size: 0x10)
    FColor CrystalColor;                                                              // 0x0300 (size: 0x4)
    float ChargeState;                                                                // 0x0304 (size: 0x4)
    class UUserWidget* ParentWidget;                                                  // 0x0308 (size: 0x8)
    bool IsReal;                                                                      // 0x0310 (size: 0x1)

    void UpdateLookEmpty();
    bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void UpdateLook();
    void SetData(EBlockTypeBP Type, int32 Amount, int32 Index, int32 UniqueId, FColor CrystalColor, float ChargeState, bool IsReal);
    void SetDescriptionTextToThis();
    void OnDragCancelled(const FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
    void MouseLeave();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_Item(int32 EntryPoint);
}; // Size: 0x311

#endif
