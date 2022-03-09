#ifndef UE4SS_SDK_UWorksWeb_HPP
#define UE4SS_SDK_UWorksWeb_HPP

#include "UWorksWeb_enums.hpp"

class UUWorksInterfaceWeb : public UUWorksInterface
{
}; // Size: 0x28

class UUWorksInterfaceWebApps : public UUWorksInterfaceWeb
{

    void UpToDateCheckMinimal(int32 AppID, int32 Version, const FUpToDateCheckMinimalDelegate& Delegate);
    class UUWorksRequestWebUpToDateCheck* UpToDateCheck();
    void SetAppBuildLiveMinimal(FString Key, int32 AppID, int32 BuildID, FString BetaKey, FString Description, const FSetAppBuildLiveMinimalDelegate& Delegate);
    class UUWorksRequestWebSetAppBuildLive* SetAppBuildLive();
    void GetServersAtAddressMinimal(FString Addr, const FGetServersAtAddressMinimalDelegate& Delegate);
    class UUWorksRequestWebGetServersAtAddress* GetServersAtAddress();
    void GetServerListMinimal(FString Key, FString Filter, int32 Limit, const FGetServerListMinimalDelegate& Delegate);
    class UUWorksRequestWebGetServerList* GetServerList();
    void GetPlayersBannedMinimal(FString Key, int32 AppID, const FGetPlayersBannedMinimalDelegate& Delegate);
    class UUWorksRequestWebGetPlayersBanned* GetPlayersBanned();
    void GetCheatingReportsListMinimal(FString Key, int32 AppID, int32 TimeBegin, int32 TimeEnd, bool bIncludeReports, bool bIncludeBans, FString ReportIDMin, const FGetCheatingReportsListMinimalDelegate& Delegate);
    class UUWorksRequestWebGetCheatingReportsList* GetCheatingReportsList();
    void GetAppListMinimal(const FGetAppListMinimalDelegate& Delegate);
    class UUWorksRequestWebGetAppList* GetAppList();
    void GetAppDepotVersionsMinimal(FString Key, int32 AppID, const FGetAppDepotVersionsMinimalDelegate& Delegate);
    class UUWorksRequestWebGetAppDepotVersions* GetAppDepotVersions();
    void GetAppBuildsMinimal(FString Key, int32 AppID, int32 Count, const FGetAppBuildsMinimalDelegate& Delegate);
    class UUWorksRequestWebGetAppBuilds* GetAppBuilds();
    void GetAppBetasMinimal(FString Key, int32 AppID, const FGetAppBetasMinimalDelegate& Delegate);
    class UUWorksRequestWebGetAppBetas* GetAppBetas();
}; // Size: 0x28

class UUWorksInterfaceWebBroadcast : public UUWorksInterfaceWeb
{

    void PostGameDataFrameMinimal(FString Key, int32 AppID, FUWorksSteamID SteamID, FString BroadcastID, FString FrameData, const FPostGameDataFrameMinimalDelegate& Delegate);
    class UUWorksRequestWebPostGameDataFrame* PostGameDataFrame();
}; // Size: 0x28

class UUWorksInterfaceWebCheatReporting : public UUWorksInterfaceWeb
{

    void StartSecureMultiplayerSessionMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, const FStartSecureMultiplayerSessionMinimalDelegate& Delegate);
    class UUWorksRequestWebStartSecureMultiplayerSession* StartSecureMultiplayerSession();
    void RequestVacStatusForUserMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, FString SessionId, const FRequestVacStatusForUserMinimalDelegate& Delegate);
    class UUWorksRequestWebRequestVacStatusForUser* RequestVacStatusForUser();
    void RequestPlayerGameBanMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, FUWorksSteamID ReportID, FString CheatDescription, int32 Duration, bool bDelayBan, const FRequestPlayerGameBanMinimalDelegate& Delegate);
    class UUWorksRequestWebRequestPlayerGameBan* RequestPlayerGameBan();
    void ReportPlayerCheatingMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, FUWorksSteamID SteamIDReporter, int32 AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32 GameMode, int32 SuspicionStartTime, int32 Severity, const FReportPlayerCheatingMinimalDelegate& Delegate);
    class UUWorksRequestWebReportPlayerCheating* ReportPlayerCheating();
    void ReportCheatDataMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, FString PathAndFileName, FString WebCheatURL, FString TimeNow, FString TimeStarted, FString TimeStopped, FString CheatName, int32 GameProcessID, int32 CheatProcessID, FString CheatParamA, FString CheatParamB, const FReportCheatDataMinimalDelegate& Delegate);
    class UUWorksRequestWebReportCheatData* ReportCheatData();
    void RemovePlayerGameBanMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, const FRemovePlayerGameBanMinimalDelegate& Delegate);
    class UUWorksRequestWebRemovePlayerGameBan* RemovePlayerGameBan();
    void GetCheatingReportsMinimal(FString Key, int32 AppID, int32 TimeEnd, int32 TimeBegin, FString ReportIDMin, bool bIncludeReports, bool bIncludeBans, FUWorksSteamID SteamID, const FGetCheatingReportsMinimalDelegate& Delegate);
    class UUWorksRequestWebGetCheatingReports* GetCheatingReports();
    void EndSecureMultiplayerSessionMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, FString SessionId, const FEndSecureMultiplayerSessionMinimalDelegate& Delegate);
    class UUWorksRequestWebEndSecureMultiplayerSession* EndSecureMultiplayerSession();
}; // Size: 0x28

class UUWorksInterfaceWebCommunity : public UUWorksInterfaceWeb
{

    void ReportAbuseMinimal(FString Key, FUWorksSteamID SteamIDActor, FUWorksSteamID SteamIDTarget, int32 AppID, uint8 AbuseType, uint8 ContentType, FString Description, FString GID, const FReportAbuseMinimalDelegate& Delegate);
    class UUWorksRequestWebReportAbuse* ReportAbuse();
}; // Size: 0x28

class UUWorksInterfaceWebEcon : public UUWorksInterfaceWeb
{

    void GetTradeOffersSummaryMinimal(FString Key, int32 TimeLastVisit, const FGetTradeOffersSummaryMinimalDelegate& Delegate);
    class UUWorksRequestWebGetTradeOffersSummary* GetTradeOffersSummary();
    void GetTradeOffersMinimal(FString Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescription, FString Language, bool bActiveOnly, bool bHistoricalOnly, int32 TimeHistoricalCutoff, const FGetTradeOffersMinimalDelegate& Delegate);
    class UUWorksRequestWebGetTradeOffers* GetTradeOffers();
    void GetTradeOfferMinimal(FString Key, FString TradeOfferID, FString Language, const FGetTradeOfferMinimalDelegate& Delegate);
    class UUWorksRequestWebGetTradeOffer* GetTradeOffer();
    void GetTradeHistoryMinimal(FString Key, int32 MaxTrades, int32 StartAfterTime, FString StartAfterTradeID, bool bNavigatingBack, bool bGetDescription, FString Language, bool bIncludeFailed, bool bIncludeTotal, const FGetTradeHistoryMinimalDelegate& Delegate);
    class UUWorksRequestWebGetTradeHistory* GetTradeHistory();
    void FlushInventoryCacheMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, FString ContextID, const FFlushInventoryCacheMinimalDelegate& Delegate);
    class UUWorksRequestWebFlushInventoryCache* FlushInventoryCache();
    void FlushContextCacheMinimal(FString Key, int32 AppID, const FFlushContextCacheMinimalDelegate& Delegate);
    class UUWorksRequestWebFlushContextCache* FlushContextCache();
    void FlushAssetAppearanceCacheMinimal(FString Key, int32 AppID, const FFlushAssetAppearanceCacheMinimalDelegate& Delegate);
    class UUWorksRequestWebFlushAssetAppearanceCache* FlushAssetAppearanceCache();
    void DeclineTradeOfferMinimal(FString Key, FString TradeOfferID, const FDeclineTradeOfferMinimalDelegate& Delegate);
    class UUWorksRequestWebDeclineTradeOffer* DeclineTradeOffer();
    void CancelTradeOfferMinimal(FString Key, FString TradeOfferID, const FCancelTradeOfferMinimalDelegate& Delegate);
    class UUWorksRequestWebCancelTradeOffer* CancelTradeOffer();
}; // Size: 0x28

class UUWorksInterfaceWebEconMarket : public UUWorksInterfaceWeb
{

    void GetPopularMinimal(FString Key, FString Language, int32 Rows, int32 Start, int32 FilterAppID, int32 ECurrency, const FGetPopularMinimalDelegate& Delegate);
    class UUWorksRequestWebGetPopular* GetPopular();
    void GetMarketEligibilityMinimal(FString Key, FUWorksSteamID SteamID, const FGetMarketEligibilityMinimalDelegate& Delegate);
    class UUWorksRequestWebGetMarketEligibility* GetMarketEligibility();
    void GetAssetIDMinimal(FString Key, int32 AppID, FString ListingID, const FGetAssetIDMinimalDelegate& Delegate);
    class UUWorksRequestWebGetAssetID* GetAssetID();
    void CancelAppListingsForUserMinimal(FString Key, int32 AppID, FUWorksSteamID SteamID, bool bSynchronous, const FCancelAppListingsForUserMinimalDelegate& Delegate);
    class UUWorksRequestWebCancelAppListingsForUser* CancelAppListingsForUser();
}; // Size: 0x28

class UUWorksInterfaceWebEconomy : public UUWorksInterfaceWeb
{

    void StartTradeMinimal(FString Key, int32 AppID, FUWorksSteamID PartyA, FUWorksSteamID PartyB, const FStartTradeMinimalDelegate& Delegate);
    class UUWorksRequestWebStartTrade* StartTrade();
    void StartAssetTransactionMinimal(FString Key, int32 AppID, FUWorksSteamID SteamID, FString AssetID0, int32 AssetQuantity0, FString Currency, FString Language, FString IPAddress, FString Referrer, bool bClientAuth, const FStartAssetTransactionMinimalDelegate& Delegate);
    class UUWorksRequestWebStartAssetTransaction* StartAssetTransaction();
    void GetMarketPricesMinimal(FString Key, int32 AppID, const FGetMarketPricesMinimalDelegate& Delegate);
    class UUWorksRequestWebGetMarketPrices* GetMarketPrices();
    void GetExportedAssetsForUserMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, FString ContextID, const FGetExportedAssetsForUserMinimalDelegate& Delegate);
    class UUWorksRequestWebGetExportedAssetsForUser* GetExportedAssetsForUser();
    void GetAssetPricesMinimal(FString Key, int32 AppID, FString Currency, FString Language, const FGetAssetPricesMinimalDelegate& Delegate);
    class UUWorksRequestWebGetAssetPrices* GetAssetPrices();
    void GetAssetClassInfoMinimal(FString Key, int32 AppID, int32 ClassCount, FString ClassID0, FString Language, FString InstanceID0, const FGetAssetClassInfoMinimalDelegate& Delegate);
    class UUWorksRequestWebGetAssetClassInfo* GetAssetClassInfo();
    void FinalizeAssetTransactionMinimal(FString Key, int32 AppID, FUWorksSteamID SteamID, FString TxnID, FString Language, const FFinalizeAssetTransactionMinimalDelegate& Delegate);
    class UUWorksRequestWebFinalizeAssetTransaction* FinalizeAssetTransaction();
    void CanTradeMinimal(FString Key, int32 AppID, FUWorksSteamID SteamID, FUWorksSteamID TargetId, const FCanTradeMinimalDelegate& Delegate);
    class UUWorksRequestWebCanTrade* CanTrade();
}; // Size: 0x28

class UUWorksInterfaceWebGameInventory : public UUWorksInterfaceWeb
{

    void SupportGetAssetHistoryMinimal(FString Key, int32 AppID, FString AssetID, FString ContextID, const FSupportGetAssetHistoryMinimalDelegate& Delegate);
    class UUWorksRequestWebSupportGetAssetHistory* SupportGetAssetHistory();
    void HistoryExecuteCommandsMinimal(FString Key, int32 AppID, FUWorksSteamID SteamID, FString ContextID, FString ActorId, const FHistoryExecuteCommandsMinimalDelegate& Delegate);
    class UUWorksRequestWebHistoryExecuteCommands* HistoryExecuteCommands();
    void GetUserHistoryMinimal(FString Key, int32 AppID, FUWorksSteamID SteamID, FString ContextID, int32 StartTime, int32 EndTime, const FGetUserHistoryMinimalDelegate& Delegate);
    class UUWorksRequestWebGetUserHistory* GetUserHistory();
    void GetHistoryCommandDetailsMinimal(FString Key, int32 AppID, FUWorksSteamID SteamID, FString Command, FString ContextID, FString Arguments, const FGetHistoryCommandDetailsMinimalDelegate& Delegate);
    class UUWorksRequestWebGetHistoryCommandDetails* GetHistoryCommandDetails();
}; // Size: 0x28

struct FUWorksTitle
{
}; // Size: 0x1

struct FUWorksUsers
{
}; // Size: 0x1

struct FUWorksSessions
{
}; // Size: 0x1

class UUWorksInterfaceWebGameNotifications : public UUWorksInterfaceWeb
{

    void UpdateSessionMinimal(FString Key, FString SessionId, int32 AppID, FUWorksTitle Title, FUWorksUsers Users, FUWorksSteamID SteamID, const FUpdateSessionMinimalDelegate& Delegate);
    class UUWorksRequestWebUpdateSession* UpdateSession();
    void RequestNotificationsMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, const FRequestNotificationsMinimalDelegate& Delegate);
    class UUWorksRequestWebRequestNotifications* RequestNotifications();
    void GetSessionDetailsForAppMinimal(FString Key, FUWorksSessions Sessions, int32 AppID, FString Language, const FGetSessionDetailsForAppMinimalDelegate& Delegate);
    class UUWorksRequestWebGetSessionDetailsForApp* GetSessionDetailsForApp();
    void EnumerateSessionsForAppMinimal(FString Key, int32 AppID, FUWorksSteamID SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, FString Language, const FEnumerateSessionsForAppMinimalDelegate& Delegate);
    class UUWorksRequestWebEnumerateSessionsForApp* EnumerateSessionsForApp();
    void DeleteSessionMinimal(FString Key, FString SessionId, int32 AppID, FUWorksSteamID SteamID, const FDeleteSessionMinimalDelegate& Delegate);
    void DeleteSessionBatchMinimal(FString Key, FString SessionId, int32 AppID, const FDeleteSessionBatchMinimalDelegate& Delegate);
    class UUWorksRequestWebDeleteSessionBatch* DeleteSessionBatch();
    class UUWorksRequestWebDeleteSession* DeleteSession();
    void CreateSessionMinimal(FString Key, int32 AppID, FString Context, FUWorksTitle Title, FUWorksUsers Users, FUWorksSteamID SteamID, const FCreateSessionMinimalDelegate& Delegate);
    class UUWorksRequestWebCreateSession* CreateSession();
}; // Size: 0x28

class UUWorksInterfaceWebGameServers : public UUWorksInterfaceWeb
{

    void SetMemoMinimal(FString Key, FUWorksSteamID SteamID, FString Memo, const FSetMemoMinimalDelegate& Delegate);
    class UUWorksRequestWebSetMemo* SetMemo();
    void SetBanStatusMinimal(FString Key, FUWorksSteamID SteamID, bool bBanned, int32 BanSeconds, const FSetBanStatusMinimalDelegate& Delegate);
    class UUWorksRequestWebSetBanStatus* SetBanStatus();
    void ResetLoginTokenMinimal(FString Key, FUWorksSteamID SteamID, const FResetLoginTokenMinimalDelegate& Delegate);
    class UUWorksRequestWebResetLoginToken* ResetLoginToken();
    void QueryLoginTokenMinimal(FString Key, FString LoginToken, const FQueryLoginTokenMinimalDelegate& Delegate);
    class UUWorksRequestWebQueryLoginToken* QueryLoginToken();
    void GetServerSteamIDsByIPMinimal(FString Key, FString ServerIPs, const FGetServerSteamIDsByIPMinimalDelegate& Delegate);
    class UUWorksRequestWebGetServerSteamIDsByIP* GetServerSteamIDsByIP();
    void GetServerIPsBySteamIDMinimal(FString Key, FUWorksSteamID ServerSteamID, const FGetServerIPsBySteamIDMinimalDelegate& Delegate);
    class UUWorksRequestWebGetServerIPsBySteamID* GetServerIPsBySteamID();
    void GetAccountPublicInfoMinimal(FString Key, FUWorksSteamID SteamID, const FGetAccountPublicInfoMinimalDelegate& Delegate);
    class UUWorksRequestWebGetAccountPublicInfo* GetAccountPublicInfo();
    void GetAccountListMinimal(FString Key, const FGetAccountListMinimalDelegate& Delegate);
    class UUWorksRequestWebGetAccountList* GetAccountList();
    void DeleteAccountMinimal(FString Key, FUWorksSteamID SteamID, const FDeleteAccountMinimalDelegate& Delegate);
    class UUWorksRequestWebDeleteAccount* DeleteAccount();
    void CreateAccountMinimal(FString Key, int32 AppID, FString Memo, const FCreateAccountMinimalDelegate& Delegate);
    class UUWorksRequestWebCreateAccount* CreateAccount();
}; // Size: 0x28

class UUWorksInterfaceWebGameServerStats : public UUWorksInterfaceWeb
{

    void GetGameServerPlayerStatsForGameMinimal(FString Key, FUWorksGameID GameID, int32 AppID, FString RangeStart, FString RangeEnd, int32 MaxResults, const FGetGameServerPlayerStatsForGameMinimalDelegate& Delegate);
    class UUWorksRequestWebGetGameServerPlayerStatsForGame* GetGameServerPlayerStatsForGame();
}; // Size: 0x28

class UUWorksInterfaceWebInventory : public UUWorksInterfaceWeb
{

