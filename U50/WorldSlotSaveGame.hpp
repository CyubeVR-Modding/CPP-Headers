#ifndef UE4SS_SDK_WorldSlotSaveGame_HPP
#define UE4SS_SDK_WorldSlotSaveGame_HPP

class UWorldSlotSaveGame_C : public USaveGame
{
    FString LastUsed;                                                                 // 0x0028 (size: 0x10)
    bool TutorialFinished;                                                            // 0x0038 (size: 0x1)
    bool GreetingsSeen;                                                               // 0x0039 (size: 0x1)
    bool MainMenuMusicButton;                                                         // 0x003A (size: 0x1)
    bool CustomBlockAskSeen;                                                          // 0x003B (size: 0x1)
    bool MainMenuDarkModeButton;                                                      // 0x003C (size: 0x1)

    void RemoveSlot(FString Slot);
    void FirstInit();
}; // Size: 0x3D

#endif
