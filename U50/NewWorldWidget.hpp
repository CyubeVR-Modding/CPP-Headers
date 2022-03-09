#ifndef UE4SS_SDK_NewWorldWidget_HPP
#define UE4SS_SDK_NewWorldWidget_HPP

class UNewWorldWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_1;                                                          // 0x0268 (size: 0x8)
    class UButton* NameButton;                                                        // 0x0270 (size: 0x8)
    class UTextBlock* NewWorldNameText;                                               // 0x0278 (size: 0x8)
    class UButton* SeedButton;                                                        // 0x0280 (size: 0x8)
    class UTextBlock* SeedTextBox;                                                    // 0x0288 (size: 0x8)
    FNewWorldWidget_CClickedOnNameTextBox ClickedOnNameTextBox;                       // 0x0290 (size: 0x10)
    void ClickedOnNameTextBox();
    FNewWorldWidget_CClickedOnStart ClickedOnStart;                                   // 0x02A0 (size: 0x10)
    void ClickedOnStart();
    FNewWorldWidget_CClickedOnSeedTextBox ClickedOnSeedTextBox;                       // 0x02B0 (size: 0x10)
    void ClickedOnSeedTextBox();

    void Construct();
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonReleasedEvent__DelegateSignature();
    void SetupNewWorldWidget();
    void BndEvt__SeedButton_K2Node_ComponentBoundEvent_178_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_NewWorldWidget(int32 EntryPoint);
    void ClickedOnSeedTextBox__DelegateSignature();
    void ClickedOnStart__DelegateSignature();
    void ClickedOnNameTextBox__DelegateSignature();
}; // Size: 0x2C0

#endif
