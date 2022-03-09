#ifndef UE4SS_SDK_CubeGameModeBP_HPP
#define UE4SS_SDK_CubeGameModeBP_HPP

class ACubeGameModeBP_C : public ACubeGameMode
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02C8 (size: 0x8)
    float AvgFPS;                                                                     // 0x02D0 (size: 0x4)
    TArray<float> FPS;                                                                // 0x02D8 (size: 0x10)

    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_CubeGameModeBP(int32 EntryPoint);
}; // Size: 0x2E8

#endif
