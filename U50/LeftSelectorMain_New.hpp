#ifndef UE4SS_SDK_LeftSelectorMain_New_HPP
#define UE4SS_SDK_LeftSelectorMain_New_HPP

class ULeftSelectorMain_New_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* FadeOutButtons;                                           // 0x0268 (size: 0x8)
    class UBorder* Border_Buttons;                                                    // 0x0270 (size: 0x8)
    class UCraftingList_New_C* CraftingList_New;                                      // 0x0278 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0280 (size: 0x8)
    class UInGameSelector_New_C* InGameSelector_New;                                  // 0x0288 (size: 0x8)
    class UMainSelectorButton_C* MainSelectorButton0;                                 // 0x0290 (size: 0x8)
    class UMainSelectorButton_C* MainSelectorButton1;                                 // 0x0298 (size: 0x8)
    class UMainSelectorButton_C* MainSelectorButton2;                                 // 0x02A0 (size: 0x8)
    class UMainSelectorButton_C* MainSelectorButton3;                                 // 0x02A8 (size: 0x8)
    class USettingsUI_New_C* SettingsUI_New;                                          // 0x02B0 (size: 0x8)
    class UTextBlock* TextAtTop;                                                      // 0x02B8 (size: 0x8)
    class UTutorialOverview_New_C* TutorialOverview_New;                              // 0x02C0 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_0;                                          // 0x02C8 (size: 0x8)
    TArray<class USelectorMainButton_C*> MainButtons;                                 // 0x02D0 (size: 0x10)
    TArray<class UMainSelectorButton_C*> MainButtonsNew;                              // 0x02E0 (size: 0x10)
    FVector2D Size;                                                                   // 0x02F0 (size: 0x8)

    void SetTextToBlockName(EBlockTypeBP Type);
    void SetDescribeText(FText InText, FLinearColor Specified Color);
    void SetCraftingOverviewTextToBlockName(EBlockTypeBP Type);
    void SetCraftingOverviewDescription(FText InText, FLinearColor Specified Color);
    void GetCraftingOverviewDescription(FText& CurrentText);
    void SetTutorialTabEnabled(bool Enabled);
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_83_OnButtonHoverEvent__DelegateSignature();
    void Construct();
    void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_41_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_98_OnButtonHoverEvent__DelegateSignature();
    void InitButton();
    void InventoryEnabled();
    void InventoryDisabled();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__MainSelectorButton0_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature();
    void BndEvt__MainSelectorButton1_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature();
    void BndEvt__MainSelectorButton2_K2Node_ComponentBoundEvent_69_Clicked__DelegateSignature();
    void PlayFadeOutButtons(TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode);
    void BndEvt__MainSelectorButton3_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature();
    void ExecuteUbergraph_LeftSelectorMain_New(int32 EntryPoint);
}; // Size: 0x2F8

#endif
