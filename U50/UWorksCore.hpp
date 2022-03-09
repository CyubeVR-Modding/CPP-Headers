#ifndef UE4SS_SDK_UWorksCore_HPP
#define UE4SS_SDK_UWorksCore_HPP

#include "UWorksCore_enums.hpp"

class UUWorksInterfaceCore : public UUWorksInterface
{
}; // Size: 0x28

class UUWorksRequestCore : public UUWorksRequest
{
}; // Size: 0x38

class UUWorksInterfaceCoreAppList : public UUWorksInterfaceCore
{
    FUWorksInterfaceCoreAppListSteamAppInstalled SteamAppInstalled;                   // 0x0028 (size: 0x10)
    void SteamAppInstalledDelegate(int32 AppID);
    FUWorksInterfaceCoreAppListSteamAppUninstalled SteamAppUninstalled;               // 0x0038 (size: 0x10)
    void SteamAppUninstalledDelegate(int32 AppID);

    int32 GetNumInstalledApps();
    int32 GetInstalledApps(TArray<int32>& AppIDs, int32 MaxAppIDs);
    int32 GetAppName(int32 AppID, FString& Name, int32 NameMaxLength);
    class UUWorksInterfaceCoreAppList* GetAppList();
    int32 GetAppInstallDir(int32 AppID, FString& Directory, int32 DirectoryMaxLength);
    int32 GetAppBuildId(int32 AppID);
}; // Size: 0x48

class UUWorksInterfaceCoreApps : public UUWorksInterfaceCore
{
    FUWorksInterfaceCoreAppsDlcInstalled DlcInstalled;                                // 0x0028 (size: 0x10)
    void DlcInstalledDelegate(int32 AppID);
    FUWorksInterfaceCoreAppsNewUrlLaunchParameters NewUrlLaunchParameters;            // 0x0038 (size: 0x10)
    void NewUrlLaunchParametersDelegate();

    void UninstallDLC(int32 AppID);
    bool MarkContentCorrupt(bool bMissingFilesOnly);
    void InstallDLC(int32 AppID);
    FString GetLaunchQueryParam(FString Key);
    int32 GetInstalledDepots(int32 AppID, TArray<int32>& Depots, int32 MaxDepots);
    void GetFileDetailsMinimal(const FGetFileDetailsMinimalCompleted& Completed, FString Filename);
    class UUWorksRequestCoreGetFileDetails* GetFileDetails();
    int32 GetEarliestPurchaseUnixTime(int32 AppID);
    bool GetDlcDownloadProgress(int32 AppID, int32& BytesDownloaded, int32& bytesTotal);
    int32 GetDLCCount();
    FString GetCurrentGameLanguage();
    bool GetCurrentBetaName(FString& Name, int32 NameMaxLength);
    FString GetAvailableGameLanguages();
    class UUWorksInterfaceCoreApps* GetApps();
    FUWorksSteamID GetAppOwner();
    int32 GetAppInstallDir(int32 AppID, FString& Path, int32 PathMaxLength);
    int32 GetAppBuildId();
    bool BIsVACBanned();
    bool BIsSubscribedFromFreeWeekend();
    bool BIsSubscribedApp(int32 AppID);
    bool BIsSubscribed();
    bool BIsLowViolence();
    bool BIsDlcInstalled(int32 AppID);
    bool BIsCybercafe();
    bool BIsAppInstalled(int32 AppID);
    bool BGetDLCDataByIndex(int32 DLC, int32& AppID, bool& bAvailable, FString& Name, int32 NameMaxLength);
}; // Size: 0x48

struct FUWorksControllerHandle
{
}; // Size: 0x8

struct FUWorksControllerAnalogActionHandle
{
}; // Size: 0x8

struct FUWorksControllerMotionData
{
    float RotQuatX;                                                                   // 0x0000 (size: 0x4)
    float RotQuatY;                                                                   // 0x0004 (size: 0x4)
    float RotQuatZ;                                                                   // 0x0008 (size: 0x4)
    float RotQuatW;                                                                   // 0x000C (size: 0x4)
    float PosAccelX;                                                                  // 0x0010 (size: 0x4)
    float PosAccelY;                                                                  // 0x0014 (size: 0x4)
    float PosAccelZ;                                                                  // 0x0018 (size: 0x4)
    float RotVelX;                                                                    // 0x001C (size: 0x4)
    float RotVelY;                                                                    // 0x0020 (size: 0x4)
    float RotVelZ;                                                                    // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FUWorksControllerActionSetHandle
{
}; // Size: 0x8

struct FUWorksControllerDigitalActionHandle
{
}; // Size: 0x8

struct FUWorksControllerDigitalActionData
{
    bool bState;                                                                      // 0x0000 (size: 0x1)
    bool bActive;                                                                     // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FUWorksControllerAnalogActionData
{
    EUWorksControllerSourceMode Mode;                                                 // 0x0000 (size: 0x1)
    float X;                                                                          // 0x0004 (size: 0x4)
    float Y;                                                                          // 0x0008 (size: 0x4)
    bool bActive;                                                                     // 0x000C (size: 0x1)

}; // Size: 0x10

class UUWorksInterfaceCoreController : public UUWorksInterfaceCore
{

    void TriggerVibration(FUWorksControllerHandle ControllerHandle, int32 LeftSpeed, int32 RightSpeed);
    void TriggerRepeatedHapticPulse(FUWorksControllerHandle ControllerHandle, EUWorksSteamControllerPad TargetPad, int32 DurationMicroSec, int32 OffMicroSec, int32 Repeat, int32 Flags);
    void TriggerHapticPulse(FUWorksControllerHandle ControllerHandle, EUWorksSteamControllerPad TargetPad, int32 DurationMicroSec);
    void StopAnalogActionMomentum(FUWorksControllerHandle ControllerHandle, FUWorksControllerAnalogActionHandle Action);
    bool Shutdown();
    bool ShowBindingPanel(FUWorksControllerHandle ControllerHandle);
    void SetLEDColor(FUWorksControllerHandle ControllerHandle, uint8 ColorR, uint8 ColorG, uint8 ColorB, TArray<EUWorksSteamControllerLEDFlag> Flags);
    void RunFrame();
    bool Init();
    FString GetStringForActionOrigin(EUWorksControllerActionOrigin Origin);
    FUWorksControllerMotionData GetMotionData(FUWorksControllerHandle ControllerHandle);
    FString GetGlyphForActionOrigin(EUWorksControllerActionOrigin Origin);
    int32 GetGamepadIndexForController(FUWorksControllerHandle ControllerHandle);
    int32 GetDigitalActionOrigins(FUWorksControllerHandle ControllerHandle, FUWorksControllerActionSetHandle ActionSetHandle, FUWorksControllerDigitalActionHandle DigitalActionHandle, TArray<EUWorksControllerActionOrigin>& OriginsOut);
    FUWorksControllerDigitalActionHandle GetDigitalActionHandle(FString ActionName);
    FUWorksControllerDigitalActionData GetDigitalActionData(FUWorksControllerHandle ControllerHandle, FUWorksControllerDigitalActionHandle DigitalActionHandle);
    FUWorksControllerActionSetHandle GetCurrentActionSet(FUWorksControllerHandle ControllerHandle);
    FUWorksControllerHandle GetControllerForGamepadIndex(int32 Index);
    class UUWorksInterfaceCoreController* GetController();
    int32 GetConnectedControllers(TArray<FUWorksControllerHandle>& HandlesOut);
    int32 GetAnalogActionOrigins(FUWorksControllerHandle ControllerHandle, FUWorksControllerActionSetHandle ActionSetHandle, FUWorksControllerAnalogActionHandle AnalogActionHandle, TArray<EUWorksControllerActionOrigin>& OriginsOut);
    FUWorksControllerAnalogActionHandle GetAnalogActionHandle(FString ActionName);
    FUWorksControllerAnalogActionData GetAnalogActionData(FUWorksControllerHandle ControllerHandle, FUWorksControllerAnalogActionHandle AnalogActionHandle);
    FUWorksControllerActionSetHandle GetActionSetHandle(FString ActionSetName);
    void ActivateActionSet(FUWorksControllerHandle ControllerHandle, FUWorksControllerActionSetHandle ActionSetHandle);
}; // Size: 0x28

struct FUWorksFriendsGroupID
{
}; // Size: 0x2

class UUWorksInterfaceCoreFriends : public UUWorksInterfaceCore
{
    FUWorksInterfaceCoreFriendsPersonaStateChange PersonaStateChange;                 // 0x0028 (size: 0x10)
    void PersonaStateChangeDelegate(FUWorksSteamID SteamID, const TArray<EUWorksPersonaChange>& ChangeFlags);
    FUWorksInterfaceCoreFriendsGameOverlayActivated GameOverlayActivated;             // 0x0038 (size: 0x10)
    void GameOverlayActivatedDelegate(bool bActive);
    FUWorksInterfaceCoreFriendsGameServerChangeRequested GameServerChangeRequested;   // 0x0048 (size: 0x10)
    void GameServerChangeRequestedDelegate(FString Server, FString Password);
    FUWorksInterfaceCoreFriendsGameLobbyJoinRequested GameLobbyJoinRequested;         // 0x0058 (size: 0x10)
    void GameLobbyJoinRequestedDelegate(FUWorksSteamID SteamIDLobby, FUWorksSteamID SteamIDFriend);
    FUWorksInterfaceCoreFriendsAvatarImageLoaded AvatarImageLoaded;                   // 0x0068 (size: 0x10)
    void AvatarImageLoadedDelegate(FUWorksSteamID SteamID, class UTexture2D* Image);
    FUWorksInterfaceCoreFriendsFriendRichPresenceUpdate FriendRichPresenceUpdate;     // 0x0078 (size: 0x10)
    void FriendRichPresenceUpdateDelegate(FUWorksSteamID SteamIDFriend, int32 AppID);
    FUWorksInterfaceCoreFriendsGameRichPresenceJoinRequested GameRichPresenceJoinRequested; // 0x0088 (size: 0x10)
    void GameRichPresenceJoinRequestedDelegate(FUWorksSteamID SteamIDFriend, FString Connect);
    FUWorksInterfaceCoreFriendsGameConnectedClanChatMsg GameConnectedClanChatMsg;     // 0x0098 (size: 0x10)
    void GameConnectedClanChatMsgDelegate(FUWorksSteamID SteamIDClanChat, FUWorksSteamID SteamIDUser, int32 MessageID);
    FUWorksInterfaceCoreFriendsGameConnectedChatJoin GameConnectedChatJoin;           // 0x00A8 (size: 0x10)
    void GameConnectedChatJoinDelegate(FUWorksSteamID SteamIDClanChat, FUWorksSteamID SteamIDUser);
    FUWorksInterfaceCoreFriendsGameConnectedChatLeave GameConnectedChatLeave;         // 0x00B8 (size: 0x10)
    void GameConnectedChatLeaveDelegate(FUWorksSteamID SteamIDClanChat, FUWorksSteamID SteamIDUser, bool bKicked, bool bDropped);
    FUWorksInterfaceCoreFriendsGameConnectedFriendChatMsg GameConnectedFriendChatMsg; // 0x00C8 (size: 0x10)
    void GameConnectedFriendChatMsgDelegate(FUWorksSteamID SteamIDUser, int32 MessageID);

    bool SetRichPresence(FString Key, FString Value);
    void SetPlayedWith(FUWorksSteamID SteamIDUserPlayedWith);
    void SetPersonaNameMinimal(const FSetPersonaNameMinimalCompleted& Completed, FString Name);
    class UUWorksRequestCoreSetPersonaName* SetPersonaName();
    bool SetListenForFriendsMessages(bool bInterceptEnabled);
    void SetInGameVoiceSpeaking(FUWorksSteamID SteamIDUser, bool bSpeaking);
    bool SendClanChatMessage(FUWorksSteamID SteamIDClanChat, FString Text);
    bool RequestUserInformation(FUWorksSteamID SteamIDUser, bool bRequireNameOnly);
    void RequestFriendRichPresence(FUWorksSteamID SteamIDFriend);
    void RequestClanOfficerListMinimal(const FRequestClanOfficerListMinimalCompleted& Completed, FUWorksSteamID SteamID);
    class UUWorksRequestCoreRequestClanOfficerList* RequestClanOfficerList();
    bool ReplyToFriendMessage(FUWorksSteamID SteamIDFriend, FString MessageToSend);
    bool OpenClanChatWindowInSteam(FUWorksSteamID SteamIDClanChat);
    bool LeaveClanChatRoom(FUWorksSteamID SteamIDClan);
    void JoinClanChatRoomMinimal(const FJoinClanChatRoomMinimalCompleted& Completed, FUWorksSteamID SteamIDClan);
    class UUWorksRequestCoreJoinClanChatRoom* JoinClanChatRoom();
    bool IsUserInSource(FUWorksSteamID SteamIDUser, FUWorksSteamID SteamIDSource);
    void IsFollowingMinimal(const FIsFollowingMinimalCompleted& Completed, FUWorksSteamID SteamID);
    class UUWorksRequestCoreIsFollowing* IsFollowing();
    bool IsClanChatWindowOpenInSteam(FUWorksSteamID SteamIDClanChat);
    bool IsClanChatAdmin(FUWorksSteamID SteamIDClanChat, FUWorksSteamID SteamIDUser);
    bool InviteUserToGame(FUWorksSteamID SteamIDFriend, FString ConnectString);
    bool HasFriend(FUWorksSteamID SteamIDFriend, TArray<EUWorksFriendFlags> FriendFlags);
    TArray<EUWorksUserRestriction> GetUserRestrictions();
    class UTexture2D* GetSmallFriendAvatar(FUWorksSteamID SteamIDFriend);
    FString GetPlayerNickname(FUWorksSteamID SteamIDPlayer);
    EUWorksPersonaState GetPersonaState();
    FString GetPersonaName();
    class UTexture2D* GetMediumFriendAvatar(FUWorksSteamID SteamIDFriend);
    class UTexture2D* GetLargeFriendAvatar(FUWorksSteamID SteamIDFriend);
    int32 GetFriendSteamLevel(FUWorksSteamID SteamIDFriend);
    FString GetFriendsGroupName(FUWorksFriendsGroupID FriendsGroupID);
    void GetFriendsGroupMembersList(FUWorksFriendsGroupID FriendsGroupID, TArray<FUWorksSteamID>& SteamIDMembers, int32 MembersCount);
    int32 GetFriendsGroupMembersCount(FUWorksFriendsGroupID FriendsGroupID);
    FUWorksFriendsGroupID GetFriendsGroupIDByIndex(int32 FriendGroup);
    int32 GetFriendsGroupCount();
    class UUWorksInterfaceCoreFriends* GetFriends();
    int32 GetFriendRichPresenceKeyCount(FUWorksSteamID SteamIDFriend);
    FString GetFriendRichPresenceKeyByIndex(FUWorksSteamID SteamIDFriend, int32 Key);
    FString GetFriendRichPresence(FUWorksSteamID SteamIDFriend, FString Key);
    EUWorksFriendRelationship GetFriendRelationship(FUWorksSteamID SteamIDFriend);
    EUWorksPersonaState GetFriendPersonaState(FUWorksSteamID SteamIDFriend);
    FString GetFriendPersonaNameHistory(FUWorksSteamID SteamIDFriend, int32 PersonaName);
    FString GetFriendPersonaName(FUWorksSteamID SteamIDFriend);
    int32 GetFriendMessage(FUWorksSteamID SteamIDFriend, int32 MessageID, FString& Text, int32 TextMaxLength, EUWorksChatEntryType& ChatEntryType);
    bool GetFriendGamePlayed(FUWorksSteamID SteamIDFriend, FUWorksGameID& GameID, FString& GameIP, int32& ConnectionPort, int32& QueryPort, FUWorksSteamID& SteamIDLobby);
    FUWorksSteamID GetFriendFromSourceByIndex(FUWorksSteamID SteamIDSource, int32 Friend);
    int32 GetFriendCountFromSource(FUWorksSteamID SteamIDSource);
    int32 GetFriendCount(TArray<EUWorksFriendFlags> FriendFlags);
    int32 GetFriendCoplayTime(FUWorksSteamID SteamIDFriend);
    int32 GetFriendCoplayGame(FUWorksSteamID SteamIDFriend);
    FUWorksSteamID GetFriendByIndex(int32 Friend, TArray<EUWorksFriendFlags> FriendFlags);
    void GetFollowerCountMinimal(const FGetFollowerCountMinimalCompleted& Completed, FUWorksSteamID SteamID);
    class UUWorksRequestCoreGetFollowerCount* GetFollowerCount();
    int32 GetCoplayFriendCount();
    FUWorksSteamID GetCoplayFriend(int32 CoplayFriend);
    FString GetClanTag(FUWorksSteamID SteamIDClan);
    FUWorksSteamID GetClanOwner(FUWorksSteamID SteamIDClan);
    int32 GetClanOfficerCount(FUWorksSteamID SteamIDClan);
    FUWorksSteamID GetClanOfficerByIndex(FUWorksSteamID SteamIDClan, int32 Officer);
    FString GetClanName(FUWorksSteamID SteamIDClan);
    int32 GetClanCount();
    int32 GetClanChatMessage(FUWorksSteamID SteamIDClanChat, int32 MessageID, FString& Text, int32 TextMax, EUWorksChatEntryType& ChatEntryType, FUWorksSteamID& SteamIDChatter);
    int32 GetClanChatMemberCount(FUWorksSteamID SteamIDClan);
    FUWorksSteamID GetClanByIndex(int32 Clan);
    bool GetClanActivityCounts(FUWorksSteamID SteamIDClan, int32& Online, int32& InGame, int32& Chatting);
    FUWorksSteamID GetChatMemberByIndex(FUWorksSteamID SteamIDClan, int32 User);
    void EnumerateFollowingListMinimal(const FEnumerateFollowingListMinimalCompleted& Completed, int32 StartIndex);
    class UUWorksRequestCoreEnumerateFollowingList* EnumerateFollowingList();
    void DownloadClanActivityCountsMinimal(const FDownloadClanActivityCountsMinimalCompleted& Completed, TArray<FUWorksSteamID> SteamIDClans);
    class UUWorksRequestCoreDownloadClanActivityCounts* DownloadClanActivityCounts();
    bool CloseClanChatWindowInSteam(FUWorksSteamID SteamIDClanChat);
    void ClearRichPresence();
    void ActivateGameOverlayToWebPage(FString URL);
    void ActivateGameOverlayToUser(EUWorksOverlaySpecific Dialog, FUWorksSteamID SteamID);
    void ActivateGameOverlayToStore(int32 AppID, EUWorksOverlayToStoreFlag Flag);
    void ActivateGameOverlayInviteDialog(FUWorksSteamID SteamIDLobby);
    void ActivateGameOverlay(EUWorksOverlayGeneric Dialog);
}; // Size: 0xD8

struct FUWorksTicketHandle
{
}; // Size: 0x4

class UUWorksInterfaceCoreGameServer : public UUWorksInterfaceCore
{
    FUWorksInterfaceCoreGameServerGSPolicyResponse GSPolicyResponse;                  // 0x0028 (size: 0x10)
    void GSPolicyResponseDelegate(int32 Secure);
    FUWorksInterfaceCoreGameServerGSClientGroupStatus GSClientGroupStatus;            // 0x0038 (size: 0x10)
    void GSClientGroupStatusDelegate(FUWorksSteamID SteamIDUser, FUWorksSteamID SteamIDGroup, bool bMember, bool bOfficer);
    FUWorksInterfaceCoreGameServerGSValidateAuthTicketResponse GSValidateAuthTicketResponse; // 0x0048 (size: 0x10)
    void GSValidateAuthTicketResponseDelegate(FUWorksSteamID SteamID, EUWorksAuthSessionResponse AuthSessionResponse, FUWorksSteamID OwnerSteamID);

