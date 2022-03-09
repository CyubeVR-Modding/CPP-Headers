#ifndef UE4SS_SDK_ArrowProjectile_HPP
#define UE4SS_SDK_ArrowProjectile_HPP

class AArrowProjectile_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UParticleSystemComponent* P_Sparks;                                         // 0x0228 (size: 0x8)
    class UStaticMeshComponent* HB_Arrow2;                                            // 0x0230 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x0238 (size: 0x8)
    float InitialSpeed;                                                               // 0x0240 (size: 0x4)

    void UserConstructionScript();
    void BndEvt__HB_Arrow2_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_ArrowProjectile(int32 EntryPoint);
}; // Size: 0x244

#endif
