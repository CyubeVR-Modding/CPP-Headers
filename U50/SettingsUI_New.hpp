#ifndef UE4SS_SDK_SettingsUI_New_HPP
#define UE4SS_SDK_SettingsUI_New_HPP

class USettingsUI_New_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* FadeDialog;                                               // 0x0268 (size: 0x8)
    class UButton* BackToMenuButton;                                                  // 0x0270 (size: 0x8)
    class UButton* Button_DeleteAllCrystals;                                          // 0x0278 (size: 0x8)
    class UButton* Button_GenerateRecipe;                                             // 0x0280 (size: 0x8)
    class UButton* Button_KillMe;                                                     // 0x0288 (size: 0x8)
    class UButton* Button_KillMeHalf;                                                 // 0x0290 (size: 0x8)
    class UGraphicsSettingCategoryButton_C* CategoryAestheticsButton;                 // 0x0298 (size: 0x8)
    class UGraphicsSettingCategoryButton_C* CategoryGameplayButton;                   // 0x02A0 (size: 0x8)
    class UGraphicsSettingCategoryButton_C* CategoryPerformanceButton;                // 0x02A8 (size: 0x8)
    class UGraphicsSettingCategoryButton_C* CategoryStatsButton;                      // 0x02B0 (size: 0x8)
    class UTextBlock* ChunkFormatText;                                                // 0x02B8 (size: 0x8)
    class UTextBlock* ChunkFormatTextLeft;                                            // 0x02C0 (size: 0x8)
    class UTextBlock* ChunkNumberText;                                                // 0x02C8 (size: 0x8)
    class UTextBlock* ChunkNumberTextLeft;                                            // 0x02D0 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting;                                    // 0x02D8 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_C_2;                                // 0x02E0 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_C_3;                                // 0x02E8 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_C_4;                                // 0x02F0 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_C_5;                                // 0x02F8 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_C_6;                                // 0x0300 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_C_7;                                // 0x0308 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_C_8;                                // 0x0310 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_C_9;                                // 0x0318 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_C_10;                               // 0x0320 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_C_12;                               // 0x0328 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_C_13;                               // 0x0330 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_C_15;                               // 0x0338 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_C_16;                               // 0x0340 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_C_17;                               // 0x0348 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_C_DistantTreeShadows;               // 0x0350 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_C_Screenshot;                       // 0x0358 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_ColorScheme;                        // 0x0360 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_ControlScheme;                      // 0x0368 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_Death;                              // 0x0370 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_DLSS;                               // 0x0378 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_Flicker;                            // 0x0380 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_FocusWarning;                       // 0x0388 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_FoveatedTAA;                        // 0x0390 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_ImageBrightness;                    // 0x0398 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_LightshaftIntensity;                // 0x03A0 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_MovementOrientation;                // 0x03A8 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_NightDarkness;                      // 0x03B0 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_RTXShadow;                          // 0x03B8 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_ShadowQuality;                      // 0x03C0 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_ShowAdvancedSettings;               // 0x03C8 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_SmallShadow;                        // 0x03D0 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_TeleportLocationFade;               // 0x03D8 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_TerrainLOD;                         // 0x03E0 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_ToolHitItemSmoke;                   // 0x03E8 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_TreeDistanceQuality;                // 0x03F0 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_TurningMode;                        // 0x03F8 (size: 0x8)
    class UGraphicsSetting_New_C* GraphicsSetting_ViewDistance;                       // 0x0400 (size: 0x8)
    class UHorizontalBox* HorizontalBox_DeleteCrystals;                               // 0x0408 (size: 0x8)
    class UHorizontalBox* HorizontalBox_SettingHelp;                                  // 0x0410 (size: 0x8)
    class UImage* Image;                                                              // 0x0418 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0420 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0428 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0430 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0438 (size: 0x8)
    class UImage* Image_31;                                                           // 0x0440 (size: 0x8)
    class UMultiLineEditableTextBox* MultiLineEditableTextBox_0;                      // 0x0448 (size: 0x8)
    class UButton* NotReallyLeave;                                                    // 0x0450 (size: 0x8)
    class UTextBlock* PlayerLocationText;                                             // 0x0458 (size: 0x8)
    class UBorder* ReallyLeaveOverlay;                                                // 0x0460 (size: 0x8)
    class URetainerBox* RetainerBox_0;                                                // 0x0468 (size: 0x8)
    class UTextBlock* SettingHelpText;                                                // 0x0470 (size: 0x8)
    class USettingsSlider_C* SettingsSlider_AAStrength;                               // 0x0478 (size: 0x8)
    class USettingsSlider_C* SettingsSlider_C_0;                                      // 0x0480 (size: 0x8)
    class USettingsSlider_C* SettingsSlider_C_1;                                      // 0x0488 (size: 0x8)
    class USettingsSlider_C* SettingsSlider_C_2;                                      // 0x0490 (size: 0x8)
    class USettingsSlider_C* SettingsSlider_C_3;                                      // 0x0498 (size: 0x8)
    class USettingsSlider_C* SettingsSlider_C_BucketAngle1;                           // 0x04A0 (size: 0x8)
    class USettingsSlider_C* SettingsSlider_C_BucketAngle2;                           // 0x04A8 (size: 0x8)
    class USettingsSlider_C* SettingsSlider_Music;                                    // 0x04B0 (size: 0x8)
    class USettingsSlider_C* SettingsSlider_Resolution;                               // 0x04B8 (size: 0x8)
    class USettingsSlider_C* SettingsSlider_Sharpen;                                  // 0x04C0 (size: 0x8)
    class USettingsSlider_C* SettingsSlider_TurningSpeed;                             // 0x04C8 (size: 0x8)
    class USettingsSlider_C* SettingsSlider_WalkingSpeed;                             // 0x04D0 (size: 0x8)
    class UTextBlock* TextBlock_5;                                                    // 0x04D8 (size: 0x8)
    class UTextBlock* TextBlock_6;                                                    // 0x04E0 (size: 0x8)
    class UTextBlock* TextBlock_7;                                                    // 0x04E8 (size: 0x8)
    class UTextBlock* TextBlock_8;                                                    // 0x04F0 (size: 0x8)
    class UTextBlock* TextBlock_9;                                                    // 0x04F8 (size: 0x8)
    class UTextBlock* TextBlock_10;                                                   // 0x0500 (size: 0x8)
    class UTextBlock* TextBlock_11;                                                   // 0x0508 (size: 0x8)
    class UTextBlock* TextBlock_12;                                                   // 0x0510 (size: 0x8)
    class UTextBlock* TextBlock_TotalMinedBlocks;                                     // 0x0518 (size: 0x8)
    class UTextBlock* TotalCraftedBlocks;                                             // 0x0520 (size: 0x8)
    class UTextBlock* TotalMinedBlocks;                                               // 0x0528 (size: 0x8)
    class UTextBlock* TotalMinedBlocks_10Min;                                         // 0x0530 (size: 0x8)
    class UTextBlock* TotalMinedBlocks_10MinCurrentUserRank;                          // 0x0538 (size: 0x8)
    class UTextBlock* TotalMinedBlocks_10MinLocalBest;                                // 0x0540 (size: 0x8)
    class UTextBlock* TotalMinedBlocks_10MinWorldBest;                                // 0x0548 (size: 0x8)
    class UTextBlock* TotalMinedBlocks_10MinWorldBest_RecordHolder;                   // 0x0550 (size: 0x8)
    class UTextBlock* TotalPlacedBlocks;                                              // 0x0558 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_171;                                        // 0x0560 (size: 0x8)
    class UButton* YesReallyLeave;                                                    // 0x0568 (size: 0x8)
    TMap<class FString, class UGraphicsSetting_New_C*> SettingWidgetsMap;             // 0x0570 (size: 0x50)
    TArray<class UGraphicsSetting_New_C*> SettingWidgetsArray;                        // 0x05C0 (size: 0x10)
    class UMaterialInstanceDynamic* RetainerMat;                                      // 0x05D0 (size: 0x8)
    float CurrentBlur;                                                                // 0x05D8 (size: 0x4)
    float BlurTarget;                                                                 // 0x05DC (size: 0x4)
    bool ExpertEnabled;                                                               // 0x05E0 (size: 0x1)

    void SetExpertSettingsEnabledDelay();
    void Set Expert Settings Enabled(bool Enabled);
    void Completed_DA3564B34411921ECAF259861CC80A31(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound);
    void Completed_33C9116F4501F4D3D762C8B07D7CF222(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, FUWorksSteamLeaderboardEntries SteamLeaderboardEntries, int32 EntryCount);
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__YesReallyLeave_K2Node_ComponentBoundEvent_281_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void InitRetainer();
    void SetRetainerBlur(bool Enabled);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__NotReallyLeave_K2Node_ComponentBoundEvent_64_OnButtonPressedEvent__DelegateSignature();
    void UpdateChunkFormatText();
    void BndEvt__Button_GenerateRecipe_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void UpdatePlayerLocationText(class AMyChunkManager_C* ChunkManager);
    void BndEvt__GraphicsSettingCategoryButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
    void BndEvt__CategoryAestheticsButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature();
    void BndEvt__CategoryGameplayButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature();
    void BndEvt__CategoryStatsButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature();
    void DisselectCategoryButtons();
    void FindWorldBest();
    void ShowSettingHelpText(FString Text);
    void HideSettingHelpText();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__SettingsUI_New_Button_KillMe_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__SettingsUI_New_Button_KillMeHalf_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__SettingsUI_New_Button_DeleteAllCrystals_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature();
    void ExecuteUbergraph_SettingsUI_New(int32 EntryPoint);
}; // Size: 0x5E1

#endif
