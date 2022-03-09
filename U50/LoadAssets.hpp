#ifndef UE4SS_SDK_LoadAssets_HPP
#define UE4SS_SDK_LoadAssets_HPP

class ALoadAssets_C : public AActor
{
    class USceneComponent* DefaultSceneRoot;                                          // 0x0220 (size: 0x8)
    TArray<class UStaticMesh*> Meshes;                                                // 0x0228 (size: 0x10)
    TArray<class UMaterialInterface*> Materials;                                      // 0x0238 (size: 0x10)
    TArray<class UObject*> Objects;                                                   // 0x0248 (size: 0x10)

}; // Size: 0x258

#endif
