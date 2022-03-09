#ifndef UE4SS_SDK_MainMenuWidgetActorMinSpec_HPP
#define UE4SS_SDK_MainMenuWidgetActorMinSpec_HPP

class AMainMenuWidgetActorMinSpec_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UVRStereoWidgetComponent* VRStereoWidget;                                   // 0x0228 (size: 0x8)
    class UWidgetComponent* MenuWidget;                                               // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_MainMenuWidgetActorMinSpec(int32 EntryPoint);
}; // Size: 0x240

#endif
