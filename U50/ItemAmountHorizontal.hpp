#ifndef UE4SS_SDK_ItemAmountHorizontal_HPP
#define UE4SS_SDK_ItemAmountHorizontal_HPP

class UItemAmountHorizontal_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0268 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0270 (size: 0x8)
    EBlockTypeBP Type;                                                                // 0x0278 (size: 0x1)
    int32 Amount;                                                                     // 0x027C (size: 0x4)
    FText DescriptionBefore;                                                          // 0x0280 (size: 0x18)
    bool IsCustomBlock;                                                               // 0x0298 (size: 0x1)

    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void Construct();
    void ExecuteUbergraph_ItemAmountHorizontal(int32 EntryPoint);
}; // Size: 0x299

#endif
