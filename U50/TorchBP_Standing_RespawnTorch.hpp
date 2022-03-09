#ifndef UE4SS_SDK_TorchBP_Standing_RespawnTorch_HPP
#define UE4SS_SDK_TorchBP_Standing_RespawnTorch_HPP

class ATorchBP_Standing_RespawnTorch_C : public ATorchBP_Standing_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F0 (size: 0x8)
    class UParticleSystemComponent* am_vectorFieldDemo07;                             // 0x02F8 (size: 0x8)
    class UParticleSystemComponent* am_vectorFieldDemo06;                             // 0x0300 (size: 0x8)
    class UParticleSystemComponent* P_CrystalChargeParticle;                          // 0x0308 (size: 0x8)
    bool IsActiveRespawnTorch;                                                        // 0x0310 (size: 0x1)

    void Grab(class AFirstPersonCharacterVR_C* Player, class UBoxComponent* HandComponent, class UMeshComponent* HandMesh, class USphereComponent* HandOverlap, class UBoxComponent* OtherHandComponent, class UMeshComponent* OtherHandParentComponent, TEnumAsByte<hand> hand, bool IsDistanceGrab, bool AfterSpawn, class AActor*& GrabbedActorMain, class AActor*& GrabbedActorDirect);
    void CanGrabTorch(bool& CanGrab);
    void ReceiveTick(float DeltaSeconds);
    void SetActiveM (bool Enabled);
    void OverlapBlockItem(class ABlockItemVR_C* Item);
    void CheckIsActiveRespawnTorch();
    void ExecuteUbergraph_TorchBP_Standing_RespawnTorch(int32 EntryPoint);
}; // Size: 0x311

#endif
