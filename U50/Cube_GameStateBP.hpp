#ifndef UE4SS_SDK_Cube_GameStateBP_HPP
#define UE4SS_SDK_Cube_GameStateBP_HPP

class ACube_GameStateBP_C : public AMC_GameState
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02D0 (size: 0x8)
    bool CaptureActive;                                                               // 0x02D8 (size: 0x1)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_Cube_GameStateBP(int32 EntryPoint);
}; // Size: 0x2D9

#endif
