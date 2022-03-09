#ifndef UE4SS_SDK_ArrowAttached_HPP
#define UE4SS_SDK_ArrowAttached_HPP

class AArrowAttached_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UChildActorComponent* B_D_6;                                                // 0x0228 (size: 0x8)
    class UChildActorComponent* B_D_8;                                                // 0x0230 (size: 0x8)
    class UStaticMeshComponent* HB_Arrow2;                                            // 0x0238 (size: 0x8)
    float DecalScale;                                                                 // 0x0240 (size: 0x4)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_ArrowAttached(int32 EntryPoint);
}; // Size: 0x244

#endif
