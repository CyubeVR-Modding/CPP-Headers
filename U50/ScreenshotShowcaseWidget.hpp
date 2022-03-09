#ifndef UE4SS_SDK_ScreenshotShowcaseWidget_HPP
#define UE4SS_SDK_ScreenshotShowcaseWidget_HPP

class UScreenshotShowcaseWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_Left;                                                       // 0x0268 (size: 0x8)
    class UButton* Button_Right;                                                      // 0x0270 (size: 0x8)
    class UTextBlock* CreditsName;                                                    // 0x0278 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0280 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0288 (size: 0x8)
    class UImage* Image_136;                                                          // 0x0290 (size: 0x8)
    class UScaleBox* ScaleBox_Image1;                                                 // 0x0298 (size: 0x8)
    class UScaleBox* ScaleBox_Image2;                                                 // 0x02A0 (size: 0x8)
    FString PatreonNames;                                                             // 0x02A8 (size: 0x10)
    FString RemainingString;                                                          // 0x02B8 (size: 0x10)
    bool Continue;                                                                    // 0x02C8 (size: 0x1)
    FString requestID;                                                                // 0x02D0 (size: 0x10)
    float InterpPosition;                                                             // 0x02E0 (size: 0x4)
    bool Moving;                                                                      // 0x02E4 (size: 0x1)
    float MoveSpeed;                                                                  // 0x02E8 (size: 0x4)
    TArray<class UTexture2D*> ImagesArray;                                            // 0x02F0 (size: 0x10)
    TArray<FString> ImageNameArray;                                                   // 0x0300 (size: 0x10)
    int32 CurrentIndex;                                                               // 0x0310 (size: 0x4)
    int32 NewIndex;                                                                   // 0x0314 (size: 0x4)
    FTimerHandle SlideshowTimer;                                                      // 0x0318 (size: 0x8)
    float WaitSecondsRegular;                                                         // 0x0320 (size: 0x4)

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnRequestComplete(const TArray<FString>& Data, const int32 statusCode, const TArray<uint8>& byteData, const FString requestID);
    void MoveToNewImage(int32 Index);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void DoInterp();
    void Update();
    void RunSlideshow();
    void BndEvt__ScreenshotShowcaseWidget_Button_97_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__ScreenshotShowcaseWidget_Button_Right_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
    void NextSlideInXSeconds(float Time);
    void ExecuteUbergraph_ScreenshotShowcaseWidget(int32 EntryPoint);
}; // Size: 0x324

#endif
