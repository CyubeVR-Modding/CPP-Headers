#ifndef UE4SS_SDK_StatsSaveGame_HPP
#define UE4SS_SDK_StatsSaveGame_HPP

class UStatsSaveGame_C : public USaveGame
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0028 (size: 0x8)
    int32 BlocksPlaced;                                                               // 0x0030 (size: 0x4)
    int32 BlocksMined;                                                                // 0x0034 (size: 0x4)
    int32 BlocksCrafted;                                                              // 0x0038 (size: 0x4)
    int32 BlocksMined10Min;                                                           // 0x003C (size: 0x4)
    int64 Validity;                                                                   // 0x0040 (size: 0x8)
    int32 PlayerId;                                                                   // 0x0048 (size: 0x4)

    void CalculateValidity(int64& Validity);
    void SetData(int32 BlocksPlaced, int32 BlocksMined, int32 BlocksCrafted, int32 BlocksMined10Min, class APlayerState* PlayerState);
    void CheckValidity(class APlayerState* PlayerState);
    void ExecuteUbergraph_StatsSaveGame(int32 EntryPoint);
}; // Size: 0x4C

#endif
