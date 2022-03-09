#ifndef UE4SS_SDK_Cube_GameStateBP_HPP
#define UE4SS_SDK_Cube_GameStateBP_HPP

class ACube_GameStateBP_C : public AMC_GameState
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    bool CaptureActive;

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_Cube_GameStateBP(int32 EntryPoint);
};

#endif
