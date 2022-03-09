#ifndef UE4SS_SDK_TeleportBootsActor_HPP
#define UE4SS_SDK_TeleportBootsActor_HPP

class ATeleportBootsActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* GroundSphere;                                         // 0x0228 (size: 0x8)
    class UStaticMeshComponent* uploads_files_1000830_Pirate_Boot_low1;               // 0x0230 (size: 0x8)
    class UStaticMeshComponent* uploads_files_1000830_Pirate_Boot_low;                // 0x0238 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0240 (size: 0x8)

    void SetColor(const FVector ParameterValue);
    void ExecuteUbergraph_TeleportBootsActor(int32 EntryPoint);
}; // Size: 0x248

#endif
