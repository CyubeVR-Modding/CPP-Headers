#ifndef UE4SS_SDK_MainMenuLevel_HPP
#define UE4SS_SDK_MainMenuLevel_HPP

class AMainMenuLevel_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UMediaPlayer* Player;                                                       // 0x0230 (size: 0x8)
    int32 BlocksPlaced;                                                               // 0x0238 (size: 0x4)
    class UWidget* SteamVRNotRunningWIdget;                                           // 0x0240 (size: 0x8)
    bool SteamVRNotRunning;                                                           // 0x0248 (size: 0x1)
    bool SteamVRRunningInitialized;                                                   // 0x0249 (size: 0x1)
    FMainMenuLevel_CNewEventDispatcher_0 NewEventDispatcher_0;                        // 0x0250 (size: 0x10)
    void NewEventDispatcher_0();
    class AStaticMeshActor* Sphere_2_ExecuteUbergraph_MainMenuLevel_RefProperty;      // 0x0260 (size: 0x8)
    class AMainMenuWidgetActorNew_C* MainMenuWidgetActorNew_2_ExecuteUbergraph_MainMenuLevel_RefProperty; // 0x0268 (size: 0x8)

    void Completed_508DA1C148F626FB79DAD6B286C40073(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound);
    void OnFailure_A44803C44D08B1015648F2B92269F4DA();
    void OnSuccess_A44803C44D08B1015648F2B92269F4DA();
    void Completed_FBAB8B23435F9FFA14C56981867E89F4(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound);
    void Completed_01175A6E4D6C74FFCE5BDF93CF3295D1(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, FUWorksSteamLeaderboardEntries SteamLeaderboardEntries, int32 EntryCount);
    void Completed_8682D756489D4A7365D891925312D490(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, FUWorksSteamLeaderboardEntries SteamLeaderboardEntries, int32 EntryCount);
    void InpActEvt_Ctrl_M_K2Node_InputKeyEvent_1(FKey Key);
    void OnFailure_4FEA51B44F29153D1C7D9C96AE53BA80(int32 LeaderboardValue);
    void OnSuccess_4FEA51B44F29153D1C7D9C96AE53BA80(int32 LeaderboardValue);
    void OnFailure_83D16AA745B0833D71B0069F4AC819A7(FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);
    void OnSuccess_83D16AA745B0833D71B0069F4AC819A7(FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);
    void InpActEvt_Enter_K2Node_InputKeyEvent_0(FKey Key);
    void FindLocalBest10Minutes();
    void FindWorldBest10Minutes();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void SetDarkMode(bool Enabled);
    void ExecuteUbergraph_MainMenuLevel(int32 EntryPoint);
    void NewEventDispatcher_0__DelegateSignature();
}; // Size: 0x270

#endif
