#ifndef UE4SS_SDK_DeathBeaconBP_HPP
#define UE4SS_SDK_DeathBeaconBP_HPP

class ADeathBeaconBP_C : public ADeathBeacon
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_DeathBeaconBP(int32 EntryPoint);
}; // Size: 0x240

#endif