    void GetQuantityMinimal(FString Key, int32 AppID, FUWorksSteamID SteamID, FUWorksSteamItemDef ItemDefID, bool bForce, const FGetQuantityMinimalDelegate& Delegate);
    class UUWorksRequestWebGetQuantity* GetQuantity();
    void GetPriceSheetMinimal(FString Key, int32 ECurrency, const FGetPriceSheetMinimalDelegate& Delegate);
    class UUWorksRequestWebGetPriceSheet* GetPriceSheet();
    void GetItemDefsMinimal(FString Key, int32 AppID, FString ModifiedSince, TArray<FUWorksSteamItemDef> ItemDefIDs, TArray<FUWorksSteamItemDef> WorkshopIDs, int32 CacheMaxAgeSeconds, const FGetItemDefsMinimalDelegate& Delegate);
    class UUWorksRequestWebGetItemDefs* GetItemDefs();
    void GetInventoryMinimal(FString Key, int32 AppID, FUWorksSteamID SteamID, const FGetInventoryMinimalDelegate& Delegate);
    class UUWorksRequestWebGetInventory* GetInventory();
    void ExchangeItemMinimal(FString Key, int32 AppID, FUWorksSteamID SteamID, TArray<FUWorksSteamItemInstanceID> MaterialsItemID, TArray<int32> MaterialsQuantity, FUWorksSteamItemDef OutputItemDefID, const FExchangeItemMinimalDelegate& Delegate);
    class UUWorksRequestWebExchangeItem* ExchangeItem();
    void ConsumeItemMinimal(FString Key, int32 AppID, FUWorksSteamItemInstanceID ItemId, int32 Quantity, FUWorksSteamID SteamID, FString requestID, const FConsumeItemMinimalDelegate& Delegate);
    class UUWorksRequestWebConsumeItem* ConsumeItem();
    void ConsolidateMinimal(FString Key, int32 AppID, FUWorksSteamID SteamID, TArray<FUWorksSteamItemDef> ItemDefID, bool bForce, const FConsolidateMinimalDelegate& Delegate);
    class UUWorksRequestWebConsolidate* Consolidate();
    void AddPromoItemMinimal(FString Key, int32 AppID, FUWorksSteamItemDef ItemDefID, FString ItemPropsJSON, FUWorksSteamID SteamID, bool bNotify, FString requestID, const FAddPromoItemMinimalDelegate& Delegate);
    class UUWorksRequestWebAddPromoItem* AddPromoItem();
    void AddItemMinimal(FString Key, int32 AppID, TArray<FUWorksSteamItemDef> ItemDefID, FString ItemPropsJSON, FUWorksSteamID SteamID, bool bNotify, FString requestID, const FAddItemMinimalDelegate& Delegate);
    class UUWorksRequestWebAddItem* AddItem();
}; // Size: 0x28

class UUWorksInterfaceWebLeaderboards : public UUWorksInterfaceWeb
{

    void SetLeaderboardScoreMinimal(FString Key, int32 AppID, int32 LeaderboardID, FUWorksSteamID SteamID, int32 score, FString ScoreMethod, TArray<uint8> Details, const FSetLeaderboardScoreMinimalDelegate& Delegate);
    class UUWorksRequestWebSetLeaderboardScore* SetLeaderboardScore();
    void ResetLeaderboardMinimal(FString Key, int32 AppID, int32 LeaderboardID, const FResetLeaderboardMinimalDelegate& Delegate);
    class UUWorksRequestWebResetLeaderboard* ResetLeaderboard();
    void GetLeaderboardsForGameMinimal(FString Key, int32 AppID, const FGetLeaderboardsForGameMinimalDelegate& Delegate);
    class UUWorksRequestWebGetLeaderboardsForGame* GetLeaderboardsForGame();
    void GetLeaderboardEntriesMinimal(FString Key, int32 AppID, int32 RangeStart, int32 RangeEnd, int32 LeaderboardID, int32 DataRequest, FUWorksSteamID SteamID, const FGetLeaderboardEntriesMinimalDelegate& Delegate);
    class UUWorksRequestWebGetLeaderboardEntries* GetLeaderboardEntries();
    void FindOrCreateLeaderboardMinimal(FString Key, int32 AppID, FString Name, FString SortMethod, FString DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads, const FFindOrCreateLeaderboardMinimalDelegate& Delegate);
    class UUWorksRequestWebFindOrCreateLeaderboard* FindOrCreateLeaderboard();
    void DeleteLeaderboardMinimal(FString Key, int32 AppID, FString Name, const FDeleteLeaderboardMinimalDelegate& Delegate);
    class UUWorksRequestWebDeleteLeaderboard* DeleteLeaderboard();
}; // Size: 0x28

class UUWorksInterfaceWebMicroTxn : public UUWorksInterfaceWeb
{

    void RefundTxnMinimal(FString Key, FString OrderID, int32 AppID, const FRefundTxnMinimalDelegate& Delegate);
    class UUWorksRequestWebRefundTxn* RefundTxn();
    void QueryTxnMinimal(FString Key, int32 AppID, FString OrderID, FString TransID, const FQueryTxnMinimalDelegate& Delegate);
    class UUWorksRequestWebQueryTxn* QueryTxn();
    void ProcessAgreementMinimal(FString Key, FString OrderID, FUWorksSteamID SteamID, FString AgreementID, int32 AppID, int32 Amount, FString Currency, const FProcessAgreementMinimalDelegate& Delegate);
    class UUWorksRequestWebProcessAgreement* ProcessAgreement();
    void InitTxnMinimal(FString Key, FString OrderID, FUWorksSteamID SteamID, int32 AppID, int32 ItemCount, FString Language, FString Currency, TArray<FUWorksSteamItemDef> itemIds, TArray<int32> Quantities, TArray<int32> Amounts, TArray<FString> Descriptions, TArray<FString> Categories, TArray<int32> AssociatedBundles, TArray<FString> BillingTypes, TArray<FString> StartDates, TArray<FString> EndDates, TArray<FString> Periods, TArray<int32> Frequencies, TArray<FString> RecurringAmounts, int32 BundleCount, TArray<int32> BundleIDs, TArray<int32> BundleQuantities, TArray<FString> BundleDescriptions, TArray<FString> BundleCategories, EUWorksUserSession UserSession, FString IPAddress, const FInitTxnMinimalDelegate& Delegate);
    class UUWorksRequestWebInitTxn* InitTxn();
    void GetUserInfoMinimal(FString Key, FUWorksSteamID SteamID, FString IPAddress, const FGetUserInfoMinimalDelegate& Delegate);
    class UUWorksRequestWebGetUserInfo* GetUserInfo();
    void GetUserAgreementInfoMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, const FGetUserAgreementInfoMinimalDelegate& Delegate);
    class UUWorksRequestWebGetUserAgreementInfo* GetUserAgreementInfo();
    void GetReportMinimal(FString Key, int32 AppID, FString Time, EUWorksReportType Type, int32 MaxResults, const FGetReportMinimalDelegate& Delegate);
    class UUWorksRequestWebGetReport* GetReport();
    void FinalizeTxnMinimal(FString Key, FString OrderID, int32 AppID, const FFinalizeTxnMinimalDelegate& Delegate);
    class UUWorksRequestWebFinalizeTxn* FinalizeTxn();
    void CancelAgreementMinimal(FString Key, FUWorksSteamID SteamID, FString AgreementID, int32 AppID, const FCancelAgreementMinimalDelegate& Delegate);
    class UUWorksRequestWebCancelAgreement* CancelAgreement();
    void AdjustAgreementMinimal(FString Key, FUWorksSteamID SteamID, FString AgreementID, int32 AppID, FString NextProcessDate, const FAdjustAgreementMinimalDelegate& Delegate);
    class UUWorksRequestWebAdjustAgreement* AdjustAgreement();
}; // Size: 0x28

class UUWorksInterfaceWebNews : public UUWorksInterfaceWeb
{

    void GetNewsForAppMinimal(int32 AppID, int32 MaxLength, int32 EndDate, int32 Count, FString Feeds, const FGetNewsForAppMinimalDelegate& Delegate);
    void GetNewsForAppAuthedMinimal(FString Key, int32 AppID, int32 MaxLength, int32 EndDate, int32 Count, FString Feeds, const FGetNewsForAppAuthedMinimalDelegate& Delegate);
    class UUWorksRequestWebGetNewsForAppAuthed* GetNewsForAppAuthed();
    class UUWorksRequestWebGetNewsForApp* GetNewsForApp();
}; // Size: 0x28

struct FUWorksPlaySessions
{
}; // Size: 0x1

class UUWorksInterfaceWebPlayer : public UUWorksInterfaceWeb
{

    void RecordOfflinePlaytimeMinimal(FUWorksSteamID SteamID, FString Ticket, FUWorksPlaySessions PlaySessions, const FRecordOfflinePlaytimeMinimalDelegate& Delegate);
    class UUWorksRequestWebRecordOfflinePlaytime* RecordOfflinePlaytime();
    void IsPlayingSharedGameMinimal(FString Key, FUWorksSteamID SteamID, int32 AppIDPlaying, const FIsPlayingSharedGameMinimalDelegate& Delegate);
    class UUWorksRequestWebIsPlayingSharedGame* IsPlayingSharedGame();
    void GetSteamLevelMinimal(FString Key, FUWorksSteamID SteamID, const FGetSteamLevelMinimalDelegate& Delegate);
    class UUWorksRequestWebGetSteamLevel* GetSteamLevel();
    void GetRecentlyPlayedGamesMinimal(FString Key, FUWorksSteamID SteamID, int32 Count, const FGetRecentlyPlayedGamesMinimalDelegate& Delegate);
    class UUWorksRequestWebGetRecentlyPlayedGames* GetRecentlyPlayedGames();
    void GetOwnedGamesMinimal(FString Key, FUWorksSteamID SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32> AppIDsFilter, const FGetOwnedGamesMinimalDelegate& Delegate);
    class UUWorksRequestWebGetOwnedGames* GetOwnedGames();
    void GetCommunityBadgeProgressMinimal(FString Key, FUWorksSteamID SteamID, int32 BadgeID, const FGetCommunityBadgeProgressMinimalDelegate& Delegate);
    class UUWorksRequestWebGetCommunityBadgeProgress* GetCommunityBadgeProgress();
    void GetBadgesMinimal(FString Key, FUWorksSteamID SteamID, const FGetBadgesMinimalDelegate& Delegate);
    class UUWorksRequestWebGetBadges* GetBadges();
}; // Size: 0x28

struct FUWorksRequiredKVTags
{
}; // Size: 0x1

class UUWorksInterfaceWebPublishedFile : public UUWorksInterfaceWeb
{

    void UpdateTagsMinimal(FString Key, FUWorksPublishedFileID PublishedFileID, int32 AppID, TArray<FString> AddTags, TArray<FString> RemoveTags, const FUpdateTagsMinimalDelegate& Delegate);
    class UUWorksRequestWebUpdateTags* UpdateTags();
    void SetDeveloperMetadataMinimal(FString Key, FUWorksPublishedFileID PublishedFileID, int32 AppID, FString MetaData, const FSetDeveloperMetadataMinimalDelegate& Delegate);
    class UUWorksRequestWebSetDeveloperMetadata* SetDeveloperMetadata();
    void QueryFilesMinimal(FString Key, uint8 queryType, int32 Page, int32 CreatorAppID, int32 AppID, TArray<FString> requiredTags, TArray<FString> excludedTags, TArray<FString> RequiredFlags, TArray<FString> OmittedFlags, FString searchText, uint8 fileType, FUWorksPublishedFileID ChildPublishedFileID, int32 Days, bool bIncludeRecentVotesOnly, FUWorksRequiredKVTags RequiredKVTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKVTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, int32 ReturnPlaytimeStats, int32 NumPerPage, bool bMatchAllTags, int32 CacheMaxAgeSeconds, int32 Language, bool bReturnMetaData, const FQueryFilesMinimalDelegate& Delegate);
    class UUWorksRequestWebQueryFiles* QueryFiles();
}; // Size: 0x28

class UUWorksInterfaceWebPublishedItemSearch : public UUWorksInterfaceWeb
{

    void ResultSetSummaryMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, TArray<FString> tags, TArray<FString> UserTags, const FResultSetSummaryMinimalDelegate& Delegate);
    class UUWorksRequestWebResultSetSummary* ResultSetSummary();
    void RankedByVoteMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 StartIndex, int32 Count, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, TArray<FString> tags, TArray<FString> UserTags, const FRankedByVoteMinimalDelegate& Delegate);
    class UUWorksRequestWebRankedByVote* RankedByVote();
    void RankedByTrendMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 StartIndex, int32 Count, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, int32 Days, TArray<FString> tags, TArray<FString> UserTags, const FRankedByTrendMinimalDelegate& Delegate);
    class UUWorksRequestWebRankedByTrend* RankedByTrend();
    void RankedByPublicationOrderMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 StartIndex, int32 Count, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, TArray<FString> tags, TArray<FString> UserTags, const FRankedByPublicationOrderMinimalDelegate& Delegate);
    class UUWorksRequestWebRankedByPublicationOrder* RankedByPublicationOrder();
}; // Size: 0x28

class UUWorksInterfaceWebPublishedItemVoting : public UUWorksInterfaceWeb
{

    void UserVoteSummaryMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<int32> PublishedFileIDs, const FUserVoteSummaryMinimalDelegate& Delegate);
    class UUWorksRequestWebUserVoteSummary* UserVoteSummary();
    void ItemVoteSummaryMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<int32> PublishedFileIDs, const FItemVoteSummaryMinimalDelegate& Delegate);
    class UUWorksRequestWebItemVoteSummary* ItemVoteSummary();
}; // Size: 0x28

class UUWorksInterfaceWebRemoteStorage : public UUWorksInterfaceWeb
{

    void UnsubscribePublishedFileMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 PublishedFileID, const FUnsubscribePublishedFileMinimalDelegate& Delegate);
    class UUWorksRequestWebUnsubscribePublishedFile* UnsubscribePublishedFile();
    void SubscribePublishedFileMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 PublishedFileID, const FSubscribePublishedFileMinimalDelegate& Delegate);
    class UUWorksRequestWebSubscribePublishedFile* SubscribePublishedFile();
    void SetUGCUsedByGCMinimal(FString Key, FUWorksSteamID SteamID, int32 UGCID, int32 AppID, bool bUsed, const FSetUGCUsedByGCMinimalDelegate& Delegate);
    class UUWorksRequestWebSetUGCUsedByGC* SetUGCUsedByGC();
    void GetUGCFileDetailsMinimal(FString Key, FUWorksSteamID SteamID, int32 UGCID, int32 AppID, const FGetUGCFileDetailsMinimalDelegate& Delegate);
    class UUWorksRequestWebGetUGCFileDetails* GetUGCFileDetails();
    void GetPublishedFileDetailsMinimal(int32 ItemCount, TArray<int32> PublishedFileIDs, const FGetPublishedFileDetailsMinimalDelegate& Delegate);
    class UUWorksRequestWebGetPublishedFileDetails* GetPublishedFileDetails();
    void GetCollectionDetailsMinimal(int32 CollectionCount, TArray<int32> PublishedFileIDs, const FGetCollectionDetailsMinimalDelegate& Delegate);
    class UUWorksRequestWebGetCollectionDetails* GetCollectionDetails();
    void EnumerateUserSubscribedFilesMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 ListType, const FEnumerateUserSubscribedFilesMinimalDelegate& Delegate);
    class UUWorksRequestWebEnumerateUserSubscribedFiles* EnumerateUserSubscribedFiles();
    void EnumerateUserPublishedFilesMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, const FEnumerateUserPublishedFilesMinimalDelegate& Delegate);
    class UUWorksRequestWebEnumerateUserPublishedFiles* EnumerateUserPublishedFiles();
}; // Size: 0x28

class UUWorksInterfaceWebUser : public UUWorksInterfaceWeb
{

    void ResolveVanityURLMinimal(FString Key, FString VanityURL, uint8 URLType, const FResolveVanityURLMinimalDelegate& Delegate);
    class UUWorksRequestWebResolveVanityURL* ResolveVanityURL();
    void GrantPackageMinimal(FString Key, FUWorksSteamID SteamID, int32 PackageID, FString IPAddress, FString ThirdPartyKey, int32 ThirdPartyAppID, const FGrantPackageMinimalDelegate& Delegate);
    class UUWorksRequestWebGrantPackage* GrantPackage();
    void GetUserGroupListMinimal(FString Key, FUWorksSteamID SteamID, const FGetUserGroupListMinimalDelegate& Delegate);
    class UUWorksRequestWebGetUserGroupList* GetUserGroupList();
    void GetPublisherAppOwnershipMinimal(FString Key, FUWorksSteamID SteamID, const FGetPublisherAppOwnershipMinimalDelegate& Delegate);
    void GetPublisherAppOwnershipChangesMinimal(FString Key, FString PackageRowVersion, FString CDKeyRowVersion, const FGetPublisherAppOwnershipChangesMinimalDelegate& Delegate);
    class UUWorksRequestWebGetPublisherAppOwnershipChanges* GetPublisherAppOwnershipChanges();
    class UUWorksRequestWebGetPublisherAppOwnership* GetPublisherAppOwnership();
    void GetPlayerSummariesMinimal(FString Key, FString SteamIDs, const FGetPlayerSummariesMinimalDelegate& Delegate);
    class UUWorksRequestWebGetPlayerSummaries* GetPlayerSummaries();
    void GetPlayerBansMinimal(FString Key, FString SteamIDs, const FGetPlayerBansMinimalDelegate& Delegate);
    class UUWorksRequestWebGetPlayerBans* GetPlayerBans();
    void GetFriendListMinimal(FString Key, FUWorksSteamID SteamID, FString Relationship, const FGetFriendListMinimalDelegate& Delegate);
    class UUWorksRequestWebGetFriendList* GetFriendList();
    void GetAppPriceInfoMinimal(FString Key, FUWorksSteamID SteamID, FString AppIDs, const FGetAppPriceInfoMinimalDelegate& Delegate);
    class UUWorksRequestWebGetAppPriceInfo* GetAppPriceInfo();
    void CheckAppOwnershipMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, const FCheckAppOwnershipMinimalDelegate& Delegate);
    class UUWorksRequestWebCheckAppOwnership* CheckAppOwnership();
}; // Size: 0x28

class UUWorksInterfaceWebUserAuth : public UUWorksInterfaceWeb
{

    void AuthenticateUserTicketMinimal(FString Key, int32 AppID, FString Ticket, const FAuthenticateUserTicketMinimalDelegate& Delegate);
    class UUWorksRequestWebAuthenticateUserTicket* AuthenticateUserTicket();
    void AuthenticateUserMinimal(FUWorksSteamID SteamID, TArray<uint8> SessionKey, TArray<uint8> EncryptedLoginKey, const FAuthenticateUserMinimalDelegate& Delegate);
    class UUWorksRequestWebAuthenticateUser* AuthenticateUser();
}; // Size: 0x28

class UUWorksInterfaceWebUserStats : public UUWorksInterfaceWeb
{

