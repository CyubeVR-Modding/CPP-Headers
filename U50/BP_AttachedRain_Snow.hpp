#ifndef UE4SS_SDK_BP_AttachedRain_Snow_HPP
#define UE4SS_SDK_BP_AttachedRain_Snow_HPP

class ABP_AttachedRain_Snow_C : public ABP_AttachedRain_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)

    void ReceiveBeginPlay();
    void FadeMatBack(class AWeatherManagerBP_C* WeatherManager);
    void ExecuteUbergraph_BP_AttachedRain_Snow(int32 EntryPoint);
}; // Size: 0x2B0

#endif
