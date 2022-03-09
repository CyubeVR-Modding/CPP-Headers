#ifndef UE4SS_SDK_SGGraphicsSettings_HPP
#define UE4SS_SDK_SGGraphicsSettings_HPP

class USGGraphicsSettings_C : public USaveGame
{
    TMap<class FString, class FString> Settings;                                      // 0x0028 (size: 0x50)
    int32 Version;                                                                    // 0x0078 (size: 0x4)
    float ResolutionSlider;                                                           // 0x007C (size: 0x4)
    float MusicVolume;                                                                // 0x0080 (size: 0x4)
    float AA_Strength;                                                                // 0x0084 (size: 0x4)
    float Saturation;                                                                 // 0x0088 (size: 0x4)
    float DayLength;                                                                  // 0x008C (size: 0x4)
    float NightLength;                                                                // 0x0090 (size: 0x4)
    float ScreenshotRes;                                                              // 0x0094 (size: 0x4)
    float HandSize;                                                                   // 0x0098 (size: 0x4)
    float SmoothTurnSpeed;                                                            // 0x009C (size: 0x4)
    float SmoothLocoSpeed;                                                            // 0x00A0 (size: 0x4)
    float Sharpness;                                                                  // 0x00A4 (size: 0x4)
    float BucketAnglePitch;                                                           // 0x00A8 (size: 0x4)
    float BucketAngleRoll;                                                            // 0x00AC (size: 0x4)

    void SetEverything(TMap<class FString, class FString> Settings, float ResolutionSlider, float MusicVolume, float AA_Strength, float Saturation, float DayLength, float NightLength, float HandSize, float SmoothTurnSpeed, float SmoothLocoSpeed, float Shaprness, float BucketAnglePitch, float BucketAngleRoll);
}; // Size: 0xB0

#endif