    bool WasRestartRequested();
    EUWorksUserHasLicenseForAppResult UserHasLicenseForApp(FUWorksSteamID SteamID, int32 AppID);
    void SetServerName(FString ServerName);
    void SetRegion(FString Region);
    void SetPasswordProtected(bool bPasswordProtected);
    void SetMaxPlayerCount(int32 PlayersMax);
    void SetMapName(FString MapName);
    void SetKeyValue(FString Key, FString Value);
    void SetHeartbeatInterval(int32 HeartbeatInterval);
    void SetGameTags(FString GameTags);
    void SetGameData(FString GameData);
    void SetBotPlayerCount(int32 BotPlayers);
    bool RequestUserGroupStatus(FUWorksSteamID SteamIDUser, FUWorksSteamID SteamIDGroup);
    FUWorksSteamID GetSteamID();
    class UUWorksInterfaceCoreGameServer* GetGameServer();
    FUWorksTicketHandle GetAuthSessionTicket(TArray<uint8>& Ticket);
    void ForceHeartbeat();
    void EndAuthSession(FUWorksSteamID SteamID);
    void EnableHeartbeats(bool bActive);
    void ComputeNewPlayerCompatibilityMinimal(const FComputeNewPlayerCompatibilityMinimalCompleted& Completed, FUWorksSteamID SteamIDNewPlayer);
    class UUWorksRequestCoreComputeNewPlayerCompatibility* ComputeNewPlayerCompatibility();
    void ClearAllKeyValues();
    void CancelAuthTicket(FUWorksTicketHandle TicketHandle);
    bool BSecure();
    bool BLoggedOn();
    EUWorksBeginAuthSessionResult BeginAuthSession(TArray<uint8> Ticket, FUWorksSteamID SteamID);
    void AssociateWithClanMinimal(const FAssociateWithClanMinimalCompleted& Completed, FUWorksSteamID SteamIDClan);
    class UUWorksRequestCoreAssociateWithClan* AssociateWithClan();
}; // Size: 0x58

class UUWorksInterfaceCoreGameServerStats : public UUWorksInterfaceCore
{
    FUWorksInterfaceCoreGameServerStatsGSStatsUnloaded GSStatsUnloaded;               // 0x0028 (size: 0x10)
    void GSStatsUnloadedDelegate(FUWorksSteamID SteamIDUser);

    bool UpdateUserAvgRateStat(FUWorksSteamID SteamIDUser, FString Name, float CountThisSession, float SessionLength);
    void StoreUserStatsMinimal(const FStoreUserStatsMinimalCompleted& Completed, FUWorksSteamID SteamIDUser);
    class UUWorksRequestCoreStoreUserStats* StoreUserStats();
    bool SetUserStatFromInteger(FUWorksSteamID SteamIDUser, FString Name, int32 Data);
    bool SetUserStatFromFloat(FUWorksSteamID SteamIDUser, FString Name, float Data);
    bool SetUserAchievement(FUWorksSteamID SteamIDUser, FString Name);
    void RequestUserStatsMinimal(const FRequestUserStatsMinimalCompleted& Completed, FUWorksSteamID SteamIDUser);
    class UUWorksRequestCoreRequestUserStatsGS* RequestUserStats();
    bool GetUserStatAsInteger(FUWorksSteamID SteamIDUser, FString Name, int32& Data);
    bool GetUserStatAsFloat(FUWorksSteamID SteamIDUser, FString Name, float& Data);
    bool GetUserAchievement(FUWorksSteamID SteamIDUser, FString Name, bool& bAchieved);
    class UUWorksInterfaceCoreGameServerStats* GetGameServerStats();
    bool ClearUserAchievement(FUWorksSteamID SteamIDUser, FString Name);
}; // Size: 0x38

struct FUWorksSteamInventoryResult
{
}; // Size: 0x4

struct FUWorksSteamItemDetails
{
    FUWorksSteamItemInstanceID InstanceID;                                            // 0x0000 (size: 0x8)
    FUWorksSteamItemDef Definition;                                                   // 0x0008 (size: 0x4)
    int32 Quantity;                                                                   // 0x000C (size: 0x4)
    TArray<EUWorksSteamItemFlags> Flags;                                              // 0x0010 (size: 0x10)

}; // Size: 0x20

class UUWorksInterfaceCoreInventory : public UUWorksInterfaceCore
{
    FUWorksInterfaceCoreInventorySteamInventoryResultReady SteamInventoryResultReady; // 0x0028 (size: 0x10)
    void SteamInventoryResultReadyDelegate(FUWorksSteamInventoryResult Handle, EUWorksResult Result);
    FUWorksInterfaceCoreInventorySteamInventoryFullUpdate SteamInventoryFullUpdate;   // 0x0038 (size: 0x10)
    void SteamInventoryFullUpdateDelegate(FUWorksSteamInventoryResult Handle);
    FUWorksInterfaceCoreInventorySteamInventoryDefinitionUpdate SteamInventoryDefinitionUpdate; // 0x0048 (size: 0x10)
    void SteamInventoryDefinitionUpdateDelegate();

    bool TriggerItemDrop(FUWorksSteamInventoryResult& Handle, FUWorksSteamItemDef ItemDefinition);
    bool TransferItemQuantity(FUWorksSteamInventoryResult& Handle, FUWorksSteamItemInstanceID ItemSourceInstanceID, int32 ItemSourceQuantity, FUWorksSteamItemInstanceID ItemDestinationInstanceID);
    bool TradeItems(FUWorksSteamInventoryResult& Handle, FUWorksSteamID SteamIDTradePartner, TArray<FUWorksSteamItemInstanceID> ItemsGiven, TArray<int32> ItemsGivenQuantities, TArray<FUWorksSteamItemInstanceID> ItemsReceived, TArray<int32> ItemsReceivedQuantities);
    bool SerializeResult(FUWorksSteamInventoryResult Handle, TArray<uint8>& Buffer);
    void RequestEligiblePromoItemDefinitionsIDsMinimal(const FRequestEligiblePromoItemDefinitionsIDsMinimalCompleted& Completed, FUWorksSteamID SteamID);
    class UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs* RequestEligiblePromoItemDefinitionsIDs();
    bool LoadItemDefinitions();
    bool GrantPromoItems(FUWorksSteamInventoryResult& Handle);
    int32 GetResultTimestamp(FUWorksSteamInventoryResult Handle);
    EUWorksResult GetResultStatus(FUWorksSteamInventoryResult Handle);
    bool GetResultItems(FUWorksSteamInventoryResult Handle, TArray<FUWorksSteamItemDetails>& items);
    bool GetItemsByID(FUWorksSteamInventoryResult& Handle, TArray<FUWorksSteamItemInstanceID> InstanceIDs);
    bool GetItemDefinitionPropertyValue(FUWorksSteamItemDef ItemDefinition, FString PropertyName, FString& PropertyValue);
    bool GetItemDefinitionPropertiesNames(FUWorksSteamItemDef ItemDefinition, TArray<FString>& PropertiesNames);
    bool GetItemDefinitionIDs(TArray<FUWorksSteamItemDef>& ItemDefinitions);
    class UUWorksInterfaceCoreInventory* GetInventory();
    bool GetEligiblePromoItemDefinitionIDs(FUWorksSteamID SteamID, TArray<FUWorksSteamItemDef>& ItemDefinitions);
    bool GetAllItems(FUWorksSteamInventoryResult& Handle);
    bool GenerateItems(FUWorksSteamInventoryResult& Handle, TArray<FUWorksSteamItemDef> ItemDefinitions, TArray<int32> ItemQuantities);
    bool ExchangeItems(FUWorksSteamInventoryResult& Handle, TArray<FUWorksSteamItemDef> ItemsGenerated, TArray<int32> ItemsGeneratedQuantities, TArray<FUWorksSteamItemInstanceID> ItemsDestroyed, TArray<int32> ItemsDestroyedQuantities);
    void DestroyResult(FUWorksSteamInventoryResult Handle);
    bool DeserializeResult(FUWorksSteamInventoryResult& Handle, TArray<uint8> Buffer, bool bReservedMustBeFalse);
    bool ConsumeItem(FUWorksSteamInventoryResult& Handle, FUWorksSteamItemInstanceID ItemInstanceID, int32 ItemQuantity);
    bool CheckResultSteamID(FUWorksSteamInventoryResult Handle, FUWorksSteamID SteamID);
    bool AddPromoItems(FUWorksSteamInventoryResult& Handle, TArray<FUWorksSteamItemDef> ItemDefinitions);
    bool AddPromoItem(FUWorksSteamInventoryResult& Handle, FUWorksSteamItemDef ItemDefinition);
}; // Size: 0x58

class UUWorksInterfaceCoreMatchmaking : public UUWorksInterfaceCore
{
    FUWorksInterfaceCoreMatchmakingFavoritesListChanged FavoritesListChanged;         // 0x0028 (size: 0x10)
    void FavoritesListChangedDelegate(FString IP, int32 QueryPort, int32 ConnectionPort, int32 AppID, const TArray<EUWorksFavoriteFlags>& Flags, bool bAdd, FUWorksSteamID SteamID);
    FUWorksInterfaceCoreMatchmakingLobbyInvite LobbyInvite;                           // 0x0038 (size: 0x10)
    void LobbyInviteDelegate(FUWorksSteamID SteamIDUser, FUWorksSteamID SteamIDLobby, FUWorksGameID GameID);
    FUWorksInterfaceCoreMatchmakingLobbyDataUpdate LobbyDataUpdate;                   // 0x0048 (size: 0x10)
    void LobbyDataUpdateDelegate(FUWorksSteamID SteamIDLobby, FUWorksSteamID SteamIDMember, bool bSuccess);
    FUWorksInterfaceCoreMatchmakingLobbyEnter LobbyEnter;                             // 0x0058 (size: 0x10)
    void LobbyEnterDelegate(FUWorksSteamID SteamIDLobby, bool bLocked, EUWorksChatRoomEnterResponse ChatRoomEnterResponse);
    FUWorksInterfaceCoreMatchmakingLobbyChatUpdate LobbyChatUpdate;                   // 0x0068 (size: 0x10)
    void LobbyChatUpdateDelegate(FUWorksSteamID SteamIDLobby, FUWorksSteamID SteamIDUserChanged, FUWorksSteamID SteamIDMakingChange, const TArray<EUWorksChatMemberStateChange>& ChatMemberStateChange);
    FUWorksInterfaceCoreMatchmakingLobbyChatMsg LobbyChatMsg;                         // 0x0078 (size: 0x10)
    void LobbyChatMsgDelegate(FUWorksSteamID SteamIDLobby, FUWorksSteamID SteamIDUser, EUWorksChatEntryType ChatEntryType, int32 ChatID);
    FUWorksInterfaceCoreMatchmakingLobbyGameCreated LobbyGameCreated;                 // 0x0088 (size: 0x10)
    void LobbyGameCreatedDelegate(FUWorksSteamID SteamIDLobby, FUWorksSteamID SteamIDGameServer, FString IP, int32 Port);
    FUWorksInterfaceCoreMatchmakingLobbyKicked LobbyKicked;                           // 0x0098 (size: 0x10)
    void LobbyKickedDelegate(FUWorksSteamID SteamIDLobby, FUWorksSteamID SteamIDAdmin, bool bKickedDueToDisconnect);
    FUWorksInterfaceCoreMatchmakingFavoritesListAccountsUpdated FavoritesListAccountsUpdated; // 0x00A8 (size: 0x10)
    void FavoritesListAccountsUpdatedDelegate(EUWorksResult Result);

    bool SetLobbyType(FUWorksSteamID SteamIDLobby, EUWorksLobbyType LobbyType);
    bool SetLobbyOwner(FUWorksSteamID SteamIDLobby, FUWorksSteamID SteamIDNewOwner);
    bool SetLobbyMemberLimit(FUWorksSteamID SteamIDLobby, int32 MaxMembers);
    void SetLobbyMemberData(FUWorksSteamID SteamIDLobby, FString Key, FString Value);
    bool SetLobbyJoinable(FUWorksSteamID SteamIDLobby, bool bLobbyJoinable);
    void SetLobbyGameServer(FUWorksSteamID SteamIDLobby, FString GameServerIP, int32 GameServerPort, FUWorksSteamID SteamIDGameServer);
    bool SetLobbyData(FUWorksSteamID SteamIDLobby, FString Key, FString Value);
    bool SetLinkedLobby(FUWorksSteamID SteamIDLobby, FUWorksSteamID SteamIDLobbyDependent);
    bool SendLobbyChatMsg(FUWorksSteamID SteamIDLobby, FString Message);
    void RequestLobbyListMinimal(const FRequestLobbyListMinimalCompleted& Completed);
    class UUWorksRequestCoreRequestLobbyList* RequestLobbyList();
    bool RequestLobbyData(FUWorksSteamID SteamIDLobby);
    bool RemoveFavoriteGame(int32 AppID, FString IP, int32 ConnectionPort, int32 QueryPort, TArray<EUWorksFavoriteFlags> Flags);
    void LeaveLobby(FUWorksSteamID SteamIDLobby);
    void JoinLobbyMinimal(const FJoinLobbyMinimalCompleted& Completed, FUWorksSteamID SteamIDLobby);
    class UUWorksRequestCoreJoinLobby* JoinLobby();
    bool InviteUserToLobby(FUWorksSteamID SteamIDLobby, FUWorksSteamID SteamIDInvitee);
    int32 GetNumLobbyMembers(FUWorksSteamID SteamIDLobby);
    class UUWorksInterfaceCoreMatchmaking* GetMatchmaking();
    FUWorksSteamID GetLobbyOwner(FUWorksSteamID SteamIDLobby);
    int32 GetLobbyMemberLimit(FUWorksSteamID SteamIDLobby);
    FString GetLobbyMemberData(FUWorksSteamID SteamIDLobby, FUWorksSteamID SteamIDUser, FString Key);
    FUWorksSteamID GetLobbyMemberByIndex(FUWorksSteamID SteamIDLobby, int32 Member);
    bool GetLobbyGameServer(FUWorksSteamID SteamIDLobby, FString& GameServerIP, int32& GameServerPort, FUWorksSteamID& SteamIDGameServer);
    int32 GetLobbyDataCount(FUWorksSteamID SteamIDLobby);
    bool GetLobbyDataByIndex(FUWorksSteamID SteamIDLobby, int32 LobbyData, FString& Key, int32 KeyMaxLength, FString& Value, int32 ValueMaxLength);
    FString GetLobbyData(FUWorksSteamID SteamIDLobby, FString Key);
    int32 GetLobbyChatEntry(FUWorksSteamID SteamIDLobby, int32 MessageID, FUWorksSteamID& SteamIDUser, FString& Message, int32 MessageMaxLength, EUWorksChatEntryType& ChatEntryType);
    FUWorksSteamID GetLobbyByIndex(int32 Lobby);
    int32 GetFavoriteGameCount();
    bool GetFavoriteGame(int32 Game, int32& AppID, FString& IP, int32& ConnectionPort, int32& QueryPort, TArray<EUWorksFavoriteFlags>& Flags, int32& TimeLastPlayedOnServer);
    bool DeleteLobbyData(FUWorksSteamID SteamIDLobby, FString Key);
    void CreateLobbyMinimal(const FCreateLobbyMinimalCompleted& Completed, EUWorksLobbyType LobbyType, int32 MaxMembers);
    class UUWorksRequestCoreCreateLobby* CreateLobby();
    void AddRequestLobbyListStringFilter(FString KeyToMatch, FString ValueToMatch, EUWorksLobbyComparison ComparisonType);
    void AddRequestLobbyListResultCountFilter(int32 MaxResults);
    void AddRequestLobbyListNumericalFilter(FString KeyToMatch, int32 ValueToMatch, EUWorksLobbyComparison ComparisonType);
    void AddRequestLobbyListNearValueFilter(FString KeyToMatch, int32 ValueToBeCloseTo);
    void AddRequestLobbyListFilterSlotsAvailable(int32 SlotsAvailable);
    void AddRequestLobbyListDistanceFilter(EUWorksLobbyDistanceFilter LobbyDistanceFilter);
    void AddRequestLobbyListCompatibleMembersFilter(FUWorksSteamID SteamIDLobby);
    int32 AddFavoriteGame(int32 AppID, FString IP, int32 ConnectionPort, int32 QueryPort, TArray<EUWorksFavoriteFlags> Flags, int32 TimeLastPlayedOnServer);
}; // Size: 0xB8

class UUWorksInterfaceCoreMatchmakingServers : public UUWorksInterfaceCore
{

