#ifndef UE4SS_SDK_SelectorMainButton_HPP
#define UE4SS_SDK_SelectorMainButton_HPP

class USelectorMainButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_1;                                                          // 0x0268 (size: 0x8)
    class UBorder* SelectedBorder;                                                    // 0x0270 (size: 0x8)
    class UTextBlock* TextBlock_19;                                                   // 0x0278 (size: 0x8)
    FSelectorMainButton_CClicked Clicked;                                             // 0x0280 (size: 0x10)
    void Clicked();
    FString Text;                                                                     // 0x0290 (size: 0x10)

    void Construct();
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature();
    void MarkSelected(bool Selected);
    void ExecuteUbergraph_SelectorMainButton(int32 EntryPoint);
    void Clicked__DelegateSignature();
}; // Size: 0x2A0

#endif
