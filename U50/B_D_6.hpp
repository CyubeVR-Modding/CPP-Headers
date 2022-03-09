#ifndef UE4SS_SDK_B_D_6_HPP
#define UE4SS_SDK_B_D_6_HPP

class AB_D_6_C : public ADecalActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    float Timer;                                                                      // 0x0230 (size: 0x4)
    float Max_time;                                                                   // 0x0234 (size: 0x4)
    float Speed;                                                                      // 0x0238 (size: 0x4)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_B_D_6(int32 EntryPoint);
}; // Size: 0x23C

#endif
