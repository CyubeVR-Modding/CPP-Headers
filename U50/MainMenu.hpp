#ifndef UE4SS_SDK_MainMenu_HPP
#define UE4SS_SDK_MainMenu_HPP

class UMainMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* WidgetSwitcherChange;                                     // 0x0268 (size: 0x8)
    class UWidgetAnimation* FlyInBorder;                                              // 0x0270 (size: 0x8)
    class UWidgetAnimation* FlyIn;                                                    // 0x0278 (size: 0x8)
    class UBorder* Border_7;                                                          // 0x0280 (size: 0x8)
    class UMainMenuButton_C* Button_Mods;                                             // 0x0288 (size: 0x8)
    class UMainMenuButton_C* ButtonContinue;                                          // 0x0290 (size: 0x8)
    class UMainMenuButton_C* ButtonCredits;                                           // 0x0298 (size: 0x8)
    class UMainMenuButton_C* ButtonDiscord;                                           // 0x02A0 (size: 0x8)
    class UMainMenuButton_C* ButtonExit;                                              // 0x02A8 (size: 0x8)
    class UMainMenuButton_C* ButtonLoad;                                              // 0x02B0 (size: 0x8)
    class UMainMenuButton_C* ButtonMusic;                                             // 0x02B8 (size: 0x8)
    class UMainMenuButton_C* ButtonPatreon;                                           // 0x02C0 (size: 0x8)
    class UMainMenuButton_C* ButtonRoadmap;                                           // 0x02C8 (size: 0x8)
    class UMainMenuButton_C* ButtonsNews;                                             // 0x02D0 (size: 0x8)
    class UMainMenuButton_C* ButtonStartNew;                                          // 0x02D8 (size: 0x8)
    class UMainMenuButton_C* ButtonTutorial;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* CurrentVersionText;                                             // 0x02E8 (size: 0x8)
    class UButton* DarkModeButton;                                                    // 0x02F0 (size: 0x8)
    class UWidgetSwitcher* GreetingsSwitcher;                                         // 0x02F8 (size: 0x8)
    class UImage* Image;                                                              // 0x0300 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0308 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0310 (size: 0x8)
    class ULoadWorldWidget_C* LoadWorldWidget;                                        // 0x0318 (size: 0x8)
    class UMainMenuButton_C* MainMenuButton;                                          // 0x0320 (size: 0x8)
    class UMainMenuButton_C* MainMenuButton_C_0;                                      // 0x0328 (size: 0x8)
    class UMainMenuButton_C* MainMenuButton_CustomBlocksNo;                           // 0x0330 (size: 0x8)
    class UMainMenuButton_C* MainMenuButton_CustomBlocksYes;                          // 0x0338 (size: 0x8)
    class UManageModsWidget_C* ManageModsWidget;                                      // 0x0340 (size: 0x8)
    class UButton* MusicButton;                                                       // 0x0348 (size: 0x8)
    class UImage* NewsImage;                                                          // 0x0350 (size: 0x8)
    class UNewWorldWidget_C* NewWorldWidget;                                          // 0x0358 (size: 0x8)
    class UTutorialWIdget_C* TutorialWIdget;                                          // 0x0360 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_0;                                          // 0x0368 (size: 0x8)
    bool EnableSplashscreen;                                                          // 0x0370 (size: 0x1)
    float SplashscreenOffset;                                                         // 0x0374 (size: 0x4)
    FString SaveGameName;                                                             // 0x0378 (size: 0x10)
    bool FirstGameRun;                                                                // 0x0388 (size: 0x1)
    class UWorldSlotSaveGame_C* SlotSaveGame;                                         // 0x0390 (size: 0x8)
    bool KeyboardEnabled;                                                             // 0x0398 (size: 0x1)
    TEnumAsByte<KeyboardTarget> KeyboardInputTarget;                                  // 0x0399 (size: 0x1)
    class UMediaPlayer* MediaPlayer;                                                  // 0x03A0 (size: 0x8)
    bool NewVar_0;                                                                    // 0x03A8 (size: 0x1)
    TArray<FString> WorldNames;                                                       // 0x03B0 (size: 0x10)
    TArray<int32> WorldSeeds;                                                         // 0x03C0 (size: 0x10)
    class UNewsWIdget_C* RealNewsWidget;                                              // 0x03D0 (size: 0x8)
    bool MusicEnabled;                                                                // 0x03D8 (size: 0x1)
    class UTextureRenderTarget2D* NewsWidgetRenderTarget;                             // 0x03E0 (size: 0x8)
    FString requestID;                                                                // 0x03E8 (size: 0x10)
    class AMainMenuWidgetActorNew_C* ParentActor;                                     // 0x03F8 (size: 0x8)
    bool DarkModeEnabled;                                                             // 0x0400 (size: 0x1)

    void SetDarkModeEnabled(bool NewEnabled, bool NoSaveUpdate);
    void UpdateSaveGameOnDisk();
    void FindWorldData();
    void ClickStartNewWorld();
    void DeleteWorld(FString World Name);
    void ConvertKeyboardStirngToWorldName(FString KeyboardString, FString& WorldName);
    void BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_63_Pressed__DelegateSignature();
    void SetupGameInstance(FString WorldName, bool LoadExisting);
    void SetupRendering();
    void LoadRealLevel();
    void ShowKeyboard();
    void SwitchActiveWidget(int32 Index);
    void BndEvt__NewWorldWidget_K2Node_ComponentBoundEvent_26_ClickedOnStart__DelegateSignature();
    void BndEvt__NewWorldWidget_K2Node_ComponentBoundEvent_187_ClickedOnSeedTextBox__DelegateSignature();
    void BndEvt__NewWorldWidget_K2Node_ComponentBoundEvent_248_ClickedOnNameTextBox__DelegateSignature();
    void BndEvt__LoadWorldWidget_K2Node_ComponentBoundEvent_100_ClickedOnWorld__DelegateSignature(FString WorldName);
    void SaveGameCheck();
    void BndEvt__ButtonLoad_K2Node_ComponentBoundEvent_141_Pressed__DelegateSignature();
    void BndEvt__ButtonStartNew_K2Node_ComponentBoundEvent_136_Pressed__DelegateSignature();
    void EnableLoadingVideo();
    void SetButtonEnabledState();
    void BndEvt__MainMenuButton_C_2_K2Node_ComponentBoundEvent_97_Pressed__DelegateSignature();
    void EnableLoadingMusic();
    void ContinueTest();
    void FadeMusicOut();
    void BndEvt__MainMenuButton_C_0_K2Node_ComponentBoundEvent_80_Pressed__DelegateSignature();
    void BndEvt__ButtonTutorial_K2Node_ComponentBoundEvent_30_Pressed__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__TutorialWIdget_K2Node_ComponentBoundEvent_492_TutorialFinished__DelegateSignature();
    void BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_1275_Pressed__DelegateSignature();
    void InitialFadeIn();
    void SetCurrentVersion();
    void BndEvt__ButtonDiscord_K2Node_ComponentBoundEvent_389_Pressed__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__MainMenuButton_C_0_K2Node_ComponentBoundEvent_154_Pressed__DelegateSignature();
    void AfterGreetings();
    void BndEvt__ButtonMusic_K2Node_ComponentBoundEvent_0_Pressed__DelegateSignature();
    void SetMenuButtonStateAfterLoading();
    void SetMainMenuMusicEnabled(bool NewEnabled, bool NoSaveUpdate);
    void SetNewsImage(class UObject* Image);
    void BndEvt__Button_Mods_K2Node_ComponentBoundEvent_1_Pressed__DelegateSignature();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void Construct();
    void BndEvt__ButtonPatreon_K2Node_ComponentBoundEvent_2_Pressed__DelegateSignature();
    void BndEvt__ButtonRoadmap_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature();
    void UpdateDiscordNumber();
    void OnRequestComplete(const TArray<FString>& Data, const int32 statusCode, const TArray<uint8>& byteData, const FString requestID);
    void BndEvt__MainMenu_MainMenuButton_CustomBlocksYes_K2Node_ComponentBoundEvent_4_Pressed__DelegateSignature();
    void BndEvt__MainMenu_MainMenuButton_CustomBlocksNo_K2Node_ComponentBoundEvent_5_Pressed__DelegateSignature();
    void LoadWorld1();
    void BndEvt__MainMenu_DarkModeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_MainMenu(int32 EntryPoint);
}; // Size: 0x401

#endif
