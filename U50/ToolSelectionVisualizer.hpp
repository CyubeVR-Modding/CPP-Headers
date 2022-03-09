#ifndef UE4SS_SDK_ToolSelectionVisualizer_HPP
#define UE4SS_SDK_ToolSelectionVisualizer_HPP

class UToolSelectionVisualizer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x0268 (size: 0x8)
    class UBorder* Border1;                                                           // 0x0270 (size: 0x8)
    class UBorder* Border2;                                                           // 0x0278 (size: 0x8)
    class UBorder* Border3;                                                           // 0x0280 (size: 0x8)
    class UBorder* Border4;                                                           // 0x0288 (size: 0x8)
    class UBorder* BorderUppest;                                                      // 0x0290 (size: 0x8)
    class UItem_C* Item;                                                              // 0x0298 (size: 0x8)
    class UItem_C* Item_0;                                                            // 0x02A0 (size: 0x8)
    class UItem_C* Item_1;                                                            // 0x02A8 (size: 0x8)
    class UItem_C* Item_2;                                                            // 0x02B0 (size: 0x8)
    class UImage* Marker;                                                             // 0x02B8 (size: 0x8)
    TArray<class UItem_C*> ItemArray;                                                 // 0x02C0 (size: 0x10)
    bool CurrentVisible;                                                              // 0x02D0 (size: 0x1)
    TArray<class UBorder*> Borders;                                                   // 0x02D8 (size: 0x10)
    bool MaybeInvisible;                                                              // 0x02E8 (size: 0x1)
    FTimerHandle SetInvisibleTimerHandle;                                             // 0x02F0 (size: 0x8)

    void SetMarker(float Value);
    void Construct();
    void SetVisible(bool NewVisible);
    void SetFalseMaybe();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SetInvisible();
    void ExecuteUbergraph_ToolSelectionVisualizer(int32 EntryPoint);
}; // Size: 0x2F8

#endif
