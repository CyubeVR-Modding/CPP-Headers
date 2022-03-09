#ifndef UE4SS_SDK_FurnaceUpperUI_HPP
#define UE4SS_SDK_FurnaceUpperUI_HPP

class UFurnaceUpperUI_C : public UUserWidget
{
    class UImage* Image;                                                              // 0x0260 (size: 0x8)
    class UImage* Image_79;                                                           // 0x0268 (size: 0x8)
    class UImage* Image_239;                                                          // 0x0270 (size: 0x8)
    class UTextBlock* Name;                                                           // 0x0278 (size: 0x8)
    class UTextBlock* Name_1;                                                         // 0x0280 (size: 0x8)
    class UScaleBox* ScaleBox_Iron;                                                   // 0x0288 (size: 0x8)
    class UScaleBox* ScaleBox_OR;                                                     // 0x0290 (size: 0x8)
    class UScaleBox* ScaleBox_Sand;                                                   // 0x0298 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x02A0 (size: 0x8)
    class UTextBlock* TextBlock_1;                                                    // 0x02A8 (size: 0x8)
    class UTextBlock* TextBlock_3;                                                    // 0x02B0 (size: 0x8)
    class UTextBlock* TextBlock_Amount;                                               // 0x02B8 (size: 0x8)
    class UTextBlock* TextBlock_Heat;                                                 // 0x02C0 (size: 0x8)
    class UTextBlock* TextBlock_Progress;                                             // 0x02C8 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_0;                                          // 0x02D0 (size: 0x8)

    void SetMeltType(bool Iron, bool Sand, int32 Amount);
    void UpdateNumbers(int32 items, float Progress, float Heat);
}; // Size: 0x2D8

#endif
