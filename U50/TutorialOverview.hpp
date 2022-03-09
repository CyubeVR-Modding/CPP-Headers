#ifndef UE4SS_SDK_TutorialOverview_HPP
#define UE4SS_SDK_TutorialOverview_HPP

class UTutorialOverview_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* OpenSidebar;                                              // 0x0268 (size: 0x8)
    class UBorder* Border_4;                                                          // 0x0270 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0278 (size: 0x8)
    class UScrollBox* ScrollBox_0;                                                    // 0x0280 (size: 0x8)
    FVector2D Size;                                                                   // 0x0288 (size: 0x8)
    TArray<class UObject*> TutorialPages;                                             // 0x0290 (size: 0x10)
    bool SidebarFull;                                                                 // 0x02A0 (size: 0x1)
    FTimerHandle Timer;                                                               // 0x02A8 (size: 0x8)
    float SizeTarget;                                                                 // 0x02B0 (size: 0x4)

    FEventReply OnMouseButtonDown_0(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseMove_0(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void InitButtons();
    void UpdatePage(int32 Index);
    void DisableSidebar();
    void EnableSidebar();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void SidebarHovered();
    void ExecuteUbergraph_TutorialOverview(int32 EntryPoint);
}; // Size: 0x2B4

#endif
