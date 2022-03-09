#ifndef UE4SS_SDK_CraftRoom_HPP
#define UE4SS_SDK_CraftRoom_HPP

class ACraftRoom_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UChildActorComponent* VRButton;                                             // 0x0228 (size: 0x8)
    class UChildActorComponent* Converter3;                                           // 0x0230 (size: 0x8)
    class UChildActorComponent* Converter2;                                           // 0x0238 (size: 0x8)
    class UChildActorComponent* Converter;                                            // 0x0240 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x0248 (size: 0x8)
    class UStaticMeshComponent* SM_Fern_021;                                          // 0x0250 (size: 0x8)
    class UStaticMeshComponent* SM_Fern_03;                                           // 0x0258 (size: 0x8)
    class UStaticMeshComponent* SM_Vegetation_Debris_002;                             // 0x0260 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0268 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0270 (size: 0x8)
    class UStaticMeshComponent* SM_Fern_02;                                           // 0x0278 (size: 0x8)
    class UParticleSystemComponent* P_Ambient_Dust;                                   // 0x0280 (size: 0x8)
    class UWidgetComponent* Widget2;                                                  // 0x0288 (size: 0x8)
    class UWidgetComponent* Widget1;                                                  // 0x0290 (size: 0x8)
    class UChildActorComponent* ChildActor1;                                          // 0x0298 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x02A0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02A8 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x02B0 (size: 0x8)
    class UChildActorComponent* InventoryActor;                                       // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* Cube1;                                                // 0x02C0 (size: 0x8)
    class UArrowComponent* CraftCubeLocation;                                         // 0x02C8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x02D8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02E0 (size: 0x8)
    TArray<FVector> Locations;                                                        // 0x02E8 (size: 0x10)
    float Distance;                                                                   // 0x02F8 (size: 0x4)
    TArray<class UStaticMeshComponent*> OverlapComponents;                            // 0x0300 (size: 0x10)
    TArray<class ABlockItemVisual_C*> AttachedItems;                                  // 0x0310 (size: 0x10)
    TArray<uint8> AttachedTypes;                                                      // 0x0320 (size: 0x10)

    void Initialize();
    void DetachItem(class ABlockItemVisual_C* Item);
    void HandReleased(class UStaticMeshComponent* OverlapComponent, class ABlockItemVisual_C* HandAttachedItem, EControllerHand Side);
    void HandEndOverlap(class UStaticMeshComponent* SMC);
    void HandOverlap(class UStaticMeshComponent* SMC, TEnumAsByte<hand> hand);
    void ReceiveBeginPlay();
    void Clear();
    void ExecuteUbergraph_CraftRoom(int32 EntryPoint);
}; // Size: 0x330

#endif
