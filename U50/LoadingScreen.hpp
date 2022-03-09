#ifndef UE4SS_SDK_LoadingScreen_HPP
#define UE4SS_SDK_LoadingScreen_HPP

struct FLoadingScreenDescription
{
    float MinimumLoadingScreenDisplayTime;                                            // 0x0000 (size: 0x4)
    bool bAutoCompleteWhenLoadingCompletes;                                           // 0x0004 (size: 0x1)
    bool bMoviesAreSkippable;                                                         // 0x0005 (size: 0x1)
    bool bWaitForManualStop;                                                          // 0x0006 (size: 0x1)
    TEnumAsByte<EMoviePlaybackType> PlaybackType;                                     // 0x0007 (size: 0x1)
    bool bShowUIOverlay;                                                              // 0x0008 (size: 0x1)
    FText LoadingText;                                                                // 0x0010 (size: 0x18)
    FSlateFontInfo LoadingFont;                                                       // 0x0028 (size: 0x58)
    TArray<FString> MoviePaths;                                                       // 0x0080 (size: 0x10)
    TArray<FSoftObjectPath> Images;                                                   // 0x0090 (size: 0x10)
    TEnumAsByte<EStretch::Type> ImageStretch;                                         // 0x00A0 (size: 0x1)

}; // Size: 0xA8

class ULoadingScreenSettings : public UDeveloperSettings
{
    FLoadingScreenDescription StartupScreen;                                          // 0x0038 (size: 0xA8)
    FLoadingScreenDescription DefaultScreen;                                          // 0x00E0 (size: 0xA8)
    FSlateFontInfo TipFont;                                                           // 0x0188 (size: 0x58)
    float TipWrapAt;                                                                  // 0x01E0 (size: 0x4)
    TArray<FText> Tips;                                                               // 0x01E8 (size: 0x10)

}; // Size: 0x1F8

#endif
