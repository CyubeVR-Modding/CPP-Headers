#ifndef UE4SS_SDK_Briefcase_HPP
#define UE4SS_SDK_Briefcase_HPP

class ABriefcase_C : public AReceiveLightActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UVRStereoWidgetComponent* VRStereoWidget_ButtonMapping;                     // 0x0270 (size: 0x8)
    class UVRStereoWidgetComponent* VRStereoWidget_MainUI;                            // 0x0278 (size: 0x8)
    class USkeletalMeshComponent* Briefcase;                                          // 0x0280 (size: 0x8)
    class UAudioComponent* OpenCloseAudio;                                            // 0x0288 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x0290 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0298 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* BriefcasePart1;                                       // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* BriefcasePart2;                                       // 0x02B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B8 (size: 0x8)
    float OpenT_Percent_C73668904267BBEEE6E7DF85C0A21E11;                             // 0x02C0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> OpenT__Direction_C73668904267BBEEE6E7DF85C0A21E11; // 0x02C4 (size: 0x1)
    class UTimelineComponent* OpenT;                                                  // 0x02C8 (size: 0x8)
    class UObject* StereoWidgetRenderer;                                              // 0x02D0 (size: 0x8)
    class UUserWidget* UserWidget;                                                    // 0x02D8 (size: 0x8)

    void GetVisibility(bool& Visible);
    void SetButtonMappingOverviewVisible(bool Visible);
    void UserConstructionScript();
    void OpenT__FinishedFunc();
    void OpenT__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void Open();
    void ReceiveBeginPlay();
    void SetVisibility(bool Visibility);
    void Close();
    void SetVisibilityButtonOverview();
    void ExecuteUbergraph_Briefcase(int32 EntryPoint);
}; // Size: 0x2E0

#endif
