#ifndef UE4SS_SDK_DynamicResolutionScalingActorBP_HPP
#define UE4SS_SDK_DynamicResolutionScalingActorBP_HPP

class ADynamicResolutionScalingActorBP_C : public ADynamicResolutionScalingActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    TArray<float> ResolutionLevels;                                                   // 0x0248 (size: 0x10)
    float Limit;                                                                      // 0x0258 (size: 0x4)
    float CurrentLevel;                                                               // 0x025C (size: 0x4)
    float WaitFrames;                                                                 // 0x0260 (size: 0x4)
    TArray<float> LastFrames;                                                         // 0x0268 (size: 0x10)

    void SetDynamicResEnabled(bool Enabled);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_DynamicResolutionScalingActorBP(int32 EntryPoint);
}; // Size: 0x278

#endif