    void ServerListMinimal(const FServerListMinimalCompleted& Completed, const FServerListMinimalUpdated& Updated, int32 AppID, EUWorksServerQueryType queryType);
    class UUWorksRequestCoreServerList* ServerList();
    void RulesMinimal(const FRulesMinimalCompleted& Completed, const FRulesMinimalUpdated& Updated, FString IP, int32 Port);
    class UUWorksRequestCoreRules* Rules();
    void PlayersMinimal(const FPlayersMinimalCompleted& Completed, const FPlayersMinimalUpdated& Updated, FString IP, int32 Port);
    class UUWorksRequestCorePlayers* Players();
    void PingMinimal(const FPingMinimalCompleted& Completed, FString IP, int32 Port);
    class UUWorksRequestCorePing* Ping();
    class UUWorksInterfaceCoreMatchmakingServers* GetMatchmakingServers();
}; // Size: 0x28

class UUWorksInterfaceCoreMusic : public UUWorksInterfaceCore
{
    FUWorksInterfaceCoreMusicPlaybackStatusHasChanged PlaybackStatusHasChanged;       // 0x0028 (size: 0x10)
    void PlaybackStatusHasChangedDelegate();
    FUWorksInterfaceCoreMusicVolumeHasChanged VolumeHasChanged;                       // 0x0038 (size: 0x10)
    void VolumeHasChangedDelegate(float NewVolume);

    void SetVolume(float Volume);
    void PlayPrevious();
    void PlayNext();
    void Play();
    void Pause();
    float GetVolume();
    EUWorksAudioPlaybackStatus GetPlaybackStatus();
    class UUWorksInterfaceCoreMusic* GetMusic();
    bool BIsPlaying();
    bool BIsEnabled();
}; // Size: 0x48

struct FUWorksP2PSessionState
{
    bool bConnectionActive;                                                           // 0x0000 (size: 0x1)
    bool bConnecting;                                                                 // 0x0001 (size: 0x1)
    EUWorksP2PSessionError P2PSessionError;                                           // 0x0002 (size: 0x1)
    bool bUsingRelay;                                                                 // 0x0003 (size: 0x1)
    int32 BytesQueuedForSend;                                                         // 0x0004 (size: 0x4)
    int32 PacketsQueuedForSend;                                                       // 0x0008 (size: 0x4)

}; // Size: 0xC

class UUWorksInterfaceCoreNetworking : public UUWorksInterfaceCore
{
    FUWorksInterfaceCoreNetworkingP2PSessionRequest P2PSessionRequest;                // 0x0028 (size: 0x10)
    void P2PSessionRequestDelegate(FUWorksSteamID SteamIDRemote);
    FUWorksInterfaceCoreNetworkingP2PSessionConnectFail P2PSessionConnectFail;        // 0x0038 (size: 0x10)
    void P2PSessionConnectFailDelegate(FUWorksSteamID SteamIDRemote, EUWorksP2PSessionError P2PSessionError);

    bool SendP2PPacket(FUWorksSteamID SteamIDRemote, TArray<uint8> Data, EUWorksP2PSend P2PSendType, int32 Channel);
    bool SendP2PMessage(FUWorksSteamID SteamIDRemote, FString Data, EUWorksP2PSend P2PSendType, int32 Channel);
    bool ReadP2PPacket(TArray<uint8>& Data, int32 DataMax, FUWorksSteamID& SteamIDRemote, int32 Channel);
    bool ReadP2PMessage(FString& Data, int32 DataMax, FUWorksSteamID& SteamIDRemote, int32 Channel);
    bool IsP2PPacketAvailable(int32& DataSize, int32 Channel);
    bool GetP2PSessionState(FUWorksSteamID SteamIDRemote, FUWorksP2PSessionState& ConnectionState);
    class UUWorksInterfaceCoreNetworking* GetNetworking();
    bool CloseP2PSessionWithUser(FUWorksSteamID SteamIDRemote);
    bool CloseP2PChannelWithUser(FUWorksSteamID SteamIDRemote, int32 Channel);
    bool AllowP2PPacketRelay(bool bAllow);
    bool AcceptP2PSessionWithUser(FUWorksSteamID SteamIDRemote);
}; // Size: 0x48

struct FUWorksUGCFileWriteStreamHandle
{
}; // Size: 0x8

class UUWorksInterfaceCoreRemoteStorage : public UUWorksInterfaceCore
{

    bool SetSyncPlatforms(FString File, EUWorksRemoteStoragePlatform RemoteStoragePlatform);
    void SetCloudEnabledForApp(bool bEnabled);
    bool IsCloudEnabledForApp();
    bool IsCloudEnabledForAccount();
    EUWorksRemoteStoragePlatform GetSyncPlatforms(FString File);
    class UUWorksInterfaceCoreRemoteStorage* GetRemoteStorage();
    bool GetQuota(FString& TotalBytes, FString& AvailableBytes);
    int32 GetFileTimestamp(FString File);
    int32 GetFileSize(FString File);
    FString GetFileNameAndSize(int32 File, int32& fileSizeInBytes);
    int32 GetFileCount();
    bool FileWriteStreamWriteChunk(FUWorksUGCFileWriteStreamHandle Handle, TArray<uint8> Buffer);
    FUWorksUGCFileWriteStreamHandle FileWriteStreamOpen(FString File);
    bool FileWriteStreamClose(FUWorksUGCFileWriteStreamHandle Handle);
    bool FileWriteStreamCancel(FUWorksUGCFileWriteStreamHandle Handle);
    void FileWriteAsyncMinimal(const FFileWriteAsyncMinimalCompleted& Completed, FString File, TArray<uint8> Buffer);
    class UUWorksRequestCoreFileWriteAsync* FileWriteAsync();
    bool FileWrite(FString File, TArray<uint8> Buffer);
    void FileReadAsyncMinimal(const FFileReadAsyncMinimalCompleted& Completed, FString File, int32 Offset, int32 BytesToRead);
    class UUWorksRequestCoreFileReadAsync* FileReadAsync();
    int32 FileRead(FString File, TArray<uint8>& Buffer, int32 BufferSize);
    bool FilePersisted(FString File);
    bool FileForget(FString File);
    bool FileExists(FString File);
    bool FileDelete(FString File);
}; // Size: 0x28

struct FUWorksScreenshotHandle
{
}; // Size: 0x4

class UUWorksInterfaceCoreScreenshots : public UUWorksInterfaceCore
{
    FUWorksInterfaceCoreScreenshotsScreenshotReady ScreenshotReady;                   // 0x0028 (size: 0x10)
    void ScreenshotReadyDelegate(FUWorksScreenshotHandle Handle, EUWorksResult Result);
    FUWorksInterfaceCoreScreenshotsScreenshotRequested ScreenshotRequested;           // 0x0038 (size: 0x10)
    void ScreenshotRequestedDelegate();

    FUWorksScreenshotHandle WriteScreenshot(class UTexture2D* Image);
    void TriggerScreenshot();
    bool TagUser(FUWorksScreenshotHandle Screenshot, FUWorksSteamID SteamID);
    bool TagPublishedFile(FUWorksScreenshotHandle Screenshot, FUWorksPublishedFileID PublishedFileID);
    bool SetLocation(FUWorksScreenshotHandle Screenshot, FString Location);
    bool IsScreenshotsHooked();
    void HookScreenshots(bool bHook);
    class UUWorksInterfaceCoreScreenshots* GetScreenshots();
    FUWorksScreenshotHandle AddVRScreenshotToLibrary(EUWorksVRScreenshotType Type, FString Filename, FString VRFileName);
    FUWorksScreenshotHandle AddScreenshotToLibrary(FString FileMame, FString ThumbnailFileName, int32 Width, int32 Height);
}; // Size: 0x48

struct FUWorksUGCUpdateHandle
{
}; // Size: 0x8

struct FUWorksUGCQueryHandle
{
}; // Size: 0x8

struct FUWorksUGCHandle
{
}; // Size: 0x8

struct FUWorksSteamUGCDetails
{
    FUWorksPublishedFileID PublishedFileID;                                           // 0x0000 (size: 0x8)
    EUWorksResult Result;                                                             // 0x0008 (size: 0x1)
    EUWorksWorkshopFileType fileType;                                                 // 0x0009 (size: 0x1)
    int32 CreatorAppID;                                                               // 0x000C (size: 0x4)
    int32 ConsumerAppID;                                                              // 0x0010 (size: 0x4)
    FString Title;                                                                    // 0x0018 (size: 0x10)
    FString Description;                                                              // 0x0028 (size: 0x10)
    FUWorksSteamID SteamIDOwner;                                                      // 0x0038 (size: 0x8)
    int32 TimeCreated;                                                                // 0x0040 (size: 0x4)
    int32 TimeUpdated;                                                                // 0x0044 (size: 0x4)
    int32 TimeAddedToUserList;                                                        // 0x0048 (size: 0x4)
    EUWorksRemoteStoragePublishedFileVisibility Visibility;                           // 0x004C (size: 0x1)
    bool bBanned;                                                                     // 0x004D (size: 0x1)
    bool bAcceptedForUse;                                                             // 0x004E (size: 0x1)
    bool bTagsTruncated;                                                              // 0x004F (size: 0x1)
    TArray<FString> tags;                                                             // 0x0050 (size: 0x10)
    FUWorksUGCHandle File;                                                            // 0x0060 (size: 0x8)
    FUWorksUGCHandle PreviewFile;                                                     // 0x0068 (size: 0x8)
    FString Filename;                                                                 // 0x0070 (size: 0x10)
    int32 fileSize;                                                                   // 0x0080 (size: 0x4)
    int32 PreviewFileSize;                                                            // 0x0084 (size: 0x4)
    FString URL;                                                                      // 0x0088 (size: 0x10)
    int32 votesUp;                                                                    // 0x0098 (size: 0x4)
    int32 votesDown;                                                                  // 0x009C (size: 0x4)
    float score;                                                                      // 0x00A0 (size: 0x4)
    int32 numChildren;                                                                // 0x00A4 (size: 0x4)

}; // Size: 0xA8

class UUWorksInterfaceCoreUGC : public UUWorksInterfaceCore
{
    FUWorksInterfaceCoreUGCItemInstalled ItemInstalled;                               // 0x0028 (size: 0x10)
    void ItemInstalledDelegate(int32 AppID, FUWorksPublishedFileID PublishedFileID);
    FUWorksInterfaceCoreUGCDownloadItemResult DownloadItemResult;                     // 0x0038 (size: 0x10)
    void DownloadItemResultDelegate(int32 AppID, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result);

