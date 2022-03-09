#ifndef UE4SS_SDK_SettingsSlider_HPP
#define UE4SS_SDK_SettingsSlider_HPP

class USettingsSlider_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0268 (size: 0x8)
    class USettingName_C* SettingName;                                                // 0x0270 (size: 0x8)
    class USlider* Slider_0;                                                          // 0x0278 (size: 0x8)
    TEnumAsByte<SliderType> SettingsType;                                             // 0x0280 (size: 0x1)
    FText Text;                                                                       // 0x0288 (size: 0x18)
    float Default;                                                                    // 0x02A0 (size: 0x4)
    class UMaterialInstanceDynamic* SliderMat;                                        // 0x02A8 (size: 0x8)

    void DoResolutionOffset(float Value);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__Slider_0_K2Node_ComponentBoundEvent_44_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void DoMusic(float Value);
    void UpdateSliderMat(float Value);
    void DoAAStrength(float Value);
    void PreConstruct(bool IsDesignTime);
    void DoSaturation(float Saturation);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonPressedEvent__DelegateSignature();
    void SliderWasChanged(float Value);
    void DoDayLength(float Value);
    void DoNightLength(float Value);
    void DoHandSize(float Value);
    void DoSmoothTurnSpeed(float Value);
    void Construct();
    void DoSmoothLocoSpeed(float Value);
    void DoSharpness(float Value);
    void DoBucketAnglePitch(float Value);
    void DoBucketAngleRoll(float Value);
    void ExecuteUbergraph_SettingsSlider(int32 EntryPoint);
}; // Size: 0x2B0

#endif
