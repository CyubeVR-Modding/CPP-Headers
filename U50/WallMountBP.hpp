#ifndef UE4SS_SDK_WallMountBP_HPP
#define UE4SS_SDK_WallMountBP_HPP

class AWallMountBP_C : public AMeshObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x02B0 (size: 0x8)
    class UBoxComponent* OverlapBounding;                                             // 0x02B8 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x02C8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02D0 (size: 0x8)
    class AToolBP_C* CurrentActiveTool;                                               // 0x02D8 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void AttachTool(class AToolBP_C* Tool);
    void ExecuteUbergraph_WallMountBP(int32 EntryPoint);
}; // Size: 0x2E0

#endif
