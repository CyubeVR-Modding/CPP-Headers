#ifndef UE4SS_SDK_LootableInventoryBP_HPP
#define UE4SS_SDK_LootableInventoryBP_HPP

class ALootableInventoryBP_C : public ALootableInventory
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UChildActorComponent* InventoryChildActor;                                  // 0x02C8 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x02D8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02E0 (size: 0x8)
    float DestroyTimeline_NewTrack_0_8DA21CE044BD0932654193A8DA0386D7;                // 0x02E8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> DestroyTimeline__Direction_8DA21CE044BD0932654193A8DA0386D7; // 0x02EC (size: 0x1)
    class UTimelineComponent* DestroyTimeline;                                        // 0x02F0 (size: 0x8)
    class AInventoryBP_C* InventoryBP;                                                // 0x02F8 (size: 0x8)
    float LastFullCollect;                                                            // 0x0300 (size: 0x4)

    void CollectFullLoot();
    void UserConstructionScript();
    void DestroyTimeline__FinishedFunc();
    void DestroyTimeline__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void AddItems();
    void Setup(FLinearColor Sphere Color);
    void UpdateVisuals();
    void MarkForSaveBP();
    void DestroyEvent();
    void ExecuteUbergraph_LootableInventoryBP(int32 EntryPoint);
}; // Size: 0x304

#endif
