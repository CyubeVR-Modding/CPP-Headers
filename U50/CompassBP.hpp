#ifndef UE4SS_SDK_CompassBP_HPP
#define UE4SS_SDK_CompassBP_HPP

class ACompassBP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x0228 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0230 (size: 0x8)
    class USceneComponent* HeightNeedle;                                              // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Compass_Ring;                                         // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Compass_Opener;                                       // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Compass_Lens;                                         // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Compass_DirectionNeedle;                              // 0x0258 (size: 0x8)
    class UStaticMeshComponent* Compass_Cover;                                        // 0x0260 (size: 0x8)
    class UStaticMeshComponent* Compass_Base;                                         // 0x0268 (size: 0x8)
    float AngleLimit;                                                                 // 0x0270 (size: 0x4)
    FRotator NewFinalRelativeRotation;                                                // 0x0274 (size: 0xC)
    FRotator OldWorldRotation;                                                        // 0x0280 (size: 0xC)

    void SetVisible(bool NewVisible);
    void YawToRot(FRotator WorldRot, float rot);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void SetHeightRot();
    void SetRot();
    void ExecuteUbergraph_CompassBP(int32 EntryPoint);
}; // Size: 0x28C

#endif
