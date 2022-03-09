#ifndef UE4SS_SDK_BucketAddWidget_HPP
#define UE4SS_SDK_BucketAddWidget_HPP

class UBucketAddWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* Amount;                                                         // 0x0268 (size: 0x8)
    class UCustomBlockPreviewWidget1_C* CustomBlockPreviewWidget1;                    // 0x0270 (size: 0x8)
    class UImage* Texture;                                                            // 0x0278 (size: 0x8)
    class UBorder* TopBorder;                                                         // 0x0280 (size: 0x8)
    float Opacity;                                                                    // 0x0288 (size: 0x4)
    bool Back;                                                                        // 0x028C (size: 0x1)
    float Alpha;                                                                      // 0x0290 (size: 0x4)
    class UCurveFloat* Curve;                                                         // 0x0298 (size: 0x8)

    void SetupWidget(int32 Amount, EBlockTypeBP Type, int32 UniqueId);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_BucketAddWidget(int32 EntryPoint);
}; // Size: 0x2A0

#endif
