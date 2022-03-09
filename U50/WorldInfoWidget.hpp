#ifndef UE4SS_SDK_WorldInfoWidget_HPP
#define UE4SS_SDK_WorldInfoWidget_HPP

class UWorldInfoWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* TextBlock_69;                                                   // 0x0268 (size: 0x8)
    FString TextToDisplay;                                                            // 0x0270 (size: 0x10)

    void SetText(FString inString);
    void ExecuteUbergraph_WorldInfoWidget(int32 EntryPoint);
}; // Size: 0x280

#endif
