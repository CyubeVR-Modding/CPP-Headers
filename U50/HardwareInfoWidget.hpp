#ifndef UE4SS_SDK_HardwareInfoWidget_HPP
#define UE4SS_SDK_HardwareInfoWidget_HPP

class UHardwareInfoWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UInfoData_C* InfoData_Benchmark;                                            // 0x0268 (size: 0x8)
    class UInfoData_C* InfoData_Cores;                                                // 0x0270 (size: 0x8)
    class UInfoData_C* InfoData_CPU;                                                  // 0x0278 (size: 0x8)
    class UInfoData_C* InfoData_Driver;                                               // 0x0280 (size: 0x8)
    class UInfoData_C* InfoData_FOVH;                                                 // 0x0288 (size: 0x8)
    class UInfoData_C* InfoData_FOVV;                                                 // 0x0290 (size: 0x8)
    class UInfoData_C* InfoData_GPU;                                                  // 0x0298 (size: 0x8)
    class UInfoData_C* InfoData_HMDName;                                              // 0x02A0 (size: 0x8)
    class UInfoData_C* InfoData_Hz;                                                   // 0x02A8 (size: 0x8)
    class UInfoData_C* InfoData_OS;                                                   // 0x02B0 (size: 0x8)
    class UInfoData_C* InfoData_PPD;                                                  // 0x02B8 (size: 0x8)
    class UInfoData_C* InfoData_RAM;                                                  // 0x02C0 (size: 0x8)
    class UInfoData_C* InfoData_Res;                                                  // 0x02C8 (size: 0x8)
    class UInfoData_C* InfoData_SteamVR;                                              // 0x02D0 (size: 0x8)
    class UInfoData_C* InfoData_VRAM;                                                 // 0x02D8 (size: 0x8)
    int32 FontSize;                                                                   // 0x02E0 (size: 0x4)
    FMargin TextPadding;                                                              // 0x02E4 (size: 0x10)

    void GetCPUName(FText& Name);
    void SetInfo();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HardwareInfoWidget(int32 EntryPoint);
}; // Size: 0x2F4

#endif
