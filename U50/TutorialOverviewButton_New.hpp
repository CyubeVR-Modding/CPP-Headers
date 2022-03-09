#ifndef UE4SS_SDK_TutorialOverviewButton_New_HPP
#define UE4SS_SDK_TutorialOverviewButton_New_HPP

class UTutorialOverviewButton_New_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_2;                                                          // 0x0268 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0270 (size: 0x8)
    int32 Index;                                                                      // 0x0278 (size: 0x4)
    class UTutorialOverview_New_C* Parent;                                            // 0x0280 (size: 0x8)

    void Init(class UTutorialOverview_New_C* Parent, int32 Index, FText InText);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__Button_2_K2Node_ComponentBoundEvent_63_OnButtonPressedEvent__DelegateSignature();
    void ExecuteUbergraph_TutorialOverviewButton_New(int32 EntryPoint);
}; // Size: 0x288

#endif
