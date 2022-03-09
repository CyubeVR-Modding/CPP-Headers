#ifndef UE4SS_SDK_PPWidget_HPP
#define UE4SS_SDK_PPWidget_HPP

class UPPWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* FadeOutt;                                                 // 0x0268 (size: 0x8)
    class UBorder* BG;                                                                // 0x0270 (size: 0x8)

    void SetOpacity(float A);
    void FadeOut();
    void ExecuteUbergraph_PPWidget(int32 EntryPoint);
}; // Size: 0x278

#endif