    void SetUserStatsForGameMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<FString> Name, TArray<int32> Value, const FSetUserStatsForGameMinimalDelegate& Delegate);
    class UUWorksRequestWebSetUserStatsForGame* SetUserStatsForGame();
    void GetUserStatsForGameMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, const FGetUserStatsForGameMinimalDelegate& Delegate);
    class UUWorksRequestWebGetUserStatsForGame* GetUserStatsForGame();
    void GetSchemaForGameMinimal(FString Key, int32 AppID, FString Language, const FGetSchemaForGameMinimalDelegate& Delegate);
    class UUWorksRequestWebGetSchemaForGame* GetSchemaForGame();
    void GetPlayerAchievementsMinimal(FString Key, FUWorksSteamID SteamID, int32 AppID, FString Language, const FGetPlayerAchievementsMinimalDelegate& Delegate);
    class UUWorksRequestWebGetPlayerAchievements* GetPlayerAchievements();
    void GetNumberOfCurrentPlayersMinimal(int32 AppID, const FGetNumberOfCurrentPlayersMinimalDelegate& Delegate);
    class UUWorksRequestWebGetNumberOfCurrentPlayers* GetNumberOfCurrentPlayers();
    void GetGlobalStatsForGameMinimal(int32 AppID, int32 Count, TArray<FString> Name, int32 StartDate, int32 EndDate, const FGetGlobalStatsForGameMinimalDelegate& Delegate);
    class UUWorksRequestWebGetGlobalStatsForGame* GetGlobalStatsForGame();
    void GetGlobalAchievementPercentagesForAppMinimal(FUWorksGameID GameID, const FGetGlobalAchievementPercentagesForAppMinimalDelegate& Delegate);
    class UUWorksRequestWebGetGlobalAchievementPercentagesForApp* GetGlobalAchievementPercentagesForApp();
}; // Size: 0x28

struct FUWorksAssociatedWorkshopFiles
{
}; // Size: 0x1

struct FUWorksPartnerAccounts
{
}; // Size: 0x1

struct FUWorksLanguages
{
}; // Size: 0x1

class UUWorksInterfaceWebWorkshop : public UUWorksInterfaceWeb
{

    void SetItemPaymentRulesMinimal(FString Key, int32 AppID, int32 GameItemID, FUWorksAssociatedWorkshopFiles AssociatedWorkshopFiles, FUWorksPartnerAccounts PartnerAccounts, bool bMakeWorkshopFilesSubscribable, bool bValidateOnly, const FSetItemPaymentRulesMinimalDelegate& Delegate);
    class UUWorksRequestWebSetItemPaymentRules* SetItemPaymentRules();
    void PopulateItemDescriptionsMinimal(FString Key, int32 AppID, FUWorksLanguages Languages, const FPopulateItemDescriptionsMinimalDelegate& Delegate);
    class UUWorksRequestWebPopulateItemDescriptions* PopulateItemDescriptions();
    void GetItemDailyRevenueMinimal(FString Key, int32 AppID, FString ItemId, int32 DateStart, int32 DateEnd, const FGetItemDailyRevenueMinimalDelegate& Delegate);
    class UUWorksRequestWebGetItemDailyRevenue* GetItemDailyRevenue();
    void GetFinalizedContributorsMinimal(FString Key, int32 AppID, int32 GameItemID, const FGetFinalizedContributorsMinimalDelegate& Delegate);
    class UUWorksRequestWebGetFinalizedContributors* GetFinalizedContributors();
}; // Size: 0x28

class UUWorksRequestWeb : public UUWorksRequest
{

    bool IsActive();
    FString GetStatus();
    void Deactivate();
    void Activate();
}; // Size: 0xA0

