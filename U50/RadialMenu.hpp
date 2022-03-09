#ifndef UE4SS_SDK_RadialMenu_HPP
#define UE4SS_SDK_RadialMenu_HPP

class ARadialMenu_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UInstancedStaticMeshComponent* ArrowsBack;                                  // 0x0228 (size: 0x8)
    class UInstancedStaticMeshComponent* Arrows;                                      // 0x0230 (size: 0x8)
    class UChildActorComponent* RadialMenuOption8;                                    // 0x0238 (size: 0x8)
    class UChildActorComponent* RadialMenuOption7;                                    // 0x0240 (size: 0x8)
    class UChildActorComponent* RadialMenuOption6;                                    // 0x0248 (size: 0x8)
    class UChildActorComponent* RadialMenuOption5;                                    // 0x0250 (size: 0x8)
    class UChildActorComponent* RadialMenuOption4;                                    // 0x0258 (size: 0x8)
    class UChildActorComponent* RadialMenuOption3;                                    // 0x0260 (size: 0x8)
    class UChildActorComponent* RadialMenuOption2;                                    // 0x0268 (size: 0x8)
    class UChildActorComponent* RadialMenuOption1;                                    // 0x0270 (size: 0x8)
    class UChildActorComponent* RadialMenuOptionCenter;                               // 0x0278 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0280 (size: 0x8)
    float ArrowAnimationFaster_Opacity_0800D8B54E00B6BB3B574E8E2ED7D463;              // 0x0288 (size: 0x4)
    float ArrowAnimationFaster_Scale_0800D8B54E00B6BB3B574E8E2ED7D463;                // 0x028C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ArrowAnimationFaster__Direction_0800D8B54E00B6BB3B574E8E2ED7D463; // 0x0290 (size: 0x1)
    class UTimelineComponent* ArrowAnimationFaster;                                   // 0x0298 (size: 0x8)
    float ArrowAnimation_Time_08F12CDE4473A09E579A7DB2B1FE4921;                       // 0x02A0 (size: 0x4)
    float ArrowAnimation_Opacity_08F12CDE4473A09E579A7DB2B1FE4921;                    // 0x02A4 (size: 0x4)
    float ArrowAnimation_Scale_08F12CDE4473A09E579A7DB2B1FE4921;                      // 0x02A8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ArrowAnimation__Direction_08F12CDE4473A09E579A7DB2B1FE4921; // 0x02AC (size: 0x1)
    class UTimelineComponent* ArrowAnimation;                                         // 0x02B0 (size: 0x8)
    TArray<class UChildActorComponent*> Options;                                      // 0x02B8 (size: 0x10)
    TArray<class ARadialMenuOption_C*> OptionsDirect;                                 // 0x02C8 (size: 0x10)
    float OptionScale;                                                                // 0x02D8 (size: 0x4)
    float OptionDistance;                                                             // 0x02DC (size: 0x4)
    float ArrowDistance;                                                              // 0x02E0 (size: 0x4)
    float ArrowScale;                                                                 // 0x02E4 (size: 0x4)
    class USceneComponent* Hand to Track;                                             // 0x02E8 (size: 0x8)
    FVector OriginalLocation;                                                         // 0x02F0 (size: 0xC)
    float HowCloseToSelect;                                                           // 0x02FC (size: 0x4)
    TArray<class ARadialMenuOption_C*> AllOptions;                                    // 0x0300 (size: 0x10)
    class ARadialMenuOption_C* CurrentHoverSelected;                                  // 0x0310 (size: 0x8)
    bool CurrentlyActive;                                                             // 0x0318 (size: 0x1)
    class AInventoryBP_C* InventoryBP;                                                // 0x0320 (size: 0x8)
    bool NotYetMovedAfterOpening;                                                     // 0x0328 (size: 0x1)
    int32 PreviousSelection;                                                          // 0x032C (size: 0x4)
    int32 CurrentSelection;                                                           // 0x0330 (size: 0x4)
    bool IsRightHand;                                                                 // 0x0334 (size: 0x1)
    int32 LastBlockSelection;                                                         // 0x0338 (size: 0x4)
    int32 LastToolSelection;                                                          // 0x033C (size: 0x4)
    float LastSelectedFromHand;                                                       // 0x0340 (size: 0x4)
    bool SomethingChangedSinceLastOpen;                                               // 0x0344 (size: 0x1)
    FTimerHandle DetachTimer;                                                         // 0x0348 (size: 0x8)

    void ShoulderSlotSelected();
    void MoveUpOrDownSameType(int32 Move);
    void UpdateOptionLocations();
    void SetArrowVisible(int32 Index, bool Visible);
    void Refresh(int32 DroppedOnSlot);
    void UserConstructionScript();
    void ArrowAnimation__FinishedFunc();
    void ArrowAnimation__UpdateFunc();
    void ArrowAnimationFaster__FinishedFunc();
    void ArrowAnimationFaster__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void OpenRadialMenu();
    void Initialize(class USceneComponent* HandToTrack, class AInventoryBP_C* Inventory);
    void CloseRadialMenu();
    void UpdateRotation(bool Immediate);
    void CheckOverlaps();
    void SetOptionSelected(class ARadialMenuOption_C* Option, bool Always);
    void ReceiveBeginPlay();
    void MakeVisible();
    void Hide();
    void FadeInArrows();
    void SetArrowOpacity(const float ParameterValue);
    void FadeOutArrows();
    void ToggleHandAndPreviousSelection();
    void PlayHapticFeedback();
    void PressedTrigger();
    void DetachFromPawn();
    void ExecuteUbergraph_RadialMenu(int32 EntryPoint);
}; // Size: 0x350

#endif
