#ifndef UE4SS_SDK_MainMenuMinSpecWarning_HPP
#define UE4SS_SDK_MainMenuMinSpecWarning_HPP

class UMainMenuMinSpecWarning_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* WidgetSwitcherChange;                                     // 0x0268 (size: 0x8)
    class UWidgetAnimation* FlyInBorder;                                              // 0x0270 (size: 0x8)
    class UWidgetAnimation* FlyIn;                                                    // 0x0278 (size: 0x8)
    class UMainMenuButton_C* MainMenuButton;                                          // 0x0280 (size: 0x8)
    class AActor* Parent;                                                             // 0x0288 (size: 0x8)

    void BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_360_Pressed__DelegateSignature();
    void ExecuteUbergraph_MainMenuMinSpecWarning(int32 EntryPoint);
}; // Size: 0x290

#endif
