#ifndef UE4SS_SDK_InfoData_HPP
#define UE4SS_SDK_InfoData_HPP

class UInfoData_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* HMDName;                                                        // 0x0268 (size: 0x8)
    class UTextBlock* TextBlock_3;                                                    // 0x0270 (size: 0x8)
    FText Text;                                                                       // 0x0278 (size: 0x18)
    int32 FontSize;                                                                   // 0x0290 (size: 0x4)
    FMargin TextPadding;                                                              // 0x0294 (size: 0x10)

    void SetValue(FText InText);
    void PreConstruct(bool IsDesignTime);
    void SetFontSize(int32 FontSize);
    void InitPadding();
    void ExecuteUbergraph_InfoData(int32 EntryPoint);
}; // Size: 0x2A4

#endif
