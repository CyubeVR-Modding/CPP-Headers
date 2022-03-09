#ifndef UE4SS_SDK_MonitorLizardC_HPP
#define UE4SS_SDK_MonitorLizardC_HPP

class AMonitorLizardC_C : public ADeerC_C
{
    class USkeletalMeshComponent* Tongue;                                             // 0x06E0 (size: 0x8)
    float Scale;                                                                      // 0x06E8 (size: 0x4)
    FVector FinalScale;                                                               // 0x06EC (size: 0xC)
    bool K2Node_Event_Enabled;                                                        // 0x06F8 (size: 0x1)
    FVector K2Node_Event_Location;                                                    // 0x06FC (size: 0xC)
    FVector K2Node_Event_Impulse;                                                     // 0x0708 (size: 0xC)
    FName K2Node_Event_BoneName;                                                      // 0x0714 (size: 0x8)

}; // Size: 0x720

#endif
