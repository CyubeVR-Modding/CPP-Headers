#ifndef UE4SS_SDK_MusicManager_HPP
#define UE4SS_SDK_MusicManager_HPP

class AMusicManager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* CurrentPlayingTrack;                                       // 0x0230 (size: 0x8)
    TArray<class USoundBase*> AvailableTracksRegular;                                 // 0x0238 (size: 0x10)
    TArray<class USoundBase*> AvailableTracksDesert;                                  // 0x0248 (size: 0x10)
    class USoundBase* DefaultTrack;                                                   // 0x0258 (size: 0x8)
    EBiome CurrentlyPlayingBiome;                                                     // 0x0260 (size: 0x1)
    bool CurrentlyFadingBiome;                                                        // 0x0261 (size: 0x1)
    bool Paused;                                                                      // 0x0262 (size: 0x1)

    void GetRandomTrack(class USoundBase*& Track);
    void StartNewTrack(class USoundBase* Sound);
    void NextTrack();
    void StartMusic(EBiome CurrentlyPlayingBiome);
    void StartDifferentBiome(EBiome NewBiome);
    void ReceiveBeginPlay();
    void SetMusicPaused(bool Paused);
    void ExecuteUbergraph_MusicManager(int32 EntryPoint);
}; // Size: 0x263

#endif
