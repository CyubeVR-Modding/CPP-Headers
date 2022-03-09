#ifndef UE4SS_SDK_GraphicsSettingButton_HPP
#define UE4SS_SDK_GraphicsSettingButton_HPP

class UGraphicsSettingButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UBorder* BorderFrame;                                                       // 0x0268 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0270 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0278 (size: 0x8)
    FString Name;                                                                     // 0x0280 (size: 0x10)
    class UGraphicsSetting_New_C* ParentSetting;                                      // 0x0290 (size: 0x8)

    void Init(FString Name, class UGraphicsSetting_New_C* ParentSetting);
    void SetEnabled(bool TRUE);
    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_405_OnButtonPressedEvent__DelegateSignature();
    void ExecuteUbergraph_GraphicsSettingButton(int32 EntryPoint);
}; // Size: 0x298

#endif
