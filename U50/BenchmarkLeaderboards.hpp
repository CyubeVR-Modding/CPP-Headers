#ifndef UE4SS_SDK_BenchmarkLeaderboards_HPP
#define UE4SS_SDK_BenchmarkLeaderboards_HPP

class UBenchmarkLeaderboards_C : public UBenchmarkLeaderboardsCPP
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E8 (size: 0x8)
    class UCanvasPanel* AccessingLeaderboardOverlay;                                  // 0x02F0 (size: 0x8)
    class UBorder* Border_DeleteMyEntry;                                              // 0x02F8 (size: 0x8)
    class UBorder* Border_FilterGPU;                                                  // 0x0300 (size: 0x8)
    class UBorder* Border_FilterHeadset;                                              // 0x0308 (size: 0x8)
    class UBorder* Border_NameVisible;                                                // 0x0310 (size: 0x8)
    class UButton* Button_6;                                                          // 0x0318 (size: 0x8)
    class UButton* Button_DeleteMyEntry;                                              // 0x0320 (size: 0x8)
    class UButton* Button_FilterGPU;                                                  // 0x0328 (size: 0x8)
    class UButton* Button_NameVisible;                                                // 0x0330 (size: 0x8)
    class UCircularThrobber* CircularThrobber_100;                                    // 0x0338 (size: 0x8)
    class USizeBox* SizeBox_FakeContent;                                              // 0x0340 (size: 0x8)
    class UTextBlock* TextBlock_5;                                                    // 0x0348 (size: 0x8)
    class UTextBlock* TextBlock_Showing;                                              // 0x0350 (size: 0x8)
    class UVerticalBox* VerticalBox_ScrollArea;                                       // 0x0358 (size: 0x8)
    FUWorksSteamLeaderboard LeaderboardToUse;                                         // 0x0360 (size: 0x8)
    bool HaveValidLeaderboard;                                                        // 0x0368 (size: 0x1)
    TArray<class ULeaderboardEntry_C*> ScrollWidgets;                                 // 0x0370 (size: 0x10)
    bool FilterByHeadset;                                                             // 0x0380 (size: 0x1)
    FString CurrentHeadsetName;                                                       // 0x0388 (size: 0x10)
    FString CurrentGPUName;                                                           // 0x0398 (size: 0x10)
    bool FilterByGPU;                                                                 // 0x03A8 (size: 0x1)
    bool NameVisible;                                                                 // 0x03A9 (size: 0x1)
    FBenchmarkLeaderboards_CChangeOwnNameVisible ChangeOwnNameVisible;                // 0x03B0 (size: 0x10)
    void ChangeOwnNameVisible(bool NameVisible);
    FBenchmarkLeaderboards_CDeleteOwnEntry DeleteOwnEntry;                            // 0x03C0 (size: 0x10)
    void DeleteOwnEntry();
    FBenchmarkLeaderboards_CNowGotResultsToCompare NowGotResultsToCompare;            // 0x03D0 (size: 0x10)
    void NowGotResultsToCompare(int32 EntryAmount);
    int32 ActualResultThisRun;                                                        // 0x03E0 (size: 0x4)
    int32 CurrentResX;                                                                // 0x03E4 (size: 0x4)
    int32 CurrentResY;                                                                // 0x03E8 (size: 0x4)

    class UWidget* Get_Button_NameVisible_ToolTipWidget_0();
    void Completed_541BC8514E7E211EFA47F59D8AEAD528(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, FUWorksSteamLeaderboardEntries SteamLeaderboardEntries, int32 EntryCount);
    void SetValidLeaderboard(FUWorksSteamLeaderboard LeaderboardToUse, FString HeadsetName, FString CurrentGPUName, int32 CurrentResX, int32 CurrentResY);
    void PopulateLeaderboard();
    void BndEvt__ScrollBox_Entries_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
    void CreateFake();
    void BndEvt__Button_6_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void UpdateArraySetting();
    void UpdateScrollList();
    void BndEvt__Button_FilterGPU_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void SetupButtonColor();
    void Construct();
    void BndEvt__Button_NameVisible_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void InitNameVisible(bool NameVisible);
    void UpdateDeleteButtonEnabled();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void UpdateResultIndicatorText(class UTextBlock* ResultIndicatorText);
    void UpdateScrollboxFakeEntrySize(int32 Count);
    void Scrolled(float Offset);
    void ClickedFilterByHeadset();
    void ClickedFilterGPU();
    void ExecuteUbergraph_BenchmarkLeaderboards(int32 EntryPoint);
    void NowGotResultsToCompare__DelegateSignature(int32 EntryAmount);
    void DeleteOwnEntry__DelegateSignature();
    void ChangeOwnNameVisible__DelegateSignature(bool NameVisible);
}; // Size: 0x3EC

#endif
