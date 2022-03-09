#ifndef UE4SS_SDK_Party_HPP
#define UE4SS_SDK_Party_HPP

#include "Party_enums.hpp"

class UChatroom : public UObject
{
    FString CurrentChatRoomId;                                                        // 0x0028 (size: 0x10)
    int32 MaxChatRoomRetries;                                                         // 0x0038 (size: 0x4)
    int32 NumChatRoomRetries;                                                         // 0x003C (size: 0x4)

}; // Size: 0x58

class USocialManager : public UObject
{
    TArray<class USocialToolkit*> SocialToolkits;                                     // 0x0048 (size: 0x10)
    class USocialDebugTools* SocialDebugTools;                                        // 0x0058 (size: 0x8)

}; // Size: 0x1A0

class USocialParty : public UObject
{
    TSubclassOf<class APartyBeaconClient> ReservationBeaconClientClass;               // 0x0058 (size: 0x8)
    TSubclassOf<class ASpectatorBeaconClient> SpectatorBeaconClientClass;             // 0x0060 (size: 0x8)
    FUniqueNetIdRepl OwningLocalUserId;                                               // 0x0078 (size: 0x28)
    FUniqueNetIdRepl CurrentLeaderId;                                                 // 0x00A0 (size: 0x28)
    TMap<class FUniqueNetIdRepl, class UPartyMember*> PartyMembersById;               // 0x00C8 (size: 0x50)
    bool bEnableAutomaticPartyRejoin;                                                 // 0x0118 (size: 0x1)
    class APartyBeaconClient* ReservationBeaconClient;                                // 0x0190 (size: 0x8)
    class ASpectatorBeaconClient* SpectatorBeaconClient;                              // 0x01A0 (size: 0x8)

}; // Size: 0x2C0

class UPartyMember : public UObject
{
    class USocialUser* SocialUser;                                                    // 0x0068 (size: 0x8)

}; // Size: 0xF0

class USocialToolkit : public UObject
{
    class USocialUser* LocalUser;                                                     // 0x0068 (size: 0x8)
    TArray<class USocialUser*> AllUsers;                                              // 0x0070 (size: 0x10)
    class ULocalPlayer* LocalPlayerOwner;                                             // 0x00D0 (size: 0x8)
    class USocialChatManager* SocialChatManager;                                      // 0x00D8 (size: 0x8)

}; // Size: 0x1F8

class USocialChatManager : public UObject
{
    TMap<class TWeakObjectPtr<USocialUser>, class USocialPrivateMessageChannel*> DirectChannelsByTargetUser; // 0x0078 (size: 0x50)
    TMap<class FString, class USocialChatRoom*> ChatRoomsById;                        // 0x00C8 (size: 0x50)
    TMap<class FString, class USocialReadOnlyChatChannel*> ReadOnlyChannelsByDisplayName; // 0x0118 (size: 0x50)
    bool bEnableChatSlashCommands;                                                    // 0x0168 (size: 0x1)
    TMap<class FUniqueNetIdRepl, class USocialGroupChannel*> GroupChannels;           // 0x0170 (size: 0x50)

}; // Size: 0x220

class USocialChatChannel : public UObject
{
}; // Size: 0xE8

class USocialChatRoom : public USocialChatChannel
{
}; // Size: 0xF8

class USocialDebugTools : public UObject
{
}; // Size: 0x88

class USocialGroupChannel : public UObject
{
    class USocialUser* SocialUser;                                                    // 0x0028 (size: 0x8)
    FUniqueNetIdRepl GroupId;                                                         // 0x0030 (size: 0x28)
    FText DisplayName;                                                                // 0x0058 (size: 0x18)
    TArray<class USocialUser*> Members;                                               // 0x0070 (size: 0x10)

}; // Size: 0x90

class USocialPartyChatRoom : public USocialChatRoom
{
}; // Size: 0xF8

class USocialPrivateMessageChannel : public USocialChatChannel
{
    class USocialUser* TargetUser;                                                    // 0x00E8 (size: 0x8)

}; // Size: 0xF0

class USocialReadOnlyChatChannel : public USocialChatChannel
{
}; // Size: 0xE8

struct FSocialPlatformDescription
{
    FString SocialPlatformTypeName;                                                   // 0x0000 (size: 0x10)
    FString SocialPlatformName;                                                       // 0x0010 (size: 0x10)

}; // Size: 0x20

class USocialSettings : public UObject
{
    TArray<FName> OssNamesWithEnvironmentIdPrefix;                                    // 0x0028 (size: 0x10)
    int32 DefaultMaxPartySize;                                                        // 0x0038 (size: 0x4)
    bool bPreferPlatformInvites;                                                      // 0x003C (size: 0x1)
    bool bMustSendPrimaryInvites;                                                     // 0x003D (size: 0x1)
    bool bLeavePartyOnDisconnect;                                                     // 0x003E (size: 0x1)
    bool bSetDesiredPrivacyOnLocalPlayerBecomesLeader;                                // 0x003F (size: 0x1)
    float UserListAutoUpdateRate;                                                     // 0x0040 (size: 0x4)
    int32 MinNicknameLength;                                                          // 0x0044 (size: 0x4)
    int32 MaxNicknameLength;                                                          // 0x0048 (size: 0x4)
    TArray<FSocialPlatformDescription> SocialPlatformDescriptions;                    // 0x0050 (size: 0x10)

}; // Size: 0x60

class USocialUser : public UObject
{
}; // Size: 0x168

struct FOnlinePartyRepDataBase
{
}; // Size: 0x18

struct FUserPlatform
{
    FSocialPlatformDescription PlatformDescription;                                   // 0x0000 (size: 0x20)

}; // Size: 0x20

struct FPartyMemberRepData : public FOnlinePartyRepDataBase
{
    FUserPlatform Platform;                                                           // 0x0020 (size: 0x20)
    FUniqueNetIdRepl PlatformUniqueId;                                                // 0x0070 (size: 0x28)
    FString PlatformSessionId;                                                        // 0x00C8 (size: 0x10)
    ECrossplayPreference CrossplayPreference;                                         // 0x0108 (size: 0x1)

}; // Size: 0x140

struct FPartyPrivacySettings
{
    EPartyType PartyType;                                                             // 0x0000 (size: 0x1)
    EPartyInviteRestriction PartyInviteRestriction;                                   // 0x0001 (size: 0x1)
    bool bOnlyLeaderFriendsCanJoin;                                                   // 0x0002 (size: 0x1)

}; // Size: 0x3

struct FPartyPlatformSessionInfo
{
    FName OssName;                                                                    // 0x0000 (size: 0x8)
    FString SessionId;                                                                // 0x0008 (size: 0x10)
    FUniqueNetIdRepl OwnerPrimaryId;                                                  // 0x0018 (size: 0x28)

}; // Size: 0x40

struct FSocialChatChannelConfig
{
    class USocialUser* SocialUser;                                                    // 0x0000 (size: 0x8)
    TArray<class USocialChatChannel*> ListenChannels;                                 // 0x0018 (size: 0x10)

}; // Size: 0x40

struct FPartyRepData : public FOnlinePartyRepDataBase
{
    FPartyPrivacySettings PrivacySettings;                                            // 0x0020 (size: 0x3)
    TArray<FPartyPlatformSessionInfo> PlatformSessions;                               // 0x0058 (size: 0x10)

}; // Size: 0x80

#endif
