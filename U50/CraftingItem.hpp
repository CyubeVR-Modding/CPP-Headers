#ifndef UE4SS_SDK_CraftingItem_HPP
#define UE4SS_SDK_CraftingItem_HPP

class UCraftingItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x0268 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0270 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0278 (size: 0x8)
    class UInvalidationBox* InvalidationBoxMain;                                      // 0x0280 (size: 0x8)
    int32 Amount;                                                                     // 0x0288 (size: 0x4)
    EBlockTypeBP Type;                                                                // 0x028C (size: 0x1)
    int32 Index;                                                                      // 0x0290 (size: 0x4)
    bool Dragging;                                                                    // 0x0294 (size: 0x1)
    bool IsToolHolder;                                                                // 0x0295 (size: 0x1)
    bool CanDrag;                                                                     // 0x0296 (size: 0x1)
    FLinearColor Color;                                                               // 0x0298 (size: 0x10)
    class UCraftingList_New_C* Parent;                                                // 0x02A8 (size: 0x8)
    bool IsClicked;                                                                   // 0x02B0 (size: 0x1)
    bool Unlocked;                                                                    // 0x02B1 (size: 0x1)

    void UpdateLookEmpty();
    void UpdateLook();
    void SetData(EBlockTypeBP Type, bool Unlocked);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void SetDescriptionTextToThis();
    void MouseLeave();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_CraftingItem(int32 EntryPoint);
}; // Size: 0x2B2

#endif