    bool UpdateItemPreviewVideo(FUWorksUGCUpdateHandle Handle, int32 Index, FString PreviewVideo);
    bool UpdateItemPreviewFile(FUWorksUGCUpdateHandle Handle, int32 Index, FString PreviewFile);
    void UnsubscribeItemMinimal(const FUnsubscribeItemMinimalCompleted& Completed, FUWorksPublishedFileID PublishedFileID);
    class UUWorksRequestCoreUnsubscribeItem* UnsubscribeItem();
    void SuspendDownloads(bool bSuspend);
    void SubscribeItemMinimal(const FSubscribeItemMinimalCompleted& Completed, FUWorksPublishedFileID PublishedFileID);
    class UUWorksRequestCoreSubscribeItem* SubscribeItem();
    void SubmitItemUpdateMinimal(const FSubmitItemUpdateMinimalCompleted& Completed, FUWorksUGCUpdateHandle UGCUpdateHandle, FString ChangeNote);
    class UUWorksRequestCoreSubmitItemUpdate* SubmitItemUpdate();
    void StopPlaytimeTrackingMinimal(const FStopPlaytimeTrackingMinimalCompleted& Completed, TArray<FUWorksPublishedFileID> PublishedFileIDs);
    void StopPlaytimeTrackingForAllItemsMinimal(const FStopPlaytimeTrackingForAllItemsMinimalCompleted& Completed);
    class UUWorksRequestCoreStopPlaytimeTrackingForAllItems* StopPlaytimeTrackingForAllItems();
    class UUWorksRequestCoreStopPlaytimeTracking* StopPlaytimeTracking();
    void StartPlaytimeTrackingMinimal(const FStartPlaytimeTrackingMinimalCompleted& Completed, TArray<FUWorksPublishedFileID> PublishedFileID);
    class UUWorksRequestCoreStartPlaytimeTracking* StartPlaytimeTracking();
    FUWorksUGCUpdateHandle StartItemUpdate(int32 ConsumerAppID, FUWorksPublishedFileID PublishedFileID);
    void SetUserItemVoteMinimal(const FSetUserItemVoteMinimalCompleted& Completed, FUWorksPublishedFileID PublishedFileID, bool bVoteUp);
    class UUWorksRequestCoreSetUserItemVote* SetUserItemVote();
    bool SetSearchText(FUWorksUGCQueryHandle Handle, FString searchText);
    bool SetReturnTotalOnly(FUWorksUGCQueryHandle Handle, bool bReturnTotalOnly);
    bool SetReturnOnlyIDs(FUWorksUGCQueryHandle Handle, bool bReturnOnlyIDs);
    bool SetReturnMetadata(FUWorksUGCQueryHandle Handle, bool bReturnMetaData);
    bool SetReturnLongDescription(FUWorksUGCQueryHandle Handle, bool bReturnLongDescription);
    bool SetReturnKeyValueTags(FUWorksUGCQueryHandle Handle, bool bReturnKeyValueTags);
    bool SetReturnChildren(FUWorksUGCQueryHandle Handle, bool bReturnChildren);
    bool SetReturnAdditionalPreviews(FUWorksUGCQueryHandle Handle, bool bReturnAdditionalPreviews);
    bool SetRankedByTrendDays(FUWorksUGCQueryHandle Handle, int32 Days);
    bool SetMatchAnyTag(FUWorksUGCQueryHandle Handle, bool bMatchAnyTag);
    bool SetLanguage(FUWorksUGCQueryHandle Handle, FString Language);
    bool SetItemVisibility(FUWorksUGCUpdateHandle Handle, EUWorksRemoteStoragePublishedFileVisibility Visibility);
    bool SetItemUpdateLanguage(FUWorksUGCUpdateHandle Handle, FString Language);
    bool SetItemTitle(FUWorksUGCUpdateHandle Handle, FString Title);
    bool SetItemTags(FUWorksUGCUpdateHandle Handle, TArray<FString> tags);
    bool SetItemPreview(FUWorksUGCUpdateHandle Handle, FString PreviewFile);
    bool SetItemMetadata(FUWorksUGCUpdateHandle Handle, FString MetaData);
    bool SetItemDescription(FUWorksUGCUpdateHandle Handle, FString Description);
    bool SetItemContent(FUWorksUGCUpdateHandle Handle, FString ContentFolder);
    bool SetCloudFileNameFilter(FUWorksUGCQueryHandle Handle, FString MatchCloudFileName);
    bool SetAllowCachedResponse(FUWorksUGCQueryHandle Handle, int32 MaxAgeSeconds);
    void SendQueryUGCRequestMinimal(const FSendQueryUGCRequestMinimalCompleted& Completed, FUWorksUGCQueryHandle UGCQueryHandle);
    class UUWorksRequestCoreSendQueryUGCRequest* SendQueryUGCRequest();
    bool RemoveItemPreview(FUWorksUGCUpdateHandle Handle, int32 Index);
    bool RemoveItemKeyValueTags(FUWorksUGCUpdateHandle Handle, FString Key);
    void RemoveItemFromFavoritesMinimal(const FRemoveItemFromFavoritesMinimalCompleted& Completed, int32 AppID, FUWorksPublishedFileID PublishedFileID);
    class UUWorksRequestCoreRemoveItemFromFavorites* RemoveItemFromFavorites();
    bool ReleaseQueryUGCRequest(FUWorksUGCQueryHandle Handle);
    void GetUserItemVoteMinimal(const FGetUserItemVoteMinimalCompleted& Completed, FUWorksPublishedFileID PublishedFileID);
    class UUWorksRequestCoreGetUserItemVote* GetUserItemVote();
    class UUWorksInterfaceCoreUGC* GetUGC();
    int32 GetSubscribedItems(TArray<FUWorksPublishedFileID>& PublishedFileIDs, int32 MaxEntries);
    bool GetQueryUGCStatistic(FUWorksUGCQueryHandle Handle, int32 Index, EUWorksItemStatistic StatType, FString& StatValue);
    bool GetQueryUGCResult(FUWorksUGCQueryHandle Handle, int32 Index, FUWorksSteamUGCDetails& Details);
    bool GetQueryUGCPreviewURL(FUWorksUGCQueryHandle Handle, int32 Index, FString& URL, int32 URLMaxLength);
    int32 GetQueryUGCNumKeyValueTags(FUWorksUGCQueryHandle Handle, int32 Index);
    int32 GetQueryUGCNumAdditionalPreviews(FUWorksUGCQueryHandle Handle, int32 Index);
    bool GetQueryUGCMetadata(FUWorksUGCQueryHandle Handle, int32 Index, FString& MetaData, int32 MetadataMaxLength);
    bool GetQueryUGCKeyValueTag(FUWorksUGCQueryHandle Handle, int32 Index, int32 KeyValueTagIndex, FString& Key, int32 KeyMaxLength, FString& Value, int32 ValueMaxLength);
    bool GetQueryUGCChildren(FUWorksUGCQueryHandle Handle, int32 Index, TArray<FUWorksPublishedFileID>& PublishedFileIDs, int32 MaxEntries);
    bool GetQueryUGCAdditionalPreview(FUWorksUGCQueryHandle Handle, int32 Index, int32 PreviewIndex, FString& urlOrVideoId, int32 URLOrVideoIDMaxLength, FString& originalFileName, int32 OriginalFileNameMaxLength, EUWorksItemPreviewType& PreviewType);
    int32 GetNumSubscribedItems();
    EUWorksItemUpdateStatus GetItemUpdateProgress(FUWorksUGCUpdateHandle Handle, FString& BytesProcessed, FString& bytesTotal);
    int32 GetItemState(FUWorksPublishedFileID PublishedFileID);
    bool GetItemInstallInfo(FUWorksPublishedFileID PublishedFileID, FString& SizeOnDisk, FString& Path, int32 PathMaxLength, int32& Timestamp);
    bool GetItemDownloadInfo(FUWorksPublishedFileID PublishedFileID, FString& BytesDownloaded, FString& bytesTotal);
    bool DownloadItem(FUWorksPublishedFileID PublishedFileID, bool bHighPriority);
    FUWorksUGCQueryHandle CreateQueryUserUGCRequest(FUWorksSteamID SteamID, EUWorksUserUGCList ListType, EUWorksUGCMatchingUGCType MatchingUGCType, EUWorksUserUGCListSortOrder sortOrder, int32 CreatorAppID, int32 ConsumerAppID, int32 Page);
    FUWorksUGCQueryHandle CreateQueryUGCDetailsRequest(TArray<FUWorksPublishedFileID> PublishedFileIDs, int32 NumPublishedFileIDs);
    FUWorksUGCQueryHandle CreateQueryAllUGCRequest(EUWorksUGCQuery queryType, EUWorksUGCMatchingUGCType MatchingUGCTypeFileType, int32 CreatorAppID, int32 ConsumerAppID, int32 Page);
    void CreateItemMinimal(const FCreateItemMinimalCompleted& Completed, int32 ConsumerAppID, EUWorksWorkshopFileType fileType);
    class UUWorksRequestCoreCreateItem* CreateItem();
    bool BInitWorkshopForGameServer(int32 WorkshopDepotID, FString Folder);
    bool AddRequiredTag(FUWorksUGCQueryHandle Handle, FString TagName);
    bool AddRequiredKeyValueTag(FUWorksUGCQueryHandle Handle, FString Key, FString Value);
    void AddItemToFavoritesMinimal(const FAddItemToFavoritesMinimalCompleted& Completed, int32 AppID, FUWorksPublishedFileID PublishedFileID);
    class UUWorksRequestCoreAddItemToFavorites* AddItemToFavorites();
    bool AddItemPreviewVideo(FUWorksUGCUpdateHandle Handle, FString VideoID);
    bool AddItemPreviewFile(FUWorksUGCUpdateHandle Handle, FString PreviewFile, EUWorksItemPreviewType Type);
    bool AddItemKeyValueTag(FUWorksUGCUpdateHandle Handle, FString Key, FString Value);
    bool AddExcludedTag(FUWorksUGCQueryHandle Handle, FString TagName);
}; // Size: 0x48

struct FUWorksSteamUser
{
}; // Size: 0x4

class UUWorksInterfaceCoreUser : public UUWorksInterfaceCore
{
    FUWorksInterfaceCoreUserSteamServersConnected SteamServersConnected;              // 0x0038 (size: 0x10)
    void SteamServersConnectedDelegate();
    FUWorksInterfaceCoreUserSteamServerConnectFailure SteamServerConnectFailure;      // 0x0048 (size: 0x10)
    void SteamServerConnectFailureDelegate(EUWorksResult Result, bool bStillRetrying);
    FUWorksInterfaceCoreUserSteamServersDisconnected SteamServersDisconnected;        // 0x0058 (size: 0x10)
    void SteamServersDisconnectedDelegate(EUWorksResult Result);
    FUWorksInterfaceCoreUserClientGameServerDeny ClientGameServerDeny;                // 0x0068 (size: 0x10)
    void ClientGameServerDenyDelegate(int32 AppID, FString GameServerIP, int32 GameServerPort, bool BSecure, EUWorksDenyReason Reason);
    FUWorksInterfaceCoreUserIPCFailure IPCFailure;                                    // 0x0078 (size: 0x10)
    void IPCFailureDelegate(EUWorksFailureType FailureType);
    FUWorksInterfaceCoreUserLicensesUpdated LicensesUpdated;                          // 0x0088 (size: 0x10)
    void LicensesUpdatedDelegate();
    FUWorksInterfaceCoreUserValidateAuthTicketResponse ValidateAuthTicketResponse;    // 0x0098 (size: 0x10)
    void ValidateAuthTicketResponseDelegate(FUWorksSteamID SteamID, EUWorksAuthSessionResponse AuthSessionResponse, FUWorksSteamID OwnerSteamID);
    FUWorksInterfaceCoreUserMicroTxnAuthorizationResponse MicroTxnAuthorizationResponse; // 0x00A8 (size: 0x10)
    void MicroTxnAuthorizationResponseDelegate(int32 AppID, FString OrderID, bool bAuthorized);
    FUWorksInterfaceCoreUserGetAuthSessionTicketResponse GetAuthSessionTicketResponse; // 0x00B8 (size: 0x10)
    void GetAuthSessionTicketResponseDelegate(FUWorksTicketHandle AuthTicket, EUWorksResult Result);
    FUWorksInterfaceCoreUserGameWebCallback GameWebCallback;                          // 0x00C8 (size: 0x10)
    void GameWebCallbackDelegate(FString URL);

    EUWorksUserHasLicenseForAppResult UserHasLicenseForApp(FUWorksSteamID SteamID, int32 AppID);
    void StopVoiceRecording();
    void StartVoiceRecording();
    void RequestStoreAuthURLMinimal(const FRequestStoreAuthURLMinimalCompleted& Completed, FString URL);
    class UUWorksRequestCoreRequestStoreAuthURL* RequestStoreAuthURL();
    void RequestEncryptedAppTicketMinimal(const FRequestEncryptedAppTicketMinimalCompleted& Completed, TArray<uint8> Buffer);
    class UUWorksRequestCoreRequestEncryptedAppTicket* RequestEncryptedAppTicket();
    class UAudioComponent* GetVoiceChannel(int32 Index);
    EUWorksVoiceResult GetVoice(TArray<uint8>& Data);
    class UUWorksInterfaceCoreUser* GetUser();
    FUWorksSteamID GetSteamID();
    int32 GetPlayerSteamLevel();
    FUWorksSteamUser GetHSteamUser();
    int32 GetGameBadgeLevel(int32 Series, bool bFoil);
    bool GetEncryptedAppTicket(TArray<uint8>& Ticket);
    FUWorksTicketHandle GetAuthSessionTicket(TArray<uint8>& Ticket);
    void EndAuthSession(FUWorksSteamID SteamID);
    EUWorksVoiceResult DecompressVoice(TArray<uint8> CompressedBuffer, TArray<uint8>& UncompressedBuffer);
    void CancelAuthTicket(FUWorksTicketHandle TicketHandle);
    bool BLoggedOn();
    bool BIsTwoFactorEnabled();
    bool BIsPhoneVerified();
    bool BIsPhoneRequiringVerification();
    bool BIsPhoneIdentifying();
    bool BIsBehindNAT();
    EUWorksBeginAuthSessionResult BeginAuthSession(TArray<uint8> Ticket, FUWorksSteamID SteamID);
    void AdvertiseGame(FUWorksSteamID SteamIDGameServer, FString ServerIP, int32 ServerPort);
    class UAudioComponent* AddBufferToVoiceChannel(TArray<uint8> Buffer, int32 Index);
}; // Size: 0xD8

struct FUWorksSteamLeaderboard
{
}; // Size: 0x8

struct FUWorksSteamLeaderboardEntries
{
}; // Size: 0x8

struct FUWorksLeaderboardEntry
{
    FUWorksSteamID SteamID;                                                           // 0x0000 (size: 0x8)
    int32 GlobalRank;                                                                 // 0x0008 (size: 0x4)
    int32 score;                                                                      // 0x000C (size: 0x4)
    int32 Details;                                                                    // 0x0010 (size: 0x4)
    FUWorksUGCHandle UGCHandle;                                                       // 0x0018 (size: 0x8)

}; // Size: 0x20

class UUWorksInterfaceCoreUserStats : public UUWorksInterfaceCore
{
    FUWorksInterfaceCoreUserStatsUserStatsReceived UserStatsReceived;                 // 0x0028 (size: 0x10)
    void UserStatsReceivedDelegate(FUWorksGameID GameID, EUWorksResult Result, FUWorksSteamID SteamID);
    FUWorksInterfaceCoreUserStatsUserStatsStored UserStatsStored;                     // 0x0038 (size: 0x10)
    void UserStatsStoredDelegate(FUWorksGameID GameID, EUWorksResult Result);
    FUWorksInterfaceCoreUserStatsUserAchievementStored UserAchievementStored;         // 0x0048 (size: 0x10)
    void UserAchievementStoredDelegate(FUWorksGameID GameID, bool bGroupAchievement, FString AchievementName, int32 CurrentProgress, int32 MaxProgress);
    FUWorksInterfaceCoreUserStatsUserStatsUnloaded UserStatsUnloaded;                 // 0x0058 (size: 0x10)
    void UserStatsUnloadedDelegate(FUWorksSteamID SteamID);
    FUWorksInterfaceCoreUserStatsUserAchievementIconFetched UserAchievementIconFetched; // 0x0068 (size: 0x10)
    void UserAchievementIconFetchedDelegate(FUWorksGameID GameID, FString AchievementName, bool bAchieved, class UTexture2D* Icon);

    void UploadLeaderboardScoreMinimal(const FUploadLeaderboardScoreMinimalCompleted& Completed, FUWorksSteamLeaderboard SteamLeaderboard, EUWorksLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod, int32 score, TArray<int32> ScoreDetails);
    class UUWorksRequestCoreUploadLeaderboardScore* UploadLeaderboardScore();
    bool UpdateAvgRateStat(FString Name, float CountThisSession, float SessionLength);
    bool StoreStats();
    bool SetStatAsInteger(FString Name, int32 Data);
    bool SetStatAsFloat(FString Name, float Data);
    bool SetAchievement(FString Name);
    bool ResetAllStats(bool bAchievementsToo);
    void RequestUserStatsMinimal(const FRequestUserStatsMinimalCompleted& Completed, FUWorksSteamID SteamID);
    class UUWorksRequestCoreRequestUserStats* RequestUserStats();
    void RequestGlobalStatsMinimal(const FRequestGlobalStatsMinimalCompleted& Completed, int32 HistoryDays);
    class UUWorksRequestCoreRequestGlobalStats* RequestGlobalStats();
    void RequestGlobalAchievementPercentagesMinimal(const FRequestGlobalAchievementPercentagesMinimalCompleted& Completed);
    class UUWorksRequestCoreRequestGlobalAchievementPercentages* RequestGlobalAchievementPercentages();
    bool RequestCurrentStats();
    bool IndicateAchievementProgress(FString Name, int32 CurrentProgress, int32 MaxProgress);
    class UUWorksInterfaceCoreUserStats* GetUserStats();
    bool GetUserStatInteger(FUWorksSteamID SteamIDUser, FString Name, int32& Data);
    bool GetUserStatFloat(FUWorksSteamID SteamIDUser, FString Name, float& Data);
    bool GetUserAchievementAndUnlockTime(FUWorksSteamID SteamIDUser, FString Name, bool& bAchieved, int32& UnlockTime);
    bool GetUserAchievement(FUWorksSteamID SteamIDUser, FString Name, bool& bAchieved);
    bool GetStatAsInteger(FString Name, int32& Data);
    bool GetStatAsFloat(FString Name, float& Data);
    void GetNumberOfCurrentPlayersMinimal(const FGetNumberOfCurrentPlayersMinimalCompleted& Completed);
    class UUWorksRequestCoreGetNumberOfCurrentPlayers* GetNumberOfCurrentPlayers();
    int32 GetNumAchievements();
    int32 GetNextMostAchievedAchievementInfo(int32 IteratorPrevious, FString& Name, int32 NameBufferLength, float& Percent, bool& bAchieved);
    int32 GetMostAchievedAchievementInfo(FString& Name, int32 NameBufferLength, float& Percent, bool& bAchieved);
    EUWorksLeaderboardSortMethod GetLeaderboardSortMethod(FUWorksSteamLeaderboard SteamLeaderboard);
    FString GetLeaderboardName(FUWorksSteamLeaderboard SteamLeaderboard);
    int32 GetLeaderboardEntryCount(FUWorksSteamLeaderboard SteamLeaderboard);
    EUWorksLeaderboardDisplayType GetLeaderboardDisplayType(FUWorksSteamLeaderboard SteamLeaderboard);
    int32 GetGlobalStatHistoryFromIntegers(FString StatName, TArray<FString>& Data, int32 HistoryDays);
    int32 GetGlobalStatHistoryFromFloats(FString StatName, TArray<FString>& Data, int32 HistoryDays);
    bool GetGlobalStatFromInteger(FString StatName, FString& Data);
    bool GetGlobalStatFromFloat(FString StatName, FString& Data);
    bool GetDownloadedLeaderboardEntry(FUWorksSteamLeaderboardEntries SteamLeaderboardEntries, int32 Index, FUWorksLeaderboardEntry& LeaderboardEntry, TArray<int32>& Details, int32 DetailsMax);
    FString GetAchievementName(int32 Achievement);
    class UTexture2D* GetAchievementIcon(FString Name);
    FString GetAchievementDisplayAttribute(FString Name, FString Key);
    bool GetAchievementAndUnlockTime(FString Name, bool& bAchieved, int32& UnlockTime);
    bool GetAchievementAchievedPercent(FString Name, float& Percent);
    bool GetAchievement(FString Name, bool& bAchieved);
    void FindOrCreateLeaderboardMinimal(const FFindOrCreateLeaderboardMinimalCompleted& Completed, FString LeaderboardName, EUWorksLeaderboardSortMethod LeaderboardSortMethod, EUWorksLeaderboardDisplayType LeaderboardDisplayType);
    class UUWorksRequestCoreFindOrCreateLeaderboard* FindOrCreateLeaderboard();
    void FindLeaderboardMinimal(const FFindLeaderboardMinimalCompleted& Completed, FString LeaderboardName);
    class UUWorksRequestCoreFindLeaderboard* FindLeaderboard();
    void DownloadLeaderboardEntriesMinimal(const FDownloadLeaderboardEntriesMinimalCompleted& Completed, FUWorksSteamLeaderboard SteamLeaderboard, EUWorksLeaderboardDataRequest LeaderboardDataRequest, int32 RangeStart, int32 RangeEnd);
    void DownloadLeaderboardEntriesForUsersMinimal(const FDownloadLeaderboardEntriesForUsersMinimalCompleted& Completed, FUWorksSteamLeaderboard SteamLeaderboard, TArray<FUWorksSteamID> Users);
    class UUWorksRequestCoreDownloadLeaderboardEntriesForUsers* DownloadLeaderboardEntriesForUsers();
    class UUWorksRequestCoreDownloadLeaderboardEntries* DownloadLeaderboardEntries();
    bool ClearAchievement(FString Name);
    void AttachLeaderboardUGCMinimal(const FAttachLeaderboardUGCMinimalCompleted& Completed, FUWorksSteamLeaderboard SteamLeaderboard, FUWorksUGCHandle UGCHandle);
    class UUWorksRequestCoreAttachLeaderboardUGC* AttachLeaderboardUGC();
}; // Size: 0x78

class UUWorksInterfaceCoreUtils : public UUWorksInterfaceCore
{
    FUWorksInterfaceCoreUtilsIPCountry IPCountry;                                     // 0x0028 (size: 0x10)
    void IPCountryDelegate();
    FUWorksInterfaceCoreUtilsLowBatteryPower LowBatteryPower;                         // 0x0038 (size: 0x10)
    void LowBatteryPowerDelegate(int32 MinutesBatteryLeft);
    FUWorksInterfaceCoreUtilsSteamShutdown SteamShutdown;                             // 0x0048 (size: 0x10)
    void SteamShutdownDelegate();
    FUWorksInterfaceCoreUtilsGamepadTextInputDismissed GamepadTextInputDismissed;     // 0x0058 (size: 0x10)
    void GamepadTextInputDismissedDelegate(bool bSubmitted, int32 SubmittedText);

