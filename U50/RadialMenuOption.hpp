#ifndef UE4SS_SDK_RadialMenuOption_HPP
#define UE4SS_SDK_RadialMenuOption_HPP

class ARadialMenuOption_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* Front;                                                // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Back;                                                 // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    float FadeOutUnselectedTimeline_Opacity_60F3787A4B8AFFA1248E579D59174A0B;         // 0x0240 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> FadeOutUnselectedTimeline__Direction_60F3787A4B8AFFA1248E579D59174A0B; // 0x0244 (size: 0x1)
    class UTimelineComponent* FadeOutUnselectedTimeline;                              // 0x0248 (size: 0x8)
    float FadeInTimeline_Opacity_6D82F9A74D872B1879FDA698293E0EAC;                    // 0x0250 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> FadeInTimeline__Direction_6D82F9A74D872B1879FDA698293E0EAC; // 0x0254 (size: 0x1)
    class UTimelineComponent* FadeInTimeline;                                         // 0x0258 (size: 0x8)
    float FadeOutTimeline_CustomTime_52A585AB4EF62D0075362CBC7223AF55;                // 0x0260 (size: 0x4)
    float FadeOutTimeline_Opacity_52A585AB4EF62D0075362CBC7223AF55;                   // 0x0264 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> FadeOutTimeline__Direction_52A585AB4EF62D0075362CBC7223AF55; // 0x0268 (size: 0x1)
    class UTimelineComponent* FadeOutTimeline;                                        // 0x0270 (size: 0x8)
    FLinearColor Color;                                                               // 0x0278 (size: 0x10)
    class UTexture2D* ItemTexture;                                                    // 0x0288 (size: 0x8)
    FTimerHandle HideAfterAnimationTimer;                                             // 0x0290 (size: 0x8)
    int32 Slot;                                                                       // 0x0298 (size: 0x4)
    class UMaterialInstanceDynamic* DMIFront;                                         // 0x02A0 (size: 0x8)
    class UMaterialInstanceDynamic* DMIBack;                                          // 0x02A8 (size: 0x8)
    bool CurrentlyValid;                                                              // 0x02B0 (size: 0x1)
    bool CurrentlyAlreadySelected;                                                    // 0x02B1 (size: 0x1)
    bool IsReal;                                                                      // 0x02B2 (size: 0x1)
    bool IsTool;                                                                      // 0x02B3 (size: 0x1)

    void SetType(int32 Slot, int32 UniqueId, EBlockTypeBP Type, bool IsReal, bool IsRightHand);
    void UserConstructionScript();
    void FadeOutTimeline__FinishedFunc();
    void FadeOutTimeline__UpdateFunc();
    void FadeInTimeline__FinishedFunc();
    void FadeInTimeline__UpdateFunc();
    void FadeOutUnselectedTimeline__FinishedFunc();
    void FadeOutUnselectedTimeline__UpdateFunc();
    void SetSelected(bool Selected);
    void PlaySelectedSuccessfullAnimation();
    void SetColor(const FVector ParameterValue);
    void HideSelected();
    void MakeVisible();
    void FadeOutSelected();
    void StopAnimation();
    void SetOpacityMultiplierFull(const float ParameterValue);
    void FadeIn();
    void StopAnimationFadeIn();
    void SetOpacityParameterFadeIn(const float ParameterValue);
    void FadeOutUnselected();
    void HideUnselected();
    void SetCustomTime(const float ParameterValue);
    void ExecuteUbergraph_RadialMenuOption(int32 EntryPoint);
}; // Size: 0x2B4

#endif
