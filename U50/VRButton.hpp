#ifndef UE4SS_SDK_VRButton_HPP
#define UE4SS_SDK_VRButton_HPP

class AVRButton_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0228 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    FVRButton_CPressed Pressed;                                                       // 0x0248 (size: 0x10)
    void Pressed();

    void BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ButtonPressed();
    void BndEvt__Cylinder_K2Node_ComponentBoundEvent_18_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_VRButton(int32 EntryPoint);
    void Pressed__DelegateSignature();
}; // Size: 0x258

#endif
