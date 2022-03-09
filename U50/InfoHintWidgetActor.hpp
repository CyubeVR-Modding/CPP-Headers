#ifndef UE4SS_SDK_InfoHintWidgetActor_HPP
#define UE4SS_SDK_InfoHintWidgetActor_HPP

class AInfoHintWidgetActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    float FadeOut_NewTrack_0_85FC37284DC76F289BAAFEB7A3ECC3FE;                        // 0x0238 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> FadeOut__Direction_85FC37284DC76F289BAAFEB7A3ECC3FE; // 0x023C (size: 0x1)
    class UTimelineComponent* FadeOut;                                                // 0x0240 (size: 0x8)
    float LocationTimeline_Z_21AD4437426D56BAC964DDBCE7F511BC;                        // 0x0248 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> LocationTimeline__Direction_21AD4437426D56BAC964DDBCE7F511BC; // 0x024C (size: 0x1)
    class UTimelineComponent* LocationTimeline;                                       // 0x0250 (size: 0x8)
    FString TextToDisplay;                                                            // 0x0258 (size: 0x10)
    float LifeTime;                                                                   // 0x0268 (size: 0x4)
    float SizeMultiplierVertical;                                                     // 0x026C (size: 0x4)

    void LocationTimeline__FinishedFunc();
    void LocationTimeline__UpdateFunc();
    void FadeOut__FinishedFunc();
    void FadeOut__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_InfoHintWidgetActor(int32 EntryPoint);
}; // Size: 0x270

#endif
