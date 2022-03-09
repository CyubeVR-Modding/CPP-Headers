#ifndef UE4SS_SDK_VRHandController_HPP
#define UE4SS_SDK_VRHandController_HPP

class AVRHandController_C : public AReceiveLightActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UStaticMeshComponent* ControllerMesh;                                       // 0x0270 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0278 (size: 0x8)
    class USphereComponent* Controller_Overlap;                                       // 0x0280 (size: 0x8)
    class UBoxComponent* SimulatePhysicsBox;                                          // 0x0288 (size: 0x8)
    class AFirstPersonCharacterVR_C* ParentCharacter;                                 // 0x0290 (size: 0x8)
    TEnumAsByte<hand> Side;                                                           // 0x0298 (size: 0x1)
    FVector OriginalOffset;                                                           // 0x029C (size: 0xC)
    FRotator OriginalOffsetRot;                                                       // 0x02A8 (size: 0xC)

    void SetVisible(bool Visible);
    void SetAlternativeModeActive(bool Active);
    void Init(class AFirstPersonCharacterVR_C* Parent, TEnumAsByte<hand> Side);
    void SetSide(TEnumAsByte<hand> Side);
    void UserConstructionScript();
    void SetWorldScale(FVector Scale);
    void SetVisibility(bool Visible);
    void ExecuteUbergraph_VRHandController(int32 EntryPoint);
}; // Size: 0x2B4

#endif
