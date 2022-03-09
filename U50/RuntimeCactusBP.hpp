#ifndef UE4SS_SDK_RuntimeCactusBP_HPP
#define UE4SS_SDK_RuntimeCactusBP_HPP

class ARuntimeCactusBP_C : public ARuntimeCactus
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    float MakeSmaller_NewTrack_0_A28346AB4B367A8B8CA914B61DD4BBF8;                    // 0x0280 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> MakeSmaller__Direction_A28346AB4B367A8B8CA914B61DD4BBF8; // 0x0284 (size: 0x1)
    class UTimelineComponent* MakeSmaller;                                            // 0x0288 (size: 0x8)
    float LastHit;                                                                    // 0x0290 (size: 0x4)
    float Health;                                                                     // 0x0294 (size: 0x4)
    FVector StartScale;                                                               // 0x0298 (size: 0xC)

    void MakeSmaller__FinishedFunc();
    void MakeSmaller__UpdateFunc();
    void SetActive();
    void ResetToPoolBP();
    void BndEvt__SMC_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void PlayHaptics(TEnumAsByte<hand> hand);
    void DestroyCactus();
    void BndEvt__SMC_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void HitByTool(class AToolBP_C* Tool, EBlockTypeBP Type, FVector InputPin, float MinSpeed);
    void SetType(ETreeType NewType);
    void ExecuteUbergraph_RuntimeCactusBP(int32 EntryPoint);
}; // Size: 0x2A4

#endif
