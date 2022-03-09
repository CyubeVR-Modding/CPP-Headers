#ifndef UE4SS_SDK_CraftingOverview_New_HPP
#define UE4SS_SDK_CraftingOverview_New_HPP

class UCraftingOverview_New_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCraftingList_New_C* CraftingList_New;                                      // 0x0268 (size: 0x8)
    FVector2D Size;                                                                   // 0x0270 (size: 0x8)

    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_CraftingOverview_New(int32 EntryPoint);
}; // Size: 0x278

#endif