    void StartVRDashboard();
    bool ShowGamepadTextInput(EUWorksGamepadTextInputMode InputMode, EUWorksGamepadTextInputLineMode LineInputMode, FString Description, int32 CharMax, FString ExistingText);
    void SetOverlayNotificationPosition(EUWorksNotificationPosition NotificationPosition);
    void SetOverlayNotificationInset(int32 HorizontalInset, int32 VerticalInset);
    bool IsSteamRunningInVR();
    bool IsSteamInBigPictureMode();
    bool IsOverlayEnabled();
    class UUWorksInterfaceCoreUtils* GetUtils();
    FString GetSteamUILanguage();
    int32 GetServerRealTime();
    int32 GetSecondsSinceComputerActive();
    int32 GetSecondsSinceAppActive();
    FString GetIPCountry();
    int32 GetIPCCallCount();
    int32 GetEnteredGamepadTextLength();
    bool GetEnteredGamepadTextInput(FString& Text, int32 TextMaxLength);
    uint8 GetCurrentBatteryPower();
    EUWorksUniverse GetConnectedUniverse();
    int32 GetAppID();
    bool BOverlayNeedsPresent();
}; // Size: 0x68

class UUWorksRequestCoreGetFileDetails : public UUWorksRequestCore
{
    FUWorksRequestCoreGetFileDetailsOnRequestCompleted OnRequestCompleted;            // 0x0070 (size: 0x10)
    void GetFileDetailsDelegate(bool bSuccessful, EUWorksResult Result, int32 fileSize, FString FileSHA, const TArray<int32>& FileFlags);
    FUWorksRequestCoreGetFileDetailsOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0080 (size: 0x10)
    void GetFileDetailsMinimalDelegate(bool bSuccessful, EUWorksResult Result, int32 fileSize, FString FileSHA, const TArray<int32>& FileFlags);

    void SetInput(FString Filename);
    bool IsActive();
    void GetOutput(EUWorksResult& Result, int32& fileSize, FString& FileSHA, TArray<int32>& FileFlags);
    void Deactivate();
    void Activate();
}; // Size: 0x90

class UUWorksRequestCoreSetPersonaName : public UUWorksRequestCore
{
    FUWorksRequestCoreSetPersonaNameOnRequestCompleted OnRequestCompleted;            // 0x0050 (size: 0x10)
    void SetPersonaNameDelegate(bool bSuccessful, bool bSuccess, bool bLocalSuccess, EUWorksResult Result);
    FUWorksRequestCoreSetPersonaNameOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0060 (size: 0x10)
    void SetPersonaNameMinimalDelegate(bool bSuccessful, bool bSuccess, bool bLocalSuccess, EUWorksResult Result);

    void SetInput(FString Name);
    bool IsActive();
    void GetOutput(bool& bSuccess, bool& bLocalSuccess, EUWorksResult& Result);
    void Deactivate();
    void Activate();
}; // Size: 0x70

class UUWorksRequestCoreDownloadClanActivityCounts : public UUWorksRequestCore
{
    FUWorksRequestCoreDownloadClanActivityCountsOnRequestCompleted OnRequestCompleted; // 0x0050 (size: 0x10)
    void DownloadClanActivityCountsDelegate(bool bSuccessful, bool bSuccess);
    FUWorksRequestCoreDownloadClanActivityCountsOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0060 (size: 0x10)
    void DownloadClanActivityCountsMinimalDelegate(bool bSuccessful, bool bSuccess);

    void SetInput(TArray<FUWorksSteamID> SteamIDClans);
    bool IsActive();
    void GetOutput(bool& bSuccess);
    void Deactivate();
    void Activate();
}; // Size: 0x70

class UUWorksRequestCoreRequestClanOfficerList : public UUWorksRequestCore
{
    FUWorksRequestCoreRequestClanOfficerListOnRequestCompleted OnRequestCompleted;    // 0x0050 (size: 0x10)
    void RequestClanOfficerListDelegate(bool bSuccessful, FUWorksSteamID SteamIDClan, int32 Officers, bool bSuccess);
    FUWorksRequestCoreRequestClanOfficerListOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0060 (size: 0x10)
    void RequestClanOfficerListMinimalDelegate(bool bSuccessful, FUWorksSteamID SteamIDClan, int32 Officers, bool bSuccess);

    void SetInput(FUWorksSteamID SteamID);
    bool IsActive();
    void GetOutput(FUWorksSteamID& SteamIDClan, int32& Officers, bool& bSuccess);
    void Deactivate();
    void Activate();
}; // Size: 0x70

class UUWorksRequestCoreJoinClanChatRoom : public UUWorksRequestCore
{
    FUWorksRequestCoreJoinClanChatRoomOnRequestCompleted OnRequestCompleted;          // 0x0050 (size: 0x10)
    void JoinClanChatRoomDelegate(bool bSuccessful, FUWorksSteamID SteamIDClanChat, EUWorksChatRoomEnterResponse ChatRoomEnterResponse);
    FUWorksRequestCoreJoinClanChatRoomOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0060 (size: 0x10)
    void JoinClanChatRoomMinimalDelegate(bool bSuccessful, FUWorksSteamID SteamIDClanChat, EUWorksChatRoomEnterResponse ChatRoomEnterResponse);

    void SetInput(FUWorksSteamID SteamIDClan);
    bool IsActive();
    void GetOutput(FUWorksSteamID& SteamIDClanChat, EUWorksChatRoomEnterResponse& ChatRoomEnterResponse);
    void Deactivate();
    void Activate();
}; // Size: 0x70

class UUWorksRequestCoreGetFollowerCount : public UUWorksRequestCore
{
    FUWorksRequestCoreGetFollowerCountOnRequestCompleted OnRequestCompleted;          // 0x0058 (size: 0x10)
    void GetFollowerCountDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamID, int32 Count);
    FUWorksRequestCoreGetFollowerCountOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0068 (size: 0x10)
    void GetFollowerCountMinimalDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamID, int32 Count);

    void SetInput(FUWorksSteamID SteamID);
    bool IsActive();
    void GetOutput(EUWorksResult& Result, FUWorksSteamID& SteamID, int32& Count);
    void Deactivate();
    void Activate();
}; // Size: 0x78

class UUWorksRequestCoreIsFollowing : public UUWorksRequestCore
{
    FUWorksRequestCoreIsFollowingOnRequestCompleted OnRequestCompleted;               // 0x0058 (size: 0x10)
    void IsFollowingDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamID, bool bIsFollowing);
    FUWorksRequestCoreIsFollowingOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0068 (size: 0x10)
    void IsFollowingMinimalDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamID, bool bIsFollowing);

    void SetInput(FUWorksSteamID SteamID);
    bool IsActive();
    void GetOutput(EUWorksResult& Result, FUWorksSteamID& SteamID, bool& bIsFollowing);
    void Deactivate();
    void Activate();
}; // Size: 0x78

class UUWorksRequestCoreEnumerateFollowingList : public UUWorksRequestCore
{
    FUWorksRequestCoreEnumerateFollowingListOnRequestCompleted OnRequestCompleted;    // 0x0058 (size: 0x10)
    void EnumerateFollowingListDelegate(bool bSuccessful, EUWorksResult Result, const TArray<FUWorksSteamID>& SteamIDs, int32 ResultsReturned, int32 TotalResultCount);
    FUWorksRequestCoreEnumerateFollowingListOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0068 (size: 0x10)
    void EnumerateFollowingListMinimalDelegate(bool bSuccessful, EUWorksResult Result, const TArray<FUWorksSteamID>& SteamIDs, int32 ResultsReturned, int32 TotalResultCount);

    void SetInput(int32 StartIndex);
    bool IsActive();
    void GetOutput(EUWorksResult& Result, TArray<FUWorksSteamID>& SteamIDs, int32& ResultsReturned, int32& TotalResultCount);
    void Deactivate();
    void Activate();
}; // Size: 0x78

class UUWorksRequestCoreAssociateWithClan : public UUWorksRequestCore
{
    FUWorksRequestCoreAssociateWithClanOnRequestCompleted OnRequestCompleted;         // 0x0048 (size: 0x10)
    void AssociateWithClanDelegate(bool bSuccessful, EUWorksResult Result);
    FUWorksRequestCoreAssociateWithClanOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0058 (size: 0x10)
    void AssociateWithClanMinimalDelegate(bool bSuccessful, EUWorksResult Result);

    void SetInput(FUWorksSteamID SteamIDClan);
    bool IsActive();
    void GetOutput(EUWorksResult& Result);
    void Deactivate();
    void Activate();
}; // Size: 0x68

class UUWorksRequestCoreComputeNewPlayerCompatibility : public UUWorksRequestCore
{
    FUWorksRequestCoreComputeNewPlayerCompatibilityOnRequestCompleted OnRequestCompleted; // 0x0058 (size: 0x10)
    void ComputeNewPlayerCompatibilityDelegate(bool bSuccessful, EUWorksResult Result, int32 PlayersThatDontLikeCandidate, int32 PlayersThatCandidateDoesntLike, int32 ClanPlayersThatDontLikeCandidate, FUWorksSteamID SteamIDCandidate);
    FUWorksRequestCoreComputeNewPlayerCompatibilityOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0068 (size: 0x10)
    void ComputeNewPlayerCompatibilityMinimalDelegate(bool bSuccessful, EUWorksResult Result, int32 PlayersThatDontLikeCandidate, int32 PlayersThatCandidateDoesntLike, int32 ClanPlayersThatDontLikeCandidate, FUWorksSteamID SteamIDCandidate);

    void SetInput(FUWorksSteamID SteamIDNewPlayer);
    bool IsActive();
    void GetOutput(EUWorksResult& Result, int32& PlayersThatDontLikeCandidate, int32& PlayersThatCandidateDoesntLike, int32& ClanPlayersThatDontLikeCandidate, FUWorksSteamID& SteamIDCandidate);
    void Deactivate();
    void Activate();
}; // Size: 0x78

class UUWorksRequestCoreRequestUserStatsGS : public UUWorksRequestCore
{
    FUWorksRequestCoreRequestUserStatsGSOnRequestCompleted OnRequestCompleted;        // 0x0050 (size: 0x10)
    void ServerRequestUserStatsDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDUser);
    FUWorksRequestCoreRequestUserStatsGSOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0060 (size: 0x10)
    void ServerRequestUserStatsMinimalDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDUser);

    void SetInput(FUWorksSteamID SteamIDUser);
    bool IsActive();
    void GetOutput(EUWorksResult& Result, FUWorksSteamID& SteamIDUser);
    void Deactivate();
    void Activate();
}; // Size: 0x70

class UUWorksRequestCoreStoreUserStats : public UUWorksRequestCore
{
    FUWorksRequestCoreStoreUserStatsOnRequestCompleted OnRequestCompleted;            // 0x0050 (size: 0x10)
    void ServerStoreUserStatsDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDUser);
    FUWorksRequestCoreStoreUserStatsOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0060 (size: 0x10)
    void ServerStoreUserStatsMinimalDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDUser);

    void SetInput(FUWorksSteamID SteamIDUser);
    bool IsActive();
    void GetOutput(EUWorksResult& Result, FUWorksSteamID& SteamIDUser);
    void Deactivate();
    void Activate();
}; // Size: 0x70

class UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs : public UUWorksRequestCore
{
    FUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDsOnRequestCompleted OnRequestCompleted; // 0x0058 (size: 0x10)
    void RequestEligiblePromoItemDefinitionsIDsDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamID, int32 NumEligiblePromoItemsDefinitionsIDs, bool bCachedData);
    FUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDsOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0068 (size: 0x10)
    void RequestEligiblePromoItemDefinitionsIDsMinimalDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamID, int32 NumEligiblePromoItemsDefinitionsIDs, bool bCachedData);

    void SetInput(FUWorksSteamID SteamID);
    bool IsActive();
    void GetOutput(EUWorksResult& Result, FUWorksSteamID& SteamID, int32& NumEligiblePromoItemsDefinitionsIDs, bool& bCachedData);
    void Deactivate();
    void Activate();
}; // Size: 0x78

class UUWorksRequestCoreRequestLobbyList : public UUWorksRequestCore
{
    FUWorksRequestCoreRequestLobbyListOnRequestCompleted OnRequestCompleted;          // 0x0040 (size: 0x10)
    void RequestLobbyListDelegate(bool bSuccessful, int32 LobbiesMatching);
    FUWorksRequestCoreRequestLobbyListOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0050 (size: 0x10)
    void RequestLobbyListMinimalDelegate(bool bSuccessful, int32 LobbiesMatching);

    bool IsActive();
    void GetOutput(int32& LobbiesMatching);
    void Deactivate();
    void Activate();
}; // Size: 0x60

class UUWorksRequestCoreCreateLobby : public UUWorksRequestCore
{
    FUWorksRequestCoreCreateLobbyOnRequestCompleted OnRequestCompleted;               // 0x0050 (size: 0x10)
    void CreateLobbyDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDLobby);
    FUWorksRequestCoreCreateLobbyOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0060 (size: 0x10)
    void CreateLobbyMinimalDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDLobby);

    void SetInput(EUWorksLobbyType LobbyType, int32 MaxMembers);
    bool IsActive();
    void GetOutput(EUWorksResult& Result, FUWorksSteamID& SteamIDLobby);
    void Deactivate();
    void Activate();
}; // Size: 0x70

class UUWorksRequestCoreJoinLobby : public UUWorksRequestCore
{
    FUWorksRequestCoreJoinLobbyOnRequestCompleted OnRequestCompleted;                 // 0x0060 (size: 0x10)
    void JoinLobbyDelegate(bool bSuccessful, FUWorksSteamID SteamIDLobby, const TArray<uint8>& ChatPermissions, bool bLocked, EUWorksChatRoomEnterResponse ChatRoomEnterResponse);
    FUWorksRequestCoreJoinLobbyOnRequestCompletedMinimal OnRequestCompletedMinimal;   // 0x0070 (size: 0x10)
    void JoinLobbyMinimalDelegate(bool bSuccessful, FUWorksSteamID SteamIDLobby, const TArray<uint8>& ChatPermissions, bool bLocked, EUWorksChatRoomEnterResponse ChatRoomEnterResponse);

    void SetInput(FUWorksSteamID SteamIDLobby);
    bool IsActive();
    void GetOutput(FUWorksSteamID& SteamIDLobby, TArray<uint8>& ChatPermissions, bool& bLocked, EUWorksChatRoomEnterResponse& ChatRoomEnterResponse);
    void Deactivate();
    void Activate();
}; // Size: 0x80

struct FUWorksServerInfo
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FString IP;                                                                       // 0x0010 (size: 0x10)
    int32 QueryPort;                                                                  // 0x0020 (size: 0x4)
    int32 ConnectionPort;                                                             // 0x0024 (size: 0x4)
    int32 Ping;                                                                       // 0x0028 (size: 0x4)
    bool bHadSuccessfulResponse;                                                      // 0x002C (size: 0x1)
    bool bDoNotRefresh;                                                               // 0x002D (size: 0x1)
    FString GameDir;                                                                  // 0x0030 (size: 0x10)
    FString Map;                                                                      // 0x0040 (size: 0x10)
    FString GameDescription;                                                          // 0x0050 (size: 0x10)
    int32 AppID;                                                                      // 0x0060 (size: 0x4)
    int32 Players;                                                                    // 0x0064 (size: 0x4)
    int32 MaxPlayers;                                                                 // 0x0068 (size: 0x4)
    int32 BotPlayers;                                                                 // 0x006C (size: 0x4)
    bool bPassword;                                                                   // 0x0070 (size: 0x1)
    bool BSecure;                                                                     // 0x0071 (size: 0x1)
    int32 TimeLastPlayed;                                                             // 0x0074 (size: 0x4)
    int32 ServerVersion;                                                              // 0x0078 (size: 0x4)
    FString GameTags;                                                                 // 0x0080 (size: 0x10)
    FUWorksSteamID SteamID;                                                           // 0x0090 (size: 0x8)

}; // Size: 0x98

class UUWorksRequestCoreServerList : public UUWorksRequestCore
{
    FUWorksRequestCoreServerListOnRequestCompleted OnRequestCompleted;                // 0x0110 (size: 0x10)
    void ServerListDelegate(const TArray<FUWorksServerInfo>& Servers);
    FUWorksRequestCoreServerListOnRequestUpdated OnRequestUpdated;                    // 0x0120 (size: 0x10)
    void ServerListUpdateDelegate(bool bSuccessful, FUWorksServerInfo Server);
    FUWorksRequestCoreServerListOnRequestCompletedMinimal OnRequestCompletedMinimal;  // 0x0130 (size: 0x10)
    void ServerListMinimalDelegate(const TArray<FUWorksServerInfo>& Servers);
    FUWorksRequestCoreServerListOnRequestUpdatedMinimal OnRequestUpdatedMinimal;      // 0x0140 (size: 0x10)
    void ServerListUpdateMinimalDelegate(bool bSuccessful, FUWorksServerInfo Server);

