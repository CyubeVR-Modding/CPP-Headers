#ifndef UE4SS_SDK_DeleteStuff_HPP
#define UE4SS_SDK_DeleteStuff_HPP

class UDeleteStuff_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0268 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0270 (size: 0x8)
    class UProgressBar* ProgressBar_0;                                                // 0x0278 (size: 0x8)
    bool DeleteUnlocked;                                                              // 0x0280 (size: 0x1)

    bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    bool OnDragOver(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnDragEnter(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void OnDragLeave(FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_DeleteStuff(int32 EntryPoint);
}; // Size: 0x281

#endif
