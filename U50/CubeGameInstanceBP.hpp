#ifndef UE4SS_SDK_CubeGameInstanceBP_HPP
#define UE4SS_SDK_CubeGameInstanceBP_HPP

class UCubeGameInstanceBP_C : public UCubeGameInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UTexture2D* TorchTexture;                                                   // 0x0288 (size: 0x8)
    TMap<int32, FSteamUGCItemId> UniqueIDToWorkshopID;                                // 0x0290 (size: 0x50)
    TArray<FSteamWorkshopItemDetails> AllItemsFromCurrentUser;                        // 0x02E0 (size: 0x10)
    int32 PageToGet;                                                                  // 0x02F0 (size: 0x4)
    class UTextureRenderTarget2D* RT;                                                 // 0x02F8 (size: 0x8)
    bool ShowOnlyLeaderboard;                                                         // 0x0300 (size: 0x1)
    bool WentBackToMenu;                                                              // 0x0301 (size: 0x1)
    int32 NumAllTextures;                                                             // 0x0304 (size: 0x4)
    TMap<int32, float> AnimationSpeedMap;                                             // 0x0308 (size: 0x50)
    bool WMROffsetActivated;                                                          // 0x0358 (size: 0x1)
    int32 TotalWorkshopItems;                                                         // 0x035C (size: 0x4)
    int32 PageToGet2;                                                                 // 0x0360 (size: 0x4)
    TArray<FString> WorkshopItemsToSubscribe;                                         // 0x0368 (size: 0x10)
    int32 IndexToDownload;                                                            // 0x0378 (size: 0x4)
    bool L_AllInstalled;                                                              // 0x037C (size: 0x1)
    bool WorkshopInitialized;                                                         // 0x037D (size: 0x1)
    TArray<FString> WorkshopItemsToSubscribeReversed;                                 // 0x0380 (size: 0x10)
    FDateTime WorldGenerationStarted;                                                 // 0x0390 (size: 0x8)
    TMap<int32, UTextureRenderTarget2D*> CustomBlockIcons;                            // 0x0398 (size: 0x50)
    class ABlockPreviewRenderActorIngamePreview_C* IngameIconRenderActor;             // 0x03E8 (size: 0x8)
    int32 T_Index;                                                                    // 0x03F0 (size: 0x4)

    void GenerateCustomBlockIcons();
    void GenerateBlockRenderTargetTest();
    void GenerateBlockLUT();
    void OnSteamInitFailure_EFE7549947D5D2D7F927E7B8C08FE53F(FQueryWorkshopForUserItemsResult Result);
    void OnFailure_EFE7549947D5D2D7F927E7B8C08FE53F(FQueryWorkshopForUserItemsResult Result);
    void OnSuccess_EFE7549947D5D2D7F927E7B8C08FE53F(FQueryWorkshopForUserItemsResult Result);
    void OnSteamInitFailure_47872108488888F975637AA1D7957543(FQueryWorkshopForAllItemsResult Result);
    void OnFailure_47872108488888F975637AA1D7957543(FQueryWorkshopForAllItemsResult Result);
    void OnSuccess_47872108488888F975637AA1D7957543(FQueryWorkshopForAllItemsResult Result);
    void OnSteamInitFailure_C2B6062E4613FF026E0DA98955FD9D42(FGeneralWorkshopItemResult Result);
    void OnFailure_C2B6062E4613FF026E0DA98955FD9D42(FGeneralWorkshopItemResult Result);
    void OnSuccess_C2B6062E4613FF026E0DA98955FD9D42(FGeneralWorkshopItemResult Result);
    void QueryWorkshop();
    void CheckAmountInWorkshop();
    void DownloadDefaultWorkshopItems();
    void DownloadNextItem();
    void CheckIfAllInstalled();
    void GenerateCustomBlockIconsEvent();
    void ReceiveInit();
    void RenderCustomBlockLUT();
    void UpdateMaterialInstanceParameterCollection();
    void ExecuteUbergraph_CubeGameInstanceBP(int32 EntryPoint);
}; // Size: 0x3F4

#endif
