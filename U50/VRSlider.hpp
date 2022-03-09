#ifndef UE4SS_SDK_VRSlider_HPP
#define UE4SS_SDK_VRSlider_HPP

class AVRSlider_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0228 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    bool DragStarted;                                                                 // 0x0248 (size: 0x1)
    bool CurrentlyOverlapping;                                                        // 0x0249 (size: 0x1)
    FVRSlider_CSliderUpdated SliderUpdated;                                           // 0x0250 (size: 0x10)
    void SliderUpdated(float Value);
    float LastGoodValue;                                                              // 0x0260 (size: 0x4)
    bool OverlapType;                                                                 // 0x0264 (size: 0x1)
    bool OverlappingHand;                                                             // 0x0265 (size: 0x1)
    class USceneComponent* OverlappingHandLoc;                                        // 0x0268 (size: 0x8)
    float CurrentValue;                                                               // 0x0270 (size: 0x4)
    bool IsRightHandSlider;                                                           // 0x0274 (size: 0x1)
    FTimerHandle StartRealOverlapTimer;                                               // 0x0278 (size: 0x8)

    void ResetOverlap();
    void ReceiveTick(float DeltaSeconds);
    void Click();
    void UpdateSliderLocation(FVector WorldLocation);
    void SetValue(float NewValue);
    void SubmitGoodValue(float GoodValue);
    void ConfigureForHandOverlap(class AVRHandFingers_C* HandActor, bool IsRightHand);
    void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Release();
    void EndOverlap();
    void TraceHitThis(class USceneComponent* Component, FVector WorldLocation);
    void BndEvt__Cylinder_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Cylinder_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void StartRealOverlap();
    void ExecuteUbergraph_VRSlider(int32 EntryPoint);
    void SliderUpdated__DelegateSignature(float Value);
}; // Size: 0x280

#endif