    void SetInput(int32 AppID, EUWorksServerQueryType queryType);
    bool IsActive();
    void GetOutput(FUWorksServerInfo& UpdatedServer, TArray<FUWorksServerInfo>& Servers);
    void Deactivate();
    void AddFilterSecure();
    void AddFilterOr(int32 Value);
    void AddFilterNotFull();
    void AddFilterNor(int32 Value);
    void AddFilterNoPlayers();
    void AddFilterNand(int32 Value);
    void AddFilterMap(FString Value);
    void AddFilterLinux();
    void AddFilterHasPlayers();
    void AddFilterGameTagsNor(FString Value);
    void AddFilterGameTagsAnd(FString Value);
    void AddFilterGameDataOr(FString Value);
    void AddFilterGameDataNor(FString Value);
    void AddFilterGameDataAnd(FString Value);
    void AddFilterGameAddr(FString Value);
    void AddFilterDedicated();
    void AddFilterAnd(int32 Value);
    void AddFilterAddr(FString Value);
    void Activate();
}; // Size: 0x150

class UUWorksRequestCorePing : public UUWorksRequestCore
{
    FUWorksRequestCorePingOnRequestCompleted OnRequestCompleted;                      // 0x00E0 (size: 0x10)
    void PingDelegate(bool bSuccessful, FUWorksServerInfo Server);
    FUWorksRequestCorePingOnRequestCompletedMinimal OnRequestCompletedMinimal;        // 0x00F0 (size: 0x10)
    void PingMinimalDelegate(bool bSuccessful, FUWorksServerInfo Server);

    void SetInput(FString IP, int32 Port);
    bool IsActive();
    void GetOutput(FUWorksServerInfo& Server);
    void Deactivate();
    void Activate();
}; // Size: 0x100

struct FUWorksPlayerInfo
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    int32 score;                                                                      // 0x0010 (size: 0x4)
    float TimePlayed;                                                                 // 0x0014 (size: 0x4)

}; // Size: 0x18

class UUWorksRequestCorePlayers : public UUWorksRequestCore
{
    FUWorksRequestCorePlayersOnRequestCompleted OnRequestCompleted;                   // 0x0070 (size: 0x10)
    void PlayersDelegate(const TArray<FUWorksPlayerInfo>& Players);
    FUWorksRequestCorePlayersOnRequestUpdated OnRequestUpdated;                       // 0x0080 (size: 0x10)
    void PlayersUpdateDelegate(bool bSuccessful, FUWorksPlayerInfo Player);
    FUWorksRequestCorePlayersOnRequestCompletedMinimal OnRequestCompletedMinimal;     // 0x0090 (size: 0x10)
    void PlayersMinimalDelegate(const TArray<FUWorksPlayerInfo>& Players);
    FUWorksRequestCorePlayersOnRequestUpdatedMinimal OnRequestUpdatedMinimal;         // 0x00A0 (size: 0x10)
    void PlayersUpdateMinimalDelegate(bool bSuccessful, FUWorksPlayerInfo Player);

    void SetInput(FString IP, int32 Port);
    bool IsActive();
    void GetOutput(FUWorksPlayerInfo& UpdatedPlayer, TArray<FUWorksPlayerInfo>& Players);
    void Deactivate();
    void Activate();
}; // Size: 0xB0

struct FUWorksRuleInfo
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FString Value;                                                                    // 0x0010 (size: 0x10)

}; // Size: 0x20

class UUWorksRequestCoreRules : public UUWorksRequestCore
{
    FUWorksRequestCoreRulesOnRequestCompleted OnRequestCompleted;                     // 0x0078 (size: 0x10)
    void RulesDelegate(const TArray<FUWorksRuleInfo>& Rules);
    FUWorksRequestCoreRulesOnRequestUpdated OnRequestUpdated;                         // 0x0088 (size: 0x10)
    void RulesUpdateDelegate(bool bSuccessful, FUWorksRuleInfo Rule);
    FUWorksRequestCoreRulesOnRequestCompletedMinimal OnRequestCompletedMinimal;       // 0x0098 (size: 0x10)
    void RulesMinimalDelegate(const TArray<FUWorksRuleInfo>& Rules);
    FUWorksRequestCoreRulesOnRequestUpdatedMinimal OnRequestUpdatedMinimal;           // 0x00A8 (size: 0x10)
    void RulesUpdateMinimalDelegate(bool bSuccessful, FUWorksRuleInfo Rule);

    void SetInput(FString IP, int32 Port);
    bool IsActive();
    void GetOutput(FUWorksRuleInfo& UpdatedRule, TArray<FUWorksRuleInfo>& Rules);
    void Deactivate();
    void Activate();
}; // Size: 0xB8

class UUWorksRequestCoreFileWriteAsync : public UUWorksRequestCore
{
    FUWorksRequestCoreFileWriteAsyncOnRequestCompleted OnRequestCompleted;            // 0x0060 (size: 0x10)
    void FileWriteAsyncDelegate(bool bSuccessful, EUWorksResult Result);
    FUWorksRequestCoreFileWriteAsyncOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0070 (size: 0x10)
    void FileWriteAsyncMinimalDelegate(bool bSuccessful, EUWorksResult Result);

    void SetInput(FString File, TArray<uint8> Buffer);
    bool IsActive();
    void GetOutput(EUWorksResult& Result);
    void Deactivate();
    void Activate();
}; // Size: 0x80

class UUWorksRequestCoreFileReadAsync : public UUWorksRequestCore
{
    FUWorksRequestCoreFileReadAsyncOnRequestCompleted OnRequestCompleted;             // 0x0068 (size: 0x10)
    void FileReadAsyncDelegate(bool bSuccessful, EUWorksResult Result, int32 Offset, const TArray<uint8>& Buffer);
    FUWorksRequestCoreFileReadAsyncOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0078 (size: 0x10)
    void FileReadAsyncMinimalDelegate(bool bSuccessful, EUWorksResult Result, int32 Offset, const TArray<uint8>& Buffer);

    void SetInput(FString File, int32 Offset, int32 BytesToRead);
    bool IsActive();
    void GetOutput(EUWorksResult& Result, int32& Offset, TArray<uint8>& Buffer);
    void Deactivate();
    void Activate();
}; // Size: 0x88

class UUWorksRequestCoreSendQueryUGCRequest : public UUWorksRequestCore
{
    FUWorksRequestCoreSendQueryUGCRequestOnRequestCompleted OnRequestCompleted;       // 0x0058 (size: 0x10)
    void SendQueryUGCRequestDelegate(bool bSuccessful, FUWorksUGCQueryHandle UGCQueryHandle, EUWorksResult Result, int32 numResultsReturned, int32 TotalMatchingResults, bool bCachedData);
    FUWorksRequestCoreSendQueryUGCRequestOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0068 (size: 0x10)
    void SendQueryUGCRequestMinimalDelegate(bool bSuccessful, FUWorksUGCQueryHandle UGCQueryHandle, EUWorksResult Result, int32 numResultsReturned, int32 TotalMatchingResults, bool bCachedData);

    void SetInput(FUWorksUGCQueryHandle UGCQueryHandle);
    bool IsActive();
    void GetOutput(FUWorksUGCQueryHandle& UGCQueryHandle, EUWorksResult& Result, int32& numResultsReturned, int32& TotalMatchingResults, bool& bCachedData);
    void Deactivate();
    void Activate();
}; // Size: 0x78

class UUWorksRequestCoreCreateItem : public UUWorksRequestCore
{
    FUWorksRequestCoreCreateItemOnRequestCompleted OnRequestCompleted;                // 0x0050 (size: 0x10)
    void CreateItemDelegate(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID, bool bUserNeedsToAcceptWorkshopLegalAgreement);
    FUWorksRequestCoreCreateItemOnRequestCompletedMinimal OnRequestCompletedMinimal;  // 0x0060 (size: 0x10)
    void CreateItemMinimalDelegate(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID, bool bUserNeedsToAcceptWorkshopLegalAgreement);

    void SetInput(int32 ConsumerAppID, EUWorksWorkshopFileType fileType);
    bool IsActive();
    void GetOutput(EUWorksResult& Result, FUWorksPublishedFileID& PublishedFileID, bool& bUserNeedsToAcceptWorkshopLegalAgreement);
    void Deactivate();
    void Activate();
}; // Size: 0x70

class UUWorksRequestCoreSubmitItemUpdate : public UUWorksRequestCore
{
    FUWorksRequestCoreSubmitItemUpdateOnRequestCompleted OnRequestCompleted;          // 0x0058 (size: 0x10)
    void SubmitItemUpdateDelegate(bool bSuccessful, EUWorksResult Result, bool bUserNeedsToAcceptWorkshopLegalAgreement);
    FUWorksRequestCoreSubmitItemUpdateOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0068 (size: 0x10)
    void SubmitItemUpdateMinimalDelegate(bool bSuccessful, EUWorksResult Result, bool bUserNeedsToAcceptWorkshopLegalAgreement);

    void SetInput(FUWorksUGCUpdateHandle UGCUpdateHandle, FString ChangeNote);
    bool IsActive();
    void GetOutput(EUWorksResult& Result, bool& bUserNeedsToAcceptWorkshopLegalAgreement);
    void Deactivate();
    void Activate();
}; // Size: 0x78

class UUWorksRequestCoreSetUserItemVote : public UUWorksRequestCore
{
    FUWorksRequestCoreSetUserItemVoteOnRequestCompleted OnRequestCompleted;           // 0x0058 (size: 0x10)
    void SetUserItemVoteDelegate(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bVoteUp);
    FUWorksRequestCoreSetUserItemVoteOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0068 (size: 0x10)
    void SetUserItemVoteMinimalDelegate(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bVoteUp);

    void SetInput(FUWorksPublishedFileID PublishedFileID, bool bVoteUp);
    bool IsActive();
    void GetOutput(FUWorksPublishedFileID& PublishedFileID, EUWorksResult& Result, bool& bVoteUp);
    void Deactivate();
    void Activate();
}; // Size: 0x78

class UUWorksRequestCoreGetUserItemVote : public UUWorksRequestCore
{
    FUWorksRequestCoreGetUserItemVoteOnRequestCompleted OnRequestCompleted;           // 0x0050 (size: 0x10)
    void GetUserItemVoteDelegate(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bVotedUp, bool bVotedDown, bool bVoteSkipped);
    FUWorksRequestCoreGetUserItemVoteOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0060 (size: 0x10)
    void GetUserItemVoteMinimalDelegate(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bVotedUp, bool bVotedDown, bool bVoteSkipped);

    void SetInput(FUWorksPublishedFileID PublishedFileID);
    bool IsActive();
    void GetOutput(FUWorksPublishedFileID& PublishedFileID, EUWorksResult& Result, bool& bVotedUp, bool& bVotedDown, bool& bVoteSkipped);
    void Deactivate();
    void Activate();
}; // Size: 0x70

class UUWorksRequestCoreAddItemToFavorites : public UUWorksRequestCore
{
    FUWorksRequestCoreAddItemToFavoritesOnRequestCompleted OnRequestCompleted;        // 0x0058 (size: 0x10)
    void AddItemToFavoritesDelegate(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bWasAddRequest);
    FUWorksRequestCoreAddItemToFavoritesOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0068 (size: 0x10)
    void AddItemToFavoritesMinimalDelegate(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bWasAddRequest);

    void SetInput(int32 AppID, FUWorksPublishedFileID PublishedFileID);
    bool IsActive();
    void GetOutput(FUWorksPublishedFileID& PublishedFileID, EUWorksResult& Result, bool& bWasAddRequest);
    void Deactivate();
    void Activate();
}; // Size: 0x78

class UUWorksRequestCoreRemoveItemFromFavorites : public UUWorksRequestCore
{
    FUWorksRequestCoreRemoveItemFromFavoritesOnRequestCompleted OnRequestCompleted;   // 0x0058 (size: 0x10)
    void RemoveItemFromFavoritesDelegate(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bWasAddRequest);
    FUWorksRequestCoreRemoveItemFromFavoritesOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0068 (size: 0x10)
    void RemoveItemFromFavoritesMinimalDelegate(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bWasAddRequest);

    void SetInput(int32 AppID, FUWorksPublishedFileID PublishedFileID);
    bool IsActive();
    void GetOutput(FUWorksPublishedFileID& PublishedFileID, EUWorksResult& Result, bool& bWasAddRequest);
    void Deactivate();
    void Activate();
}; // Size: 0x78

class UUWorksRequestCoreSubscribeItem : public UUWorksRequestCore
{
    FUWorksRequestCoreSubscribeItemOnRequestCompleted OnRequestCompleted;             // 0x0050 (size: 0x10)
    void SubscribeItemDelegate(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID);
    FUWorksRequestCoreSubscribeItemOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0060 (size: 0x10)
    void SubscribeItemMinimalDelegate(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID);

    void SetInput(FUWorksPublishedFileID PublishedFileID);
    bool IsActive();
    void GetOutput(EUWorksResult& Result, FUWorksPublishedFileID& PublishedFileID);
    void Deactivate();
    void Activate();
}; // Size: 0x70

class UUWorksRequestCoreUnsubscribeItem : public UUWorksRequestCore
{
    FUWorksRequestCoreUnsubscribeItemOnRequestCompleted OnRequestCompleted;           // 0x0050 (size: 0x10)
    void UnsubscribeItemDelegate(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID);
    FUWorksRequestCoreUnsubscribeItemOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0060 (size: 0x10)
    void UnsubscribeItemMinimalDelegate(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID);

    void SetInput(FUWorksPublishedFileID PublishedFileID);
    bool IsActive();
    void GetOutput(EUWorksResult& Result, FUWorksPublishedFileID& PublishedFileID);
    void Deactivate();
    void Activate();
}; // Size: 0x70

class UUWorksRequestCoreStartPlaytimeTracking : public UUWorksRequestCore
{
    FUWorksRequestCoreStartPlaytimeTrackingOnRequestCompleted OnRequestCompleted;     // 0x0050 (size: 0x10)
    void StartPlaytimeTrackingDelegate(bool bSuccessful, EUWorksResult Result);
    FUWorksRequestCoreStartPlaytimeTrackingOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0060 (size: 0x10)
    void StartPlaytimeTrackingMinimalDelegate(bool bSuccessful, EUWorksResult Result);

    void SetInput(TArray<FUWorksPublishedFileID> PublishedFileID);
    bool IsActive();
    void GetOutput(EUWorksResult& Result);
    void Deactivate();
    void Activate();
}; // Size: 0x70

class UUWorksRequestCoreStopPlaytimeTracking : public UUWorksRequestCore
{
    FUWorksRequestCoreStopPlaytimeTrackingOnRequestCompleted OnRequestCompleted;      // 0x0050 (size: 0x10)
    void StopPlaytimeTrackingDelegate(bool bSuccessful, EUWorksResult Result);
    FUWorksRequestCoreStopPlaytimeTrackingOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0060 (size: 0x10)
    void StopPlaytimeTrackingMinimalDelegate(bool bSuccessful, EUWorksResult Result);

    void SetInput(TArray<FUWorksPublishedFileID> PublishedFileIDs);
    bool IsActive();
    void GetOutput(EUWorksResult& Result);
    void Deactivate();
    void Activate();
}; // Size: 0x70

class UUWorksRequestCoreStopPlaytimeTrackingForAllItems : public UUWorksRequestCore
{
    FUWorksRequestCoreStopPlaytimeTrackingForAllItemsOnRequestCompleted OnRequestCompleted; // 0x0040 (size: 0x10)
    void StopPlaytimeTrackingForAllItemsDelegate(bool bSuccessful, EUWorksResult Result);
    FUWorksRequestCoreStopPlaytimeTrackingForAllItemsOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0050 (size: 0x10)
    void StopPlaytimeTrackingForAllItemsMinimalDelegate(bool bSuccessful, EUWorksResult Result);

    bool IsActive();
    void GetOutput(EUWorksResult& Result);
    void Deactivate();
    void Activate();
}; // Size: 0x60

class UUWorksRequestCoreRequestEncryptedAppTicket : public UUWorksRequestCore
{
    FUWorksRequestCoreRequestEncryptedAppTicketOnRequestCompleted OnRequestCompleted; // 0x0050 (size: 0x10)
    void RequestEncryptedAppTicketDelegate(bool bSuccessful, EUWorksResult Result);
    FUWorksRequestCoreRequestEncryptedAppTicketOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0060 (size: 0x10)
    void RequestEncryptedAppTicketMinimalDelegate(bool bSuccessful, EUWorksResult Result);

    void SetInput(TArray<uint8> Buffer);
    bool IsActive();
    void GetOutput(EUWorksResult& Result);
    void Deactivate();
    void Activate();
}; // Size: 0x70

class UUWorksRequestCoreRequestStoreAuthURL : public UUWorksRequestCore
{
    FUWorksRequestCoreRequestStoreAuthURLOnRequestCompleted OnRequestCompleted;       // 0x0058 (size: 0x10)
    void RequestStoreAuthURLDelegate(bool bSuccessful, FString URL);
    FUWorksRequestCoreRequestStoreAuthURLOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0068 (size: 0x10)
    void RequestStoreAuthURLMinimalDelegate(bool bSuccessful, FString URL);

    void SetInput(FString URL);
    bool IsActive();
    void GetOutput(FString& URL);
    void Deactivate();
    void Activate();
}; // Size: 0x78

class UUWorksRequestCoreRequestUserStats : public UUWorksRequestCore
{
    FUWorksRequestCoreRequestUserStatsOnRequestCompleted OnRequestCompleted;          // 0x0058 (size: 0x10)
    void RequestUserStatsDelegate(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result, FUWorksSteamID SteamID);
    FUWorksRequestCoreRequestUserStatsOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0068 (size: 0x10)
    void RequestUserStatsMinimalDelegate(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result, FUWorksSteamID SteamID);

