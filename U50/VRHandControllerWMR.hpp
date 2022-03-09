#ifndef UE4SS_SDK_VRHandControllerWMR_HPP
#define UE4SS_SDK_VRHandControllerWMR_HPP

class AVRHandControllerWMR_C : public AVRHandController_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* SelectionOverlay;                                     // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* Dot;                                                  // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* ThumbstickOverlay;                                    // 0x02D0 (size: 0x8)
    FVector Timeline_0_Scale_69F57395492EA92001EF5BB5F775C646;                        // 0x02D8 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_69F57395492EA92001EF5BB5F775C646; // 0x02E4 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x02E8 (size: 0x8)
    float MoveRot_Value_248497EA48E70349682968AC5941FFD4;                             // 0x02F0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> MoveRot__Direction_248497EA48E70349682968AC5941FFD4; // 0x02F4 (size: 0x1)
    class UTimelineComponent* MoveRot;                                                // 0x02F8 (size: 0x8)
    bool OverlayEnabled;                                                              // 0x0300 (size: 0x1)
    FRotator OverlayTargetRotation;                                                   // 0x0304 (size: 0xC)
    FRotator OverlayOldRotation;                                                      // 0x0310 (size: 0xC)
    FRotator OverlayCurrentRotation;                                                  // 0x031C (size: 0xC)
    FVector OverlayScale;                                                             // 0x0328 (size: 0xC)

    void GetOverlaySideRotation(TEnumAsByte<Side> Side, float& Rotation);
    void EnableOverlay(bool Enabled, bool& WasChanged);
    void MoveRot__FinishedFunc();
    void MoveRot__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void UpdateSelectionOverlay(TEnumAsByte<Side> Side, bool Valid);
    void SetOverlayVisibility(bool Visible);
    void EnableOverlayEvent(bool Enable);
    void SetSide(TEnumAsByte<hand> Side);
    void SetVisualDot(float X, float Y);
    void ReceiveTick(float DeltaSeconds);
    void SetWorldScale(FVector Scale);
    void ReceiveBeginPlay();
    void SetAlternativeModeActive(bool Active);
    void SetVisible(bool Visible);
    void ExecuteUbergraph_VRHandControllerWMR(int32 EntryPoint);
}; // Size: 0x334

#endif
