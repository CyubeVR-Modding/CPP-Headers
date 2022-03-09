#ifndef UE4SS_SDK_BucketItemWidget_HPP
#define UE4SS_SDK_BucketItemWidget_HPP

class UBucketItemWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeOut;
    class UWidgetAnimation* FadeIn;
    class UTextBlock* AmountText;
    class UBorder* Border_0;
    class UImage* Image_0;
    class UImage* Image_6;
    class UBorder* TopBorder;
    int32 Amount;
    EBlockTypeBP Type;
    int32 Index;
    bool Dragging;
    bool IsToolHolder;
    bool CanDrag;
    bool IsStackable;
    bool CurrentActive;

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
};

#endif
