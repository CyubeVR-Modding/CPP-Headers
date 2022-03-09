#ifndef UE4SS_SDK_PatreonNameWidget_HPP
#define UE4SS_SDK_PatreonNameWidget_HPP

class UPatreonNameWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* TextBlock_26;                                                   // 0x0268 (size: 0x8)
    FString Name;                                                                     // 0x0270 (size: 0x10)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_PatreonNameWidget(int32 EntryPoint);
}; // Size: 0x280

#endif
