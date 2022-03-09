#ifndef UE4SS_SDK_SettingName_HPP
#define UE4SS_SDK_SettingName_HPP

class USettingName_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* Name;                                                           // 0x0268 (size: 0x8)
    FText Text;                                                                       // 0x0270 (size: 0x18)

    void PreConstruct(bool IsDesignTime);
    void SetText(FText InText);
    void ExecuteUbergraph_SettingName(int32 EntryPoint);
}; // Size: 0x288

#endif
