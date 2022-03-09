#ifndef UE4SS_SDK_InventoryActor_HPP
#define UE4SS_SDK_InventoryActor_HPP

class AInventoryActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UTextRenderComponent* Amount;                                               // 0x0228 (size: 0x8)
    class UChildActorComponent* bLock;                                                // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    EBlockTypeBP Type;                                                                // 0x0240 (size: 0x1)
    float Offset;                                                                     // 0x0244 (size: 0x4)

    void UpdateType(EBlockTypeBP Type);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_InventoryActor(int32 EntryPoint);
}; // Size: 0x248

#endif
