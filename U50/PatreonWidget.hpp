#ifndef UE4SS_SDK_PatreonWidget_HPP
#define UE4SS_SDK_PatreonWidget_HPP

class UPatreonWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UScrollBox* ScrollBox_92;                                                   // 0x0268 (size: 0x8)
    FString PatreonNames;                                                             // 0x0270 (size: 0x10)
    FString RemainingString;                                                          // 0x0280 (size: 0x10)
    bool Continue;                                                                    // 0x0290 (size: 0x1)
    FString requestID;                                                                // 0x0298 (size: 0x10)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Update();
    void OnRequestComplete(const TArray<FString>& Data, const int32 statusCode, const TArray<uint8>& byteData, const FString requestID);
    void ExecuteUbergraph_PatreonWidget(int32 EntryPoint);
}; // Size: 0x2A8

#endif
