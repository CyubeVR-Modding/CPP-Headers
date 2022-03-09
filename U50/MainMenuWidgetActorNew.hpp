#ifndef UE4SS_SDK_MainMenuWidgetActorNew_HPP
#define UE4SS_SDK_MainMenuWidgetActorNew_HPP

class AMainMenuWidgetActorNew_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UWidgetComponent* NewsWIdget;                                               // 0x0228 (size: 0x8)
    class UVRStereoWidgetComponent* NewsWidgetNew;                                    // 0x0230 (size: 0x8)
    class UVRStereoWidgetComponent* VRStereoWidget;                                   // 0x0238 (size: 0x8)
    class UWidgetComponent* NameWidget;                                               // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_MainMenuWidgetActorNew(int32 EntryPoint);
}; // Size: 0x250

#endif
