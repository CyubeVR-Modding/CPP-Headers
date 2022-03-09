#ifndef UE4SS_SDK_CharacterParticleActor_HPP
#define UE4SS_SDK_CharacterParticleActor_HPP

class ACharacterParticleActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem1;                                  // 0x0228 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    bool Active;                                                                      // 0x0240 (size: 0x1)

    void UpdateBirdSpawnLocation();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_CharacterParticleActor(int32 EntryPoint);
}; // Size: 0x241

#endif
