#ifndef UE4SS_SDK_MainSelectorButton_HPP
#define UE4SS_SDK_MainSelectorButton_HPP

class UMainSelectorButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0268 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0270 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0278 (size: 0x8)
    FMainSelectorButton_CClicked Clicked;                                             // 0x0280 (size: 0x10)
    void Clicked();
    FString Text;                                                                     // 0x0290 (size: 0x10)

    void PreConstruct(bool IsDesignTime);
    void MarkSelected(bool Selected);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_156_OnButtonPressedEvent__DelegateSignature();
    void ExecuteUbergraph_MainSelectorButton(int32 EntryPoint);
    void Clicked__DelegateSignature();
}; // Size: 0x2A0

#endif
