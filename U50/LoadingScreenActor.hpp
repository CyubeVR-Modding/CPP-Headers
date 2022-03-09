#ifndef UE4SS_SDK_LoadingScreenActor_HPP
#define UE4SS_SDK_LoadingScreenActor_HPP

class ALoadingScreenActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UCustomStereoLayerComponent* CustomStereoLayer;                             // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    class UMediaPlayer* MediaPlayer;                                                  // 0x0238 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_LoadingScreenActor(int32 EntryPoint);
}; // Size: 0x240

#endif
