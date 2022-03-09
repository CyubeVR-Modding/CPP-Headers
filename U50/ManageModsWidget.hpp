#ifndef UE4SS_SDK_ManageModsWidget_HPP
#define UE4SS_SDK_ManageModsWidget_HPP

class UManageModsWidget_C : public UManageModsWidgetParent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCircularThrobber* CircularThrobber_81;                                     // 0x0268 (size: 0x8)
    class UButton* Error_Button;                                                      // 0x0270 (size: 0x8)
    class UBackgroundBlur* Error_Overlay;                                             // 0x0278 (size: 0x8)
    class UButton* OK_Success;                                                        // 0x0280 (size: 0x8)
    class UTextBlock* OpenWorkshopButtonText;                                         // 0x0288 (size: 0x8)
    class UBackgroundBlur* ProcessingOverlay;                                         // 0x0290 (size: 0x8)
    class UButton* PublishButton;                                                     // 0x0298 (size: 0x8)
    class UBackgroundBlur* Success_Overlay;                                           // 0x02A0 (size: 0x8)
    class UTextBlock* Success_Text;                                                   // 0x02A8 (size: 0x8)
    class UTextBlock* Text_NoLocalMods;                                               // 0x02B0 (size: 0x8)
    class UTextBlock* Text_NoWorkshopMods;                                            // 0x02B8 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x02C0 (size: 0x8)
    class UTextBlock* TextBlock_4;                                                    // 0x02C8 (size: 0x8)
    class UBackgroundBlur* UpdateSuccess_Overlay;                                     // 0x02D0 (size: 0x8)
    class UButton* UpdateSuccessButton;                                               // 0x02D8 (size: 0x8)
    class UVerticalBox* VerticalBox_LocalMods;                                        // 0x02E0 (size: 0x8)
    class UVerticalBox* VerticalBox_WorkshopSubribed;                                 // 0x02E8 (size: 0x8)
    class ABlockPreviewRenderActor_C* BlockPreviewRenderActor;                        // 0x02F0 (size: 0x8)
    TArray<FSteamWorkshopItemDetails> AllItemsFromCurrentUser;                        // 0x02F8 (size: 0x10)
    int32 PageToGet;                                                                  // 0x0308 (size: 0x4)
    TMap<int32, FSteamUGCItemId> UniqueIDToWorkshopID;                                // 0x0310 (size: 0x50)

    void CreateList_Workshop();
    void CreateList_Local();
    void OnSteamInitFailure_4EC72D6C4BD6C580308B3FB91F6D2841(FQueryWorkshopForUserItemsResult Result);
    void OnFailure_4EC72D6C4BD6C580308B3FB91F6D2841(FQueryWorkshopForUserItemsResult Result);
    void OnSuccess_4EC72D6C4BD6C580308B3FB91F6D2841(FQueryWorkshopForUserItemsResult Result);
    void Construct();
    void CustomBeginPlay();
    void SetProcessing(bool Enabled, bool success, bool WasUpdate);
    void BndEvt__OK_Success_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Error_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void QueryAllOwnWorkshopItems();
    void BndEvt__UpdateSuccessButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void CreateLists();
    void BndEvt__PublishButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
    void ExecuteUbergraph_ManageModsWidget(int32 EntryPoint);
}; // Size: 0x360

#endif