    void SetInput(FUWorksSteamID SteamID);
    bool IsActive();
    void GetOutput(FUWorksGameID& GameID, EUWorksResult& Result, FUWorksSteamID& SteamID);
    void Deactivate();
    void Activate();
}; // Size: 0x78

class UUWorksRequestCoreFindOrCreateLeaderboard : public UUWorksRequestCore
{
    FUWorksRequestCoreFindOrCreateLeaderboardOnRequestCompleted OnRequestCompleted;   // 0x0060 (size: 0x10)
    void FindOrCreateLeaderboardDelegate(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound);
    FUWorksRequestCoreFindOrCreateLeaderboardOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0070 (size: 0x10)
    void FindOrCreateLeaderboardMinimalDelegate(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound);

    void SetInput(FString LeaderboardName, EUWorksLeaderboardSortMethod LeaderboardSortMethod, EUWorksLeaderboardDisplayType LeaderboardDisplayType);
    bool IsActive();
    void GetOutput(FUWorksSteamLeaderboard& SteamLeaderboard, bool& bLeaderboardFound);
    void Deactivate();
    void Activate();
}; // Size: 0x80

class UUWorksRequestCoreFindLeaderboard : public UUWorksRequestCore
{
    FUWorksRequestCoreFindLeaderboardOnRequestCompleted OnRequestCompleted;           // 0x0058 (size: 0x10)
    void FindLeaderboardDelegate(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound);
    FUWorksRequestCoreFindLeaderboardOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0068 (size: 0x10)
    void FindLeaderboardMinimalDelegate(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound);

    void SetInput(FString LeaderboardName);
    bool IsActive();
    void GetOutput(FUWorksSteamLeaderboard& SteamLeaderboard, bool& bLeaderboardFound);
    void Deactivate();
    void Activate();
}; // Size: 0x78

class UUWorksRequestCoreDownloadLeaderboardEntries : public UUWorksRequestCore
{
    FUWorksRequestCoreDownloadLeaderboardEntriesOnRequestCompleted OnRequestCompleted; // 0x0068 (size: 0x10)
    void DownloadLeaderboardEntriesDelegate(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, FUWorksSteamLeaderboardEntries SteamLeaderboardEntries, int32 EntryCount);
    FUWorksRequestCoreDownloadLeaderboardEntriesOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0078 (size: 0x10)
    void DownloadLeaderboardEntriesMinimalDelegate(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, FUWorksSteamLeaderboardEntries SteamLeaderboardEntries, int32 EntryCount);

    void SetInput(FUWorksSteamLeaderboard SteamLeaderboard, EUWorksLeaderboardDataRequest LeaderboardDataRequest, int32 RangeStart, int32 RangeEnd);
    bool IsActive();
    void GetOutput(FUWorksSteamLeaderboard& SteamLeaderboard, FUWorksSteamLeaderboardEntries& SteamLeaderboardEntries, int32& EntryCount);
    void Deactivate();
    void Activate();
}; // Size: 0x88

class UUWorksRequestCoreDownloadLeaderboardEntriesForUsers : public UUWorksRequestCore
{
    FUWorksRequestCoreDownloadLeaderboardEntriesForUsersOnRequestCompleted OnRequestCompleted; // 0x0068 (size: 0x10)
    void DownloadLeaderboardEntriesForUsersDelegate(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, FUWorksSteamLeaderboardEntries SteamLeaderboardEntries, int32 EntryCount);
    FUWorksRequestCoreDownloadLeaderboardEntriesForUsersOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0078 (size: 0x10)
    void DownloadLeaderboardEntriesForUsersMinimalDelegate(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, FUWorksSteamLeaderboardEntries SteamLeaderboardEntries, int32 EntryCount);

    void SetInput(FUWorksSteamLeaderboard SteamLeaderboard, TArray<FUWorksSteamID> Users);
    bool IsActive();
    void GetOutput(FUWorksSteamLeaderboard& SteamLeaderboard, FUWorksSteamLeaderboardEntries& SteamLeaderboardEntries, int32& EntryCount);
    void Deactivate();
    void Activate();
}; // Size: 0x88

class UUWorksRequestCoreUploadLeaderboardScore : public UUWorksRequestCore
{
    FUWorksRequestCoreUploadLeaderboardScoreOnRequestCompleted OnRequestCompleted;    // 0x0078 (size: 0x10)
    void UploadLeaderboardScoreDelegate(bool bSuccessful, bool bSuccess, FUWorksSteamLeaderboard SteamLeaderboard, int32 score, bool bScoreChanged, int32 GlobalRankNew, int32 GlobalRankPrevious);
    FUWorksRequestCoreUploadLeaderboardScoreOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0088 (size: 0x10)
    void UploadLeaderboardScoreMinimalDelegate(bool bSuccessful, bool bSuccess, FUWorksSteamLeaderboard SteamLeaderboard, int32 score, bool bScoreChanged, int32 GlobalRankNew, int32 GlobalRankPrevious);

    void SetInput(FUWorksSteamLeaderboard SteamLeaderboard, EUWorksLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod, int32 score, TArray<int32> ScoreDetails);
    bool IsActive();
    void GetOutput(bool& bSuccess, FUWorksSteamLeaderboard& SteamLeaderboard, int32& score, bool& bScoreChanged, int32& GlobalRankNew, int32& GlobalRankPrevious);
    void Deactivate();
    void Activate();
}; // Size: 0x98

class UUWorksRequestCoreAttachLeaderboardUGC : public UUWorksRequestCore
{
    FUWorksRequestCoreAttachLeaderboardUGCOnRequestCompleted OnRequestCompleted;      // 0x0058 (size: 0x10)
    void AttachLeaderboardUGCDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamLeaderboard SteamLeaderboard);
    FUWorksRequestCoreAttachLeaderboardUGCOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0068 (size: 0x10)
    void AttachLeaderboardUGCMinimalDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamLeaderboard SteamLeaderboard);

    void SetInput(FUWorksSteamLeaderboard SteamLeaderboard, FUWorksUGCHandle UGCHandle);
    bool IsActive();
    void GetOutput(EUWorksResult& Result, FUWorksSteamLeaderboard& SteamLeaderboard);
    void Deactivate();
    void Activate();
}; // Size: 0x78

class UUWorksRequestCoreGetNumberOfCurrentPlayers : public UUWorksRequestCore
{
    FUWorksRequestCoreGetNumberOfCurrentPlayersOnRequestCompleted OnRequestCompleted; // 0x0040 (size: 0x10)
    void GetNumberOfCurrentPlayersDelegate(bool bSuccessful, bool bSuccess, int32 Players);
    FUWorksRequestCoreGetNumberOfCurrentPlayersOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0050 (size: 0x10)
    void GetNumberOfCurrentPlayersMinimalDelegate(bool bSuccessful, bool bSuccess, int32 Players);

    bool IsActive();
    void GetOutput(bool& bSuccess, int32& Players);
    void Deactivate();
    void Activate();
}; // Size: 0x60

class UUWorksRequestCoreRequestGlobalAchievementPercentages : public UUWorksRequestCore
{
    FUWorksRequestCoreRequestGlobalAchievementPercentagesOnRequestCompleted OnRequestCompleted; // 0x0048 (size: 0x10)
    void RequestGlobalAchievementPercentagesDelegate(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result);
    FUWorksRequestCoreRequestGlobalAchievementPercentagesOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0058 (size: 0x10)
    void RequestGlobalAchievementPercentagesMinimalDelegate(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result);

    bool IsActive();
    void GetOutput(FUWorksGameID& GameID, EUWorksResult& Result);
    void Deactivate();
    void Activate();
}; // Size: 0x68

class UUWorksRequestCoreRequestGlobalStats : public UUWorksRequestCore
{
    FUWorksRequestCoreRequestGlobalStatsOnRequestCompleted OnRequestCompleted;        // 0x0050 (size: 0x10)
    void RequestGlobalStatsDelegate(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result);
    FUWorksRequestCoreRequestGlobalStatsOnRequestCompletedMinimal OnRequestCompletedMinimal; // 0x0060 (size: 0x10)
    void RequestGlobalStatsMinimalDelegate(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result);

    void SetInput(int32 HistoryDays);
    bool IsActive();
    void GetOutput(FUWorksGameID& GameID, EUWorksResult& Result);
    void Deactivate();
    void Activate();
}; // Size: 0x70

class UCoreGetFileDetailsNode : public UBlueprintAsyncActionBase
{
    FCoreGetFileDetailsNodeCompleted Completed;                                       // 0x0030 (size: 0x10)
    void GetFileDetailsDelegate(bool bSuccessful, EUWorksResult Result, int32 fileSize, FString FileSHA, const TArray<int32>& FileFlags);

    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, int32 fileSize, FString FileSHA, const TArray<int32>& FileFlags);
    class UCoreGetFileDetailsNode* GetFileDetailsNode(FString Filename);
}; // Size: 0x40

class UCoreSetPersonaNameNode : public UBlueprintAsyncActionBase
{
    FCoreSetPersonaNameNodeCompleted Completed;                                       // 0x0030 (size: 0x10)
    void SetPersonaNameDelegate(bool bSuccessful, bool bSuccess, bool bLocalSuccess, EUWorksResult Result);

    class UCoreSetPersonaNameNode* SetPersonaNameNode(FString Name);
    void OnRequestCompleted(bool bSuccessful, bool bSuccess, bool bLocalSuccess, EUWorksResult Result);
}; // Size: 0x40

class UCoreDownloadClanActivityCountsNode : public UBlueprintAsyncActionBase
{
    FCoreDownloadClanActivityCountsNodeCompleted Completed;                           // 0x0030 (size: 0x10)
    void DownloadClanActivityCountsDelegate(bool bSuccessful, bool bSuccess);

    void OnRequestCompleted(bool bSuccessful, bool bSuccess);
    class UCoreDownloadClanActivityCountsNode* DownloadClanActivityCountsNode(TArray<FUWorksSteamID> SteamIDClans);
}; // Size: 0x40

class UCoreRequestClanOfficerListNode : public UBlueprintAsyncActionBase
{
    FCoreRequestClanOfficerListNodeCompleted Completed;                               // 0x0030 (size: 0x10)
    void RequestClanOfficerListDelegate(bool bSuccessful, FUWorksSteamID SteamIDClan, int32 Officers, bool bSuccess);

    class UCoreRequestClanOfficerListNode* RequestClanOfficerListNode(FUWorksSteamID SteamID);
    void OnRequestCompleted(bool bSuccessful, FUWorksSteamID SteamIDClan, int32 Officers, bool bSuccess);
}; // Size: 0x40

class UCoreJoinClanChatRoomNode : public UBlueprintAsyncActionBase
{
    FCoreJoinClanChatRoomNodeCompleted Completed;                                     // 0x0030 (size: 0x10)
    void JoinClanChatRoomDelegate(bool bSuccessful, FUWorksSteamID SteamIDClanChat, EUWorksChatRoomEnterResponse ChatRoomEnterResponse);

    void OnRequestCompleted(bool bSuccessful, FUWorksSteamID SteamIDClanChat, EUWorksChatRoomEnterResponse ChatRoomEnterResponse);
    class UCoreJoinClanChatRoomNode* JoinClanChatRoomNode(FUWorksSteamID SteamIDClan);
}; // Size: 0x40

class UCoreGetFollowerCountNode : public UBlueprintAsyncActionBase
{
    FCoreGetFollowerCountNodeCompleted Completed;                                     // 0x0030 (size: 0x10)
    void GetFollowerCountDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamID, int32 Count);

    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamID, int32 Count);
    class UCoreGetFollowerCountNode* GetFollowerCountNode(FUWorksSteamID SteamID);
}; // Size: 0x40

class UCoreIsFollowingNode : public UBlueprintAsyncActionBase
{
    FCoreIsFollowingNodeCompleted Completed;                                          // 0x0030 (size: 0x10)
    void IsFollowingDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamID, bool bIsFollowing);

    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamID, bool bIsFollowing);
    class UCoreIsFollowingNode* IsFollowingNode(FUWorksSteamID SteamID);
}; // Size: 0x40

class UCoreEnumerateFollowingListNode : public UBlueprintAsyncActionBase
{
    FCoreEnumerateFollowingListNodeCompleted Completed;                               // 0x0030 (size: 0x10)
    void EnumerateFollowingListDelegate(bool bSuccessful, EUWorksResult Result, const TArray<FUWorksSteamID>& SteamIDs, int32 ResultsReturned, int32 TotalResultCount);

    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, const TArray<FUWorksSteamID>& SteamIDs, int32 ResultsReturned, int32 TotalResultCount);
    class UCoreEnumerateFollowingListNode* EnumerateFollowingListNode(int32 StartIndex);
}; // Size: 0x40

class UCoreAssociateWithClanNode : public UBlueprintAsyncActionBase
{
    FCoreAssociateWithClanNodeCompleted Completed;                                    // 0x0030 (size: 0x10)
    void AssociateWithClanDelegate(bool bSuccessful, EUWorksResult Result);

    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);
    class UCoreAssociateWithClanNode* AssociateWithClanNode(FUWorksSteamID SteamIDClan);
}; // Size: 0x40

class UCoreComputeNewPlayerCompatibilityNode : public UBlueprintAsyncActionBase
{
    FCoreComputeNewPlayerCompatibilityNodeCompleted Completed;                        // 0x0030 (size: 0x10)
    void ComputeNewPlayerCompatibilityDelegate(bool bSuccessful, EUWorksResult Result, int32 PlayersThatDontLikeCandidate, int32 PlayersThatCandidateDoesntLike, int32 ClanPlayersThatDontLikeCandidate, FUWorksSteamID SteamIDCandidate);

    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, int32 PlayersThatDontLikeCandidate, int32 PlayersThatCandidateDoesntLike, int32 ClanPlayersThatDontLikeCandidate, FUWorksSteamID SteamIDCandidate);
    class UCoreComputeNewPlayerCompatibilityNode* ComputeNewPlayerCompatibilityNode(FUWorksSteamID SteamIDNewPlayer);
}; // Size: 0x40

class UCoreRequestUserStatsGSNode : public UBlueprintAsyncActionBase
{
    FCoreRequestUserStatsGSNodeCompleted Completed;                                   // 0x0030 (size: 0x10)
    void ServerRequestUserStatsDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDUser);

    class UCoreRequestUserStatsGSNode* RequestUserStatsGSNode(FUWorksSteamID SteamIDUser);
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDUser);
}; // Size: 0x40

class UCoreStoreUserStatsNode : public UBlueprintAsyncActionBase
{
    FCoreStoreUserStatsNodeCompleted Completed;                                       // 0x0030 (size: 0x10)
    void ServerStoreUserStatsDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDUser);

    class UCoreStoreUserStatsNode* StoreUserStatsNode(FUWorksSteamID SteamIDUser);
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDUser);
}; // Size: 0x40

class UCoreRequestEligiblePromoItemDefinitionsIDsNode : public UBlueprintAsyncActionBase
{
    FCoreRequestEligiblePromoItemDefinitionsIDsNodeCompleted Completed;               // 0x0030 (size: 0x10)
    void RequestEligiblePromoItemDefinitionsIDsDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamID, int32 NumEligiblePromoItemsDefinitionsIDs, bool bCachedData);

    class UCoreRequestEligiblePromoItemDefinitionsIDsNode* RequestEligiblePromoItemDefinitionsIDsNode(FUWorksSteamID SteamID);
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamID, int32 NumEligiblePromoItemsDefinitionsIDs, bool bCachedData);
}; // Size: 0x40

class UCoreRequestLobbyListNode : public UBlueprintAsyncActionBase
{
    FCoreRequestLobbyListNodeCompleted Completed;                                     // 0x0030 (size: 0x10)
    void RequestLobbyListDelegate(bool bSuccessful, int32 LobbiesMatching);

    class UCoreRequestLobbyListNode* RequestLobbyListNode();
    void OnRequestCompleted(bool bSuccessful, int32 LobbiesMatching);
}; // Size: 0x40

class UCoreCreateLobbyNode : public UBlueprintAsyncActionBase
{
    FCoreCreateLobbyNodeCompleted Completed;                                          // 0x0030 (size: 0x10)
    void CreateLobbyDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDLobby);

    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDLobby);
    class UCoreCreateLobbyNode* CreateLobbyNode(EUWorksLobbyType LobbyType, int32 MaxMembers);
}; // Size: 0x40

class UCoreJoinLobbyNode : public UBlueprintAsyncActionBase
{
    FCoreJoinLobbyNodeCompleted Completed;                                            // 0x0030 (size: 0x10)
    void JoinLobbyDelegate(bool bSuccessful, FUWorksSteamID SteamIDLobby, const TArray<uint8>& ChatPermissions, bool bLocked, EUWorksChatRoomEnterResponse ChatRoomEnterResponse);

    void OnRequestCompleted(bool bSuccessful, FUWorksSteamID SteamIDLobby, const TArray<uint8>& ChatPermissions, bool bLocked, EUWorksChatRoomEnterResponse ChatRoomEnterResponse);
    class UCoreJoinLobbyNode* JoinLobbyNode(FUWorksSteamID SteamIDLobby);
}; // Size: 0x40

