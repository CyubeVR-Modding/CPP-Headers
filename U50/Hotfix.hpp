#ifndef UE4SS_SDK_Hotfix_HPP
#define UE4SS_SDK_Hotfix_HPP

#include "Hotfix_enums.hpp"

class UOnlineHotfixManager : public UObject
{
    FString OssName;                                                                  // 0x01E0 (size: 0x10)
    FString HotfixManagerClassName;                                                   // 0x01F0 (size: 0x10)
    FString DebugPrefix;                                                              // 0x0200 (size: 0x10)
    TArray<class UObject*> AssetsHotfixedFromIniFiles;                                // 0x0210 (size: 0x10)

    void StartHotfixProcess();
}; // Size: 0x220

class UUpdateManager : public UObject
{
    float HotfixCheckCompleteDelay;                                                   // 0x0088 (size: 0x4)
    float UpdateCheckCompleteDelay;                                                   // 0x008C (size: 0x4)
    float HotfixAvailabilityCheckCompleteDelay;                                       // 0x0090 (size: 0x4)
    float UpdateCheckAvailabilityCompleteDelay;                                       // 0x0094 (size: 0x4)
    int32 AppSuspendedUpdateCheckTimeSeconds;                                         // 0x009C (size: 0x4)
    bool bPlatformEnvironmentDetected;                                                // 0x00A8 (size: 0x1)
    bool bInitialUpdateFinished;                                                      // 0x00A9 (size: 0x1)
    bool bCheckHotfixAvailabilityOnly;                                                // 0x00AA (size: 0x1)
    EUpdateState CurrentUpdateState;                                                  // 0x00AB (size: 0x1)
    int32 WorstNumFilesPendingLoadViewed;                                             // 0x00AC (size: 0x4)
    EHotfixResult LastHotfixResult;                                                   // 0x00B4 (size: 0x1)
    FDateTime LastUpdateCheck;                                                        // 0x00E0 (size: 0x10)
    EUpdateCompletionStatus LastCompletionResult;                                     // 0x00F0 (size: 0x2)
    class UEnum* UpdateStateEnum;                                                     // 0x0108 (size: 0x8)
    class UEnum* UpdateCompletionEnum;                                                // 0x0110 (size: 0x8)

}; // Size: 0x118

#endif
