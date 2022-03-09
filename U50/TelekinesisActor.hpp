#ifndef UE4SS_SDK_TelekinesisActor_HPP
#define UE4SS_SDK_TelekinesisActor_HPP

class ATelekinesisActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* TargetSphere;                                         // 0x0228 (size: 0x8)
    class UArrowComponent* EndLocation;                                               // 0x0230 (size: 0x8)
    class UArrowComponent* StartLocation;                                             // 0x0238 (size: 0x8)
    class USplineMeshComponent* SplineMesh;                                           // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    EHand hand;                                                                       // 0x0250 (size: 0x1)
    class AFirstPersonCharacterVR_C* ParentCharacter;                                 // 0x0258 (size: 0x8)
    bool CurrentlyActive;                                                             // 0x0260 (size: 0x1)
    bool CurrentlyGrabbingObject;                                                     // 0x0261 (size: 0x1)
    class AActor* CurrentTarget;                                                      // 0x0268 (size: 0x8)
    class UPrimitiveComponent* TargetSimulatingComponent;                             // 0x0270 (size: 0x8)
    float MaxTelekinesisDistance;                                                     // 0x0278 (size: 0x4)

    void MoveActiveObject();
    void Rebuild();
    void DoTrace();
    void UserConstructionScript();
    void UpdateLocation();
    void Init(EHand hand, class AFirstPersonCharacterVR_C* ParentCharacter);
    void ReceiveBeginPlay();
    void ToggleTelekinesisOnObject(TEnumAsByte<hand> hand);
    void Activate();
    void ReceiveTick(float DeltaSeconds);
    void Deactivate();
    void DisableTelekinesisOnObject(TEnumAsByte<hand> hand);
    void ExecuteUbergraph_TelekinesisActor(int32 EntryPoint);
}; // Size: 0x27C

#endif
