#ifndef UE4SS_SDK_LeaderboardEntry_HPP
#define UE4SS_SDK_LeaderboardEntry_HPP

class ULeaderboardEntry_C : public ULeaderboardEntryCPP
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    class UInvalidationBox* InvalidationBox_0;                                        // 0x02A8 (size: 0x8)
    FString GPU;                                                                      // 0x02B0 (size: 0x10)
    FString CPU;                                                                      // 0x02C0 (size: 0x10)
    FString User;                                                                     // 0x02D0 (size: 0x10)
    FString score;                                                                    // 0x02E0 (size: 0x10)
    FString Rank;                                                                     // 0x02F0 (size: 0x10)

    void BP_OnEntryReleased();
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_LeaderboardEntry(int32 EntryPoint);
}; // Size: 0x300

#endif
