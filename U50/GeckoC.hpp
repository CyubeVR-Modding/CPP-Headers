#ifndef UE4SS_SDK_GeckoC_HPP
#define UE4SS_SDK_GeckoC_HPP

class AGeckoC_C : public ARabbitC_C
{
    bool HasGlow;                                                                     // 0x1600 (size: 0x1)
    bool IsGrabbed;                                                                   // 0x1601 (size: 0x1)
    hand GrabbedByHand;                                                               // 0x1602 (size: 0x1)
    FTimerHandle VibrationTimer;                                                      // 0x1608 (size: 0x8)
    ESteamVRHand Temp_byte_Variable;                                                  // 0x1610 (size: 0x1)
    float CallFunc_BreakColor_R;                                                      // 0x1614 (size: 0x4)
    float CallFunc_BreakColor_G;                                                      // 0x1618 (size: 0x4)
    float CallFunc_BreakColor_B;                                                      // 0x161C (size: 0x4)
    float CallFunc_BreakColor_A;                                                      // 0x1620 (size: 0x4)
    float CallFunc_BreakColor_R_1;                                                    // 0x1624 (size: 0x4)
    float CallFunc_BreakColor_G_1;                                                    // 0x1628 (size: 0x4)
    float CallFunc_BreakColor_B_1;                                                    // 0x162C (size: 0x4)
    float CallFunc_BreakColor_A_1;                                                    // 0x1630 (size: 0x4)
    ESteamVRHand Temp_byte_Variable_1;                                                // 0x1634 (size: 0x1)
    hand Temp_byte_Variable_2;                                                        // 0x1635 (size: 0x1)
    ESteamVRHand K2Node_Select_Default;                                               // 0x1636 (size: 0x1)

    void SetRandomColor();
    void PlayGrabbedForceFeedback();
    void GenerateRandomColor();
}; // Size: 0x1640

#endif
