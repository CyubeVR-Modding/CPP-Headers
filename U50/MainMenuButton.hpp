#ifndef UE4SS_SDK_MainMenuButton_HPP
#define UE4SS_SDK_MainMenuButton_HPP

class UMainMenuButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* ButtonContinue;                                                    // 0x0268 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0270 (size: 0x8)
    FText Text;                                                                       // 0x0278 (size: 0x18)
    FMainMenuButton_CPressed Pressed;                                                 // 0x0290 (size: 0x10)
    void Pressed();

    void Construct();
    void BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_12_OnButtonReleasedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
    void ExecuteUbergraph_MainMenuButton(int32 EntryPoint);
    void Pressed__DelegateSignature();
}; // Size: 0x2A0

#endif
