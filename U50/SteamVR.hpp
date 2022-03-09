#ifndef UE4SS_SDK_SteamVR_HPP
#define UE4SS_SDK_SteamVR_HPP

#include "SteamVR_enums.hpp"

class USteamVRChaperoneComponent : public UActorComponent
{
    FSteamVRChaperoneComponentOnLeaveBounds OnLeaveBounds;                            // 0x00B0 (size: 0x10)
    void SteamVRChaperoneEvent();
    FSteamVRChaperoneComponentOnReturnToBounds OnReturnToBounds;                      // 0x00C0 (size: 0x10)
    void SteamVRChaperoneEvent();

    void SteamVRChaperoneEvent__DelegateSignature();
    TArray<FVector> GetBounds();
}; // Size: 0xD8

class USteamVRFunctionLibrary : public UBlueprintFunctionLibrary
{

    void GetValidTrackedDeviceIds(ESteamVRTrackedDeviceType DeviceType, TArray<int32>& OutTrackedDeviceIds);
    bool GetTrackedDevicePositionAndOrientation(int32 DeviceID, FVector& OutPosition, FRotator& OutOrientation);
    bool GetHandPositionAndOrientation(int32 ControllerIndex, EControllerHand hand, FVector& OutPosition, FRotator& OutOrientation);
}; // Size: 0x28

class USteamVRHQStereoLayerShape : public UStereoLayerShapeQuad
{
    bool bCurved;                                                                     // 0x0028 (size: 0x1)
    bool bAntiAlias;                                                                  // 0x0029 (size: 0x1)
    float AutoCurveMinDistance;                                                       // 0x002C (size: 0x4)
    float AutoCurveMaxDistance;                                                       // 0x0030 (size: 0x4)

    void SetCurved(bool InCurved);
    void SetAutoCurveMinDistance(float InDistance);
    void SetAutoCurveMaxDistance(float InDistance);
    void SetAntiAlias(bool InAntiAlias);
}; // Size: 0x38

#endif
