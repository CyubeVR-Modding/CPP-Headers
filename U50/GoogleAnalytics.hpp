#ifndef UE4SS_SDK_GoogleAnalytics_HPP
#define UE4SS_SDK_GoogleAnalytics_HPP

struct FCustomDimension
{
    int32 Index;                                                                      // 0x0000 (size: 0x4)
    FString Value;                                                                    // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FCustomMetric
{
    int32 Index;                                                                      // 0x0000 (size: 0x4)
    float Value;                                                                      // 0x0004 (size: 0x4)

}; // Size: 0x8

class UGoogleAnalyticsBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void SetTrackingId(FString TrackingId);
    void SetAnonymizeIP(const bool Anonymize);
    void RecordGoogleUserTiming(FString TimingCategory, const int32 TimingValue, FString TimingName, const TArray<FCustomDimension> CustomDimensions, const TArray<FCustomMetric> CustomMetrics);
    void RecordGoogleSocialInteraction(FString SocialNetwork, FString SocialAction, FString SocialTarget, const TArray<FCustomDimension> CustomDimensions, const TArray<FCustomMetric> CustomMetrics);
    void RecordGoogleScreen(FString ScreenName, const TArray<FCustomDimension> CustomDimensions, const TArray<FCustomMetric> CustomMetrics);
    void RecordGoogleEvent(FString EventCategory, FString EventAction, FString EventLabel, const int32 EventValue);
    FString GetTrackingId();
}; // Size: 0x28

class UGoogleAnalyticsSettings : public UObject
{
    bool bEnableIDFACollection;                                                       // 0x0028 (size: 0x1)

}; // Size: 0x30

#endif
