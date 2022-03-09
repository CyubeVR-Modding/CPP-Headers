#ifndef UE4SS_SDK_LoadingScreenTextWidget_HPP
#define UE4SS_SDK_LoadingScreenTextWidget_HPP

class ULoadingScreenTextWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* TextBlock_17;                                                   // 0x0268 (size: 0x8)
    TArray<FString> TextToChoose;                                                     // 0x0270 (size: 0x10)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_LoadingScreenTextWidget(int32 EntryPoint);
}; // Size: 0x280

#endif
