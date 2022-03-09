#ifndef UE4SS_SDK_BucketWidgetComponent_HPP
#define UE4SS_SDK_BucketWidgetComponent_HPP

class UBucketWidgetComponent_C : public UWidgetComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0590 (size: 0x8)
    FVector StartLocation;                                                            // 0x0598 (size: 0xC)
    FVector CenterLocation;                                                           // 0x05A4 (size: 0xC)
    FVector EndLocation;                                                              // 0x05B0 (size: 0xC)
    bool ToCenter;                                                                    // 0x05BC (size: 0x1)
    float Alpha;                                                                      // 0x05C0 (size: 0x4)
    class UCurveFloat* Curve;                                                         // 0x05C8 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void Setup(FVector WorldLoc);
    void ExecuteUbergraph_BucketWidgetComponent(int32 EntryPoint);
}; // Size: 0x5D0

#endif
