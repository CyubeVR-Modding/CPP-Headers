#ifndef UE4SS_SDK_SteamVRInputDevice_HPP
#define UE4SS_SDK_SteamVRInputDevice_HPP

#include "SteamVRInputDevice_enums.hpp"

struct FSteamVRAction
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FString Path;                                                                     // 0x0008 (size: 0x10)

}; // Size: 0x28

struct FSteamVRActionSet
{
    FString Path;                                                                     // 0x0000 (size: 0x10)

}; // Size: 0x18

struct FSteamVRInputOriginInfo
{
    int32 TrackedDeviceIndex;                                                         // 0x0000 (size: 0x4)
    FString RenderModelComponentName;                                                 // 0x0008 (size: 0x10)
    FString TrackedDeviceModel;                                                       // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FSteamVRInputBindingInfo
{
    FName DevicePathName;                                                             // 0x0000 (size: 0x8)
    FName InputPathName;                                                              // 0x0008 (size: 0x8)
    FName ModeName;                                                                   // 0x0010 (size: 0x8)
    FName SlotName;                                                                   // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FSteamVRSkeletonTransform
{
    FTransform Root;                                                                  // 0x0000 (size: 0x30)
    FTransform wrist;                                                                 // 0x0030 (size: 0x30)
    FTransform Thumb_0;                                                               // 0x0060 (size: 0x30)
    FTransform Thumb_1;                                                               // 0x0090 (size: 0x30)
    FTransform Thumb_2;                                                               // 0x00C0 (size: 0x30)
    FTransform Thumb_3;                                                               // 0x00F0 (size: 0x30)
    FTransform Index_0;                                                               // 0x0120 (size: 0x30)
    FTransform Index_1;                                                               // 0x0150 (size: 0x30)
    FTransform Index_2;                                                               // 0x0180 (size: 0x30)
    FTransform Index_3;                                                               // 0x01B0 (size: 0x30)
    FTransform Index_4;                                                               // 0x01E0 (size: 0x30)
    FTransform Middle_0;                                                              // 0x0210 (size: 0x30)
    FTransform Middle_1;                                                              // 0x0240 (size: 0x30)
    FTransform Middle_2;                                                              // 0x0270 (size: 0x30)
    FTransform Middle_3;                                                              // 0x02A0 (size: 0x30)
    FTransform Middle_4;                                                              // 0x02D0 (size: 0x30)
    FTransform Ring_0;                                                                // 0x0300 (size: 0x30)
    FTransform Ring_1;                                                                // 0x0330 (size: 0x30)
    FTransform Ring_2;                                                                // 0x0360 (size: 0x30)
    FTransform Ring_3;                                                                // 0x0390 (size: 0x30)
    FTransform Ring_4;                                                                // 0x03C0 (size: 0x30)
    FTransform Pinky_0;                                                               // 0x03F0 (size: 0x30)
    FTransform Pinky_1;                                                               // 0x0420 (size: 0x30)
    FTransform Pinky_2;                                                               // 0x0450 (size: 0x30)
    FTransform Pinky_3;                                                               // 0x0480 (size: 0x30)
    FTransform Pinky_4;                                                               // 0x04B0 (size: 0x30)
    FTransform Aux_Thumb;                                                             // 0x04E0 (size: 0x30)
    FTransform Aux_Index;                                                             // 0x0510 (size: 0x30)
    FTransform Aux_Middle;                                                            // 0x0540 (size: 0x30)
    FTransform Aux_Ring;                                                              // 0x0570 (size: 0x30)
    FTransform Aux_Pinky;                                                             // 0x05A0 (size: 0x30)

}; // Size: 0x5D0

struct FSteamVRFingerCurls
{
    float Thumb;                                                                      // 0x0000 (size: 0x4)
    float Index;                                                                      // 0x0004 (size: 0x4)
    float Middle;                                                                     // 0x0008 (size: 0x4)
    float Ring;                                                                       // 0x000C (size: 0x4)
    float Pinky;                                                                      // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FSteamVRFingerSplays
{
    float Thumb_Index;                                                                // 0x0000 (size: 0x4)
    float Index_Middle;                                                               // 0x0004 (size: 0x4)
    float Middle_Ring;                                                                // 0x0008 (size: 0x4)
    float Ring_Pinky;                                                                 // 0x000C (size: 0x4)

}; // Size: 0x10

class USteamVRInputDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{

    void ShowSteamVR_ActionOrigin(FSteamVRAction SteamVRAction, FSteamVRActionSet SteamVRActionSet);
    void ShowAllSteamVR_ActionOrigins();
    float SetSteamVR_GlobalPredictedSecondsFromNow(float NewValue);
    void SetPoseSource(bool bUseSkeletonPose);
    void SetCurlsAndSplaysState(bool NewLeftHandState, bool NewRightHandState);
    bool ResetSeatedPosition();
    void PlaySteamVR_HapticFeedback(ESteamVRHand hand, float StartSecondsFromNow, float DurationSeconds, float Frequency, float Amplitude);
    float GetUserIPD();
    bool GetSteamVR_OriginTrackedDeviceInfo(FSteamVRAction SteamVRAction, FSteamVRInputOriginInfo& InputOriginInfo);
    void GetSteamVR_OriginLocalizedName(FSteamVRAction SteamVRAction, TArray<ESteamVRInputStringBits> LocalizedParts, FString& OriginLocalizedName);
    TArray<FSteamVRInputBindingInfo> GetSteamVR_InputBindingInfo(FSteamVRAction SteamVRActionHandle);
    bool GetSteamVR_HandPoseRelativeToNow(FVector& Position, FRotator& Orientation, ESteamVRHand hand, float PredictedSecondsFromNow);
    float GetSteamVR_GlobalPredictedSecondsFromNow();
    void GetSteamVR_ActionSetArray(TArray<FSteamVRActionSet>& SteamVRActionSets);
    void GetSteamVR_ActionArray(TArray<FSteamVRAction>& SteamVRActions);
    void GetSkeletalTransform(FSteamVRSkeletonTransform& LeftHand, FSteamVRSkeletonTransform& RightHand, bool bWithController);
    void GetSkeletalState(bool& LeftHandState, bool& RightHandState);
    void GetRightHandPoseData(FVector& Position, FRotator& Orientation, FVector& AngularVelocity, FVector& Velocity);
    void GetPoseSource(bool& bUsingSkeletonPose);
    void GetLeftHandPoseData(FVector& Position, FRotator& Orientation, FVector& AngularVelocity, FVector& Velocity);
    void GetFingerCurlsAndSplays(EHand hand, FSteamVRFingerCurls& FingerCurls, FSteamVRFingerSplays& FingerSplays, ESkeletalSummaryDataType SummaryDataType);
    void GetCurlsAndSplaysState(bool& LeftHandState, bool& RightHandState);
    void GetControllerFidelity(EControllerFidelity& LeftControllerFidelity, EControllerFidelity& RightControllerFidelity);
    void FindSteamVR_OriginTrackedDeviceInfo(FName ActionName, bool& bResult, FSteamVRInputOriginInfo& InputOriginInfo, FName ActionSet);
    TArray<FSteamVRInputBindingInfo> FindSteamVR_InputBindingInfo(FName ActionName, FName ActionSet);
    bool FindSteamVR_ActionOrigin(FName ActionName, FName ActionSet);
    void FindSteamVR_Action(FName ActionName, bool& bResult, FSteamVRAction& FoundAction, FSteamVRActionSet& FoundActionSet, FName ActionSet);
}; // Size: 0x28

class USteamVRTrackingReferences : public UActorComponent
{
    FSteamVRTrackingReferencesOnTrackedDeviceActivated OnTrackedDeviceActivated;      // 0x00B0 (size: 0x10)
    void ComponentTrackingActivatedSignature(int32 DeviceID, FName DeviceClass, FString DeviceModel);
    FSteamVRTrackingReferencesOnTrackedDeviceDeactivated OnTrackedDeviceDeactivated;  // 0x00C0 (size: 0x10)
    void ComponentTrackingDeactivatedSignature(int32 DeviceID, FName DeviceClass, FString DeviceModel);
    float ActiveDevicePollFrequency;                                                  // 0x00D0 (size: 0x4)
    FVector TrackingReferenceScale;                                                   // 0x00D4 (size: 0xC)
    TArray<class UStaticMeshComponent*> TrackingReferences;                           // 0x00E0 (size: 0x10)

    bool ShowTrackingReferences(class UStaticMesh* TrackingReferenceMesh);
    void HideTrackingReferences();
}; // Size: 0x108

struct FUE4RetargettingRefs
{
    bool bIsInitialized;                                                              // 0x0000 (size: 0x1)
    bool bIsRightHanded;                                                              // 0x0001 (size: 0x1)
    FVector KnuckleAverageMS_UE4;                                                     // 0x0004 (size: 0xC)
    FVector WristSideDirectionLS_UE4;                                                 // 0x0010 (size: 0xC)
    FVector WristForwardLS_UE4;                                                       // 0x001C (size: 0xC)

}; // Size: 0x28

struct FAnimNode_SteamVRInputAnimPose : public FAnimNode_Base
{
    EMotionRange MotionRange;                                                         // 0x0010 (size: 0x1)
    EHand hand;                                                                       // 0x0011 (size: 0x1)
    EHandSkeleton HandSkeleton;                                                       // 0x0012 (size: 0x1)
    bool Mirror;                                                                      // 0x0013 (size: 0x1)
    FSteamVRSkeletonTransform SteamVRSkeletalTransform;                               // 0x0020 (size: 0x5D0)
    FUE4RetargettingRefs UE4RetargettingRefs;                                         // 0x05F0 (size: 0x28)

}; // Size: 0x620

struct FAnimNode_SteamVRSetWristTransform : public FAnimNode_Base
{
    FPoseLink ReferencePose;                                                          // 0x0010 (size: 0x10)
    EHandSkeleton HandSkeleton;                                                       // 0x0020 (size: 0x1)
    FPoseLink TargetPose;                                                             // 0x0028 (size: 0x10)

}; // Size: 0x40

#endif
