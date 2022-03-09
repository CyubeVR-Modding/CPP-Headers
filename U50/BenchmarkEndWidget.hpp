#ifndef UE4SS_SDK_BenchmarkEndWidget_HPP
#define UE4SS_SDK_BenchmarkEndWidget_HPP

class UBenchmarkEndWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* FlyIn;                                                    // 0x0268 (size: 0x8)
    class UBackgroundBlur* BackgroundBlur_0;                                          // 0x0270 (size: 0x8)
    class UBenchmarkLeaderboards_C* BenchmarkLeaderboards;                            // 0x0278 (size: 0x8)
    class UButton* Button_4;                                                          // 0x0280 (size: 0x8)
    class UButton* Button_5;                                                          // 0x0288 (size: 0x8)
    class UButton* Button_7;                                                          // 0x0290 (size: 0x8)
    class UButton* Button_BackToMenu;                                                 // 0x0298 (size: 0x8)
    class UButton* Button_OpenSteamOverlayBuyDLC;                                     // 0x02A0 (size: 0x8)
    class UButton* Button_SwitchView;                                                 // 0x02A8 (size: 0x8)
    class UCircularThrobber* CircularThrobber_100;                                    // 0x02B0 (size: 0x8)
    class UHardwareInfoWidget_C* HardwareInfoWidget;                                  // 0x02B8 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Leaderboards;                                 // 0x02C0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Results;                                      // 0x02C8 (size: 0x8)
    class UHorizontalBox* HorizontalBox_UpperButtons;                                 // 0x02D0 (size: 0x8)
    class UImage* Image_67;                                                           // 0x02D8 (size: 0x8)
    class UImage* Image_68;                                                           // 0x02E0 (size: 0x8)
    class URetainerBox* RetainerBox_Result;                                           // 0x02E8 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x02F0 (size: 0x8)
    class UTextBlock* TextBlock_2;                                                    // 0x02F8 (size: 0x8)
    class UTextBlock* TextBlock_3;                                                    // 0x0300 (size: 0x8)
    class UTextBlock* TextBlock_14;                                                   // 0x0308 (size: 0x8)
    class UTextBlock* TextBlock_15;                                                   // 0x0310 (size: 0x8)
    class UTextBlock* TextBlock_01PLOW;                                               // 0x0318 (size: 0x8)
    class UTextBlock* TextBlock_1PLOW;                                                // 0x0320 (size: 0x8)
    class UTextBlock* TextBlock_ButtonSwitchText;                                     // 0x0328 (size: 0x8)
    class UTextBlock* TextBlock_InaccurateResults;                                    // 0x0330 (size: 0x8)
    class UTextBlock* TextBlock_LeaderboardAmount;                                    // 0x0338 (size: 0x8)
    class UTextBlock* TextBlock_ResultsComparison;                                    // 0x0340 (size: 0x8)
    class UTextBlock* TextBlock_UNUSUALRESULTS;                                       // 0x0348 (size: 0x8)
    class UVerticalBox* VerticalBox_BuyDLC;                                           // 0x0350 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_ComparedResults;                            // 0x0358 (size: 0x8)
    class UMediaPlayer* BackgroundMediaPlayer;                                        // 0x0360 (size: 0x8)
    float BlurTarget;                                                                 // 0x0368 (size: 0x4)
    class UMaterialInstanceDynamic* ExportMaterial;                                   // 0x0370 (size: 0x8)
    float FPS;                                                                        // 0x0378 (size: 0x4)
    float Low1FPS;                                                                    // 0x037C (size: 0x4)
    float Low03FPS;                                                                   // 0x0380 (size: 0x4)
    bool LeaderboardsVisible;                                                         // 0x0384 (size: 0x1)
    FUWorksSteamLeaderboard LeaderboardRef;                                           // 0x0388 (size: 0x8)
    FString CurrentHeadsetName;                                                       // 0x0390 (size: 0x10)
    FString CurrentGPUName;                                                           // 0x03A0 (size: 0x10)
    class UBenchmarkEndSaveGame_C* SaveGameToUse;                                     // 0x03B0 (size: 0x8)
    int32 ResY;                                                                       // 0x03B8 (size: 0x4)
    int32 ResX;                                                                       // 0x03BC (size: 0x4)
    FString ButtomBottomText;                                                         // 0x03C0 (size: 0x10)

    void UpdateSaveGame(bool ShowName);
    void CreateOrLoadSaveGame();
    FEventReply OnMouseButtonDown_0(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Completed_AD0C9DC547E773BFF043D5B8BC491CA8(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound);
    void Completed_A7FD7B124C8EE1151D933BB6F08ED76A(bool bSuccessful, bool bSuccess, FUWorksSteamLeaderboard SteamLeaderboard, int32 score, bool bScoreChanged, int32 GlobalRankNew, int32 GlobalRankPrevious);
    void Completed_59C05B9C4562DC85F0768DAAA2CB548E(bool bSuccessful, bool bSuccess, FUWorksSteamLeaderboard SteamLeaderboard, int32 score, bool bScoreChanged, int32 GlobalRankNew, int32 GlobalRankPrevious);
    void Completed_4C08EA6C44D476C0DF2A84BD7093E745(bool bSuccessful, bool bSuccess, FUWorksSteamLeaderboard SteamLeaderboard, int32 score, bool bScoreChanged, int32 GlobalRankNew, int32 GlobalRankPrevious);
    void SubmitScore();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void MakeLeaderboardVisible();
    void FindLeaderboardAndMaybeSubmit(bool Submit);
    void FillHeadsetAndGPUName();
    void ResubmitExistingScore(bool ShowName);
    void BndEvt__BenchmarkLeaderboards_K2Node_ComponentBoundEvent_2_ChangeOwnNameVisible__DelegateSignature(bool NameVisible);
    void BndEvt__BenchmarkLeaderboards_K2Node_ComponentBoundEvent_1_DeleteOwnEntry__DelegateSignature();
    void BndEvt__Button_OpenSteamOverlayBuyDLC_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void CompletedLeaderboardNode();
    void GotResultsToCompare(int32 EntryAmount);
    void Construct();
    void ExportResultImage();
    void CreateExportMaterial();
    void BndEvt__Button_4_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_6_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_5_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_7_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_4_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
    void Start_DLC_Check();
    void ExecuteUbergraph_BenchmarkEndWidget(int32 EntryPoint);
}; // Size: 0x3D0

#endif
