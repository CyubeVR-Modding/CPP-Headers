#ifndef UE4SS_SDK_GraphicsSettingCategoryButton_HPP
#define UE4SS_SDK_GraphicsSettingCategoryButton_HPP

class UGraphicsSettingCategoryButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UBorder* BorderFrame;                                                       // 0x0268 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0270 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0278 (size: 0x8)
    FString Name;                                                                     // 0x0280 (size: 0x10)
    class UGraphicsSetting_New_C* ParentSetting;                                      // 0x0290 (size: 0x8)
    FGraphicsSettingCategoryButton_CClicked Clicked;                                  // 0x0298 (size: 0x10)
    void Clicked();

    void SetEnabled(bool TRUE);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_405_OnButtonPressedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_GraphicsSettingCategoryButton(int32 EntryPoint);
    void Clicked__DelegateSignature();
}; // Size: 0x2A8

#endif
