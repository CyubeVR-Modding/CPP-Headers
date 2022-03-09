#ifndef UE4SS_SDK_LoadingProgressWidget_HPP
#define UE4SS_SDK_LoadingProgressWidget_HPP

class ULoadingProgressWidget_C : public UUserWidget
{
    class UTextBlock* TextBlock;                                                      // 0x0260 (size: 0x8)
    class UTextBlock* TextBlock_27;                                                   // 0x0268 (size: 0x8)

    void SetPercentage(float Percentage, float LoadingScreenEndBegan);
}; // Size: 0x270

#endif
