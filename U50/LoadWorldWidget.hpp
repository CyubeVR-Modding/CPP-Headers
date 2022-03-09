#ifndef UE4SS_SDK_LoadWorldWidget_HPP
#define UE4SS_SDK_LoadWorldWidget_HPP

class ULoadWorldWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* NotReallyDelete;                                                   // 0x0268 (size: 0x8)
    class UBorder* ReallyDeleteOverlay;                                               // 0x0270 (size: 0x8)
    class UVerticalBox* WorldListVertical;                                            // 0x0278 (size: 0x8)
    class UButton* YesReallyDelete;                                                   // 0x0280 (size: 0x8)
    FLoadWorldWidget_CClickedOnWorld ClickedOnWorld;                                  // 0x0288 (size: 0x10)
    void ClickedOnWorld(FString WorldName);
    TArray<class UWorldSelectionWidget_C*> WorldSelectionWidgets;                     // 0x0298 (size: 0x10)
    class UMainMenu_C* MainMenu;                                                      // 0x02A8 (size: 0x8)
    FString DeletePending;                                                            // 0x02B0 (size: 0x10)

    void UpdateWorldList();
    void SetupLoadWorldWidget(class UMainMenu_C* MainMenu);
    void SlotWasClicked(FString WorldName);
    void BndEvt__YesReallyLeave_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__NotReallyDelete_K2Node_ComponentBoundEvent_48_OnButtonReleasedEvent__DelegateSignature();
    void DeleteClicked(FString World);
    void ExecuteUbergraph_LoadWorldWidget(int32 EntryPoint);
    void ClickedOnWorld__DelegateSignature(FString WorldName);
}; // Size: 0x2C0

#endif
