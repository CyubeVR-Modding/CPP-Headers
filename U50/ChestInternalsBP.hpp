#ifndef UE4SS_SDK_ChestInternalsBP_HPP
#define UE4SS_SDK_ChestInternalsBP_HPP

class AChestInternalsBP_C : public AChestInternals
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0268 (size: 0x8)
    FVector Amount;                                                                   // 0x0270 (size: 0xC)
    float Scale;                                                                      // 0x027C (size: 0x4)
    FVector DistanceV;                                                                // 0x0280 (size: 0xC)
    TArray<FVector> Locations;                                                        // 0x0290 (size: 0x10)
    TArray<FVector> LocationsWorld;                                                   // 0x02A0 (size: 0x10)
    TArray<class UStaticMeshComponent*> OverlapComponents;                            // 0x02B0 (size: 0x10)
    TArray<class ABlockItemVR_C*> AttachedItems;                                      // 0x02C0 (size: 0x10)
    bool IsActive;                                                                    // 0x02D0 (size: 0x1)
    bool CurrentlyOverlappingDragOutItem;                                             // 0x02D1 (size: 0x1)
    int32 CurrentOverlapIndex;                                                        // 0x02D4 (size: 0x4)
    bool CurrentVisibility;                                                           // 0x02D8 (size: 0x1)
    bool AlwaysUpdateSlotVisibilityNextTime;                                          // 0x02D9 (size: 0x1)

    void AddItemToChest(class AActor* DragOutItem, class UItemDrag_C* DragWidget, bool OneDirect, bool& success);
    void DoesItemOverlap(class ABlockItemVR_C* Item, bool& Result, int32& Index);
    void CheckClosePlayer();
    void UpdateVisuals();
    void SetSlotVisibility(bool NewVisibility);
    void InitializeBP();
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void AddItemBP(class AActor* DragOutItem, class UItemDrag_C* DragWidget);
    void SetActive(bool IsActive, bool Always);
    void ReceiveBeginPlay();
    void UpdateVisualsEvent(bool MarkForSave);
    void AttachItemCorrectly(class ABlockItemVR_C* Item, int32 Index);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_ChestInternalsBP(int32 EntryPoint);
}; // Size: 0x2DA

#endif