class UUWorksRequestWebGetAppBetas : public UUWorksRequestWeb
{
    FUWorksRequestWebGetAppBetasOnRequestCompleted OnRequestCompleted;                // 0x00A0 (size: 0x10)
    void GetAppBetasDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetAppBetasOnRequestCompletedMinimal OnRequestCompletedMinimal;  // 0x00B0 (size: 0x10)
    void GetAppBetasMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetAppBuilds : public UUWorksRequestWeb
{
    FUWorksRequestWebGetAppBuildsOnRequestCompleted OnRequestCompleted;               // 0x00A0 (size: 0x10)
    void GetAppBuildsDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetAppBuildsOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetAppBuildsMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, int32 Count);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetAppDepotVersions : public UUWorksRequestWeb
{
    FUWorksRequestWebGetAppDepotVersionsOnRequestCompleted OnRequestCompleted;        // 0x00A0 (size: 0x10)
    void GetAppDepotVersionsDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetAppDepotVersionsOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetAppDepotVersionsMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetAppList : public UUWorksRequestWeb
{
    FUWorksRequestWebGetAppListOnRequestCompleted OnRequestCompleted;                 // 0x00A0 (size: 0x10)
    void GetAppListDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetAppListOnRequestCompletedMinimal OnRequestCompletedMinimal;   // 0x00B0 (size: 0x10)
    void GetAppListMinimalDelegate(bool bSuccessful, FString Content);

    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetCheatingReportsList : public UUWorksRequestWeb
{
    FUWorksRequestWebGetCheatingReportsListOnRequestCompleted OnRequestCompleted;     // 0x00A0 (size: 0x10)
    void GetCheatingReportsListDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetCheatingReportsListOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetCheatingReportsListMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, int32 TimeBegin, int32 TimeEnd, bool bIncludeReports, bool bIncludeBans, FString ReportIDMin);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetPlayersBanned : public UUWorksRequestWeb
{
    FUWorksRequestWebGetPlayersBannedOnRequestCompleted OnRequestCompleted;           // 0x00A0 (size: 0x10)
    void GetPlayersBannedDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetPlayersBannedOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetPlayersBannedMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetServerList : public UUWorksRequestWeb
{
    FUWorksRequestWebGetServerListOnRequestCompleted OnRequestCompleted;              // 0x00A0 (size: 0x10)
    void GetServerListDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetServerListOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetServerListMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString Filter, int32 Limit);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetServersAtAddress : public UUWorksRequestWeb
{
    FUWorksRequestWebGetServersAtAddressOnRequestCompleted OnRequestCompleted;        // 0x00A0 (size: 0x10)
    void GetServersAtAddressDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetServersAtAddressOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetServersAtAddressMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Addr);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebSetAppBuildLive : public UUWorksRequestWeb
{
    FUWorksRequestWebSetAppBuildLiveOnRequestCompleted OnRequestCompleted;            // 0x00A0 (size: 0x10)
    void SetAppBuildLiveDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebSetAppBuildLiveOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void SetAppBuildLiveMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, int32 BuildID, FString BetaKey, FString Description);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebUpToDateCheck : public UUWorksRequestWeb
{
    FUWorksRequestWebUpToDateCheckOnRequestCompleted OnRequestCompleted;              // 0x00A0 (size: 0x10)
    void UpToDateCheckDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebUpToDateCheckOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void UpToDateCheckMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(int32 AppID, int32 VersionToCheck);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebPostGameDataFrame : public UUWorksRequestWeb
{
    FUWorksRequestWebPostGameDataFrameOnRequestCompleted OnRequestCompleted;          // 0x00A0 (size: 0x10)
    void PostGameDataFrameDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebPostGameDataFrameOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void PostGameDataFrameMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksSteamID SteamID, FString BroadcastID, FString FrameData);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebReportPlayerCheating : public UUWorksRequestWeb
{
    FUWorksRequestWebReportPlayerCheatingOnRequestCompleted OnRequestCompleted;       // 0x00A0 (size: 0x10)
    void ReportPlayerCheatingDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebReportPlayerCheatingOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void ReportPlayerCheatingMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, FUWorksSteamID SteamIDReporter, int32 AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32 GameMode, int32 SuspicionStartTime, int32 Severity);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebRequestPlayerGameBan : public UUWorksRequestWeb
{
    FUWorksRequestWebRequestPlayerGameBanOnRequestCompleted OnRequestCompleted;       // 0x00A0 (size: 0x10)
    void RequestPlayerGameBanDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebRequestPlayerGameBanOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void RequestPlayerGameBanMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, FUWorksSteamID ReportID, FString CheatDescription, int32 Duration, bool bDelayBan);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebRemovePlayerGameBan : public UUWorksRequestWeb
{
    FUWorksRequestWebRemovePlayerGameBanOnRequestCompleted OnRequestCompleted;        // 0x00A0 (size: 0x10)
    void RemovePlayerGameBanDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebRemovePlayerGameBanOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void RemovePlayerGameBanMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetCheatingReports : public UUWorksRequestWeb
{
    FUWorksRequestWebGetCheatingReportsOnRequestCompleted OnRequestCompleted;         // 0x00A0 (size: 0x10)
    void GetCheatingReportsDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetCheatingReportsOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetCheatingReportsMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, int32 TimeEnd, int32 TimeBegin, FString ReportIDMin, bool bIncludeReports, bool bIncludeBans, FUWorksSteamID SteamID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebRequestVacStatusForUser : public UUWorksRequestWeb
{
    FUWorksRequestWebRequestVacStatusForUserOnRequestCompleted OnRequestCompleted;    // 0x00A0 (size: 0x10)
    void RequestVacStatusForUserDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebRequestVacStatusForUserOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void RequestVacStatusForUserMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, FString SessionId);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebStartSecureMultiplayerSession : public UUWorksRequestWeb
{
    FUWorksRequestWebStartSecureMultiplayerSessionOnRequestCompleted OnRequestCompleted; // 0x00A0 (size: 0x10)
    void StartSecureMultiplayerSessionDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebStartSecureMultiplayerSessionOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void StartSecureMultiplayerSessionMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebEndSecureMultiplayerSession : public UUWorksRequestWeb
{
    FUWorksRequestWebEndSecureMultiplayerSessionOnRequestCompleted OnRequestCompleted; // 0x00A0 (size: 0x10)
    void EndSecureMultiplayerSessionDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebEndSecureMultiplayerSessionOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void EndSecureMultiplayerSessionMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, FString SessionId);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebReportCheatData : public UUWorksRequestWeb
{
    FUWorksRequestWebReportCheatDataOnRequestCompleted OnRequestCompleted;            // 0x00A0 (size: 0x10)
    void ReportCheatDataDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebReportCheatDataOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void ReportCheatDataMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, FString PathAndFileName, FString WebCheatURL, FString TimeNow, FString TimeStarted, FString TimeStopped, FString CheatName, int32 GameProcessID, int32 CheatProcessID, FString CheatParamA, FString CheatParamB);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebReportAbuse : public UUWorksRequestWeb
{
    FUWorksRequestWebReportAbuseOnRequestCompleted OnRequestCompleted;                // 0x00A0 (size: 0x10)
    void ReportAbuseDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebReportAbuseOnRequestCompletedMinimal OnRequestCompletedMinimal;  // 0x00B0 (size: 0x10)
    void ReportAbuseMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamIDActor, FUWorksSteamID SteamIDTarget, int32 AppID, uint8 AbuseType, uint8 ContentType, FString Description, FString GID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetTradeHistory : public UUWorksRequestWeb
{
    FUWorksRequestWebGetTradeHistoryOnRequestCompleted OnRequestCompleted;            // 0x00A0 (size: 0x10)
    void GetTradeHistoryDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetTradeHistoryOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetTradeHistoryMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 MaxTrades, int32 StartAfterTime, FString StartAfterTradeID, bool bNavigatingBack, bool bGetDescription, FString Language, bool bIncludeFailed, bool bIncludeTotal);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebFlushInventoryCache : public UUWorksRequestWeb
{
    FUWorksRequestWebFlushInventoryCacheOnRequestCompleted OnRequestCompleted;        // 0x00A0 (size: 0x10)
    void FlushInventoryCacheDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebFlushInventoryCacheOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void FlushInventoryCacheMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, FString ContextID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebFlushAssetAppearanceCache : public UUWorksRequestWeb
{
    FUWorksRequestWebFlushAssetAppearanceCacheOnRequestCompleted OnRequestCompleted;  // 0x00A0 (size: 0x10)
    void FlushAssetAppearanceCacheDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebFlushAssetAppearanceCacheOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void FlushAssetAppearanceCacheMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebFlushContextCache : public UUWorksRequestWeb
{
    FUWorksRequestWebFlushContextCacheOnRequestCompleted OnRequestCompleted;          // 0x00A0 (size: 0x10)
    void FlushContextCacheDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebFlushContextCacheOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void FlushContextCacheMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetTradeOffers : public UUWorksRequestWeb
{
    FUWorksRequestWebGetTradeOffersOnRequestCompleted OnRequestCompleted;             // 0x00A0 (size: 0x10)
    void GetTradeOffersDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetTradeOffersOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetTradeOffersMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescription, FString Language, bool bActiveOnly, bool bHistoricalOnly, int32 TimeHistoricalCutoff);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetTradeOffer : public UUWorksRequestWeb
{
    FUWorksRequestWebGetTradeOfferOnRequestCompleted OnRequestCompleted;              // 0x00A0 (size: 0x10)
    void GetTradeOfferDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetTradeOfferOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetTradeOfferMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString TradeOfferID, FString Language);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetTradeOffersSummary : public UUWorksRequestWeb
{
    FUWorksRequestWebGetTradeOffersSummaryOnRequestCompleted OnRequestCompleted;      // 0x00A0 (size: 0x10)
    void GetTradeOffersSummaryDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetTradeOffersSummaryOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetTradeOffersSummaryMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 TimeLastVisit);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebDeclineTradeOffer : public UUWorksRequestWeb
{
    FUWorksRequestWebDeclineTradeOfferOnRequestCompleted OnRequestCompleted;          // 0x00A0 (size: 0x10)
    void DeclineTradeOfferDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebDeclineTradeOfferOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void DeclineTradeOfferMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString TradeOfferID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebCancelTradeOffer : public UUWorksRequestWeb
{
    FUWorksRequestWebCancelTradeOfferOnRequestCompleted OnRequestCompleted;           // 0x00A0 (size: 0x10)
    void CancelTradeOfferDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebCancelTradeOfferOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void CancelTradeOfferMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString TradeOfferID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetMarketEligibility : public UUWorksRequestWeb
{
    FUWorksRequestWebGetMarketEligibilityOnRequestCompleted OnRequestCompleted;       // 0x00A0 (size: 0x10)
    void GetMarketEligibilityDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetMarketEligibilityOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetMarketEligibilityMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebCancelAppListingsForUser : public UUWorksRequestWeb
{
    FUWorksRequestWebCancelAppListingsForUserOnRequestCompleted OnRequestCompleted;   // 0x00A0 (size: 0x10)
    void CancelAppListingsForUserDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebCancelAppListingsForUserOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void CancelAppListingsForUserMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksSteamID SteamID, bool bSynchronous);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetAssetID : public UUWorksRequestWeb
{
    FUWorksRequestWebGetAssetIDOnRequestCompleted OnRequestCompleted;                 // 0x00A0 (size: 0x10)
    void GetAssetIDDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetAssetIDOnRequestCompletedMinimal OnRequestCompletedMinimal;   // 0x00B0 (size: 0x10)
    void GetAssetIDMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FString ListingID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetPopular : public UUWorksRequestWeb
{
    FUWorksRequestWebGetPopularOnRequestCompleted OnRequestCompleted;                 // 0x00A0 (size: 0x10)
    void GetPopularDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetPopularOnRequestCompletedMinimal OnRequestCompletedMinimal;   // 0x00B0 (size: 0x10)
    void GetPopularMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString Language, int32 Rows, int32 Start, int32 FilterAppID, int32 ECurrency);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebCanTrade : public UUWorksRequestWeb
{
    FUWorksRequestWebCanTradeOnRequestCompleted OnRequestCompleted;                   // 0x00A0 (size: 0x10)
    void CanTradeDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebCanTradeOnRequestCompletedMinimal OnRequestCompletedMinimal;     // 0x00B0 (size: 0x10)
    void CanTradeMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksSteamID SteamID, FUWorksSteamID TargetId);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebFinalizeAssetTransaction : public UUWorksRequestWeb
{
    FUWorksRequestWebFinalizeAssetTransactionOnRequestCompleted OnRequestCompleted;   // 0x00A0 (size: 0x10)
    void FinalizeAssetTransactionDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebFinalizeAssetTransactionOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void FinalizeAssetTransactionMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksSteamID SteamID, FString TxnID, FString Language);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetAssetClassInfo : public UUWorksRequestWeb
{
    FUWorksRequestWebGetAssetClassInfoOnRequestCompleted OnRequestCompleted;          // 0x00A0 (size: 0x10)
    void GetAssetClassInfoDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetAssetClassInfoOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetAssetClassInfoMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, int32 ClassCount, FString ClassID, FString Language, FString InstanceID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetAssetPrices : public UUWorksRequestWeb
{
    FUWorksRequestWebGetAssetPricesOnRequestCompleted OnRequestCompleted;             // 0x00A0 (size: 0x10)
    void GetAssetPricesDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetAssetPricesOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetAssetPricesMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FString Currency, FString Language);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetExportedAssetsForUser : public UUWorksRequestWeb
{
    FUWorksRequestWebGetExportedAssetsForUserOnRequestCompleted OnRequestCompleted;   // 0x00A0 (size: 0x10)
    void GetExportedAssetsForUserDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetExportedAssetsForUserOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetExportedAssetsForUserMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, FString ContextID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetMarketPrices : public UUWorksRequestWeb
{
    FUWorksRequestWebGetMarketPricesOnRequestCompleted OnRequestCompleted;            // 0x00A0 (size: 0x10)
    void GetMarketPricesDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetMarketPricesOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetMarketPricesMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebStartAssetTransaction : public UUWorksRequestWeb
{
    FUWorksRequestWebStartAssetTransactionOnRequestCompleted OnRequestCompleted;      // 0x00A0 (size: 0x10)
    void StartAssetTransactionDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebStartAssetTransactionOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void StartAssetTransactionMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksSteamID SteamID, FString AssetID, int32 AssetQuantity, FString Currency, FString Language, FString IPAddress, FString Referrer, bool bClientAuth);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebStartTrade : public UUWorksRequestWeb
{
    FUWorksRequestWebStartTradeOnRequestCompleted OnRequestCompleted;                 // 0x00A0 (size: 0x10)
    void StartTradeDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebStartTradeOnRequestCompletedMinimal OnRequestCompletedMinimal;   // 0x00B0 (size: 0x10)
    void StartTradeMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksSteamID PartyA, FUWorksSteamID PartyB);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetHistoryCommandDetails : public UUWorksRequestWeb
{
    FUWorksRequestWebGetHistoryCommandDetailsOnRequestCompleted OnRequestCompleted;   // 0x00A0 (size: 0x10)
    void GetHistoryCommandDetailsDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetHistoryCommandDetailsOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetHistoryCommandDetailsMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksSteamID SteamID, FString Command, FString ContextID, FString Arguments);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetUserHistory : public UUWorksRequestWeb
{
    FUWorksRequestWebGetUserHistoryOnRequestCompleted OnRequestCompleted;             // 0x00A0 (size: 0x10)
    void GetUserHistoryDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetUserHistoryOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetUserHistoryMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksSteamID SteamID, FString ContextID, int32 StartTime, int32 EndTime);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebHistoryExecuteCommands : public UUWorksRequestWeb
{
    FUWorksRequestWebHistoryExecuteCommandsOnRequestCompleted OnRequestCompleted;     // 0x00A0 (size: 0x10)
    void HistoryExecuteCommandsDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebHistoryExecuteCommandsOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void HistoryExecuteCommandsMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksSteamID SteamID, FString ContextID, FString ActorId);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebSupportGetAssetHistory : public UUWorksRequestWeb
{
    FUWorksRequestWebSupportGetAssetHistoryOnRequestCompleted OnRequestCompleted;     // 0x00A0 (size: 0x10)
    void SupportGetAssetHistoryDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebSupportGetAssetHistoryOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void SupportGetAssetHistoryMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FString AssetID, FString ContextID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebCreateSession : public UUWorksRequestWeb
{
    FUWorksRequestWebCreateSessionOnRequestCompleted OnRequestCompleted;              // 0x00A0 (size: 0x10)
    void CreateSessionDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebCreateSessionOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void CreateSessionMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FString Context, FUWorksTitle Title, FUWorksUsers Users, FUWorksSteamID SteamID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebUpdateSession : public UUWorksRequestWeb
{
    FUWorksRequestWebUpdateSessionOnRequestCompleted OnRequestCompleted;              // 0x00A0 (size: 0x10)
    void UpdateSessionDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebUpdateSessionOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void UpdateSessionMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString SessionId, int32 AppID, FUWorksTitle Title, FUWorksUsers Users, FUWorksSteamID SteamID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebEnumerateSessionsForApp : public UUWorksRequestWeb
{
    FUWorksRequestWebEnumerateSessionsForAppOnRequestCompleted OnRequestCompleted;    // 0x00A0 (size: 0x10)
    void EnumerateSessionsForAppDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebEnumerateSessionsForAppOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void EnumerateSessionsForAppMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksSteamID SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, FString Language);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetSessionDetailsForApp : public UUWorksRequestWeb
{
    FUWorksRequestWebGetSessionDetailsForAppOnRequestCompleted OnRequestCompleted;    // 0x00A0 (size: 0x10)
    void GetSessionDetailsForAppDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetSessionDetailsForAppOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetSessionDetailsForAppMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSessions Sessions, int32 AppID, FString Language);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebRequestNotifications : public UUWorksRequestWeb
{
    FUWorksRequestWebRequestNotificationsOnRequestCompleted OnRequestCompleted;       // 0x00A0 (size: 0x10)
    void RequestNotificationsDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebRequestNotificationsOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void RequestNotificationsMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebDeleteSession : public UUWorksRequestWeb
{
    FUWorksRequestWebDeleteSessionOnRequestCompleted OnRequestCompleted;              // 0x00A0 (size: 0x10)
    void DeleteSessionDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebDeleteSessionOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void DeleteSessionMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString SessionId, int32 AppID, FUWorksSteamID SteamID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebDeleteSessionBatch : public UUWorksRequestWeb
{
    FUWorksRequestWebDeleteSessionBatchOnRequestCompleted OnRequestCompleted;         // 0x00A0 (size: 0x10)
    void DeleteSessionBatchDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebDeleteSessionBatchOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void DeleteSessionBatchMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString SessionId, int32 AppID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetAccountList : public UUWorksRequestWeb
{
    FUWorksRequestWebGetAccountListOnRequestCompleted OnRequestCompleted;             // 0x00A0 (size: 0x10)
    void GetAccountListDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetAccountListOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetAccountListMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebCreateAccount : public UUWorksRequestWeb
{
    FUWorksRequestWebCreateAccountOnRequestCompleted OnRequestCompleted;              // 0x00A0 (size: 0x10)
    void CreateAccountDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebCreateAccountOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void CreateAccountMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FString Memo);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebSetMemo : public UUWorksRequestWeb
{
    FUWorksRequestWebSetMemoOnRequestCompleted OnRequestCompleted;                    // 0x00A0 (size: 0x10)
    void SetMemoDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebSetMemoOnRequestCompletedMinimal OnRequestCompletedMinimal;      // 0x00B0 (size: 0x10)
    void SetMemoMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, FString Memo);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebResetLoginToken : public UUWorksRequestWeb
{
    FUWorksRequestWebResetLoginTokenOnRequestCompleted OnRequestCompleted;            // 0x00A0 (size: 0x10)
    void ResetLoginTokenDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebResetLoginTokenOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void ResetLoginTokenMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebDeleteAccount : public UUWorksRequestWeb
{
    FUWorksRequestWebDeleteAccountOnRequestCompleted OnRequestCompleted;              // 0x00A0 (size: 0x10)
    void DeleteAccountDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebDeleteAccountOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void DeleteAccountMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetAccountPublicInfo : public UUWorksRequestWeb
{
    FUWorksRequestWebGetAccountPublicInfoOnRequestCompleted OnRequestCompleted;       // 0x00A0 (size: 0x10)
    void GetAccountPublicInfoDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetAccountPublicInfoOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetAccountPublicInfoMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebQueryLoginToken : public UUWorksRequestWeb
{
    FUWorksRequestWebQueryLoginTokenOnRequestCompleted OnRequestCompleted;            // 0x00A0 (size: 0x10)
    void QueryLoginTokenDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebQueryLoginTokenOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void QueryLoginTokenMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString LoginToken);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebSetBanStatus : public UUWorksRequestWeb
{
    FUWorksRequestWebSetBanStatusOnRequestCompleted OnRequestCompleted;               // 0x00A0 (size: 0x10)
    void SetBanStatusDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebSetBanStatusOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void SetBanStatusMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, bool bBanned, int32 BanSeconds);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetServerSteamIDsByIP : public UUWorksRequestWeb
{
    FUWorksRequestWebGetServerSteamIDsByIPOnRequestCompleted OnRequestCompleted;      // 0x00A0 (size: 0x10)
    void GetServerSteamIDsByIPDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetServerSteamIDsByIPOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetServerSteamIDsByIPMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString ServerIPs);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetServerIPsBySteamID : public UUWorksRequestWeb
{
    FUWorksRequestWebGetServerIPsBySteamIDOnRequestCompleted OnRequestCompleted;      // 0x00A0 (size: 0x10)
    void GetServerIPsBySteamIDDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetServerIPsBySteamIDOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetServerIPsBySteamIDMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID ServerSteamID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetGameServerPlayerStatsForGame : public UUWorksRequestWeb
{
    FUWorksRequestWebGetGameServerPlayerStatsForGameOnRequestCompleted OnRequestCompleted; // 0x00A0 (size: 0x10)
    void GetGameServerPlayerStatsForGameDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetGameServerPlayerStatsForGameOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetGameServerPlayerStatsForGameMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksGameID GameID, int32 AppID, FString RangeStart, FString RangeEnd, int32 MaxResults);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebAddItem : public UUWorksRequestWeb
{
    FUWorksRequestWebAddItemOnRequestCompleted OnRequestCompleted;                    // 0x00A0 (size: 0x10)
    void AddItemDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebAddItemOnRequestCompletedMinimal OnRequestCompletedMinimal;      // 0x00B0 (size: 0x10)
    void AddItemMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, TArray<FUWorksSteamItemDef> ItemDefID, FString ItemPropsJSON, FUWorksSteamID SteamID, bool bNotify, FString requestID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebAddPromoItem : public UUWorksRequestWeb
{
    FUWorksRequestWebAddPromoItemOnRequestCompleted OnRequestCompleted;               // 0x00A0 (size: 0x10)
    void AddPromoItemDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebAddPromoItemOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void AddPromoItemMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksSteamItemDef ItemDefID, FString ItemPropsJSON, FUWorksSteamID SteamID, bool bNotify, FString requestID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebConsumeItem : public UUWorksRequestWeb
{
    FUWorksRequestWebConsumeItemOnRequestCompleted OnRequestCompleted;                // 0x00A0 (size: 0x10)
    void ConsumeItemDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebConsumeItemOnRequestCompletedMinimal OnRequestCompletedMinimal;  // 0x00B0 (size: 0x10)
    void ConsumeItemMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksSteamItemInstanceID ItemId, int32 Quantity, FUWorksSteamID SteamID, FString requestID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebExchangeItem : public UUWorksRequestWeb
{
    FUWorksRequestWebExchangeItemOnRequestCompleted OnRequestCompleted;               // 0x00A0 (size: 0x10)
    void ExchangeItemDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebExchangeItemOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void ExchangeItemMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksSteamID SteamID, TArray<FUWorksSteamItemInstanceID> MaterialsItemID, TArray<int32> MaterialsQuantity, FUWorksSteamItemDef OutputItemDefID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetInventory : public UUWorksRequestWeb
{
    FUWorksRequestWebGetInventoryOnRequestCompleted OnRequestCompleted;               // 0x00A0 (size: 0x10)
    void GetInventoryDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetInventoryOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetInventoryMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksSteamID SteamID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetItemDefs : public UUWorksRequestWeb
{
    FUWorksRequestWebGetItemDefsOnRequestCompleted OnRequestCompleted;                // 0x00A0 (size: 0x10)
    void GetItemDefsDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetItemDefsOnRequestCompletedMinimal OnRequestCompletedMinimal;  // 0x00B0 (size: 0x10)
    void GetItemDefsMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FString ModifiedSince, TArray<FUWorksSteamItemDef> ItemDefIDs, TArray<FUWorksSteamItemDef> WorkshopIDs, int32 CacheMaxAgeSeconds);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetPriceSheet : public UUWorksRequestWeb
{
    FUWorksRequestWebGetPriceSheetOnRequestCompleted OnRequestCompleted;              // 0x00A0 (size: 0x10)
    void GetPriceSheetDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetPriceSheetOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetPriceSheetMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 ECurrency);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebConsolidate : public UUWorksRequestWeb
{
    FUWorksRequestWebConsolidateOnRequestCompleted OnRequestCompleted;                // 0x00A0 (size: 0x10)
    void ConsolidateDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebConsolidateOnRequestCompletedMinimal OnRequestCompletedMinimal;  // 0x00B0 (size: 0x10)
    void ConsolidateMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksSteamID SteamID, TArray<FUWorksSteamItemDef> ItemDefID, bool bForce);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetQuantity : public UUWorksRequestWeb
{
    FUWorksRequestWebGetQuantityOnRequestCompleted OnRequestCompleted;                // 0x00A0 (size: 0x10)
    void GetQuantityDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetQuantityOnRequestCompletedMinimal OnRequestCompletedMinimal;  // 0x00B0 (size: 0x10)
    void GetQuantityMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksSteamID SteamID, FUWorksSteamItemDef ItemDefID, bool bForce);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebDeleteLeaderboard : public UUWorksRequestWeb
{
    FUWorksRequestWebDeleteLeaderboardOnRequestCompleted OnRequestCompleted;          // 0x00A0 (size: 0x10)
    void DeleteLeaderboardDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebDeleteLeaderboardOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void DeleteLeaderboardMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FString Name);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebFindOrCreateLeaderboard : public UUWorksRequestWeb
{
    FUWorksRequestWebFindOrCreateLeaderboardOnRequestCompleted OnRequestCompleted;    // 0x00A0 (size: 0x10)
    void FindOrCreateLeaderboardDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebFindOrCreateLeaderboardOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void FindOrCreateLeaderboardMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FString Name, FString SortMethod, FString DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetLeaderboardEntries : public UUWorksRequestWeb
{
    FUWorksRequestWebGetLeaderboardEntriesOnRequestCompleted OnRequestCompleted;      // 0x00A0 (size: 0x10)
    void GetLeaderboardEntriesDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetLeaderboardEntriesOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetLeaderboardEntriesMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, int32 RangeStart, int32 RangeEnd, int32 LeaderboardID, int32 DataRequest, FUWorksSteamID SteamID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetLeaderboardsForGame : public UUWorksRequestWeb
{
    FUWorksRequestWebGetLeaderboardsForGameOnRequestCompleted OnRequestCompleted;     // 0x00A0 (size: 0x10)
    void GetLeaderboardsForGameDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetLeaderboardsForGameOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetLeaderboardsForGameMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebResetLeaderboard : public UUWorksRequestWeb
{
    FUWorksRequestWebResetLeaderboardOnRequestCompleted OnRequestCompleted;           // 0x00A0 (size: 0x10)
    void ResetLeaderboardDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebResetLeaderboardOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void ResetLeaderboardMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, int32 LeaderboardID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebSetLeaderboardScore : public UUWorksRequestWeb
{
    FUWorksRequestWebSetLeaderboardScoreOnRequestCompleted OnRequestCompleted;        // 0x00A0 (size: 0x10)
    void SetLeaderboardScoreDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebSetLeaderboardScoreOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void SetLeaderboardScoreMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, int32 LeaderboardID, FUWorksSteamID SteamID, int32 score, FString ScoreMethod, TArray<uint8> Details);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebAdjustAgreement : public UUWorksRequestWeb
{
    FUWorksRequestWebAdjustAgreementOnRequestCompleted OnRequestCompleted;            // 0x00A0 (size: 0x10)
    void AdjustAgreementDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebAdjustAgreementOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void AdjustAgreementMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, FString AgreementID, int32 AppID, FString NextProcessDate);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebCancelAgreement : public UUWorksRequestWeb
{
    FUWorksRequestWebCancelAgreementOnRequestCompleted OnRequestCompleted;            // 0x00A0 (size: 0x10)
    void CancelAgreementDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebCancelAgreementOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void CancelAgreementMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, FString AgreementID, int32 AppID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebFinalizeTxn : public UUWorksRequestWeb
{
    FUWorksRequestWebFinalizeTxnOnRequestCompleted OnRequestCompleted;                // 0x00A0 (size: 0x10)
    void FinalizeTxnDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebFinalizeTxnOnRequestCompletedMinimal OnRequestCompletedMinimal;  // 0x00B0 (size: 0x10)
    void FinalizeTxnMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString OrderID, int32 AppID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetReport : public UUWorksRequestWeb
{
    FUWorksRequestWebGetReportOnRequestCompleted OnRequestCompleted;                  // 0x00A0 (size: 0x10)
    void GetReportDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetReportOnRequestCompletedMinimal OnRequestCompletedMinimal;    // 0x00B0 (size: 0x10)
    void GetReportMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FString Time, EUWorksReportType Type, int32 MaxResults);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetUserAgreementInfo : public UUWorksRequestWeb
{
    FUWorksRequestWebGetUserAgreementInfoOnRequestCompleted OnRequestCompleted;       // 0x00A0 (size: 0x10)
    void GetUserAgreementInfoDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetUserAgreementInfoOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetUserAgreementInfoMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetUserInfo : public UUWorksRequestWeb
{
    FUWorksRequestWebGetUserInfoOnRequestCompleted OnRequestCompleted;                // 0x00A0 (size: 0x10)
    void GetUserInfoDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetUserInfoOnRequestCompletedMinimal OnRequestCompletedMinimal;  // 0x00B0 (size: 0x10)
    void GetUserInfoMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, FString IPAddress);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebInitTxn : public UUWorksRequestWeb
{
    FUWorksRequestWebInitTxnOnRequestCompleted OnRequestCompleted;                    // 0x00A0 (size: 0x10)
    void InitTxnDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebInitTxnOnRequestCompletedMinimal OnRequestCompletedMinimal;      // 0x00B0 (size: 0x10)
    void InitTxnMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString OrderID, FUWorksSteamID SteamID, int32 AppID, int32 ItemCount, FString Language, FString Currency, TArray<FUWorksSteamItemDef> itemIds, TArray<int32> Quantities, TArray<int32> Amounts, TArray<FString> Descriptions, TArray<FString> Categories, TArray<int32> AssociatedBundles, TArray<FString> BillingTypes, TArray<FString> StartDates, TArray<FString> EndDates, TArray<FString> Periods, TArray<int32> Frequencies, TArray<FString> RecurringAmounts, int32 BundleCount, TArray<int32> BundleIDs, TArray<int32> BundleQuantities, TArray<FString> BundleDescriptions, TArray<FString> BundleCategories, EUWorksUserSession UserSession, FString IPAddress);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebProcessAgreement : public UUWorksRequestWeb
{
    FUWorksRequestWebProcessAgreementOnRequestCompleted OnRequestCompleted;           // 0x00A0 (size: 0x10)
    void ProcessAgreementDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebProcessAgreementOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void ProcessAgreementMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString OrderID, FUWorksSteamID SteamID, FString AgreementID, int32 AppID, int32 Amount, FString Currency);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebQueryTxn : public UUWorksRequestWeb
{
    FUWorksRequestWebQueryTxnOnRequestCompleted OnRequestCompleted;                   // 0x00A0 (size: 0x10)
    void QueryTxnDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebQueryTxnOnRequestCompletedMinimal OnRequestCompletedMinimal;     // 0x00B0 (size: 0x10)
    void QueryTxnMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FString OrderID, FString TransID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebRefundTxn : public UUWorksRequestWeb
{
    FUWorksRequestWebRefundTxnOnRequestCompleted OnRequestCompleted;                  // 0x00A0 (size: 0x10)
    void RefundTxnDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebRefundTxnOnRequestCompletedMinimal OnRequestCompletedMinimal;    // 0x00B0 (size: 0x10)
    void RefundTxnMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString OrderID, int32 AppID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetNewsForApp : public UUWorksRequestWeb
{
    FUWorksRequestWebGetNewsForAppOnRequestCompleted OnRequestCompleted;              // 0x00A0 (size: 0x10)
    void GetNewsForAppDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetNewsForAppOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetNewsForAppMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(int32 AppID, int32 MaxLength, int32 EndDate, int32 Count, FString Feeds);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetNewsForAppAuthed : public UUWorksRequestWeb
{
    FUWorksRequestWebGetNewsForAppAuthedOnRequestCompleted OnRequestCompleted;        // 0x00A0 (size: 0x10)
    void GetNewsForAppAuthedDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetNewsForAppAuthedOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetNewsForAppAuthedMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, int32 MaxLength, int32 EndDate, int32 Count, FString Feeds);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebRecordOfflinePlaytime : public UUWorksRequestWeb
{
    FUWorksRequestWebRecordOfflinePlaytimeOnRequestCompleted OnRequestCompleted;      // 0x00A0 (size: 0x10)
    void RecordOfflinePlaytimeDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebRecordOfflinePlaytimeOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void RecordOfflinePlaytimeMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FUWorksSteamID SteamID, FString Ticket, FUWorksPlaySessions PlaySessions);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetRecentlyPlayedGames : public UUWorksRequestWeb
{
    FUWorksRequestWebGetRecentlyPlayedGamesOnRequestCompleted OnRequestCompleted;     // 0x00A0 (size: 0x10)
    void GetRecentlyPlayedGamesDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetRecentlyPlayedGamesOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetRecentlyPlayedGamesMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 Count);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetOwnedGames : public UUWorksRequestWeb
{
    FUWorksRequestWebGetOwnedGamesOnRequestCompleted OnRequestCompleted;              // 0x00A0 (size: 0x10)
    void GetOwnedGamesDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetOwnedGamesOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetOwnedGamesMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32> AppIDsFilter);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetSteamLevel : public UUWorksRequestWeb
{
    FUWorksRequestWebGetSteamLevelOnRequestCompleted OnRequestCompleted;              // 0x00A0 (size: 0x10)
    void GetSteamLevelDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetSteamLevelOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetSteamLevelMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetBadges : public UUWorksRequestWeb
{
    FUWorksRequestWebGetBadgesOnRequestCompleted OnRequestCompleted;                  // 0x00A0 (size: 0x10)
    void GetBadgesDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetBadgesOnRequestCompletedMinimal OnRequestCompletedMinimal;    // 0x00B0 (size: 0x10)
    void GetBadgesMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetCommunityBadgeProgress : public UUWorksRequestWeb
{
    FUWorksRequestWebGetCommunityBadgeProgressOnRequestCompleted OnRequestCompleted;  // 0x00A0 (size: 0x10)
    void GetCommunityBadgeProgressDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetCommunityBadgeProgressOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetCommunityBadgeProgressMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 BadgeID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebIsPlayingSharedGame : public UUWorksRequestWeb
{
    FUWorksRequestWebIsPlayingSharedGameOnRequestCompleted OnRequestCompleted;        // 0x00A0 (size: 0x10)
    void IsPlayingSharedGameDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebIsPlayingSharedGameOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void IsPlayingSharedGameMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppIDPlaying);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebQueryFiles : public UUWorksRequestWeb
{
    FUWorksRequestWebQueryFilesOnRequestCompleted OnRequestCompleted;                 // 0x00A0 (size: 0x10)
    void QueryFilesDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebQueryFilesOnRequestCompletedMinimal OnRequestCompletedMinimal;   // 0x00B0 (size: 0x10)
    void QueryFilesMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, uint8 queryType, int32 Page, int32 CreatorAppID, int32 AppID, TArray<FString> requiredTags, TArray<FString> excludedTags, TArray<FString> RequiredFlags, TArray<FString> OmittedFlags, FString searchText, uint8 fileType, FUWorksPublishedFileID ChildPublishedFileID, int32 Days, bool bIncludeRecentVotesOnly, FUWorksRequiredKVTags RequiredKVTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKVTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, int32 ReturnPlaytimeStats, int32 NumPerPage, bool bMatchAllTags, int32 CacheMaxAgeSeconds, int32 Language, bool bReturnMetaData);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebSetDeveloperMetadata : public UUWorksRequestWeb
{
    FUWorksRequestWebSetDeveloperMetadataOnRequestCompleted OnRequestCompleted;       // 0x00A0 (size: 0x10)
    void SetDeveloperMetadataDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebSetDeveloperMetadataOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void SetDeveloperMetadataMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksPublishedFileID PublishedFileID, int32 AppID, FString MetaData);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebUpdateTags : public UUWorksRequestWeb
{
    FUWorksRequestWebUpdateTagsOnRequestCompleted OnRequestCompleted;                 // 0x00A0 (size: 0x10)
    void UpdateTagsDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebUpdateTagsOnRequestCompletedMinimal OnRequestCompletedMinimal;   // 0x00B0 (size: 0x10)
    void UpdateTagsMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksPublishedFileID PublishedFileID, int32 AppID, TArray<FString> AddTags, TArray<FString> RemoveTags);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebRankedByPublicationOrder : public UUWorksRequestWeb
{
    FUWorksRequestWebRankedByPublicationOrderOnRequestCompleted OnRequestCompleted;   // 0x00A0 (size: 0x10)
    void RankedByPublicationOrderDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebRankedByPublicationOrderOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void RankedByPublicationOrderMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 StartIndex, int32 Count, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, TArray<FString> tags, TArray<FString> UserTags);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebRankedByTrend : public UUWorksRequestWeb
{
    FUWorksRequestWebRankedByTrendOnRequestCompleted OnRequestCompleted;              // 0x00A0 (size: 0x10)
    void RankedByTrendDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebRankedByTrendOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void RankedByTrendMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 StartIndex, int32 Count, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, int32 Days, TArray<FString> tags, TArray<FString> UserTags);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebRankedByVote : public UUWorksRequestWeb
{
    FUWorksRequestWebRankedByVoteOnRequestCompleted OnRequestCompleted;               // 0x00A0 (size: 0x10)
    void RankedByVoteDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebRankedByVoteOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void RankedByVoteMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 StartIndex, int32 Count, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, TArray<FString> tags, TArray<FString> UserTags);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebResultSetSummary : public UUWorksRequestWeb
{
    FUWorksRequestWebResultSetSummaryOnRequestCompleted OnRequestCompleted;           // 0x00A0 (size: 0x10)
    void ResultSetSummaryDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebResultSetSummaryOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void ResultSetSummaryMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, TArray<FString> tags, TArray<FString> UserTags);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebItemVoteSummary : public UUWorksRequestWeb
{
    FUWorksRequestWebItemVoteSummaryOnRequestCompleted OnRequestCompleted;            // 0x00A0 (size: 0x10)
    void ItemVoteSummaryDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebItemVoteSummaryOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void ItemVoteSummaryMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<int32> PublishedFileIDs);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebUserVoteSummary : public UUWorksRequestWeb
{
    FUWorksRequestWebUserVoteSummaryOnRequestCompleted OnRequestCompleted;            // 0x00A0 (size: 0x10)
    void UserVoteSummaryDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebUserVoteSummaryOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void UserVoteSummaryMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<int32> PublishedFileIDs);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebEnumerateUserPublishedFiles : public UUWorksRequestWeb
{
    FUWorksRequestWebEnumerateUserPublishedFilesOnRequestCompleted OnRequestCompleted; // 0x00A0 (size: 0x10)
    void EnumerateUserPublishedFilesDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebEnumerateUserPublishedFilesOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void EnumerateUserPublishedFilesMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebEnumerateUserSubscribedFiles : public UUWorksRequestWeb
{
    FUWorksRequestWebEnumerateUserSubscribedFilesOnRequestCompleted OnRequestCompleted; // 0x00A0 (size: 0x10)
    void EnumerateUserSubscribedFilesDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebEnumerateUserSubscribedFilesOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void EnumerateUserSubscribedFilesMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 ListType);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetCollectionDetails : public UUWorksRequestWeb
{
    FUWorksRequestWebGetCollectionDetailsOnRequestCompleted OnRequestCompleted;       // 0x00A0 (size: 0x10)
    void GetCollectionDetailsDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetCollectionDetailsOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetCollectionDetailsMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(int32 CollectionCount, TArray<int32> PublishedFileIDs);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetPublishedFileDetails : public UUWorksRequestWeb
{
    FUWorksRequestWebGetPublishedFileDetailsOnRequestCompleted OnRequestCompleted;    // 0x00A0 (size: 0x10)
    void GetPublishedFileDetailsDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetPublishedFileDetailsOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetPublishedFileDetailsMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(int32 ItemCount, TArray<int32> PublishedFileIDs);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetUGCFileDetails : public UUWorksRequestWeb
{
    FUWorksRequestWebGetUGCFileDetailsOnRequestCompleted OnRequestCompleted;          // 0x00A0 (size: 0x10)
    void GetUGCFileDetailsDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetUGCFileDetailsOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetUGCFileDetailsMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 UGCID, int32 AppID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebSetUGCUsedByGC : public UUWorksRequestWeb
{
    FUWorksRequestWebSetUGCUsedByGCOnRequestCompleted OnRequestCompleted;             // 0x00A0 (size: 0x10)
    void SetUGCUsedByGCDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebSetUGCUsedByGCOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void SetUGCUsedByGCMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 UGCID, int32 AppID, bool bUsed);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebSubscribePublishedFile : public UUWorksRequestWeb
{
    FUWorksRequestWebSubscribePublishedFileOnRequestCompleted OnRequestCompleted;     // 0x00A0 (size: 0x10)
    void SubscribePublishedFileDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebSubscribePublishedFileOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void SubscribePublishedFileMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 PublishedFileID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebUnsubscribePublishedFile : public UUWorksRequestWeb
{
    FUWorksRequestWebUnsubscribePublishedFileOnRequestCompleted OnRequestCompleted;   // 0x00A0 (size: 0x10)
    void UnsubscribePublishedFileDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebUnsubscribePublishedFileOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void UnsubscribePublishedFileMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 PublishedFileID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebCheckAppOwnership : public UUWorksRequestWeb
{
    FUWorksRequestWebCheckAppOwnershipOnRequestCompleted OnRequestCompleted;          // 0x00A0 (size: 0x10)
    void CheckAppOwnershipDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebCheckAppOwnershipOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void CheckAppOwnershipMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetAppPriceInfo : public UUWorksRequestWeb
{
    FUWorksRequestWebGetAppPriceInfoOnRequestCompleted OnRequestCompleted;            // 0x00A0 (size: 0x10)
    void GetAppPriceInfoDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetAppPriceInfoOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetAppPriceInfoMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, FString AppIDs);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetFriendList : public UUWorksRequestWeb
{
    FUWorksRequestWebGetFriendListOnRequestCompleted OnRequestCompleted;              // 0x00A0 (size: 0x10)
    void GetFriendListDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetFriendListOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetFriendListMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, FString Relationship);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetPlayerBans : public UUWorksRequestWeb
{
    FUWorksRequestWebGetPlayerBansOnRequestCompleted OnRequestCompleted;              // 0x00A0 (size: 0x10)
    void GetPlayerBansDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetPlayerBansOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetPlayerBansMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString SteamIDs);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetPlayerSummaries : public UUWorksRequestWeb
{
    FUWorksRequestWebGetPlayerSummariesOnRequestCompleted OnRequestCompleted;         // 0x00A0 (size: 0x10)
    void GetPlayerSummariesDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetPlayerSummariesOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetPlayerSummariesMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString SteamIDs);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetPublisherAppOwnership : public UUWorksRequestWeb
{
    FUWorksRequestWebGetPublisherAppOwnershipOnRequestCompleted OnRequestCompleted;   // 0x00A0 (size: 0x10)
    void GetPublisherAppOwnershipDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetPublisherAppOwnershipOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetPublisherAppOwnershipMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetPublisherAppOwnershipChanges : public UUWorksRequestWeb
{
    FUWorksRequestWebGetPublisherAppOwnershipChangesOnRequestCompleted OnRequestCompleted; // 0x00A0 (size: 0x10)
    void GetPublisherAppOwnershipChangesDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetPublisherAppOwnershipChangesOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetPublisherAppOwnershipChangesMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString PackageRowVersion, FString CDKeyRowVersion);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetUserGroupList : public UUWorksRequestWeb
{
    FUWorksRequestWebGetUserGroupListOnRequestCompleted OnRequestCompleted;           // 0x00A0 (size: 0x10)
    void GetUserGroupListDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetUserGroupListOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetUserGroupListMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGrantPackage : public UUWorksRequestWeb
{
    FUWorksRequestWebGrantPackageOnRequestCompleted OnRequestCompleted;               // 0x00A0 (size: 0x10)
    void GrantPackageDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGrantPackageOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GrantPackageMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 PackageID, FString IPAddress, FString ThirdPartyKey, int32 ThirdPartyAppID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebResolveVanityURL : public UUWorksRequestWeb
{
    FUWorksRequestWebResolveVanityURLOnRequestCompleted OnRequestCompleted;           // 0x00A0 (size: 0x10)
    void ResolveVanityURLDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebResolveVanityURLOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void ResolveVanityURLMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FString VanityURL, uint8 URLType);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebAuthenticateUser : public UUWorksRequestWeb
{
    FUWorksRequestWebAuthenticateUserOnRequestCompleted OnRequestCompleted;           // 0x00A0 (size: 0x10)
    void AuthenticateUserDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebAuthenticateUserOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void AuthenticateUserMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FUWorksSteamID SteamID, TArray<uint8> SessionKey, TArray<uint8> EncryptedLoginKey);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebAuthenticateUserTicket : public UUWorksRequestWeb
{
    FUWorksRequestWebAuthenticateUserTicketOnRequestCompleted OnRequestCompleted;     // 0x00A0 (size: 0x10)
    void AuthenticateUserTicketDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebAuthenticateUserTicketOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void AuthenticateUserTicketMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FString Ticket);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetGlobalAchievementPercentagesForApp : public UUWorksRequestWeb
{
    FUWorksRequestWebGetGlobalAchievementPercentagesForAppOnRequestCompleted OnRequestCompleted; // 0x00A0 (size: 0x10)
    void GetGlobalAchievementPercentagesForAppDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetGlobalAchievementPercentagesForAppOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetGlobalAchievementPercentagesForAppMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FUWorksGameID GameID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetGlobalStatsForGame : public UUWorksRequestWeb
{
    FUWorksRequestWebGetGlobalStatsForGameOnRequestCompleted OnRequestCompleted;      // 0x00A0 (size: 0x10)
    void GetGlobalStatsForGameDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetGlobalStatsForGameOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetGlobalStatsForGameMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(int32 AppID, int32 Count, TArray<FString> Name, int32 StartDate, int32 EndDate);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetNumberOfCurrentPlayers : public UUWorksRequestWeb
{
    FUWorksRequestWebGetNumberOfCurrentPlayersOnRequestCompleted OnRequestCompleted;  // 0x00A0 (size: 0x10)
    void GetNumberOfCurrentPlayersDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetNumberOfCurrentPlayersOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetNumberOfCurrentPlayersMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(int32 AppID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetPlayerAchievements : public UUWorksRequestWeb
{
    FUWorksRequestWebGetPlayerAchievementsOnRequestCompleted OnRequestCompleted;      // 0x00A0 (size: 0x10)
    void GetPlayerAchievementsDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetPlayerAchievementsOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetPlayerAchievementsMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, FString Language);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetSchemaForGame : public UUWorksRequestWeb
{
    FUWorksRequestWebGetSchemaForGameOnRequestCompleted OnRequestCompleted;           // 0x00A0 (size: 0x10)
    void GetSchemaForGameDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetSchemaForGameOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetSchemaForGameMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FString Language);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetUserStatsForGame : public UUWorksRequestWeb
{
    FUWorksRequestWebGetUserStatsForGameOnRequestCompleted OnRequestCompleted;        // 0x00A0 (size: 0x10)
    void GetUserStatsForGameDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetUserStatsForGameOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetUserStatsForGameMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebSetUserStatsForGame : public UUWorksRequestWeb
{
    FUWorksRequestWebSetUserStatsForGameOnRequestCompleted OnRequestCompleted;        // 0x00A0 (size: 0x10)
    void SetUserStatsForGameDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebSetUserStatsForGameOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void SetUserStatsForGameMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<FString> Name, TArray<int32> Value);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebSetItemPaymentRules : public UUWorksRequestWeb
{
    FUWorksRequestWebSetItemPaymentRulesOnRequestCompleted OnRequestCompleted;        // 0x00A0 (size: 0x10)
    void SetItemPaymentRulesDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebSetItemPaymentRulesOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void SetItemPaymentRulesMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, int32 GameItemID, FUWorksAssociatedWorkshopFiles AssociatedWorkshopFiles, FUWorksPartnerAccounts PartnerAccounts, bool bMakeWorkshopFilesSubscribable, bool bValidateOnly);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetFinalizedContributors : public UUWorksRequestWeb
{
    FUWorksRequestWebGetFinalizedContributorsOnRequestCompleted OnRequestCompleted;   // 0x00A0 (size: 0x10)
    void GetFinalizedContributorsDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetFinalizedContributorsOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetFinalizedContributorsMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, int32 GameItemID);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebGetItemDailyRevenue : public UUWorksRequestWeb
{
    FUWorksRequestWebGetItemDailyRevenueOnRequestCompleted OnRequestCompleted;        // 0x00A0 (size: 0x10)
    void GetItemDailyRevenueDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebGetItemDailyRevenueOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void GetItemDailyRevenueMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FString ItemId, int32 DateStart, int32 DateEnd);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UUWorksRequestWebPopulateItemDescriptions : public UUWorksRequestWeb
{
    FUWorksRequestWebPopulateItemDescriptionsOnRequestCompleted OnRequestCompleted;   // 0x00A0 (size: 0x10)
    void PopulateItemDescriptionsDelegate(bool bSuccessful, FString Content);
    FUWorksRequestWebPopulateItemDescriptionsOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x00B0 (size: 0x10)
    void PopulateItemDescriptionsMinimalDelegate(bool bSuccessful, FString Content);

    void SetInput(FString Key, int32 AppID, FUWorksLanguages Languages);
    void GetOutput(FString& Content);
}; // Size: 0xC0

class UGetAppBetasNode : public UBlueprintAsyncActionBase
{
    FGetAppBetasNodeCompleted Completed;                                              // 0x0030 (size: 0x10)
    void GetAppBetasDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetAppBetasNode* GetAppBetasNode(FString Key, int32 AppID);
}; // Size: 0x40

class UGetAppBuildsNode : public UBlueprintAsyncActionBase
{
    FGetAppBuildsNodeCompleted Completed;                                             // 0x0030 (size: 0x10)
    void GetAppBuildsDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetAppBuildsNode* GetAppBuildsNode(FString Key, int32 AppID, int32 Count);
}; // Size: 0x40

class UGetAppDepotVersionsNode : public UBlueprintAsyncActionBase
{
    FGetAppDepotVersionsNodeCompleted Completed;                                      // 0x0030 (size: 0x10)
    void GetAppDepotVersionsDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetAppDepotVersionsNode* GetAppDepotVersionsNode(FString Key, int32 AppID);
}; // Size: 0x40

class UGetAppListNode : public UBlueprintAsyncActionBase
{
    FGetAppListNodeCompleted Completed;                                               // 0x0030 (size: 0x10)
    void GetAppListDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetAppListNode* GetAppListNode();
}; // Size: 0x40

class UGetCheatingReportsListNode : public UBlueprintAsyncActionBase
{
    FGetCheatingReportsListNodeCompleted Completed;                                   // 0x0030 (size: 0x10)
    void GetCheatingReportsListDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetCheatingReportsListNode* GetCheatingReportsListNode(FString Key, int32 AppID, int32 TimeBegin, int32 TimeEnd, bool bIncludeReports, bool bIncludeBans, FString ReportIDMin);
}; // Size: 0x40

class UGetPlayersBannedNode : public UBlueprintAsyncActionBase
{
    FGetPlayersBannedNodeCompleted Completed;                                         // 0x0030 (size: 0x10)
    void GetPlayersBannedDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetPlayersBannedNode* GetPlayersBannedNode(FString Key, int32 AppID);
}; // Size: 0x40

class UGetServerListNode : public UBlueprintAsyncActionBase
{
    FGetServerListNodeCompleted Completed;                                            // 0x0030 (size: 0x10)
    void GetServerListDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetServerListNode* GetServerListNode(FString Key, FString Filter, int32 Limit);
}; // Size: 0x40

class UGetServersAtAddressNode : public UBlueprintAsyncActionBase
{
    FGetServersAtAddressNodeCompleted Completed;                                      // 0x0030 (size: 0x10)
    void GetServersAtAddressDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetServersAtAddressNode* GetServersAtAddressNode(FString Addr);
}; // Size: 0x40

class USetAppBuildLiveNode : public UBlueprintAsyncActionBase
{
    FSetAppBuildLiveNodeCompleted Completed;                                          // 0x0030 (size: 0x10)
    void SetAppBuildLiveDelegate(bool bSuccessful, FString Content);

    class USetAppBuildLiveNode* SetAppBuildLiveNode(FString Key, int32 AppID, int32 BuildID, FString BetaKey, FString Description);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class UUpToDateCheckNode : public UBlueprintAsyncActionBase
{
    FUpToDateCheckNodeCompleted Completed;                                            // 0x0030 (size: 0x10)
    void UpToDateCheckDelegate(bool bSuccessful, FString Content);

    class UUpToDateCheckNode* UpToDateCheckNode(int32 AppID, int32 Version);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class UPostGameDataFrameNode : public UBlueprintAsyncActionBase
{
    FPostGameDataFrameNodeCompleted Completed;                                        // 0x0030 (size: 0x10)
    void PostGameDataFrameDelegate(bool bSuccessful, FString Content);

    class UPostGameDataFrameNode* PostGameDataFrameNode(FString Key, int32 AppID, FUWorksSteamID SteamID, FString BroadcastID, FString FrameData);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class UReportPlayerCheatingNode : public UBlueprintAsyncActionBase
{
    FReportPlayerCheatingNodeCompleted Completed;                                     // 0x0030 (size: 0x10)
    void ReportPlayerCheatingDelegate(bool bSuccessful, FString Content);

    class UReportPlayerCheatingNode* ReportPlayerCheatingNode(FString Key, FUWorksSteamID SteamID, int32 AppID, FUWorksSteamID SteamIDReporter, int32 AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32 GameMode, int32 SuspicionStartTime, int32 Severity);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class URequestPlayerGameBanNode : public UBlueprintAsyncActionBase
{
    FRequestPlayerGameBanNodeCompleted Completed;                                     // 0x0030 (size: 0x10)
    void RequestPlayerGameBanDelegate(bool bSuccessful, FString Content);

    class URequestPlayerGameBanNode* RequestPlayerGameBanNode(FString Key, FUWorksSteamID SteamID, int32 AppID, FUWorksSteamID ReportID, FString CheatDescription, int32 Duration, bool bDelayBan);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class URemovePlayerGameBanNode : public UBlueprintAsyncActionBase
{
    FRemovePlayerGameBanNodeCompleted Completed;                                      // 0x0030 (size: 0x10)
    void RemovePlayerGameBanDelegate(bool bSuccessful, FString Content);

    class URemovePlayerGameBanNode* RemovePlayerGameBanNode(FString Key, FUWorksSteamID SteamID, int32 AppID);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class UGetCheatingReportsNode : public UBlueprintAsyncActionBase
{
    FGetCheatingReportsNodeCompleted Completed;                                       // 0x0030 (size: 0x10)
    void GetCheatingReportsDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetCheatingReportsNode* GetCheatingReportsNode(FString Key, int32 AppID, int32 TimeEnd, int32 TimeBegin, FString ReportIDMin, bool bIncludeReports, bool bIncludeBans, FUWorksSteamID SteamID);
}; // Size: 0x40

class URequestVacStatusForUserNode : public UBlueprintAsyncActionBase
{
    FRequestVacStatusForUserNodeCompleted Completed;                                  // 0x0030 (size: 0x10)
    void RequestVacStatusForUserDelegate(bool bSuccessful, FString Content);

    class URequestVacStatusForUserNode* RequestVacStatusForUserNode(FString Key, FUWorksSteamID SteamID, int32 AppID, FString SessionId);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class UStartSecureMultiplayerSessionNode : public UBlueprintAsyncActionBase
{
    FStartSecureMultiplayerSessionNodeCompleted Completed;                            // 0x0030 (size: 0x10)
    void StartSecureMultiplayerSessionDelegate(bool bSuccessful, FString Content);

    class UStartSecureMultiplayerSessionNode* StartSecureMultiplayerSessionNode(FString Key, FUWorksSteamID SteamID, int32 AppID);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class UEndSecureMultiplayerSessionNode : public UBlueprintAsyncActionBase
{
    FEndSecureMultiplayerSessionNodeCompleted Completed;                              // 0x0030 (size: 0x10)
    void EndSecureMultiplayerSessionDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UEndSecureMultiplayerSessionNode* EndSecureMultiplayerSessionNode(FString Key, FUWorksSteamID SteamID, int32 AppID, FString SessionId);
}; // Size: 0x40

class UReportCheatDataNode : public UBlueprintAsyncActionBase
{
    FReportCheatDataNodeCompleted Completed;                                          // 0x0030 (size: 0x10)
    void ReportCheatDataDelegate(bool bSuccessful, FString Content);

    class UReportCheatDataNode* ReportCheatDataNode(FString Key, FUWorksSteamID SteamID, int32 AppID, FString PathAndFileName, FString WebCheatURL, FString TimeNow, FString TimeStarted, FString TimeStopped, FString CheatName, int32 GameProcessID, int32 CheatProcessID, FString CheatParamA, FString CheatParamB);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class UReportAbuseNode : public UBlueprintAsyncActionBase
{
    FReportAbuseNodeCompleted Completed;                                              // 0x0030 (size: 0x10)
    void ReportAbuseDelegate(bool bSuccessful, FString Content);

    class UReportAbuseNode* ReportAbuseNode(FString Key, FUWorksSteamID SteamIDActor, FUWorksSteamID SteamIDTarget, int32 AppID, uint8 AbuseType, uint8 ContentType, FString Description, FString GID);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class UGetTradeHistoryNode : public UBlueprintAsyncActionBase
{
    FGetTradeHistoryNodeCompleted Completed;                                          // 0x0030 (size: 0x10)
    void GetTradeHistoryDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetTradeHistoryNode* GetTradeHistoryNode(FString Key, int32 MaxTrades, int32 StartAfterTime, FString StartAfterTradeID, bool bNavigatingBack, bool bGetDescription, FString Language, bool bIncludeFailed, bool bIncludeTotal);
}; // Size: 0x40

class UFlushInventoryCacheNode : public UBlueprintAsyncActionBase
{
    FFlushInventoryCacheNodeCompleted Completed;                                      // 0x0030 (size: 0x10)
    void FlushInventoryCacheDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UFlushInventoryCacheNode* FlushInventoryCacheNode(FString Key, FUWorksSteamID SteamID, int32 AppID, FString ContextID);
}; // Size: 0x40

class UFlushAssetAppearanceCacheNode : public UBlueprintAsyncActionBase
{
    FFlushAssetAppearanceCacheNodeCompleted Completed;                                // 0x0030 (size: 0x10)
    void FlushAssetAppearanceCacheDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UFlushAssetAppearanceCacheNode* FlushAssetAppearanceCacheNode(FString Key, int32 AppID);
}; // Size: 0x40

class UFlushContextCacheNode : public UBlueprintAsyncActionBase
{
    FFlushContextCacheNodeCompleted Completed;                                        // 0x0030 (size: 0x10)
    void FlushContextCacheDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UFlushContextCacheNode* FlushContextCacheNode(FString Key, int32 AppID);
}; // Size: 0x40

class UGetTradeOffersNode : public UBlueprintAsyncActionBase
{
    FGetTradeOffersNodeCompleted Completed;                                           // 0x0030 (size: 0x10)
    void GetTradeOffersDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetTradeOffersNode* GetTradeOffersNode(FString Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescription, FString Language, bool bActiveOnly, bool bHistoricalOnly, int32 TimeHistoricalCutoff);
}; // Size: 0x40

class UGetTradeOfferNode : public UBlueprintAsyncActionBase
{
    FGetTradeOfferNodeCompleted Completed;                                            // 0x0030 (size: 0x10)
    void GetTradeOfferDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetTradeOfferNode* GetTradeOfferNode(FString Key, FString TradeOfferID, FString Language);
}; // Size: 0x40

class UGetTradeOffersSummaryNode : public UBlueprintAsyncActionBase
{
    FGetTradeOffersSummaryNodeCompleted Completed;                                    // 0x0030 (size: 0x10)
    void GetTradeOffersSummaryDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetTradeOffersSummaryNode* GetTradeOffersSummaryNode(FString Key, int32 TimeLastVisit);
}; // Size: 0x40

class UDeclineTradeOfferNode : public UBlueprintAsyncActionBase
{
    FDeclineTradeOfferNodeCompleted Completed;                                        // 0x0030 (size: 0x10)
    void DeclineTradeOfferDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UDeclineTradeOfferNode* DeclineTradeOfferNode(FString Key, FString TradeOfferID);
}; // Size: 0x40

class UCancelTradeOfferNode : public UBlueprintAsyncActionBase
{
    FCancelTradeOfferNodeCompleted Completed;                                         // 0x0030 (size: 0x10)
    void CancelTradeOfferDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UCancelTradeOfferNode* CancelTradeOfferNode(FString Key, FString TradeOfferID);
}; // Size: 0x40

class UGetMarketEligibilityNode : public UBlueprintAsyncActionBase
{
    FGetMarketEligibilityNodeCompleted Completed;                                     // 0x0030 (size: 0x10)
    void GetMarketEligibilityDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetMarketEligibilityNode* GetMarketEligibilityNode(FString Key, FUWorksSteamID SteamID);
}; // Size: 0x40

class UCancelAppListingsForUserNode : public UBlueprintAsyncActionBase
{
    FCancelAppListingsForUserNodeCompleted Completed;                                 // 0x0030 (size: 0x10)
    void CancelAppListingsForUserDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UCancelAppListingsForUserNode* CancelAppListingsForUserNode(FString Key, int32 AppID, FUWorksSteamID SteamID, bool bSynchronous);
}; // Size: 0x40

class UGetAssetIDNode : public UBlueprintAsyncActionBase
{
    FGetAssetIDNodeCompleted Completed;                                               // 0x0030 (size: 0x10)
    void GetAssetIDDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetAssetIDNode* GetAssetIDNode(FString Key, int32 AppID, FString ListingID);
}; // Size: 0x40

class UGetPopularNode : public UBlueprintAsyncActionBase
{
    FGetPopularNodeCompleted Completed;                                               // 0x0030 (size: 0x10)
    void GetPopularDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetPopularNode* GetPopularNode(FString Key, FString Language, int32 Rows, int32 Start, int32 FilterAppID, int32 ECurrency);
}; // Size: 0x40

class UCanTradeNode : public UBlueprintAsyncActionBase
{
    FCanTradeNodeCompleted Completed;                                                 // 0x0030 (size: 0x10)
    void CanTradeDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UCanTradeNode* CanTradeNode(FString Key, int32 AppID, FUWorksSteamID SteamID, FUWorksSteamID TargetId);
}; // Size: 0x40

class UFinalizeAssetTransactionNode : public UBlueprintAsyncActionBase
{
    FFinalizeAssetTransactionNodeCompleted Completed;                                 // 0x0030 (size: 0x10)
    void FinalizeAssetTransactionDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UFinalizeAssetTransactionNode* FinalizeAssetTransactionNode(FString Key, int32 AppID, FUWorksSteamID SteamID, FString TxnID, FString Language);
}; // Size: 0x40

class UGetAssetClassInfoNode : public UBlueprintAsyncActionBase
{
    FGetAssetClassInfoNodeCompleted Completed;                                        // 0x0030 (size: 0x10)
    void GetAssetClassInfoDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetAssetClassInfoNode* GetAssetClassInfoNode(FString Key, int32 AppID, int32 ClassCount, FString ClassID0, FString Language, FString InstanceID0);
}; // Size: 0x40

class UGetAssetPricesNode : public UBlueprintAsyncActionBase
{
    FGetAssetPricesNodeCompleted Completed;                                           // 0x0030 (size: 0x10)
    void GetAssetPricesDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetAssetPricesNode* GetAssetPricesNode(FString Key, int32 AppID, FString Currency, FString Language);
}; // Size: 0x40

class UGetExportedAssetsForUserNode : public UBlueprintAsyncActionBase
{
    FGetExportedAssetsForUserNodeCompleted Completed;                                 // 0x0030 (size: 0x10)
    void GetExportedAssetsForUserDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetExportedAssetsForUserNode* GetExportedAssetsForUserNode(FString Key, FUWorksSteamID SteamID, int32 AppID, FString ContextID);
}; // Size: 0x40

class UGetMarketPricesNode : public UBlueprintAsyncActionBase
{
    FGetMarketPricesNodeCompleted Completed;                                          // 0x0030 (size: 0x10)
    void GetMarketPricesDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetMarketPricesNode* GetMarketPricesNode(FString Key, int32 AppID);
}; // Size: 0x40

class UStartAssetTransactionNode : public UBlueprintAsyncActionBase
{
    FStartAssetTransactionNodeCompleted Completed;                                    // 0x0030 (size: 0x10)
    void StartAssetTransactionDelegate(bool bSuccessful, FString Content);

    class UStartAssetTransactionNode* StartAssetTransactionNode(FString Key, int32 AppID, FUWorksSteamID SteamID, FString AssetID0, int32 AssetQuantity0, FString Currency, FString Language, FString IPAddress, FString Referrer, bool bClientAuth);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class UStartTradeNode : public UBlueprintAsyncActionBase
{
    FStartTradeNodeCompleted Completed;                                               // 0x0030 (size: 0x10)
    void StartTradeDelegate(bool bSuccessful, FString Content);

    class UStartTradeNode* StartTradeNode(FString Key, int32 AppID, FUWorksSteamID PartyA, FUWorksSteamID PartyB);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class UGetHistoryCommandDetailsNode : public UBlueprintAsyncActionBase
{
    FGetHistoryCommandDetailsNodeCompleted Completed;                                 // 0x0030 (size: 0x10)
    void GetHistoryCommandDetailsDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetHistoryCommandDetailsNode* GetHistoryCommandDetailsNode(FString Key, int32 AppID, FUWorksSteamID SteamID, FString Command, FString ContextID, FString Arguments);
}; // Size: 0x40

class UGetUserHistoryNode : public UBlueprintAsyncActionBase
{
    FGetUserHistoryNodeCompleted Completed;                                           // 0x0030 (size: 0x10)
    void GetUserHistoryDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetUserHistoryNode* GetUserHistoryNode(FString Key, int32 AppID, FUWorksSteamID SteamID, FString ContextID, int32 StartTime, int32 EndTime);
}; // Size: 0x40

class UHistoryExecuteCommandsNode : public UBlueprintAsyncActionBase
{
    FHistoryExecuteCommandsNodeCompleted Completed;                                   // 0x0030 (size: 0x10)
    void HistoryExecuteCommandsDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UHistoryExecuteCommandsNode* HistoryExecuteCommandsNode(FString Key, int32 AppID, FUWorksSteamID SteamID, FString ContextID, FString ActorId);
}; // Size: 0x40

class USupportGetAssetHistoryNode : public UBlueprintAsyncActionBase
{
    FSupportGetAssetHistoryNodeCompleted Completed;                                   // 0x0030 (size: 0x10)
    void SupportGetAssetHistoryDelegate(bool bSuccessful, FString Content);

    class USupportGetAssetHistoryNode* SupportGetAssetHistoryNode(FString Key, int32 AppID, FString AssetID, FString ContextID);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class UCreateSessionNode : public UBlueprintAsyncActionBase
{
    FCreateSessionNodeCompleted Completed;                                            // 0x0030 (size: 0x10)
    void CreateSessionDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UCreateSessionNode* CreateSessionNode(FString Key, int32 AppID, FString Context, FUWorksTitle Title, FUWorksUsers Users, FUWorksSteamID SteamID);
}; // Size: 0x40

class UUpdateSessionNode : public UBlueprintAsyncActionBase
{
    FUpdateSessionNodeCompleted Completed;                                            // 0x0030 (size: 0x10)
    void UpdateSessionDelegate(bool bSuccessful, FString Content);

    class UUpdateSessionNode* UpdateSessionNode(FString Key, FString SessionId, int32 AppID, FUWorksTitle Title, FUWorksUsers Users, FUWorksSteamID SteamID);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class UEnumerateSessionsForAppNode : public UBlueprintAsyncActionBase
{
    FEnumerateSessionsForAppNodeCompleted Completed;                                  // 0x0030 (size: 0x10)
    void EnumerateSessionsForAppDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UEnumerateSessionsForAppNode* EnumerateSessionsForAppNode(FString Key, int32 AppID, FUWorksSteamID SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, FString Language);
}; // Size: 0x40

class UGetSessionDetailsForAppNode : public UBlueprintAsyncActionBase
{
    FGetSessionDetailsForAppNodeCompleted Completed;                                  // 0x0030 (size: 0x10)
    void GetSessionDetailsForAppDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetSessionDetailsForAppNode* GetSessionDetailsForAppNode(FString Key, FUWorksSessions Sessions, int32 AppID, FString Language);
}; // Size: 0x40

class URequestNotificationsNode : public UBlueprintAsyncActionBase
{
    FRequestNotificationsNodeCompleted Completed;                                     // 0x0030 (size: 0x10)
    void RequestNotificationsDelegate(bool bSuccessful, FString Content);

    class URequestNotificationsNode* RequestNotificationsNode(FString Key, FUWorksSteamID SteamID, int32 AppID);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class UDeleteSessionNode : public UBlueprintAsyncActionBase
{
    FDeleteSessionNodeCompleted Completed;                                            // 0x0030 (size: 0x10)
    void DeleteSessionDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UDeleteSessionNode* DeleteSessionNode(FString Key, FString SessionId, int32 AppID, FUWorksSteamID SteamID);
}; // Size: 0x40

class UDeleteSessionBatchNode : public UBlueprintAsyncActionBase
{
    FDeleteSessionBatchNodeCompleted Completed;                                       // 0x0030 (size: 0x10)
    void DeleteSessionBatchDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UDeleteSessionBatchNode* DeleteSessionBatchNode(FString Key, FString SessionId, int32 AppID);
}; // Size: 0x40

class UGetAccountListNode : public UBlueprintAsyncActionBase
{
    FGetAccountListNodeCompleted Completed;                                           // 0x0030 (size: 0x10)
    void GetAccountListDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetAccountListNode* GetAccountListNode(FString Key);
}; // Size: 0x40

class UCreateAccountNode : public UBlueprintAsyncActionBase
{
    FCreateAccountNodeCompleted Completed;                                            // 0x0030 (size: 0x10)
    void CreateAccountDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UCreateAccountNode* CreateAccountNode(FString Key, int32 AppID, FString Memo);
}; // Size: 0x40

class USetMemoNode : public UBlueprintAsyncActionBase
{
    FSetMemoNodeCompleted Completed;                                                  // 0x0030 (size: 0x10)
    void SetMemoDelegate(bool bSuccessful, FString Content);

    class USetMemoNode* SetMemoNode(FString Key, FUWorksSteamID SteamID, FString Memo);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class UResetLoginTokenNode : public UBlueprintAsyncActionBase
{
    FResetLoginTokenNodeCompleted Completed;                                          // 0x0030 (size: 0x10)
    void ResetLoginTokenDelegate(bool bSuccessful, FString Content);

    class UResetLoginTokenNode* ResetLoginTokenNode(FString Key, FUWorksSteamID SteamID);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class UDeleteAccountNode : public UBlueprintAsyncActionBase
{
    FDeleteAccountNodeCompleted Completed;                                            // 0x0030 (size: 0x10)
    void DeleteAccountDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UDeleteAccountNode* DeleteAccountNode(FString Key, FUWorksSteamID SteamID);
}; // Size: 0x40

class UGetAccountPublicInfoNode : public UBlueprintAsyncActionBase
{
    FGetAccountPublicInfoNodeCompleted Completed;                                     // 0x0030 (size: 0x10)
    void GetAccountPublicInfoDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetAccountPublicInfoNode* GetAccountPublicInfoNode(FString Key, FUWorksSteamID SteamID);
}; // Size: 0x40

class UQueryLoginTokenNode : public UBlueprintAsyncActionBase
{
    FQueryLoginTokenNodeCompleted Completed;                                          // 0x0030 (size: 0x10)
    void QueryLoginTokenDelegate(bool bSuccessful, FString Content);

    class UQueryLoginTokenNode* QueryLoginTokenNode(FString Key, FString LoginToken);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class USetBanStatusNode : public UBlueprintAsyncActionBase
{
    FSetBanStatusNodeCompleted Completed;                                             // 0x0030 (size: 0x10)
    void SetBanStatusDelegate(bool bSuccessful, FString Content);

    class USetBanStatusNode* SetBanStatusNode(FString Key, FUWorksSteamID SteamID, bool bBanned, int32 BanSeconds);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class UGetServerSteamIDsByIPNode : public UBlueprintAsyncActionBase
{
    FGetServerSteamIDsByIPNodeCompleted Completed;                                    // 0x0030 (size: 0x10)
    void GetServerSteamIDsByIPDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetServerSteamIDsByIPNode* GetServerSteamIDsByIPNode(FString Key, FString ServerIPs);
}; // Size: 0x40

class UGetServerIPsBySteamIDNode : public UBlueprintAsyncActionBase
{
    FGetServerIPsBySteamIDNodeCompleted Completed;                                    // 0x0030 (size: 0x10)
    void GetServerIPsBySteamIDDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetServerIPsBySteamIDNode* GetServerIPsBySteamIDNode(FString Key, FUWorksSteamID ServerSteamID);
}; // Size: 0x40

class UGetGameServerPlayerStatsForGameNode : public UBlueprintAsyncActionBase
{
    FGetGameServerPlayerStatsForGameNodeCompleted Completed;                          // 0x0030 (size: 0x10)
    void GetGameServerPlayerStatsForGameDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetGameServerPlayerStatsForGameNode* GetGameServerPlayerStatsForGameNode(FString Key, FUWorksGameID GameID, int32 AppID, FString RangeStart, FString RangeEnd, int32 MaxResults);
}; // Size: 0x40

class UAddItemNode : public UBlueprintAsyncActionBase
{
    FAddItemNodeCompleted Completed;                                                  // 0x0030 (size: 0x10)
    void AddItemDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UAddItemNode* AddItemNode(FString Key, int32 AppID, TArray<FUWorksSteamItemDef> ItemDefID, FString ItemPropsJSON, FUWorksSteamID SteamID, bool bNotify, FString requestID);
}; // Size: 0x40

class UAddPromoItemNode : public UBlueprintAsyncActionBase
{
    FAddPromoItemNodeCompleted Completed;                                             // 0x0030 (size: 0x10)
    void AddPromoItemDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UAddPromoItemNode* AddPromoItemNode(FString Key, int32 AppID, FUWorksSteamItemDef ItemDefID, FString ItemPropsJSON, FUWorksSteamID SteamID, bool bNotify, FString requestID);
}; // Size: 0x40

class UConsumeItemNode : public UBlueprintAsyncActionBase
{
    FConsumeItemNodeCompleted Completed;                                              // 0x0030 (size: 0x10)
    void ConsumeItemDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UConsumeItemNode* ConsumeItemNode(FString Key, int32 AppID, FUWorksSteamItemInstanceID ItemId, int32 Quantity, FUWorksSteamID SteamID, FString requestID);
}; // Size: 0x40

class UExchangeItemNode : public UBlueprintAsyncActionBase
{
    FExchangeItemNodeCompleted Completed;                                             // 0x0030 (size: 0x10)
    void ExchangeItemDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UExchangeItemNode* ExchangeItemNode(FString Key, int32 AppID, FUWorksSteamID SteamID, TArray<FUWorksSteamItemInstanceID> MaterialsItemID, TArray<int32> MaterialsQuantity, FUWorksSteamItemDef OutputItemDefID);
}; // Size: 0x40

class UGetInventoryNode : public UBlueprintAsyncActionBase
{
    FGetInventoryNodeCompleted Completed;                                             // 0x0030 (size: 0x10)
    void GetInventoryDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetInventoryNode* GetInventoryNode(FString Key, int32 AppID, FUWorksSteamID SteamID);
}; // Size: 0x40

class UGetItemDefsNode : public UBlueprintAsyncActionBase
{
    FGetItemDefsNodeCompleted Completed;                                              // 0x0030 (size: 0x10)
    void GetItemDefsDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetItemDefsNode* GetItemDefsNode(FString Key, int32 AppID, FString ModifiedSince, TArray<FUWorksSteamItemDef> ItemDefIDs, TArray<FUWorksSteamItemDef> WorkshopIDs, int32 CacheMaxAgeSeconds);
}; // Size: 0x40

class UGetPriceSheetNode : public UBlueprintAsyncActionBase
{
    FGetPriceSheetNodeCompleted Completed;                                            // 0x0030 (size: 0x10)
    void GetPriceSheetDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetPriceSheetNode* GetPriceSheetNode(FString Key, int32 ECurrency);
}; // Size: 0x40

class UConsolidateNode : public UBlueprintAsyncActionBase
{
    FConsolidateNodeCompleted Completed;                                              // 0x0030 (size: 0x10)
    void ConsolidateDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UConsolidateNode* ConsolidateNode(FString Key, int32 AppID, FUWorksSteamID SteamID, TArray<FUWorksSteamItemDef> ItemDefID, bool bForce);
}; // Size: 0x40

class UGetQuantityNode : public UBlueprintAsyncActionBase
{
    FGetQuantityNodeCompleted Completed;                                              // 0x0030 (size: 0x10)
    void GetQuantityDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetQuantityNode* GetQuantityNode(FString Key, int32 AppID, FUWorksSteamID SteamID, FUWorksSteamItemDef ItemDefID, bool bForce);
}; // Size: 0x40

class UDeleteLeaderboardNode : public UBlueprintAsyncActionBase
{
    FDeleteLeaderboardNodeCompleted Completed;                                        // 0x0030 (size: 0x10)
    void DeleteLeaderboardDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UDeleteLeaderboardNode* DeleteLeaderboardNode(FString Key, int32 AppID, FString Name);
}; // Size: 0x40

class UFindOrCreateLeaderboardNode : public UBlueprintAsyncActionBase
{
    FFindOrCreateLeaderboardNodeCompleted Completed;                                  // 0x0030 (size: 0x10)
    void FindOrCreateLeaderboardDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UFindOrCreateLeaderboardNode* FindOrCreateLeaderboardNode(FString Key, int32 AppID, FString Name, FString SortMethod, FString DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads);
}; // Size: 0x40

class UGetLeaderboardEntriesNode : public UBlueprintAsyncActionBase
{
    FGetLeaderboardEntriesNodeCompleted Completed;                                    // 0x0030 (size: 0x10)
    void GetLeaderboardEntriesDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetLeaderboardEntriesNode* GetLeaderboardEntriesNode(FString Key, int32 AppID, int32 RangeStart, int32 RangeEnd, int32 LeaderboardID, int32 DataRequest, FUWorksSteamID SteamID);
}; // Size: 0x40

class UGetLeaderboardsForGameNode : public UBlueprintAsyncActionBase
{
    FGetLeaderboardsForGameNodeCompleted Completed;                                   // 0x0030 (size: 0x10)
    void GetLeaderboardsForGameDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetLeaderboardsForGameNode* GetLeaderboardsForGameNode(FString Key, int32 AppID);
}; // Size: 0x40

class UResetLeaderboardNode : public UBlueprintAsyncActionBase
{
    FResetLeaderboardNodeCompleted Completed;                                         // 0x0030 (size: 0x10)
    void ResetLeaderboardDelegate(bool bSuccessful, FString Content);

    class UResetLeaderboardNode* ResetLeaderboardNode(FString Key, int32 AppID, int32 LeaderboardID);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class USetLeaderboardScoreNode : public UBlueprintAsyncActionBase
{
    FSetLeaderboardScoreNodeCompleted Completed;                                      // 0x0030 (size: 0x10)
    void SetLeaderboardScoreDelegate(bool bSuccessful, FString Content);

    class USetLeaderboardScoreNode* SetLeaderboardScoreNode(FString Key, int32 AppID, int32 LeaderboardID, FUWorksSteamID SteamID, int32 score, FString ScoreMethod, TArray<uint8> Details);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class UAdjustAgreementNode : public UBlueprintAsyncActionBase
{
    FAdjustAgreementNodeCompleted Completed;                                          // 0x0030 (size: 0x10)
    void AdjustAgreementDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UAdjustAgreementNode* AdjustAgreementNode(FString Key, FUWorksSteamID SteamID, FString AgreementID, int32 AppID, FString NextProcessDate);
}; // Size: 0x40

class UCancelAgreementNode : public UBlueprintAsyncActionBase
{
    FCancelAgreementNodeCompleted Completed;                                          // 0x0030 (size: 0x10)
    void CancelAgreementDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UCancelAgreementNode* CancelAgreementNode(FString Key, FUWorksSteamID SteamID, FString AgreementID, int32 AppID);
}; // Size: 0x40

class UFinalizeTxnNode : public UBlueprintAsyncActionBase
{
    FFinalizeTxnNodeCompleted Completed;                                              // 0x0030 (size: 0x10)
    void FinalizeTxnDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UFinalizeTxnNode* FinalizeTxnNode(FString Key, FString OrderID, int32 AppID);
}; // Size: 0x40

class UGetReportNode : public UBlueprintAsyncActionBase
{
    FGetReportNodeCompleted Completed;                                                // 0x0030 (size: 0x10)
    void GetReportDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetReportNode* GetReportNode(FString Key, int32 AppID, FString Time, EUWorksReportType Type, int32 MaxResults);
}; // Size: 0x40

class UGetUserAgreementInfoNode : public UBlueprintAsyncActionBase
{
    FGetUserAgreementInfoNodeCompleted Completed;                                     // 0x0030 (size: 0x10)
    void GetUserAgreementInfoDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetUserAgreementInfoNode* GetUserAgreementInfoNode(FString Key, FUWorksSteamID SteamID, int32 AppID);
}; // Size: 0x40

class UGetUserInfoNode : public UBlueprintAsyncActionBase
{
    FGetUserInfoNodeCompleted Completed;                                              // 0x0030 (size: 0x10)
    void GetUserInfoDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetUserInfoNode* GetUserInfoNode(FString Key, FUWorksSteamID SteamID, FString IPAddress);
}; // Size: 0x40

class UInitTxnNode : public UBlueprintAsyncActionBase
{
    FInitTxnNodeCompleted Completed;                                                  // 0x0030 (size: 0x10)
    void InitTxnDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UInitTxnNode* InitTxnNode(FString Key, FString OrderID, FUWorksSteamID SteamID, int32 AppID, int32 ItemCount, FString Language, FString Currency, TArray<FUWorksSteamItemDef> itemIds, TArray<int32> Quantities, TArray<int32> Amounts, TArray<FString> Descriptions, TArray<FString> Categories, TArray<int32> AssociatedBundles, TArray<FString> BillingTypes, TArray<FString> StartDates, TArray<FString> EndDates, TArray<FString> Periods, TArray<int32> Frequencies, TArray<FString> RecurringAmounts, int32 BundleCount, TArray<int32> BundleIDs, TArray<int32> BundleQuantities, TArray<FString> BundleDescriptions, TArray<FString> BundleCategories, EUWorksUserSession UserSession, FString IPAddress);
}; // Size: 0x40

class UProcessAgreementNode : public UBlueprintAsyncActionBase
{
    FProcessAgreementNodeCompleted Completed;                                         // 0x0030 (size: 0x10)
    void ProcessAgreementDelegate(bool bSuccessful, FString Content);

    class UProcessAgreementNode* ProcessAgreementNode(FString Key, FString OrderID, FUWorksSteamID SteamID, FString AgreementID, int32 AppID, int32 Amount, FString Currency);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class UQueryTxnNode : public UBlueprintAsyncActionBase
{
    FQueryTxnNodeCompleted Completed;                                                 // 0x0030 (size: 0x10)
    void QueryTxnDelegate(bool bSuccessful, FString Content);

    class UQueryTxnNode* QueryTxnNode(FString Key, int32 AppID, FString OrderID, FString TransID);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class URefundTxnNode : public UBlueprintAsyncActionBase
{
    FRefundTxnNodeCompleted Completed;                                                // 0x0030 (size: 0x10)
    void RefundTxnDelegate(bool bSuccessful, FString Content);

    class URefundTxnNode* RefundTxnNode(FString Key, FString OrderID, int32 AppID);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class UGetNewsForAppNode : public UBlueprintAsyncActionBase
{
    FGetNewsForAppNodeCompleted Completed;                                            // 0x0030 (size: 0x10)
    void GetNewsForAppDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetNewsForAppNode* GetNewsForAppNode(int32 AppID, int32 MaxLength, int32 EndDate, int32 Count, FString Feeds);
}; // Size: 0x40

class UGetNewsForAppAuthedNode : public UBlueprintAsyncActionBase
{
    FGetNewsForAppAuthedNodeCompleted Completed;                                      // 0x0030 (size: 0x10)
    void GetNewsForAppAuthedDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetNewsForAppAuthedNode* GetNewsForAppAuthedNode(FString Key, int32 AppID, int32 MaxLength, int32 EndDate, int32 Count, FString Feeds);
}; // Size: 0x40

class URecordOfflinePlaytimeNode : public UBlueprintAsyncActionBase
{
    FRecordOfflinePlaytimeNodeCompleted Completed;                                    // 0x0030 (size: 0x10)
    void RecordOfflinePlaytimeDelegate(bool bSuccessful, FString Content);

    class URecordOfflinePlaytimeNode* RecordOfflinePlaytimeNode(FUWorksSteamID SteamID, FString Ticket, FUWorksPlaySessions PlaySessions);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class UGetRecentlyPlayedGamesNode : public UBlueprintAsyncActionBase
{
    FGetRecentlyPlayedGamesNodeCompleted Completed;                                   // 0x0030 (size: 0x10)
    void GetRecentlyPlayedGamesDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetRecentlyPlayedGamesNode* GetRecentlyPlayedGamesNode(FString Key, FUWorksSteamID SteamID, int32 Count);
}; // Size: 0x40

class UGetOwnedGamesNode : public UBlueprintAsyncActionBase
{
    FGetOwnedGamesNodeCompleted Completed;                                            // 0x0030 (size: 0x10)
    void GetOwnedGamesDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetOwnedGamesNode* GetOwnedGamesNode(FString Key, FUWorksSteamID SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32> AppIDsFilter);
}; // Size: 0x40

class UGetSteamLevelNode : public UBlueprintAsyncActionBase
{
    FGetSteamLevelNodeCompleted Completed;                                            // 0x0030 (size: 0x10)
    void GetSteamLevelDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetSteamLevelNode* GetSteamLevelNode(FString Key, FUWorksSteamID SteamID);
}; // Size: 0x40

class UGetBadgesNode : public UBlueprintAsyncActionBase
{
    FGetBadgesNodeCompleted Completed;                                                // 0x0030 (size: 0x10)
    void GetBadgesDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetBadgesNode* GetBadgesNode(FString Key, FUWorksSteamID SteamID);
}; // Size: 0x40

class UGetCommunityBadgeProgressNode : public UBlueprintAsyncActionBase
{
    FGetCommunityBadgeProgressNodeCompleted Completed;                                // 0x0030 (size: 0x10)
    void GetCommunityBadgeProgressDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetCommunityBadgeProgressNode* GetCommunityBadgeProgressNode(FString Key, FUWorksSteamID SteamID, int32 BadgeID);
}; // Size: 0x40

class UIsPlayingSharedGameNode : public UBlueprintAsyncActionBase
{
    FIsPlayingSharedGameNodeCompleted Completed;                                      // 0x0030 (size: 0x10)
    void IsPlayingSharedGameDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UIsPlayingSharedGameNode* IsPlayingSharedGameNode(FString Key, FUWorksSteamID SteamID, int32 AppIDPlaying);
}; // Size: 0x40

class UQueryFilesNode : public UBlueprintAsyncActionBase
{
    FQueryFilesNodeCompleted Completed;                                               // 0x0030 (size: 0x10)
    void QueryFilesDelegate(bool bSuccessful, FString Content);

    class UQueryFilesNode* QueryFilesNode(FString Key, uint8 queryType, int32 Page, int32 CreatorAppID, int32 AppID, TArray<FString> requiredTags, TArray<FString> excludedTags, TArray<FString> RequiredFlags, TArray<FString> OmittedFlags, FString searchText, uint8 fileType, FUWorksPublishedFileID ChildPublishedFileID, int32 Days, bool bIncludeRecentVotesOnly, FUWorksRequiredKVTags RequiredKVTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKVTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, int32 ReturnPlaytimeStats, int32 NumPerPage, bool bMatchAllTags, int32 CacheMaxAgeSeconds, int32 Language, bool bReturnMetaData);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class USetDeveloperMetadataNode : public UBlueprintAsyncActionBase
{
    FSetDeveloperMetadataNodeCompleted Completed;                                     // 0x0030 (size: 0x10)
    void SetDeveloperMetadataDelegate(bool bSuccessful, FString Content);

    class USetDeveloperMetadataNode* SetDeveloperMetadataNode(FString Key, FUWorksPublishedFileID PublishedFileID, int32 AppID, FString MetaData);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class UUpdateTagsNode : public UBlueprintAsyncActionBase
{
    FUpdateTagsNodeCompleted Completed;                                               // 0x0030 (size: 0x10)
    void UpdateTagsDelegate(bool bSuccessful, FString Content);

    class UUpdateTagsNode* UpdateTagsNode(FString Key, FUWorksPublishedFileID PublishedFileID, int32 AppID, TArray<FString> AddTags, TArray<FString> RemoveTags);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class URankedByPublicationOrderNode : public UBlueprintAsyncActionBase
{
    FRankedByPublicationOrderNodeCompleted Completed;                                 // 0x0030 (size: 0x10)
    void RankedByPublicationOrderDelegate(bool bSuccessful, FString Content);

    class URankedByPublicationOrderNode* RankedByPublicationOrderNode(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 StartIndex, int32 Count, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, TArray<FString> tags, TArray<FString> UserTags);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class URankedByTrendNode : public UBlueprintAsyncActionBase
{
    FRankedByTrendNodeCompleted Completed;                                            // 0x0030 (size: 0x10)
    void RankedByTrendDelegate(bool bSuccessful, FString Content);

    class URankedByTrendNode* RankedByTrendNode(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 StartIndex, int32 Count, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, int32 Days, TArray<FString> tags, TArray<FString> UserTags);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class URankedByVoteNode : public UBlueprintAsyncActionBase
{
    FRankedByVoteNodeCompleted Completed;                                             // 0x0030 (size: 0x10)
    void RankedByVoteDelegate(bool bSuccessful, FString Content);

    class URankedByVoteNode* RankedByVoteNode(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 StartIndex, int32 Count, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, TArray<FString> tags, TArray<FString> UserTags);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class UResultSetSummaryNode : public UBlueprintAsyncActionBase
{
    FResultSetSummaryNodeCompleted Completed;                                         // 0x0030 (size: 0x10)
    void ResultSetSummaryDelegate(bool bSuccessful, FString Content);

    class UResultSetSummaryNode* ResultSetSummaryNode(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, TArray<FString> tags, TArray<FString> UserTags);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class UItemVoteSummaryNode : public UBlueprintAsyncActionBase
{
    FItemVoteSummaryNodeCompleted Completed;                                          // 0x0030 (size: 0x10)
    void ItemVoteSummaryDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UItemVoteSummaryNode* ItemVoteSummaryNode(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<int32> PublishedFileIDs);
}; // Size: 0x40

class UUserVoteSummaryNode : public UBlueprintAsyncActionBase
{
    FUserVoteSummaryNodeCompleted Completed;                                          // 0x0030 (size: 0x10)
    void UserVoteSummaryDelegate(bool bSuccessful, FString Content);

    class UUserVoteSummaryNode* UserVoteSummaryNode(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<int32> PublishedFileIDs);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class UEnumerateUserPublishedFilesNode : public UBlueprintAsyncActionBase
{
    FEnumerateUserPublishedFilesNodeCompleted Completed;                              // 0x0030 (size: 0x10)
    void EnumerateUserPublishedFilesDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UEnumerateUserPublishedFilesNode* EnumerateUserPublishedFilesNode(FString Key, FUWorksSteamID SteamID, int32 AppID);
}; // Size: 0x40

class UEnumerateUserSubscribedFilesNode : public UBlueprintAsyncActionBase
{
    FEnumerateUserSubscribedFilesNodeCompleted Completed;                             // 0x0030 (size: 0x10)
    void EnumerateUserSubscribedFilesDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UEnumerateUserSubscribedFilesNode* EnumerateUserSubscribedFilesNode(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 ListType);
}; // Size: 0x40

class UGetCollectionDetailsNode : public UBlueprintAsyncActionBase
{
    FGetCollectionDetailsNodeCompleted Completed;                                     // 0x0030 (size: 0x10)
    void GetCollectionDetailsDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetCollectionDetailsNode* GetCollectionDetailsNode(int32 CollectionCount, TArray<int32> PublishedFileIDs);
}; // Size: 0x40

class UGetPublishedFileDetailsNode : public UBlueprintAsyncActionBase
{
    FGetPublishedFileDetailsNodeCompleted Completed;                                  // 0x0030 (size: 0x10)
    void GetPublishedFileDetailsDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetPublishedFileDetailsNode* GetPublishedFileDetailsNode(int32 ItemCount, TArray<int32> PublishedFileIDs);
}; // Size: 0x40

class UGetUGCFileDetailsNode : public UBlueprintAsyncActionBase
{
    FGetUGCFileDetailsNodeCompleted Completed;                                        // 0x0030 (size: 0x10)
    void GetUGCFileDetailsDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetUGCFileDetailsNode* GetUGCFileDetailsNode(FString Key, FUWorksSteamID SteamID, int32 UGCID, int32 AppID);
}; // Size: 0x40

class USetUGCUsedByGCNode : public UBlueprintAsyncActionBase
{
    FSetUGCUsedByGCNodeCompleted Completed;                                           // 0x0030 (size: 0x10)
    void SetUGCUsedByGCDelegate(bool bSuccessful, FString Content);

    class USetUGCUsedByGCNode* SetUGCUsedByGCNode(FString Key, FUWorksSteamID SteamID, int32 UGCID, int32 AppID, bool bUsed);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class USubscribePublishedFileNode : public UBlueprintAsyncActionBase
{
    FSubscribePublishedFileNodeCompleted Completed;                                   // 0x0030 (size: 0x10)
    void SubscribePublishedFileDelegate(bool bSuccessful, FString Content);

    class USubscribePublishedFileNode* SubscribePublishedFileNode(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 PublishedFileID);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class UUnsubscribePublishedFileNode : public UBlueprintAsyncActionBase
{
    FUnsubscribePublishedFileNodeCompleted Completed;                                 // 0x0030 (size: 0x10)
    void UnsubscribePublishedFileDelegate(bool bSuccessful, FString Content);

    class UUnsubscribePublishedFileNode* UnsubscribePublishedFileNode(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 PublishedFileID);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class UCheckAppOwnershipNode : public UBlueprintAsyncActionBase
{
    FCheckAppOwnershipNodeCompleted Completed;                                        // 0x0030 (size: 0x10)
    void CheckAppOwnershipDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UCheckAppOwnershipNode* CheckAppOwnershipNode(FString Key, FUWorksSteamID SteamID, int32 AppID);
}; // Size: 0x40

class UGetAppPriceInfoNode : public UBlueprintAsyncActionBase
{
    FGetAppPriceInfoNodeCompleted Completed;                                          // 0x0030 (size: 0x10)
    void GetAppPriceInfoDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetAppPriceInfoNode* GetAppPriceInfoNode(FString Key, FUWorksSteamID SteamID, FString AppIDs);
}; // Size: 0x40

class UGetFriendListNode : public UBlueprintAsyncActionBase
{
    FGetFriendListNodeCompleted Completed;                                            // 0x0030 (size: 0x10)
    void GetFriendListDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetFriendListNode* GetFriendListNode(FString Key, FUWorksSteamID SteamID, FString Relationship);
}; // Size: 0x40

class UGetPlayerBansNode : public UBlueprintAsyncActionBase
{
    FGetPlayerBansNodeCompleted Completed;                                            // 0x0030 (size: 0x10)
    void GetPlayerBansDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetPlayerBansNode* GetPlayerBansNode(FString Key, FString SteamIDs);
}; // Size: 0x40

class UGetPlayerSummariesNode : public UBlueprintAsyncActionBase
{
    FGetPlayerSummariesNodeCompleted Completed;                                       // 0x0030 (size: 0x10)
    void GetPlayerSummariesDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetPlayerSummariesNode* GetPlayerSummariesNode(FString Key, FString SteamIDs);
}; // Size: 0x40

class UGetPublisherAppOwnershipNode : public UBlueprintAsyncActionBase
{
    FGetPublisherAppOwnershipNodeCompleted Completed;                                 // 0x0030 (size: 0x10)
    void GetPublisherAppOwnershipDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetPublisherAppOwnershipNode* GetPublisherAppOwnershipNode(FString Key, FUWorksSteamID SteamID);
}; // Size: 0x40

class UGetPublisherAppOwnershipChangesNode : public UBlueprintAsyncActionBase
{
    FGetPublisherAppOwnershipChangesNodeCompleted Completed;                          // 0x0030 (size: 0x10)
    void GetPublisherAppOwnershipChangesDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetPublisherAppOwnershipChangesNode* GetPublisherAppOwnershipChangesNode(FString Key, FString PackageRowVersion, FString CDKeyRowVersion);
}; // Size: 0x40

class UGetUserGroupListNode : public UBlueprintAsyncActionBase
{
    FGetUserGroupListNodeCompleted Completed;                                         // 0x0030 (size: 0x10)
    void GetUserGroupListDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetUserGroupListNode* GetUserGroupListNode(FString Key, FUWorksSteamID SteamID);
}; // Size: 0x40

class UGrantPackageNode : public UBlueprintAsyncActionBase
{
    FGrantPackageNodeCompleted Completed;                                             // 0x0030 (size: 0x10)
    void GrantPackageDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGrantPackageNode* GrantPackageNode(FString Key, FUWorksSteamID SteamID, int32 PackageID, FString IPAddress, FString ThirdPartyKey, int32 ThirdPartyAppID);
}; // Size: 0x40

class UResolveVanityURLNode : public UBlueprintAsyncActionBase
{
    FResolveVanityURLNodeCompleted Completed;                                         // 0x0030 (size: 0x10)
    void ResolveVanityURLDelegate(bool bSuccessful, FString Content);

    class UResolveVanityURLNode* ResolveVanityURLNode(FString Key, FString VanityURL, uint8 URLType);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class UAuthenticateUserNode : public UBlueprintAsyncActionBase
{
    FAuthenticateUserNodeCompleted Completed;                                         // 0x0030 (size: 0x10)
    void AuthenticateUserDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UAuthenticateUserNode* AuthenticateUserNode(FUWorksSteamID SteamID, TArray<uint8> SessionKey, TArray<uint8> EncryptedLoginKey);
}; // Size: 0x40

class UAuthenticateUserTicketNode : public UBlueprintAsyncActionBase
{
    FAuthenticateUserTicketNodeCompleted Completed;                                   // 0x0030 (size: 0x10)
    void AuthenticateUserTicketDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UAuthenticateUserTicketNode* AuthenticateUserTicketNode(FString Key, int32 AppID, FString Ticket);
}; // Size: 0x40

class UGetGlobalAchievementPercentagesForAppNode : public UBlueprintAsyncActionBase
{
    FGetGlobalAchievementPercentagesForAppNodeCompleted Completed;                    // 0x0030 (size: 0x10)
    void GetGlobalAchievementPercentagesForAppDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetGlobalAchievementPercentagesForAppNode* GetGlobalAchievementPercentagesForAppNode(FUWorksGameID GameID);
}; // Size: 0x40

class UGetGlobalStatsForGameNode : public UBlueprintAsyncActionBase
{
    FGetGlobalStatsForGameNodeCompleted Completed;                                    // 0x0030 (size: 0x10)
    void GetGlobalStatsForGameDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetGlobalStatsForGameNode* GetGlobalStatsForGameNode(int32 AppID, int32 Count, TArray<FString> Name, int32 StartDate, int32 EndDate);
}; // Size: 0x40

class UGetNumberOfCurrentPlayersNode : public UBlueprintAsyncActionBase
{
    FGetNumberOfCurrentPlayersNodeCompleted Completed;                                // 0x0030 (size: 0x10)
    void GetNumberOfCurrentPlayersDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetNumberOfCurrentPlayersNode* GetNumberOfCurrentPlayersNode(int32 AppID);
}; // Size: 0x40

class UGetPlayerAchievementsNode : public UBlueprintAsyncActionBase
{
    FGetPlayerAchievementsNodeCompleted Completed;                                    // 0x0030 (size: 0x10)
    void GetPlayerAchievementsDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetPlayerAchievementsNode* GetPlayerAchievementsNode(FString Key, FUWorksSteamID SteamID, int32 AppID, FString Language);
}; // Size: 0x40

class UGetSchemaForGameNode : public UBlueprintAsyncActionBase
{
    FGetSchemaForGameNodeCompleted Completed;                                         // 0x0030 (size: 0x10)
    void GetSchemaForGameDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetSchemaForGameNode* GetSchemaForGameNode(FString Key, int32 AppID, FString Language);
}; // Size: 0x40

class UGetUserStatsForGameNode : public UBlueprintAsyncActionBase
{
    FGetUserStatsForGameNodeCompleted Completed;                                      // 0x0030 (size: 0x10)
    void GetUserStatsForGameDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetUserStatsForGameNode* GetUserStatsForGameNode(FString Key, FUWorksSteamID SteamID, int32 AppID);
}; // Size: 0x40

class USetUserStatsForGameNode : public UBlueprintAsyncActionBase
{
    FSetUserStatsForGameNodeCompleted Completed;                                      // 0x0030 (size: 0x10)
    void SetUserStatsForGameDelegate(bool bSuccessful, FString Content);

    class USetUserStatsForGameNode* SetUserStatsForGameNode(FString Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<FString> Name, TArray<int32> Value);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class USetItemPaymentRulesNode : public UBlueprintAsyncActionBase
{
    FSetItemPaymentRulesNodeCompleted Completed;                                      // 0x0030 (size: 0x10)
    void SetItemPaymentRulesDelegate(bool bSuccessful, FString Content);

    class USetItemPaymentRulesNode* SetItemPaymentRulesNode(FString Key, int32 AppID, int32 GameItemID, FUWorksAssociatedWorkshopFiles AssociatedWorkshopFiles, FUWorksPartnerAccounts PartnerAccounts, bool bMakeWorkshopFilesSubscribable, bool bValidateOnly);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

class UGetFinalizedContributorsNode : public UBlueprintAsyncActionBase
{
    FGetFinalizedContributorsNodeCompleted Completed;                                 // 0x0030 (size: 0x10)
    void GetFinalizedContributorsDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetFinalizedContributorsNode* GetFinalizedContributorsNode(FString Key, int32 AppID, int32 GameItemID);
}; // Size: 0x40

class UGetItemDailyRevenueNode : public UBlueprintAsyncActionBase
{
    FGetItemDailyRevenueNodeCompleted Completed;                                      // 0x0030 (size: 0x10)
    void GetItemDailyRevenueDelegate(bool bSuccessful, FString Content);

    void OnRequestCompleted(bool bSuccessful, FString Content);
    class UGetItemDailyRevenueNode* GetItemDailyRevenueNode(FString Key, int32 AppID, FString ItemId, int32 DateStart, int32 DateEnd);
}; // Size: 0x40

class UPopulateItemDescriptionsNode : public UBlueprintAsyncActionBase
{
    FPopulateItemDescriptionsNodeCompleted Completed;                                 // 0x0030 (size: 0x10)
    void PopulateItemDescriptionsDelegate(bool bSuccessful, FString Content);

    class UPopulateItemDescriptionsNode* PopulateItemDescriptionsNode(FString Key, int32 AppID, FUWorksLanguages Languages);
    void OnRequestCompleted(bool bSuccessful, FString Content);
}; // Size: 0x40

struct FUWorksAnnexWebApps
{
}; // Size: 0x1

struct FUWorksAnnexWebBroadcast
{
}; // Size: 0x1

struct FUWorksAnnexWebCheatReporting
{
}; // Size: 0x1

struct FUWorksAnnexWebCommunity
{
}; // Size: 0x1

struct FUWorksAnnexWebEcon
{
}; // Size: 0x1

struct FUWorksAnnexWebEconMarket
{
}; // Size: 0x1

struct FUWorksAnnexWebEconomy
{
}; // Size: 0x1

struct FUWorksAnnexWebGameInventory
{
}; // Size: 0x1

struct FUWorksAnnexWebGameNotifications
{
}; // Size: 0x1

struct FUWorksAnnexWebGameServers
{
}; // Size: 0x1

struct FUWorksAnnexWebGameServerStats
{
}; // Size: 0x1

struct FUWorksAnnexWebInventory
{
}; // Size: 0x1

struct FUWorksAnnexWebLeaderboards
{
}; // Size: 0x1

struct FUWorksAnnexWebMicroTxn
{
}; // Size: 0x1

struct FUWorksAnnexWebNews
{
}; // Size: 0x1

struct FUWorksAnnexWebPlayer
{
}; // Size: 0x1

struct FUWorksAnnexWebPublishedFile
{
}; // Size: 0x1

struct FUWorksAnnexWebPublishedItemSearch
{
}; // Size: 0x1

struct FUWorksAnnexWebPublishedItemVoting
{
}; // Size: 0x1

struct FUWorksAnnexWebRemoteStorage
{
}; // Size: 0x1

struct FUWorksAnnexWebUser
{
}; // Size: 0x1

struct FUWorksAnnexWebUserAuth
{
}; // Size: 0x1

struct FUWorksAnnexWebUserStats
{
}; // Size: 0x1

struct FUWorksAnnexWebWorkshop
{
}; // Size: 0x1

#endif
