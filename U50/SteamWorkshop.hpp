#ifndef UE4SS_SDK_SteamWorkshop_HPP
#define UE4SS_SDK_SteamWorkshop_HPP

#include "SteamWorkshop_enums.hpp"

struct FSteamResult
{
    EResultBP Result;                                                                 // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FGeneralWorkshopItemResult : public FSteamResult
{
    FSteamUGCItemId workshopItemID;                                                   // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FUserFavoriteItemChangedResult : public FGeneralWorkshopItemResult
{
    bool bWasAddRequest;                                                              // 0x0010 (size: 0x1)

}; // Size: 0x18

class UCallbackProxyAddRemoveWorkshopItemFavorite : public UOnlineBlueprintCallProxyBase
{
    FCallbackProxyAddRemoveWorkshopItemFavoriteOnSuccess OnSuccess;                   // 0x0030 (size: 0x10)
    void SteamDelegateOnAddRemoveWorkshopItemFavorite(FUserFavoriteItemChangedResult Result);
    FCallbackProxyAddRemoveWorkshopItemFavoriteOnFailure OnFailure;                   // 0x0040 (size: 0x10)
    void SteamDelegateOnAddRemoveWorkshopItemFavorite(FUserFavoriteItemChangedResult Result);
    FCallbackProxyAddRemoveWorkshopItemFavoriteOnSteamInitFailure OnSteamInitFailure; // 0x0050 (size: 0x10)
    void SteamDelegateOnAddRemoveWorkshopItemFavorite(FUserFavoriteItemChangedResult Result);

    class UCallbackProxyAddRemoveWorkshopItemFavorite* SteamWorkshop_AddRemoveItemFavorite(const FSteamUGCItemId& ItemId, bool bAddToFavourites);
}; // Size: 0x70

struct FSteamWorkshopUpdateDetails
{
    FString Title;                                                                    // 0x0000 (size: 0x10)
    FString Description;                                                              // 0x0010 (size: 0x10)
    FString updateNotice;                                                             // 0x0020 (size: 0x10)
    ESteamSupportedLanguages updateLanguage;                                          // 0x0030 (size: 0x1)
    FString MetaData;                                                                 // 0x0038 (size: 0x10)
    ESteamItemVisibility Visibility;                                                  // 0x0048 (size: 0x1)
    TArray<FString> tags;                                                             // 0x0050 (size: 0x10)
    TArray<FSteamKeyValuePair> keyValueTags;                                          // 0x0060 (size: 0x10)
    FString contentDirectory;                                                         // 0x0070 (size: 0x10)
    FString previewImage;                                                             // 0x0080 (size: 0x10)
    TArray<FString> additionalImages;                                                 // 0x0090 (size: 0x10)
    TArray<FString> youtubeVideoIDs;                                                  // 0x00A0 (size: 0x10)
    TArray<FString> keysOfKeyValueTagsToRemove;                                       // 0x00B0 (size: 0x10)
    TArray<int32> indexOfPreviewToRemove;                                             // 0x00C0 (size: 0x10)

}; // Size: 0xD0

struct FUpdateWorkshopItemResult : public FGeneralWorkshopItemResult
{
    bool bUserNeedsToAcceptWorkshopLegalAgreement;                                    // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FCreateWorkshopItemResult : public FUpdateWorkshopItemResult
{
    FSteamWorkshopUpdateDetails itemDetails;                                          // 0x0018 (size: 0xD0)

}; // Size: 0xE8

class UCallbackProxyCreateWorkshopItem : public UOnlineBlueprintCallProxyBase
{
    FCallbackProxyCreateWorkshopItemOnSuccess OnSuccess;                              // 0x0030 (size: 0x10)
    void SteamDelegateOnCreateWorkshopItem(FCreateWorkshopItemResult Result);
    FCallbackProxyCreateWorkshopItemOnFailure OnFailure;                              // 0x0040 (size: 0x10)
    void SteamDelegateOnCreateWorkshopItem(FCreateWorkshopItemResult Result);
    FCallbackProxyCreateWorkshopItemOnSteamInitFailure OnSteamInitFailure;            // 0x0050 (size: 0x10)
    void SteamDelegateOnCreateWorkshopItem(FCreateWorkshopItemResult Result);

    class UCallbackProxyCreateWorkshopItem* SteamWorkshop_CreateItem(const FSteamWorkshopUpdateDetails& itemDetails);
}; // Size: 0x130

struct FGetUserVoteOnWorkshopItemResult : public FGeneralWorkshopItemResult
{
    EVoteType userVoteType;                                                           // 0x0010 (size: 0x1)

}; // Size: 0x18

class UCallbackProxyGetUserVoteOnWorkshopItem : public UOnlineBlueprintCallProxyBase
{
    FCallbackProxyGetUserVoteOnWorkshopItemOnSuccess OnSuccess;                       // 0x0030 (size: 0x10)
    void SteamDelegateOnGetUserVoteOnWorkshopItem(FGetUserVoteOnWorkshopItemResult Result);
    FCallbackProxyGetUserVoteOnWorkshopItemOnFailure OnFailure;                       // 0x0040 (size: 0x10)
    void SteamDelegateOnGetUserVoteOnWorkshopItem(FGetUserVoteOnWorkshopItemResult Result);
    FCallbackProxyGetUserVoteOnWorkshopItemOnSteamInitFailure OnSteamInitFailure;     // 0x0050 (size: 0x10)
    void SteamDelegateOnGetUserVoteOnWorkshopItem(FGetUserVoteOnWorkshopItemResult Result);

    class UCallbackProxyGetUserVoteOnWorkshopItem* SteamWorkshop_GetUserVoteOnItem(const FSteamUGCItemId& ItemId);
}; // Size: 0x68

struct FSteamUGCQueryParameterAllUserDetails
{
    int32 pageId;                                                                     // 0x0000 (size: 0x4)
    ESteamSupportedLanguages Language;                                                // 0x0004 (size: 0x1)
    int32 allowedCacheResponseTime;                                                   // 0x0008 (size: 0x4)
    int32 numDaysPlaytime;                                                            // 0x000C (size: 0x4)
    uint8 bReturnPreviewUrl;                                                          // 0x0010 (size: 0x1)
    uint8 bReturnKeyValueTags;                                                        // 0x0010 (size: 0x1)
    uint8 bReturnFullDescription;                                                     // 0x0010 (size: 0x1)
    uint8 bReturnMetaData;                                                            // 0x0010 (size: 0x1)
    uint8 bReturnChildIds;                                                            // 0x0010 (size: 0x1)
    uint8 bReturnAdditionalPreviews;                                                  // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FSteamUGCQueryParameterTagsAllUserDetails
{
    TArray<FSteamKeyValuePair> requiredKeyValueTags;                                  // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FSteamUGCQueryParameterTagsAllUser : public FSteamUGCQueryParameterTagsAllUserDetails
{
    TArray<FString> requiredTags;                                                     // 0x0010 (size: 0x10)
    TArray<FString> excludedTags;                                                     // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FSteamUGCQueryParameterAllUser : public FSteamUGCQueryParameterAllUserDetails
{
    FSteamUGCQueryParameterTagsAllUser tagParameter;                                  // 0x0018 (size: 0x30)
    bool bReturnTotalOnly;                                                            // 0x0048 (size: 0x1)
    bool bReturnIdsOnly;                                                              // 0x0049 (size: 0x1)

}; // Size: 0x50

struct FSteamUGCQueryParameterAll : public FSteamUGCQueryParameterAllUser
{
    FString searchText;                                                               // 0x0050 (size: 0x10)
    int32 rankedByTrendDays;                                                          // 0x0060 (size: 0x4)
    bool bMatchAnyTag;                                                                // 0x0064 (size: 0x1)
    EUGCQueryBP queryType;                                                            // 0x0065 (size: 0x1)
    EUGCMatchingUGCTypeBP fileType;                                                   // 0x0066 (size: 0x1)

}; // Size: 0x68

struct FItemPreviewDetails
{
    FString urlOrVideoId;                                                             // 0x0000 (size: 0x10)
    FString originalFileName;                                                         // 0x0010 (size: 0x10)
    EItemPreviewTypeBP ItemType;                                                      // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FSteamWorkshopItemDetails
{
    EResultBP Result;                                                                 // 0x0000 (size: 0x1)
    FSteamUGCItemId workshopItemID;                                                   // 0x0008 (size: 0x8)
    EWorkshopFileTypeBP fileType;                                                     // 0x0010 (size: 0x1)
    FSteamAppId appIdCreatingApp;                                                     // 0x0014 (size: 0x4)
    FSteamAppId appIdUsingApp;                                                        // 0x0018 (size: 0x4)
    FString Title;                                                                    // 0x0020 (size: 0x10)
    FString Description;                                                              // 0x0030 (size: 0x10)
    FUInt64 userIdItemCreator;                                                        // 0x0040 (size: 0x8)
    FDateTime timeStampCreated;                                                       // 0x0048 (size: 0x8)
    FDateTime timeStampUpdated;                                                       // 0x0050 (size: 0x8)
    FDateTime timeStampAddedToUserList;                                               // 0x0058 (size: 0x8)
    ESteamItemVisibility Visibility;                                                  // 0x0060 (size: 0x1)
    bool bItemIsBanned;                                                               // 0x0061 (size: 0x1)
    bool bItemWasAcceptedByDevelopers;                                                // 0x0062 (size: 0x1)
    bool bTagsTruncated;                                                              // 0x0063 (size: 0x1)
    TArray<FString> tags;                                                             // 0x0068 (size: 0x10)
    FSteamUGCHandle primaryFileHandle;                                                // 0x0078 (size: 0x8)
    FSteamUGCHandle previewImageHandle;                                               // 0x0080 (size: 0x8)
    FString primaryFileCloudFilename;                                                 // 0x0088 (size: 0x10)
    int32 primaryFileSize;                                                            // 0x0098 (size: 0x4)
    int32 previewImageSize;                                                           // 0x009C (size: 0x4)
    FString websiteURL;                                                               // 0x00A0 (size: 0x10)
    int32 votesUp;                                                                    // 0x00B0 (size: 0x4)
    int32 votesDown;                                                                  // 0x00B4 (size: 0x4)
    float score;                                                                      // 0x00B8 (size: 0x4)
    FUInt32 numChildren;                                                              // 0x00BC (size: 0x4)
    FString previewUrl;                                                               // 0x00C0 (size: 0x10)
    TArray<FItemPreviewDetails> additionalPreviews;                                   // 0x00D0 (size: 0x10)
    TArray<FSteamUGCItemId> childItemIds;                                             // 0x00E0 (size: 0x10)
    TArray<FSteamKeyValuePair> keyValueTags;                                          // 0x00F0 (size: 0x10)
    FString MetaData;                                                                 // 0x0100 (size: 0x10)

}; // Size: 0x110

struct FQueryWorkshopForItemsResult : public FSteamResult
{
    FSteamUGCQueryHandle queryHandle;                                                 // 0x0008 (size: 0x8)
    FUInt32 numResultsReturned;                                                       // 0x0010 (size: 0x4)
    FUInt32 numMatchingResults;                                                       // 0x0014 (size: 0x4)
    bool bHasMorePages;                                                               // 0x0018 (size: 0x1)
    bool bRetrievedDataWasCached;                                                     // 0x0019 (size: 0x1)
    TArray<FSteamWorkshopItemDetails> items;                                          // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FQueryWorkshopForAllItemsResult : public FQueryWorkshopForItemsResult
{
    FSteamUGCQueryParameterAll queryParams;                                           // 0x0030 (size: 0x68)

}; // Size: 0x98

class UCallbackProxyQueryWorkshopForAllItems : public UOnlineBlueprintCallProxyBase
{
    FCallbackProxyQueryWorkshopForAllItemsOnSuccess OnSuccess;                        // 0x0030 (size: 0x10)
    void SteamDelegateOnQueryWorkshopForAllItems(FQueryWorkshopForAllItemsResult Result);
    FCallbackProxyQueryWorkshopForAllItemsOnFailure OnFailure;                        // 0x0040 (size: 0x10)
    void SteamDelegateOnQueryWorkshopForAllItems(FQueryWorkshopForAllItemsResult Result);
    FCallbackProxyQueryWorkshopForAllItemsOnSteamInitFailure OnSteamInitFailure;      // 0x0050 (size: 0x10)
    void SteamDelegateOnQueryWorkshopForAllItems(FQueryWorkshopForAllItemsResult Result);

    class UCallbackProxyQueryWorkshopForAllItems* SteamWorkshop_QueryForAllItems(const FSteamUGCQueryParameterAll& Parameter);
}; // Size: 0xC8

struct FSteamUGCQueryParameterDetails : public FSteamUGCQueryParameterAllUserDetails
{
    FSteamUGCQueryParameterTagsAllUserDetails tagParameter;                           // 0x0018 (size: 0x10)
    TArray<FSteamUGCItemId> workshopItemIds;                                          // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FQueryWorkshopForItemDetailsResult : public FQueryWorkshopForItemsResult
{
    FSteamUGCQueryParameterDetails queryParams;                                       // 0x0030 (size: 0x38)

}; // Size: 0x68

class UCallbackProxyQueryWorkshopForItemDetails : public UOnlineBlueprintCallProxyBase
{
    FCallbackProxyQueryWorkshopForItemDetailsOnSuccess OnSuccess;                     // 0x0030 (size: 0x10)
    void SteamDelegateOnQueryWorkshopForItemDetails(FQueryWorkshopForItemDetailsResult Result);
    FCallbackProxyQueryWorkshopForItemDetailsOnFailure OnFailure;                     // 0x0040 (size: 0x10)
    void SteamDelegateOnQueryWorkshopForItemDetails(FQueryWorkshopForItemDetailsResult Result);
    FCallbackProxyQueryWorkshopForItemDetailsOnSteamInitFailure OnSteamInitFailure;   // 0x0050 (size: 0x10)
    void SteamDelegateOnQueryWorkshopForItemDetails(FQueryWorkshopForItemDetailsResult Result);

    class UCallbackProxyQueryWorkshopForItemDetails* SteamWorkshop_QueryForItemDetails(const FSteamUGCQueryParameterDetails& Parameter);
}; // Size: 0x98

struct FSteamUGCQueryParameterUser : public FSteamUGCQueryParameterAllUser
{
    FString filenameFilter;                                                           // 0x0050 (size: 0x10)
    EUserUGCListBP list;                                                              // 0x0060 (size: 0x1)
    EUGCMatchingUGCTypeBP Type;                                                       // 0x0061 (size: 0x1)
    EUserUGCListSortOrderBP sortOrder;                                                // 0x0062 (size: 0x1)

}; // Size: 0x68

struct FQueryWorkshopForUserItemsResult : public FQueryWorkshopForItemsResult
{
    FSteamUGCQueryParameterUser queryParams;                                          // 0x0030 (size: 0x68)

}; // Size: 0x98

class UCallbackProxyQueryWorkshopForUserItems : public UOnlineBlueprintCallProxyBase
{
    FCallbackProxyQueryWorkshopForUserItemsOnSuccess OnSuccess;                       // 0x0030 (size: 0x10)
    void SteamDelegateOnQueryWorkshopForUserItems(FQueryWorkshopForUserItemsResult Result);
    FCallbackProxyQueryWorkshopForUserItemsOnFailure OnFailure;                       // 0x0040 (size: 0x10)
    void SteamDelegateOnQueryWorkshopForUserItems(FQueryWorkshopForUserItemsResult Result);
    FCallbackProxyQueryWorkshopForUserItemsOnSteamInitFailure OnSteamInitFailure;     // 0x0050 (size: 0x10)
    void SteamDelegateOnQueryWorkshopForUserItems(FQueryWorkshopForUserItemsResult Result);

    class UCallbackProxyQueryWorkshopForUserItems* SteamWorkshop_QueryForUserItems(const FSteamUGCQueryParameterUser& Parameter);
}; // Size: 0xC8

struct FSetUserVoteOnWorkshopItemResult : public FGeneralWorkshopItemResult
{
    bool bVoteUp;                                                                     // 0x0010 (size: 0x1)

}; // Size: 0x18

class UCallbackProxySetUserVoteOnWorkshopItem : public UOnlineBlueprintCallProxyBase
{
    FCallbackProxySetUserVoteOnWorkshopItemOnSuccess OnSuccess;                       // 0x0030 (size: 0x10)
    void SteamDelegateOnSetUserVoteOnWorkshopItem(FSetUserVoteOnWorkshopItemResult Result);
    FCallbackProxySetUserVoteOnWorkshopItemOnFailure OnFailure;                       // 0x0040 (size: 0x10)
    void SteamDelegateOnSetUserVoteOnWorkshopItem(FSetUserVoteOnWorkshopItemResult Result);
    FCallbackProxySetUserVoteOnWorkshopItemOnSteamInitFailure OnSteamInitFailure;     // 0x0050 (size: 0x10)
    void SteamDelegateOnSetUserVoteOnWorkshopItem(FSetUserVoteOnWorkshopItemResult Result);

    class UCallbackProxySetUserVoteOnWorkshopItem* SteamWorkshop_SetUserVoteOnItem(const FSteamUGCItemId& ItemId, bool bVoteUp);
}; // Size: 0x70

class UCallbackProxyStartStopWorkshopItemsPlaytimeTracking : public UOnlineBlueprintCallProxyBase
{
    FCallbackProxyStartStopWorkshopItemsPlaytimeTrackingOnSuccess OnSuccess;          // 0x0030 (size: 0x10)
    void SteamDelegateOnStartStopWorkshopItemsPlaytimeTracking(FSteamResult Result);
    FCallbackProxyStartStopWorkshopItemsPlaytimeTrackingOnFailure OnFailure;          // 0x0040 (size: 0x10)
    void SteamDelegateOnStartStopWorkshopItemsPlaytimeTracking(FSteamResult Result);
    FCallbackProxyStartStopWorkshopItemsPlaytimeTrackingOnSteamInitFailure OnSteamInitFailure; // 0x0050 (size: 0x10)
    void SteamDelegateOnStartStopWorkshopItemsPlaytimeTracking(FSteamResult Result);

    class UCallbackProxyStartStopWorkshopItemsPlaytimeTracking* SteamWorkshop_StartStopItemsPlaytimeTracking(const TArray<FSteamUGCItemId>& itemIds, bool bStartPlaytimeTracking);
}; // Size: 0x78

class UCallbackProxyStopWorkshopItemsPlaytimeTrackingAllItems : public UOnlineBlueprintCallProxyBase
{
    FCallbackProxyStopWorkshopItemsPlaytimeTrackingAllItemsOnSuccess OnSuccess;       // 0x0030 (size: 0x10)
    void SteamDelegateOnStopWorkshopPlaytimeTrackingAllItems(FSteamResult Result);
    FCallbackProxyStopWorkshopItemsPlaytimeTrackingAllItemsOnFailure OnFailure;       // 0x0040 (size: 0x10)
    void SteamDelegateOnStopWorkshopPlaytimeTrackingAllItems(FSteamResult Result);
    FCallbackProxyStopWorkshopItemsPlaytimeTrackingAllItemsOnSteamInitFailure OnSteamInitFailure; // 0x0050 (size: 0x10)
    void SteamDelegateOnStopWorkshopPlaytimeTrackingAllItems(FSteamResult Result);

    class UCallbackProxyStopWorkshopItemsPlaytimeTrackingAllItems* SteamWorkshop_StopPlaytimeTrackingAllItems();
}; // Size: 0x60

class UCallbackProxySubscribeUnsubscribeWorkshopItem : public UOnlineBlueprintCallProxyBase
{
    FCallbackProxySubscribeUnsubscribeWorkshopItemOnSuccess OnSuccess;                // 0x0030 (size: 0x10)
    void SteamDelegateOnSubscribeUnsubscribeWorkshopItem(FGeneralWorkshopItemResult Result);
    FCallbackProxySubscribeUnsubscribeWorkshopItemOnFailure OnFailure;                // 0x0040 (size: 0x10)
    void SteamDelegateOnSubscribeUnsubscribeWorkshopItem(FGeneralWorkshopItemResult Result);
    FCallbackProxySubscribeUnsubscribeWorkshopItemOnSteamInitFailure OnSteamInitFailure; // 0x0050 (size: 0x10)
    void SteamDelegateOnSubscribeUnsubscribeWorkshopItem(FGeneralWorkshopItemResult Result);

    class UCallbackProxySubscribeUnsubscribeWorkshopItem* SteamWorkshop_SubscribeUnsubscribeItem(const FSteamUGCItemId& ItemId, bool bSubscribe);
}; // Size: 0x70

class UCallbackProxyUpdateWorkshopItem : public UOnlineBlueprintCallProxyBase
{
    FCallbackProxyUpdateWorkshopItemOnUpdateComplete OnUpdateComplete;                // 0x0030 (size: 0x10)
    void SteamDelegateOnUpdateWorkshopItem(FUpdateWorkshopItemResult Result);
    FCallbackProxyUpdateWorkshopItemOnFailure OnFailure;                              // 0x0040 (size: 0x10)
    void SteamDelegateOnUpdateWorkshopItem(FUpdateWorkshopItemResult Result);
    FCallbackProxyUpdateWorkshopItemOnSteamInitFailure OnSteamInitFailure;            // 0x0050 (size: 0x10)
    void SteamDelegateOnUpdateWorkshopItem(FUpdateWorkshopItemResult Result);

    class UCallbackProxyUpdateWorkshopItem* SteamWorkshop_UpdateItem(const FSteamUGCItemId& ItemId, const FSteamWorkshopUpdateDetails& updateDetails, const FSteamWorkshop_UpdateItemOnUpdateStarted& onUpdateStarted);
}; // Size: 0x148

struct FWorkshopItemDownloadInfo
{
    FUInt64 bytesCurrent;                                                             // 0x0000 (size: 0x8)
    FUInt64 bytesTotal;                                                               // 0x0008 (size: 0x8)
    int32 megaBytesCurrent;                                                           // 0x0010 (size: 0x4)
    int32 megaBytesTotal;                                                             // 0x0014 (size: 0x4)
    float percentageFinished;                                                         // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FWorkshopItemUpdateInfo : public FWorkshopItemDownloadInfo
{
    EItemUpdateStatusBP status;                                                       // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FSteamWorkshopItemInstallInfo
{
    FUInt64 sizeOnDiskBytes;                                                          // 0x0000 (size: 0x8)
    int32 sizeOnDiskMBytes;                                                           // 0x0008 (size: 0x4)
    FString Directory;                                                                // 0x0010 (size: 0x10)
    FDateTime timeStampLastUpdate;                                                    // 0x0020 (size: 0x8)

}; // Size: 0x28

class USteamWorkshopLibrary : public UBlueprintFunctionLibrary
{

    int32 SteamWorkshop_UpdateTitleLengthMin_FromConfig();
    int32 SteamWorkshop_UpdateDescriptionLengthMin_FromConfig();
    void SteamWorkshop_SuspendResumeDownloads(const bool bDoSuspend);
    EResultBP SteamWorkshop_SetServerDownloadDirectory(const FSteamDepotId& serverDepotId, FString Directory);
    void SteamWorkshop_GetSubscribedItems(const int32 maxNumItemsToReturn, TArray<FSteamUGCItemId>& outItems);
    int32 SteamWorkshop_GetNumSubscribedItems();
    void SteamWorkshop_GetItemUpdateProgress(const FSteamUGCUpdateHandle& updateHandle, FWorkshopItemUpdateInfo& Info);
    bool SteamWorkshop_GetItemStateFlag(const FSteamUGCItemId& ItemId, const EItemStateBP flagToQuery);
    TArray<EItemStateBP> SteamWorkshop_GetItemState(const FSteamUGCItemId& ItemId);
    bool SteamWorkshop_GetItemQueryStatistic(const FSteamUGCQueryHandle& queryHandle, const int32 ItemIndex, const TEnumAsByte<EItemStatisticBP> statToRetrieve, FUInt64& StatValue);
    EResultBP SteamWorkshop_GetItemInstallInfo(const FSteamUGCItemId& ItemId, FSteamWorkshopItemInstallInfo& Info);
    EResultBP SteamWorkshop_GetItemDownloadInfo(const FSteamUGCItemId& ItemId, FWorkshopItemDownloadInfo& downloadInfo);
    EResultBP SteamWorkshop_DownloadItem(const FSteamUGCItemId& ItemId, bool bHighPriority);
    void SteamWorkshop_ActivateGameOverlayToWorkshopItem(const FSteamUGCItemId& ItemId);
    bool SteamDelegate_OnWorkshopItemDownloaded_Unbind(FSteamDelegate_OnWorkshopItemDownloaded_UnbindDelegateToCall delegateToCall);
    bool SteamDelegate_OnWorkshopItemDownloaded_Bind(FSteamDelegate_OnWorkshopItemDownloaded_BindDelegateToCall delegateToCall);
    void PrintWorkshopItemDetails(const FSteamWorkshopItemDetails& itemDetails, float DisplayTime, FLinearColor Color, bool bPrintToScreen, bool bPrintToLog);
    FSteamWorkshopUpdateDetails MakeSteamWorkshopUpdateDetails(const FString Title, const FString Description, const FString updateNotice, const FString MetaData, const TArray<FString>& tags, const TArray<FSteamKeyValuePair>& keyValueTags, const FString contentDirectory, const FString previewImage, const TArray<FString>& additionalImages, const TArray<FString>& youtubeVideoIDs, const TArray<FString>& keysOfKeyValueTagsToRemove, const TArray<int32>& indexOfPreviewToRemove, const ESteamSupportedLanguages updateLanguage, const ESteamItemVisibility Visibility);
    FSteamUGCQueryParameterTagsAllUserDetails MakeSteamUGCQueryParameterTagsAllUserDetails(const TArray<FSteamKeyValuePair>& requiredKeyValueTags);
    FSteamUGCQueryParameterTagsAllUser MakeSteamUGCQueryParameterTagsAllUser(const TArray<FString>& requiredTags, const TArray<FString>& excludedTags, const TArray<FSteamKeyValuePair>& requiredKeyValueTags);
}; // Size: 0x28

struct FDownloadItemResult : public FGeneralWorkshopItemResult
{
    FUInt32 AppID;                                                                    // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FGetAppdependencyResult : public FGeneralWorkshopItemResult
{
    TArray<FSteamAppId> dependencyApps;                                               // 0x0010 (size: 0x10)
    bool bAllAppDependenciesReturned;                                                 // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FAddRemoveItemDependencyResult : public FGeneralWorkshopItemResult
{
    FSteamUGCItemId dependendItemId;                                                  // 0x0010 (size: 0x8)
    bool bAddDependency;                                                              // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FAddRemoveAppDependencyResult : public FDownloadItemResult
{
    bool bAddDependency;                                                              // 0x0018 (size: 0x1)

}; // Size: 0x20

#endif
