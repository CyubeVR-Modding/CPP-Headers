#ifndef UE4SS_SDK_PictureSelector_HPP
#define UE4SS_SDK_PictureSelector_HPP

class APictureSelector_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UChildActorComponent* ChildActorMarginSlider;                               // 0x0228 (size: 0x8)
    class UChildActorComponent* ChildActorThicknessSlider;                            // 0x0230 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x0238 (size: 0x8)
    class ABP_DynamicFrame_C* CurrentFrame;                                           // 0x0240 (size: 0x8)
    float Length;                                                                     // 0x0248 (size: 0x4)
    TArray<FLoadedPicture> LoadedPictures;                                            // 0x0250 (size: 0x10)
    TArray<class UStaticMeshComponent*> PlaneComponents;                              // 0x0260 (size: 0x10)
    class UStaticMeshComponent* OverlappedComponent;                                  // 0x0270 (size: 0x8)
    class UStaticMeshComponent* ClickedComponent;                                     // 0x0278 (size: 0x8)
    class UStaticMeshComponent* NewAttachedComponent;                                 // 0x0280 (size: 0x8)
    TArray<class UMaterialInstanceDynamic*> MaterialInstances;                        // 0x0288 (size: 0x10)
    int32 OverlappedIndex;                                                            // 0x0298 (size: 0x4)
    class AVRSlider_C* ThicknessSlider;                                               // 0x02A0 (size: 0x8)
    class AVRSlider_C* MarginSlider;                                                  // 0x02A8 (size: 0x8)

    void Update();
    void Enable(class ABP_DynamicFrame_C* CurrentEditFrame);
    void SetEnabled(bool Enabled);
    void OverlapComponent(class UStaticMeshComponent* Component);
    void ReceiveTick(float DeltaSeconds);
    void ResetOverlap();
    void Click();
    void Release();
    void AttachedComponentOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void SendClickToSlider();
    void SendReleaseToSlider();
    void InitSliderProperties();
    void ReceiveBeginPlay();
    void ThicknessSliderUpdated(float Value);
    void MarginSliderUpdated(float Value);
    void ExecuteUbergraph_PictureSelector(int32 EntryPoint);
}; // Size: 0x2B0

#endif