class UCoreServerListNode : public UBlueprintAsyncActionBase
{
    FCoreServerListNodeUpdated Updated;                                               // 0x0030 (size: 0x10)
    void ServerListUpdateDelegate(bool bSuccessful, FUWorksServerInfo Server);

    class UCoreServerListNode* ServerListNode(int32 AppID, EUWorksServerQueryType queryType, int32 MaxUpdates);
    void OnRequestUpdated(bool bSuccessful, FUWorksServerInfo Server);
}; // Size: 0x50

class UCorePingNode : public UBlueprintAsyncActionBase
{
    FCorePingNodeCompleted Completed;                                                 // 0x0030 (size: 0x10)
    void PingDelegate(bool bSuccessful, FUWorksServerInfo Server);

    class UCorePingNode* PingNode(FString IP, int32 Port);
    void OnRequestCompleted(bool bSuccessful, FUWorksServerInfo Server);
}; // Size: 0x40

class UCorePlayersNode : public UBlueprintAsyncActionBase
{
    FCorePlayersNodeUpdated Updated;                                                  // 0x0030 (size: 0x10)
    void PlayersUpdateDelegate(bool bSuccessful, FUWorksPlayerInfo Player);

    class UCorePlayersNode* PlayersNode(FString IP, int32 Port, int32 MaxUpdates);
    void OnRequestUpdated(bool bSuccessful, FUWorksPlayerInfo Player);
}; // Size: 0x50

class UCoreRulesNode : public UBlueprintAsyncActionBase
{
    FCoreRulesNodeUpdated Updated;                                                    // 0x0030 (size: 0x10)
    void RulesUpdateDelegate(bool bSuccessful, FUWorksRuleInfo Rule);

    class UCoreRulesNode* RulesNode(FString IP, int32 Port, int32 MaxUpdates);
    void OnRequestUpdated(bool bSuccessful, FUWorksRuleInfo Rule);
}; // Size: 0x50

class UCoreFileWriteAsyncNode : public UBlueprintAsyncActionBase
{
    FCoreFileWriteAsyncNodeCompleted Completed;                                       // 0x0030 (size: 0x10)
    void FileWriteAsyncDelegate(bool bSuccessful, EUWorksResult Result);

    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);
    class UCoreFileWriteAsyncNode* FileWriteAsyncNode(FString File, TArray<uint8> Buffer);
}; // Size: 0x40

class UCoreFileReadAsyncNode : public UBlueprintAsyncActionBase
{
    FCoreFileReadAsyncNodeCompleted Completed;                                        // 0x0030 (size: 0x10)
    void FileReadAsyncDelegate(bool bSuccessful, EUWorksResult Result, int32 Offset, const TArray<uint8>& Buffer);

    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, int32 Offset, const TArray<uint8>& Buffer);
    class UCoreFileReadAsyncNode* FileReadAsyncNode(FString File, int32 Offset, int32 BytesToRead);
}; // Size: 0x40

class UCoreSendQueryUGCRequestNode : public UBlueprintAsyncActionBase
{
    FCoreSendQueryUGCRequestNodeCompleted Completed;                                  // 0x0030 (size: 0x10)
    void SendQueryUGCRequestDelegate(bool bSuccessful, FUWorksUGCQueryHandle UGCQueryHandle, EUWorksResult Result, int32 numResultsReturned, int32 TotalMatchingResults, bool bCachedData);

    class UCoreSendQueryUGCRequestNode* SendQueryUGCRequestNode(FUWorksUGCQueryHandle UGCQueryHandle);
    void OnRequestCompleted(bool bSuccessful, FUWorksUGCQueryHandle UGCQueryHandle, EUWorksResult Result, int32 numResultsReturned, int32 TotalMatchingResults, bool bCachedData);
}; // Size: 0x40

class UCoreCreateItemNode : public UBlueprintAsyncActionBase
{
    FCoreCreateItemNodeCompleted Completed;                                           // 0x0030 (size: 0x10)
    void CreateItemDelegate(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID, bool bUserNeedsToAcceptWorkshopLegalAgreement);

    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID, bool bUserNeedsToAcceptWorkshopLegalAgreement);
    class UCoreCreateItemNode* CreateItemNode(int32 ConsumerAppID, EUWorksWorkshopFileType fileType);
}; // Size: 0x40

class UCoreSubmitItemUpdateNode : public UBlueprintAsyncActionBase
{
    FCoreSubmitItemUpdateNodeCompleted Completed;                                     // 0x0030 (size: 0x10)
    void SubmitItemUpdateDelegate(bool bSuccessful, EUWorksResult Result, bool bUserNeedsToAcceptWorkshopLegalAgreement);

    class UCoreSubmitItemUpdateNode* SubmitItemUpdateNode(FUWorksUGCUpdateHandle UGCUpdateHandle, FString ChangeNote);
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, bool bUserNeedsToAcceptWorkshopLegalAgreement);
}; // Size: 0x40

class UCoreSetUserItemVoteNode : public UBlueprintAsyncActionBase
{
    FCoreSetUserItemVoteNodeCompleted Completed;                                      // 0x0030 (size: 0x10)
    void SetUserItemVoteDelegate(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bVoteUp);

    class UCoreSetUserItemVoteNode* SetUserItemVoteNode(FUWorksPublishedFileID PublishedFileID, bool bVoteUp);
    void OnRequestCompleted(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bVoteUp);
}; // Size: 0x40

class UCoreGetUserItemVoteNode : public UBlueprintAsyncActionBase
{
    FCoreGetUserItemVoteNodeCompleted Completed;                                      // 0x0030 (size: 0x10)
    void GetUserItemVoteDelegate(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bVotedUp, bool bVotedDown, bool bVoteSkipped);

    void OnRequestCompleted(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bVotedUp, bool bVotedDown, bool bVoteSkipped);
    class UCoreGetUserItemVoteNode* GetUserItemVoteNode(FUWorksPublishedFileID PublishedFileID);
}; // Size: 0x40

class UCoreAddItemToFavoritesNode : public UBlueprintAsyncActionBase
{
    FCoreAddItemToFavoritesNodeCompleted Completed;                                   // 0x0030 (size: 0x10)
    void AddItemToFavoritesDelegate(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bWasAddRequest);

    void OnRequestCompleted(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bWasAddRequest);
    class UCoreAddItemToFavoritesNode* AddItemToFavoritesNode(int32 AppID, FUWorksPublishedFileID PublishedFileID);
}; // Size: 0x40

class UCoreRemoveItemFromFavoritesNode : public UBlueprintAsyncActionBase
{
    FCoreRemoveItemFromFavoritesNodeCompleted Completed;                              // 0x0030 (size: 0x10)
    void RemoveItemFromFavoritesDelegate(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bWasAddRequest);

    class UCoreRemoveItemFromFavoritesNode* RemoveItemFromFavoritesNode(int32 AppID, FUWorksPublishedFileID PublishedFileID);
    void OnRequestCompleted(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bWasAddRequest);
}; // Size: 0x40

class UCoreSubscribeItemNode : public UBlueprintAsyncActionBase
{
    FCoreSubscribeItemNodeCompleted Completed;                                        // 0x0030 (size: 0x10)
    void SubscribeItemDelegate(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID);

    class UCoreSubscribeItemNode* SubscribeItemNode(FUWorksPublishedFileID PublishedFileID);
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID);
}; // Size: 0x40

class UCoreUnsubscribeItemNode : public UBlueprintAsyncActionBase
{
    FCoreUnsubscribeItemNodeCompleted Completed;                                      // 0x0030 (size: 0x10)
    void UnsubscribeItemDelegate(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID);

    class UCoreUnsubscribeItemNode* UnsubscribeItemNode(FUWorksPublishedFileID PublishedFileID);
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID);
}; // Size: 0x40

class UCoreStartPlaytimeTrackingNode : public UBlueprintAsyncActionBase
{
    FCoreStartPlaytimeTrackingNodeCompleted Completed;                                // 0x0030 (size: 0x10)
    void StartPlaytimeTrackingDelegate(bool bSuccessful, EUWorksResult Result);

    class UCoreStartPlaytimeTrackingNode* StartPlaytimeTrackingNode(TArray<FUWorksPublishedFileID> PublishedFileID);
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);
}; // Size: 0x40

class UCoreStopPlaytimeTrackingNode : public UBlueprintAsyncActionBase
{
    FCoreStopPlaytimeTrackingNodeCompleted Completed;                                 // 0x0030 (size: 0x10)
    void StopPlaytimeTrackingDelegate(bool bSuccessful, EUWorksResult Result);

    class UCoreStopPlaytimeTrackingNode* StopPlaytimeTrackingNode(TArray<FUWorksPublishedFileID> PublishedFileID);
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);
}; // Size: 0x40

class UCoreStopPlaytimeTrackingForAllItemsNode : public UBlueprintAsyncActionBase
{
    FCoreStopPlaytimeTrackingForAllItemsNodeCompleted Completed;                      // 0x0030 (size: 0x10)
    void StopPlaytimeTrackingForAllItemsDelegate(bool bSuccessful, EUWorksResult Result);

    class UCoreStopPlaytimeTrackingForAllItemsNode* StopPlaytimeTrackingForAllItemsNode();
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);
}; // Size: 0x40

class UCoreRequestEncryptedAppTicketNode : public UBlueprintAsyncActionBase
{
    FCoreRequestEncryptedAppTicketNodeCompleted Completed;                            // 0x0030 (size: 0x10)
    void RequestEncryptedAppTicketDelegate(bool bSuccessful, EUWorksResult Result);

    class UCoreRequestEncryptedAppTicketNode* RequestEncryptedAppTicketNode(TArray<uint8> Buffer);
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);
}; // Size: 0x40

class UCoreRequestStoreAuthURLNode : public UBlueprintAsyncActionBase
{
    FCoreRequestStoreAuthURLNodeCompleted Completed;                                  // 0x0030 (size: 0x10)
    void RequestStoreAuthURLDelegate(bool bSuccessful, FString URL);

    class UCoreRequestStoreAuthURLNode* RequestStoreAuthURLNode(FString URL);
    void OnRequestCompleted(bool bSuccessful, FString URL);
}; // Size: 0x40

class UCoreRequestUserStatsNode : public UBlueprintAsyncActionBase
{
    FCoreRequestUserStatsNodeCompleted Completed;                                     // 0x0030 (size: 0x10)
    void RequestUserStatsDelegate(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result, FUWorksSteamID SteamID);

    class UCoreRequestUserStatsNode* RequestUserStatsNode(FUWorksSteamID SteamID);
    void OnRequestCompleted(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result, FUWorksSteamID SteamID);
}; // Size: 0x40

class UCoreFindOrCreateLeaderboardNode : public UBlueprintAsyncActionBase
{
    FCoreFindOrCreateLeaderboardNodeCompleted Completed;                              // 0x0030 (size: 0x10)
    void FindOrCreateLeaderboardDelegate(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound);

    void OnRequestCompleted(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound);
    class UCoreFindOrCreateLeaderboardNode* FindOrCreateLeaderboardNode(FString LeaderboardName, EUWorksLeaderboardSortMethod LeaderboardSortMethod, EUWorksLeaderboardDisplayType LeaderboardDisplayType);
}; // Size: 0x40

class UCoreFindLeaderboardNode : public UBlueprintAsyncActionBase
{
    FCoreFindLeaderboardNodeCompleted Completed;                                      // 0x0030 (size: 0x10)
    void FindLeaderboardDelegate(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound);

    void OnRequestCompleted(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound);
    class UCoreFindLeaderboardNode* FindLeaderboardNode(FString LeaderboardName);
}; // Size: 0x40

class UCoreDownloadLeaderboardEntriesNode : public UBlueprintAsyncActionBase
{
    FCoreDownloadLeaderboardEntriesNodeCompleted Completed;                           // 0x0030 (size: 0x10)
    void DownloadLeaderboardEntriesDelegate(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, FUWorksSteamLeaderboardEntries SteamLeaderboardEntries, int32 EntryCount);

    void OnRequestCompleted(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, FUWorksSteamLeaderboardEntries SteamLeaderboardEntries, int32 EntryCount);
    class UCoreDownloadLeaderboardEntriesNode* DownloadLeaderboardEntriesNode(FUWorksSteamLeaderboard SteamLeaderboard, EUWorksLeaderboardDataRequest LeaderboardDataRequest, int32 RangeStart, int32 RangeEnd);
}; // Size: 0x40

class UCoreDownloadLeaderboardEntriesForUsersNode : public UBlueprintAsyncActionBase
{
    FCoreDownloadLeaderboardEntriesForUsersNodeCompleted Completed;                   // 0x0030 (size: 0x10)
    void DownloadLeaderboardEntriesForUsersDelegate(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, FUWorksSteamLeaderboardEntries SteamLeaderboardEntries, int32 EntryCount);

    void OnRequestCompleted(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, FUWorksSteamLeaderboardEntries SteamLeaderboardEntries, int32 EntryCount);
    class UCoreDownloadLeaderboardEntriesForUsersNode* DownloadLeaderboardEntriesForUsersNode(FUWorksSteamLeaderboard SteamLeaderboard, TArray<FUWorksSteamID> Users);
}; // Size: 0x40

class UCoreUploadLeaderboardScoreNode : public UBlueprintAsyncActionBase
{
    FCoreUploadLeaderboardScoreNodeCompleted Completed;                               // 0x0030 (size: 0x10)
    void UploadLeaderboardScoreDelegate(bool bSuccessful, bool bSuccess, FUWorksSteamLeaderboard SteamLeaderboard, int32 score, bool bScoreChanged, int32 GlobalRankNew, int32 GlobalRankPrevious);

    class UCoreUploadLeaderboardScoreNode* UploadLeaderboardScoreNode(FUWorksSteamLeaderboard SteamLeaderboard, EUWorksLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod, int32 score, TArray<int32> ScoreDetails);
    void OnRequestCompleted(bool bSuccessful, bool bSuccess, FUWorksSteamLeaderboard SteamLeaderboard, int32 score, bool bScoreChanged, int32 GlobalRankNew, int32 GlobalRankPrevious);
}; // Size: 0x40

class UCoreAttachLeaderboardUGCNode : public UBlueprintAsyncActionBase
{
    FCoreAttachLeaderboardUGCNodeCompleted Completed;                                 // 0x0030 (size: 0x10)
    void AttachLeaderboardUGCDelegate(bool bSuccessful, EUWorksResult Result, FUWorksSteamLeaderboard SteamLeaderboard);

    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamLeaderboard SteamLeaderboard);
    class UCoreAttachLeaderboardUGCNode* AttachLeaderboardUGCNode(FUWorksSteamLeaderboard SteamLeaderboard, FUWorksUGCHandle UGCHandle);
}; // Size: 0x40

class UCoreGetNumberOfCurrentPlayersNode : public UBlueprintAsyncActionBase
{
    FCoreGetNumberOfCurrentPlayersNodeCompleted Completed;                            // 0x0030 (size: 0x10)
    void GetNumberOfCurrentPlayersDelegate(bool bSuccessful, bool bSuccess, int32 Players);

    void OnRequestCompleted(bool bSuccessful, bool bSuccess, int32 Players);
    class UCoreGetNumberOfCurrentPlayersNode* GetNumberOfCurrentPlayersNode();
}; // Size: 0x40

class UCoreRequestGlobalAchievementPercentagesNode : public UBlueprintAsyncActionBase
{
    FCoreRequestGlobalAchievementPercentagesNodeCompleted Completed;                  // 0x0030 (size: 0x10)
    void RequestGlobalAchievementPercentagesDelegate(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result);

    class UCoreRequestGlobalAchievementPercentagesNode* RequestGlobalAchievementPercentagesNode();
    void OnRequestCompleted(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result);
}; // Size: 0x40

class UCoreRequestGlobalStatsNode : public UBlueprintAsyncActionBase
{
    FCoreRequestGlobalStatsNodeCompleted Completed;                                   // 0x0030 (size: 0x10)
    void RequestGlobalStatsDelegate(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result);

    class UCoreRequestGlobalStatsNode* RequestGlobalStatsNode(int32 HistoryDays);
    void OnRequestCompleted(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result);
}; // Size: 0x40

struct FUWorksSteamPipe
{
}; // Size: 0x4

struct FUWorksAnnexCoreAppList
{
}; // Size: 0x1

struct FUWorksAnnexCoreApps
{
}; // Size: 0x1

struct FUWorksAnnexCoreController
{
}; // Size: 0x1

struct FUWorksAnnexCoreFriends
{
}; // Size: 0x1

struct FUWorksAnnexCoreGameServer
{
}; // Size: 0x1

struct FUWorksAnnexCoreGameServerStats
{
}; // Size: 0x1

struct FUWorksAnnexCoreInventory
{
}; // Size: 0x1

struct FUWorksAnnexCoreMatchmaking
{
}; // Size: 0x1

struct FUWorksAnnexCoreMatchmakingServers
{
}; // Size: 0x1

struct FUWorksAnnexCoreMusic
{
}; // Size: 0x1

struct FUWorksAnnexCoreNetworking
{
}; // Size: 0x1

struct FUWorksAnnexCoreRemoteStorage
{
}; // Size: 0x1

struct FUWorksAnnexCoreScreenshots
{
}; // Size: 0x1

struct FUWorksAnnexCoreUGC
{
}; // Size: 0x1

struct FUWorksAnnexCoreUser
{
}; // Size: 0x1

struct FUWorksAnnexCoreUserStats
{
}; // Size: 0x1

struct FUWorksAnnexCoreUtils
{
}; // Size: 0x1

#endif
