#ifndef UE4SS_SDK_WorldSelectionWidget_HPP
#define UE4SS_SDK_WorldSelectionWidget_HPP

class UWorldSelectionWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UBorder* Border_1;                                                          // 0x0268 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0270 (size: 0x8)
    class UButton* Button_1;                                                          // 0x0278 (size: 0x8)
    class UTextBlock* SlotName;                                                       // 0x0280 (size: 0x8)
    int32 SlotIndex;                                                                  // 0x0288 (size: 0x4)
    FWorldSelectionWidget_CDeleteWorld DeleteWorld;                                   // 0x0290 (size: 0x10)
    void DeleteWorld(FString Name);
    FString WorldName;                                                                // 0x02A0 (size: 0x10)
    class UMainMenu_C* MainMenu;                                                      // 0x02B0 (size: 0x8)
    class ULoadWorldWidget_C* Parent;                                                 // 0x02B8 (size: 0x8)

    void BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature();
    void SetupSlotWidget(FString WorldName, int32 SlotIndex, class UMainMenu_C* MainMenu, class ULoadWorldWidget_C* Parent);
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_86_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_56_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_WorldSelectionWidget(int32 EntryPoint);
    void DeleteWorld__DelegateSignature(FString Name);
}; // Size: 0x2C0

#endif
