#ifndef UE4SS_SDK_CraftingList_New_HPP
#define UE4SS_SDK_CraftingList_New_HPP

class UCraftingList_New_C : public UCraftingListParent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x0268 (size: 0x8)
    class UBorder* Border_2;                                                          // 0x0270 (size: 0x8)
    class UButton* Button_71;                                                         // 0x0278 (size: 0x8)
    class UButton* Button_82;                                                         // 0x0280 (size: 0x8)
    class UButton* Button_131;                                                        // 0x0288 (size: 0x8)
    class UButton* Button_154;                                                        // 0x0290 (size: 0x8)
    class UCraftingItem_C* CraftingItem;                                              // 0x0298 (size: 0x8)
    class UCraftingItem_C* CraftingItem_0;                                            // 0x02A0 (size: 0x8)
    class UCraftingItem_C* CraftingItem_1;                                            // 0x02A8 (size: 0x8)
    class UCraftingItem_C* CraftingItem_C_0;                                          // 0x02B0 (size: 0x8)
    class UCraftingItem_C* CraftingItem_C_1;                                          // 0x02B8 (size: 0x8)
    class UCraftingItemModBlock_C* CraftingItemModBlock;                              // 0x02C0 (size: 0x8)
    class UCraftingItemModBlock_C* CraftingItemModBlock_C_2;                          // 0x02C8 (size: 0x8)
    class UCraftingItemModBlock_C* CraftingItemModBlock_C_3;                          // 0x02D0 (size: 0x8)
    class UUniformGridPanel* GridPanel;                                               // 0x02D8 (size: 0x8)
    class UUniformGridPanel* GripPanelMod;                                            // 0x02E0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02E8 (size: 0x8)
    class UImage* Image_112;                                                          // 0x02F0 (size: 0x8)
    class UImage* Image_116;                                                          // 0x02F8 (size: 0x8)
    class UBorder* ImageBorder;                                                       // 0x0300 (size: 0x8)
    class UButton* ImageButton;                                                       // 0x0308 (size: 0x8)
    class UCanvasPanel* ImagePanel;                                                   // 0x0310 (size: 0x8)
    class UHorizontalBox* ItemAmountHolder;                                           // 0x0318 (size: 0x8)
    class UItemAmountHorizontal_C* ItemAmountHorizontal;                              // 0x0320 (size: 0x8)
    class UItemAmountHorizontal_C* ItemAmountHorizontal_0;                            // 0x0328 (size: 0x8)
    class UHorizontalBox* ItemAmountsHorizontalBox;                                   // 0x0330 (size: 0x8)
    class UTextBlock* NoModBlocksText;                                                // 0x0338 (size: 0x8)
    class UOverlay* Overlay_CraftingTutorial;                                         // 0x0340 (size: 0x8)
    class URetainerBox* RetainerBox_0;                                                // 0x0348 (size: 0x8)
    class UScrollBox* ScrollBox_2;                                                    // 0x0350 (size: 0x8)
    class USizeBox* SizeBox_0;                                                        // 0x0358 (size: 0x8)
    class USizeBox* SizeBox_2;                                                        // 0x0360 (size: 0x8)
    class USizeBox* SizeBox_Mod;                                                      // 0x0368 (size: 0x8)
    class UTextBlock* TextBlock_AmountModBlocks;                                      // 0x0370 (size: 0x8)
    class UTextBlock* TextBlock_HaveInstalled;                                        // 0x0378 (size: 0x8)
    class UTextBlock* TextBlock_MadeBy;                                               // 0x0380 (size: 0x8)
    class UVerticalBox* VerticalBox_1;                                                // 0x0388 (size: 0x8)
    class UVerticalBox* VerticalBox_HowToCraft;                                       // 0x0390 (size: 0x8)
    class UVerticalBox* VerticalBox_MadeBy;                                           // 0x0398 (size: 0x8)
    class UVerticalBox* VerticalBox_Pause;                                            // 0x03A0 (size: 0x8)
    TArray<class UCraftingItem_C*> ItemWidgets;                                       // 0x03A8 (size: 0x10)
    class AInventoryBP_C* Inventory;                                                  // 0x03B8 (size: 0x8)
    bool Initialized;                                                                 // 0x03C0 (size: 0x1)
    FVector2D Size;                                                                   // 0x03C4 (size: 0x8)
    TArray<class UItemTypeHolder_C*> ItemHolderWidgets;                               // 0x03D0 (size: 0x10)
    TArray<class UItem_C*> ToolHolderWidgets;                                         // 0x03E0 (size: 0x10)
    class UToolSelectionVisualizer_C* ToolSelectionVisualizer;                        // 0x03F0 (size: 0x8)
    class UToolSelectionVisualizer_C* BlockSelectionVisualizer;                       // 0x03F8 (size: 0x8)
    TArray<EBlockTypeBP> Drafts;                                                      // 0x0400 (size: 0x10)
    class UMediaPlayer* MediaPlayer;                                                  // 0x0410 (size: 0x8)
    bool PlayingAnimation;                                                            // 0x0418 (size: 0x1)
    float BlurTarget;                                                                 // 0x041C (size: 0x4)
    float CurrentBlur;                                                                // 0x0420 (size: 0x4)
    bool ItemWasClicked;                                                              // 0x0424 (size: 0x1)
    TMap<class EBlockTypeBP, class UMediaSource*> TypeToMovie;                        // 0x0428 (size: 0x50)
    class USG_UnlockedDrafts_C* RecipeSaveGame;                                       // 0x0478 (size: 0x8)
    FString SaveGameSlotName;                                                         // 0x0480 (size: 0x10)
    class UMaterialInstanceDynamic* RetainerMat;                                      // 0x0490 (size: 0x8)
    bool MoviePlayerActive;                                                           // 0x0498 (size: 0x1)
    class UMediaSource* MoviePlayerPlaying;                                           // 0x04A0 (size: 0x8)
    bool MoviePlayerPaused;                                                           // 0x04A8 (size: 0x1)
    class UMediaPlayer* CraftingTutorialMediaPlayer;                                  // 0x04B0 (size: 0x8)

    void CreateItemListModBlocks();
    void GetSlotName(FString& SlotName);
    void UnlockItem(class ADraftUnlockingPaper* Actor);
    void UpdateAmounts(EBlockTypeBP Type, int32 UniqueId);
    void UpdateDataQuickBar();
    void UpdateDataRegular();
    void CreateItemList();
    void PlayFadeAnimation(bool Forward);
    void LoadSaveGame();
    void InitRetainer();
    void SetMoviePlayerPaused(bool NewPause);
    void BndEvt__ImageButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void ItemClickedCustomBlock(int32 UniqueId, class UTexture2D* Texture, FString CreatorName);
    void ScrollDownAndUp();
    void DebugTick();
    void SetMediaPlayer(bool Enable, EBlockTypeBP Type);
    void ItemClicked(EBlockTypeBP Type);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__CraftingList_New_Button_82_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__CraftingList_New_Button_154_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__CraftingList_New_Button_154_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__CraftingList_New_Button_131_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__CraftingList_New_Button_71_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature();
    void RecipeVisibleNowShowHowToCraftButton();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_CraftingList_New(int32 EntryPoint);
}; // Size: 0x4B8

#endif
