#ifndef UE4SS_SDK_CubeGameInstanceBP_HPP
#define UE4SS_SDK_CubeGameInstanceBP_HPP

class UCubeGameInstanceBP_C : public UCubeGameInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTexture2D* TorchTexture;
    TMap<int32, FSteamUGCItemId> UniqueIDToWorkshopID;
    TArray<FSteamWorkshopItemDetails> AllItemsFromCurrentUser;
    int32 PageToGet;
    class UTextureRenderTarget2D* RT;
    bool ShowOnlyLeaderboard;
    bool WentBackToMenu;
    int32 NumAllTextures;
    TMap<int32, float> AnimationSpeedMap;
    bool WMROffsetActivated;
    int32 TotalWorkshopItems;
    int32 PageToGet2;
    TArray<FString> WorkshopItemsToSubscribe;
    int32 IndexToDownload;
    bool L_AllInstalled;
    bool WorkshopInitialized;
    TArray<FString> WorkshopItemsToSubscribeReversed;
    FDateTime WorldGenerationStarted;
    TMap<int32, UTextureRenderTarget2D*> CustomBlockIcons;
    class ABlockPreviewRenderActorIngamePreview_C* IngameIconRenderActor;
    int32 T_Index;
    bool CustomBlockIconsInitialized;

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
};

#endif
