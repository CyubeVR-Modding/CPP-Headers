#ifndef UE4SS_SDK_ItemList_New_HPP
#define UE4SS_SDK_ItemList_New_HPP

class UItemList_New_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UBorder* Border_1;                                                          // 0x0268 (size: 0x8)
    class UDeleteStuff_C* DeleteStuff;                                                // 0x0270 (size: 0x8)
    class UCanvasPanel* DragPanel;                                                    // 0x0278 (size: 0x8)
    class UUniformGridPanel* GridPanel;                                               // 0x0280 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0288 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0290 (size: 0x8)
    class UItem_C* Item;                                                              // 0x0298 (size: 0x8)
    class UItem_C* Item_0;                                                            // 0x02A0 (size: 0x8)
    class UItem_C* Item_1;                                                            // 0x02A8 (size: 0x8)
    class UItem_C* Item_C_0;                                                          // 0x02B0 (size: 0x8)
    class UItem_C* Item_C_1;                                                          // 0x02B8 (size: 0x8)
    class UItem_C* Item_C_2;                                                          // 0x02C0 (size: 0x8)
    class UItem_C* Item_C_12;                                                         // 0x02C8 (size: 0x8)
    class UItem_C* Item_C_34;                                                         // 0x02D0 (size: 0x8)
    class UItem_C* Item_C_39;                                                         // 0x02D8 (size: 0x8)
    class UItem_C* Item_C_40;                                                         // 0x02E0 (size: 0x8)
    class UItem_C* ItemHolder1;                                                       // 0x02E8 (size: 0x8)
    class UItem_C* ItemHolder2;                                                       // 0x02F0 (size: 0x8)
    class UItem_C* ItemHolder3;                                                       // 0x02F8 (size: 0x8)
    class UItem_C* ItemHolder4;                                                       // 0x0300 (size: 0x8)
    class UItem_C* ItemHolder5;                                                       // 0x0308 (size: 0x8)
    class UItem_C* ItemHolder6;                                                       // 0x0310 (size: 0x8)
    class UItem_C* ItemHolder7;                                                       // 0x0318 (size: 0x8)
    class UItem_C* ItemHolder8;                                                       // 0x0320 (size: 0x8)
    class UItem_C* ItemHolderShoulderLeft;                                            // 0x0328 (size: 0x8)
    class UItem_C* ItemHolderShoulderRight;                                           // 0x0330 (size: 0x8)
    class UItemTypeHolder_C* ItemTypeHolder;                                          // 0x0338 (size: 0x8)
    class UItemTypeHolder_C* ItemTypeHolder_0;                                        // 0x0340 (size: 0x8)
    class UItemTypeHolder_C* ItemTypeHolder_1;                                        // 0x0348 (size: 0x8)
    class UItemTypeHolder_C* ItemTypeHolder_2;                                        // 0x0350 (size: 0x8)
    class USizeBox* SizeBox_2;                                                        // 0x0358 (size: 0x8)
    TArray<class UItem_C*> ItemWidgets;                                               // 0x0360 (size: 0x10)
    class AInventoryBP_C* Inventory;                                                  // 0x0370 (size: 0x8)
    bool Initialized;                                                                 // 0x0378 (size: 0x1)
    FVector2D Size;                                                                   // 0x037C (size: 0x8)
    TArray<class UItemTypeHolder_C*> ItemHolderWidgets;                               // 0x0388 (size: 0x10)
    TArray<class UItem_C*> ToolHolderWidgets;                                         // 0x0398 (size: 0x10)
    class UToolSelectionVisualizer_C* ToolSelectionVisualizer;                        // 0x03A8 (size: 0x8)
    class UToolSelectionVisualizer_C* BlockSelectionVisualizer;                       // 0x03B0 (size: 0x8)

    void Drop(class UItem_C* PayloadItemWidget, class UItem_C* DroppedOnItemWidget, EBlockTypeBP Type, bool& success);
    void GetInventory(class AInventoryBP_C*& Inventory);
    void UpdateItemList();
    void UpdateDataQuickBar();
    void UpdateDataRegular();
    void CreateItemList();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void SetTextAtTop(FText Text);
    void AddDragWidget(class UItemDrag_C* Widget);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ItemList_New(int32 EntryPoint);
}; // Size: 0x3B8

#endif
