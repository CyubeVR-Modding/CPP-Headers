#ifndef UE4SS_SDK_GraphicsSetting_New_HPP
#define UE4SS_SDK_GraphicsSetting_New_HPP

class UGraphicsSetting_New_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UBorder* Border_2;                                                          // 0x0268 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0270 (size: 0x8)
    class UButton* Button_123;                                                        // 0x0278 (size: 0x8)
    class UGraphicsSettingButton_C* GraphicsSettingButton;                            // 0x0280 (size: 0x8)
    class UGraphicsSettingButton_C* GraphicsSettingButton_0;                          // 0x0288 (size: 0x8)
    class UGraphicsSettingButton_C* GraphicsSettingButton_C_0;                        // 0x0290 (size: 0x8)
    class UHorizontalBox* HorizontalBox_64;                                           // 0x0298 (size: 0x8)
    class UHorizontalBox* OptionHolder;                                               // 0x02A0 (size: 0x8)
    class USettingName_C* SettingNameWidget;                                          // 0x02A8 (size: 0x8)
    FString SettingName;                                                              // 0x02B0 (size: 0x10)
    TArray<FString> OptionNames;                                                      // 0x02C0 (size: 0x10)
    TArray<class UGraphicsSettingButton_C*> OptionWidgets;                            // 0x02D0 (size: 0x10)
    class AMyChunkManager_C* ChunkManager;                                            // 0x02E0 (size: 0x8)
    class USettingsUI_New_C* ParentWidget;                                            // 0x02E8 (size: 0x8)
    FString WhenSetToThis;                                                            // 0x02F0 (size: 0x10)
    class UGraphicsSetting_New_C* SetThis;                                            // 0x0300 (size: 0x8)
    FString ToThis;                                                                   // 0x0308 (size: 0x10)
    FString DefaultValue;                                                             // 0x0318 (size: 0x10)
    TArray<class UGraphicsSetting_New_C*> MakeInvisible;                              // 0x0328 (size: 0x10)
    bool HasHoverInfo;                                                                // 0x0338 (size: 0x1)
    FString HoverInfoText;                                                            // 0x0340 (size: 0x10)

    void SetEnabledCustom(bool Enabled);
    void Construct();
    void OptionClicked(FString Option);
    void Init(class AMyChunkManager_C* ChunkManager, class USettingsUI_New_C* ParentWidget);
    void SetGOSelected(FString Option);
    void PreConstruct(bool IsDesignTime);
    void CheckSpecialDependency(FString Option);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
    void SetDefaultValue(FString DefaultValue);
    void Re-Init();
    void BndEvt__Button_123_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_123_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_GraphicsSetting_New(int32 EntryPoint);
}; // Size: 0x350

#endif
