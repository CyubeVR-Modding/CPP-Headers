#ifndef UE4SS_SDK_CustomBlockInfoWidget_HPP
#define UE4SS_SDK_CustomBlockInfoWidget_HPP

class UCustomBlockInfoWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCustomBlockPreviewWidget2_C* CustomBlockPreviewWidget2_75;                 // 0x0268 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0270 (size: 0x8)
    class UTextBlock* NameOfBlock;                                                    // 0x0278 (size: 0x8)
    class UButton* PublishButton;                                                     // 0x0280 (size: 0x8)
    class UTextBlock* PublishButtonText;                                              // 0x0288 (size: 0x8)
    class UTextBlock* TextBlock_CreatorName;                                          // 0x0290 (size: 0x8)
    FSteamUGCUpdateHandle updateHandle;                                               // 0x0298 (size: 0x8)
    class UManageModsWidget_C* ParentWidget;                                          // 0x02A0 (size: 0x8)
    int32 UniqueId;                                                                   // 0x02A8 (size: 0x4)
    FString Name;                                                                     // 0x02B0 (size: 0x10)
    bool DoingUpdate;                                                                 // 0x02C0 (size: 0x1)
    FString Path;                                                                     // 0x02C8 (size: 0x10)
    bool AlreadyUploaded;                                                             // 0x02D8 (size: 0x1)
    FSteamUGCItemId WorkshopID;                                                       // 0x02E0 (size: 0x8)
    FSteamWorkshopUpdateDetails ItemDetailsToUpload;                                  // 0x02E8 (size: 0xD0)
    FSteamUGCItemId WorkshopIDToUpdate;                                               // 0x03B8 (size: 0x8)
    bool IsFromWorkshop;                                                              // 0x03C0 (size: 0x1)
    FString CreatorName;                                                              // 0x03C8 (size: 0x10)

    void SetData(int32 UniqueId, FString Name, FString Path, bool AlreadyUploaded, FSteamUGCItemId WorkshopID, bool IsFromWorkshop, FString CreatorName);
    void OnSteamInitFailure_112E250A48172439C6098D8FA228E1DF(FCreateWorkshopItemResult Result);
    void OnFailure_112E250A48172439C6098D8FA228E1DF(FCreateWorkshopItemResult Result);
    void OnSuccess_112E250A48172439C6098D8FA228E1DF(FCreateWorkshopItemResult Result);
    void OnSteamInitFailure_8F52D5E4433B2AA53D1DE8A8CD9676D6(FUpdateWorkshopItemResult Result);
    void OnFailure_8F52D5E4433B2AA53D1DE8A8CD9676D6(FUpdateWorkshopItemResult Result);
    void OnUpdateComplete_8F52D5E4433B2AA53D1DE8A8CD9676D6(FUpdateWorkshopItemResult Result);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void onUpdateStarted(FSteamUGCUpdateHandle updateHandle);
    void BndEvt__PublishButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void Construct();
    void PublishNewItem();
    void UpdateExistingItem();
    void FinalSubmitData();
    void ExecuteUbergraph_CustomBlockInfoWidget(int32 EntryPoint);
}; // Size: 0x3D8

#endif
