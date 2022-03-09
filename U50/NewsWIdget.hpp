#ifndef UE4SS_SDK_NewsWIdget_HPP
#define UE4SS_SDK_NewsWIdget_HPP

class UNewsWIdget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x0268 (size: 0x8)
    class URetainerBox* RetainerBox_1;                                                // 0x0270 (size: 0x8)
    class UScrollBox* ScrollBox_0;                                                    // 0x0278 (size: 0x8)
    class UWebBrowser* WebBrowser_0;                                                  // 0x0280 (size: 0x8)
    FNewsWIdget_CClickedOnNameTextBox ClickedOnNameTextBox;                           // 0x0288 (size: 0x10)
    void ClickedOnNameTextBox();
    FNewsWIdget_CClickedOnStart ClickedOnStart;                                       // 0x0298 (size: 0x10)
    void ClickedOnStart();
    FNewsWIdget_CClickedOnSeedTextBox ClickedOnSeedTextBox;                           // 0x02A8 (size: 0x10)
    void ClickedOnSeedTextBox();
    class UWidgetComponent* ParentActor;                                              // 0x02B8 (size: 0x8)
    class UVRStereoWidgetComponent* MainWidgetRef;                                    // 0x02C0 (size: 0x8)

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ResetURL();
    void SetVisibilityCustom(bool Visible);
    void ExecuteUbergraph_NewsWIdget(int32 EntryPoint);
    void ClickedOnSeedTextBox__DelegateSignature();
    void ClickedOnStart__DelegateSignature();
    void ClickedOnNameTextBox__DelegateSignature();
}; // Size: 0x2C8

#endif
