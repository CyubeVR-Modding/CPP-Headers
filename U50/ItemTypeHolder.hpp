#ifndef UE4SS_SDK_ItemTypeHolder_HPP
#define UE4SS_SDK_ItemTypeHolder_HPP

class UItemTypeHolder_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x0268 (size: 0x8)
    class UCustomBlockPreviewWidget1_C* CustomBlockPreviewWidget1;                    // 0x0270 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0278 (size: 0x8)
    class UOverlay* Overlay_0;                                                        // 0x0280 (size: 0x8)
    int32 Amount;                                                                     // 0x0288 (size: 0x4)
    EBlockTypeBP Type;                                                                // 0x028C (size: 0x1)
    int32 Index;                                                                      // 0x0290 (size: 0x4)
    bool IsToolType;                                                                  // 0x0294 (size: 0x1)
    int32 UniqueId;                                                                   // 0x0298 (size: 0x4)
    FString BlockName;                                                                // 0x02A0 (size: 0x10)
    bool IsReal;                                                                      // 0x02B0 (size: 0x1)

    void UpdateLookEmpty();
    bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void UpdateLook();
    void SetData(EBlockTypeBP Type, int32 Index, int32 UniqueId, bool IsReal);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void SetDescriptionTextToThis();
    void MouseLeave();
    void ExecuteUbergraph_ItemTypeHolder(int32 EntryPoint);
}; // Size: 0x2B1

#endif
