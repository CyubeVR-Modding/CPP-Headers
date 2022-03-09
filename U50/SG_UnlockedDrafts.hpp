#ifndef UE4SS_SDK_SG_UnlockedDrafts_HPP
#define UE4SS_SDK_SG_UnlockedDrafts_HPP

class USG_UnlockedDrafts_C : public USaveGame
{
    TSet<EBlockTypeBP> Unlocked;                                                      // 0x0028 (size: 0x50)

    void IsUnlocked(EBlockTypeBP Item, bool& Unlocked);
    void UnlockOne(EBlockTypeBP Type);
}; // Size: 0x78

#endif
