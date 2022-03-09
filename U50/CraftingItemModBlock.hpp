#ifndef UE4SS_SDK_CraftingItemModBlock_HPP
#define UE4SS_SDK_CraftingItemModBlock_HPP

class UCraftingItemModBlock_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x0268 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0270 (size: 0x8)
    class UCustomBlockPreviewWidget_C* CustomBlockPreviewWidget;                      // 0x0278 (size: 0x8)
    class UImage* Image_70;                                                           // 0x0280 (size: 0x8)
    class UInvalidationBox* InvalidationBoxMain;                                      // 0x0288 (size: 0x8)
    bool Dragging;                                                                    // 0x0290 (size: 0x1)
    bool CanDrag;                                                                     // 0x0291 (size: 0x1)
    FLinearColor Color;                                                               // 0x0294 (size: 0x10)
    class UCraftingList_New_C* Parent;                                                // 0x02A8 (size: 0x8)
    bool IsClicked;                                                                   // 0x02B0 (size: 0x1)
    FString BlockName;                                                                // 0x02B8 (size: 0x10)
    int32 UniqueId;                                                                   // 0x02C8 (size: 0x4)
    class UTexture2D* RecipePreviewTexture;                                           // 0x02D0 (size: 0x8)
    FString CreatorName;                                                              // 0x02D8 (size: 0x10)

    void UpdateLookEmpty();
    void UpdateLook();
    void SetData(int32 UniqueId, FString BlockName, class UTexture2D* RecipePreviewTexture, FString CreatorName);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void SetDescriptionTextToThis();
    void MouseLeave();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_CraftingItemModBlock(int32 EntryPoint);
}; // Size: 0x2E8

#endif
