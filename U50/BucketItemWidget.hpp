#ifndef UE4SS_SDK_BucketItemWidget_HPP
#define UE4SS_SDK_BucketItemWidget_HPP

class UBucketItemWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x0268 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x0270 (size: 0x8)
    class UTextBlock* AmountText;                                                     // 0x0278 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x0280 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0288 (size: 0x8)
    class UImage* Image_6;                                                            // 0x0290 (size: 0x8)
    class UBorder* TopBorder;                                                         // 0x0298 (size: 0x8)
    int32 Amount;                                                                     // 0x02A0 (size: 0x4)
    EBlockTypeBP Type;                                                                // 0x02A4 (size: 0x1)
    int32 Index;                                                                      // 0x02A8 (size: 0x4)
    bool Dragging;                                                                    // 0x02AC (size: 0x1)
    bool IsToolHolder;                                                                // 0x02AD (size: 0x1)
    bool CanDrag;                                                                     // 0x02AE (size: 0x1)
    bool IsStackable;                                                                 // 0x02AF (size: 0x1)
    bool CurrentActive;                                                               // 0x02B0 (size: 0x1)

    void SetActive(bool Active);
    void UpdateLookEmpty();
    void OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void UpdateLook();
    void SetData(EBlockTypeBP Type, int32 Amount);
    void SetDescriptionTextToThis();
    void OnDragCancelled(const FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void MouseLeave();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_BucketItemWidget(int32 EntryPoint);
}; // Size: 0x2B1

#endif
