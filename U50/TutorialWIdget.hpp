#ifndef UE4SS_SDK_TutorialWIdget_HPP
#define UE4SS_SDK_TutorialWIdget_HPP

class UTutorialWIdget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UMainMenuButton_C* ButtonBack;                                              // 0x0268 (size: 0x8)
    class UMainMenuButton_C* ButtonNext;                                              // 0x0270 (size: 0x8)
    class UImage* CurrentImage;                                                       // 0x0278 (size: 0x8)
    class UProgressBar* ProgressBar_0;                                                // 0x0280 (size: 0x8)
    class UWidgetComponent* ParentActor;                                              // 0x0288 (size: 0x8)
    bool NewVar_0;                                                                    // 0x0290 (size: 0x1)
    int32 CurrentIndex;                                                               // 0x0294 (size: 0x4)
    TArray<class UObject*> TutorialCards;                                             // 0x0298 (size: 0x10)
    FTutorialWIdget_CTutorialFinished TutorialFinished;                               // 0x02A8 (size: 0x10)
    void TutorialFinished();
    float NextProgress;                                                               // 0x02B8 (size: 0x4)
    int32 MaximumIndexSeen;                                                           // 0x02BC (size: 0x4)

    void UpdateImage();
    void BndEvt__MainMenuButton_0_K2Node_ComponentBoundEvent_5_Pressed__DelegateSignature();
    void UpdateButtons();
    void BndEvt__ButtonBack_K2Node_ComponentBoundEvent_26_Pressed__DelegateSignature();
    void Construct();
    void StartTimeline();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void UnlockAll();
    void InitializeTutorial();
    void ExecuteUbergraph_TutorialWIdget(int32 EntryPoint);
    void TutorialFinished__DelegateSignature();
}; // Size: 0x2C0

#endif
