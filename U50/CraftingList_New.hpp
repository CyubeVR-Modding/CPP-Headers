#ifndef UE4SS_SDK_CraftingList_New_HPP
#define UE4SS_SDK_CraftingList_New_HPP

class UCraftingList_New_C : public UCraftingListParent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeIn;
    class UBorder* Border_2;
    class UButton* Button_71;
    class UButton* Button_82;
    class UButton* Button_131;
    class UButton* Button_154;
    class UCraftingItem_C* CraftingItem;
    class UCraftingItem_C* CraftingItem_0;
    class UCraftingItem_C* CraftingItem_1;
    class UCraftingItem_C* CraftingItem_C_0;
    class UCraftingItem_C* CraftingItem_C_1;
    class UCraftingItemModBlock_C* CraftingItemModBlock;
    class UCraftingItemModBlock_C* CraftingItemModBlock_C_2;
    class UCraftingItemModBlock_C* CraftingItemModBlock_C_3;
    class UUniformGridPanel* GridPanel;
    class UUniformGridPanel* GripPanelMod;
    class UImage* Image_0;
    class UImage* Image_112;
    class UImage* Image_116;
    class UBorder* ImageBorder;
    class UButton* ImageButton;
    class UCanvasPanel* ImagePanel;
    class UHorizontalBox* ItemAmountHolder;
    class UItemAmountHorizontal_C* ItemAmountHorizontal;
    class UItemAmountHorizontal_C* ItemAmountHorizontal_0;
    class UHorizontalBox* ItemAmountsHorizontalBox;
    class UTextBlock* NoModBlocksText;
    class UOverlay* Overlay_CraftingTutorial;
    class URetainerBox* RetainerBox_0;
    class UScrollBox* ScrollBox_2;
    class USizeBox* SizeBox_0;
    class USizeBox* SizeBox_2;
    class USizeBox* SizeBox_Mod;
    class UTextBlock* TextBlock_AmountModBlocks;
    class UTextBlock* TextBlock_HaveInstalled;
    class UTextBlock* TextBlock_MadeBy;
    class UVerticalBox* VerticalBox_1;
    class UVerticalBox* VerticalBox_HowToCraft;
    class UVerticalBox* VerticalBox_MadeBy;
    class UVerticalBox* VerticalBox_Pause;
    TArray<class UCraftingItem_C*> ItemWidgets;
    class AInventoryBP_C* Inventory;
    bool Initialized;
    FVector2D Size;
    TArray<class UItemTypeHolder_C*> ItemHolderWidgets;
    TArray<class UItem_C*> ToolHolderWidgets;
    class UToolSelectionVisualizer_C* ToolSelectionVisualizer;
    class UToolSelectionVisualizer_C* BlockSelectionVisualizer;
    TArray<EBlockTypeBP> Drafts;
    class UMediaPlayer* MediaPlayer;
    bool PlayingAnimation;
    float BlurTarget;
    float CurrentBlur;
    bool ItemWasClicked;
    TMap<class EBlockTypeBP, class UMediaSource*> TypeToMovie;
    class USG_UnlockedDrafts_C* RecipeSaveGame;
    FString SaveGameSlotName;
    class UMaterialInstanceDynamic* RetainerMat;
    bool MoviePlayerActive;
    class UMediaSource* MoviePlayerPlaying;
    bool MoviePlayerPaused;
    class UMediaPlayer* CraftingTutorialMediaPlayer;

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
};

#endif
