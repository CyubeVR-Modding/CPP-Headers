#ifndef UE4SS_SDK_AudioManagerBP_HPP
#define UE4SS_SDK_AudioManagerBP_HPP

class AAudioManagerBP_C : public AAudioManager
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02C8 (size: 0x8)
    class USoundBase* MusicTracks;                                                    // 0x02D0 (size: 0x8)
    class UAudioComponent* CurrentPlayingMusic;                                       // 0x02D8 (size: 0x8)

    void PlayNewMusic();
    void StartMusic();
    void ExecuteUbergraph_AudioManagerBP(int32 EntryPoint);
}; // Size: 0x2E0

#endif
