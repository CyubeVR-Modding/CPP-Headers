#ifndef UE4SS_SDK_Qos_HPP
#define UE4SS_SDK_Qos_HPP

#include "Qos_enums.hpp"

class AQosBeaconClient : public AOnlineBeaconClient
{

    void ServerQosRequest(FString InSessionId);
    void ClientQosResponse(EQosResponseType Response);
}; // Size: 0x2E8

class AQosBeaconHost : public AOnlineBeaconHostObject
{
}; // Size: 0x258

struct FQosPingServerInfo
{
    FString Address;                                                                  // 0x0000 (size: 0x10)
    int32 Port;                                                                       // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FQosDatacenterInfo
{
    FString ID;                                                                       // 0x0000 (size: 0x10)
    FString RegionId;                                                                 // 0x0010 (size: 0x10)
    bool bEnabled;                                                                    // 0x0020 (size: 0x1)
    TArray<FQosPingServerInfo> Servers;                                               // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FDatacenterQosInstance
{
    FQosDatacenterInfo Definition;                                                    // 0x0000 (size: 0x38)
    EQosDatacenterResult Result;                                                      // 0x0038 (size: 0x1)
    int32 AvgPingMs;                                                                  // 0x003C (size: 0x4)
    TArray<int32> PingResults;                                                        // 0x0040 (size: 0x10)
    FDateTime LastCheckTimestamp;                                                     // 0x0058 (size: 0x8)
    bool bUsable;                                                                     // 0x0060 (size: 0x1)

}; // Size: 0x68

class UQosEvaluator : public UObject
{
    bool bInProgress;                                                                 // 0x0048 (size: 0x1)
    bool bCancelOperation;                                                            // 0x0049 (size: 0x1)
    TArray<FDatacenterQosInstance> Datacenters;                                       // 0x0050 (size: 0x10)

}; // Size: 0x80

struct FQosRegionInfo
{
    FText DisplayName;                                                                // 0x0000 (size: 0x18)
    FString RegionId;                                                                 // 0x0018 (size: 0x10)
    bool bEnabled;                                                                    // 0x0028 (size: 0x1)
    bool bVisible;                                                                    // 0x0029 (size: 0x1)
    bool bAutoAssignable;                                                             // 0x002A (size: 0x1)

}; // Size: 0x30

struct FRegionQosInstance
{
    FQosRegionInfo Definition;                                                        // 0x0000 (size: 0x30)
    TArray<FDatacenterQosInstance> DatacenterOptions;                                 // 0x0030 (size: 0x10)

}; // Size: 0x40

class UQosRegionManager : public UObject
{
    int32 NumTestsPerRegion;                                                          // 0x0028 (size: 0x4)
    float PingTimeout;                                                                // 0x002C (size: 0x4)
    TArray<FQosRegionInfo> RegionDefinitions;                                         // 0x0030 (size: 0x10)
    TArray<FQosDatacenterInfo> DatacenterDefinitions;                                 // 0x0040 (size: 0x10)
    FDateTime LastCheckTimestamp;                                                     // 0x0050 (size: 0x8)
    class UQosEvaluator* Evaluator;                                                   // 0x0058 (size: 0x8)
    EQosCompletionResult QosEvalResult;                                               // 0x0060 (size: 0x1)
    TArray<FRegionQosInstance> RegionOptions;                                         // 0x0068 (size: 0x10)
    FString ForceRegionId;                                                            // 0x0078 (size: 0x10)
    bool bRegionForcedViaCommandline;                                                 // 0x0088 (size: 0x1)
    FString SelectedRegionId;                                                         // 0x0090 (size: 0x10)

}; // Size: 0xC0

#endif
