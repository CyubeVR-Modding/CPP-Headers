#ifndef UE4SS_SDK_YouAreDeadWidget_HPP
#define UE4SS_SDK_YouAreDeadWidget_HPP

class UYouAreDeadWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* MainAnim;                                                 // 0x0268 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x0270 (size: 0x8)
    class UBorder* Border_1;                                                          // 0x0278 (size: 0x8)
    class UBorder* Border_2;                                                          // 0x0280 (size: 0x8)
    class UBorder* Border_3;                                                          // 0x0288 (size: 0x8)
    class UBorder* Border_5;                                                          // 0x0290 (size: 0x8)
    class UProgressBar* ProgressBar_48;                                               // 0x0298 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x02A0 (size: 0x8)
    class UTextBlock* TextBlock_1;                                                    // 0x02A8 (size: 0x8)
    class UTextBlock* TextBlock_3;                                                    // 0x02B0 (size: 0x8)
    class UTextBlock* TextBlock_4;                                                    // 0x02B8 (size: 0x8)
    class UTextBlock* TextBlock_16;                                                   // 0x02C0 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_0;                                          // 0x02C8 (size: 0x8)

    void Reset();
    void StartAnimation();
    void SetFoundRespawnTorch(bool FoundOne);
    void ExecuteUbergraph_YouAreDeadWidget(int32 EntryPoint);
}; // Size: 0x2D0

#endif
