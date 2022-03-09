#ifndef UE4SS_SDK_GraphicsSetting_old_HPP
#define UE4SS_SDK_GraphicsSetting_old_HPP

class UGraphicsSetting_old_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UGraphicsSettingButton_C* GraphicsSettingButton;                            // 0x0268 (size: 0x8)
    class UGraphicsSettingButton_C* GraphicsSettingButton_0;                          // 0x0270 (size: 0x8)
    class UTextBlock* Name;                                                           // 0x0278 (size: 0x8)
    class UHorizontalBox* OptionHolder;                                               // 0x0280 (size: 0x8)
    FString SettingName;                                                              // 0x0288 (size: 0x10)
    TArray<FString> OptionNames;                                                      // 0x0298 (size: 0x10)
    TArray<class UGraphicsSettingButton_C*> OptionWidgets;                            // 0x02A8 (size: 0x10)
    class AMyChunkManager_C* ChunkManager;                                            // 0x02B8 (size: 0x8)
    class USettingsUI_New_C* ParentWidget;                                            // 0x02C0 (size: 0x8)

    void Construct();
    void OptionClicked(FString Option);
    void Init(class AMyChunkManager_C* ChunkManager, class USettingsUI_New_C* ParentWidget);
    void SetGOSelected(FString Option);
    void ExecuteUbergraph_GraphicsSetting_old(int32 EntryPoint);
}; // Size: 0x2C8

#endif
