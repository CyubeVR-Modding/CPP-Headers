#ifndef UE4SS_SDK_Converter_HPP
#define UE4SS_SDK_Converter_HPP

class AConverter_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* PreviewMesh;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x0230 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0238 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Cylinder1;                                            // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x0250 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0258 (size: 0x8)
    TEnumAsByte<ItemType> ConvertTo;                                                  // 0x0260 (size: 0x1)

    void Init(TEnumAsByte<ItemType> ConvertTo);
    void BndEvt__Cylinder_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_Converter(int32 EntryPoint);
}; // Size: 0x261

#endif
