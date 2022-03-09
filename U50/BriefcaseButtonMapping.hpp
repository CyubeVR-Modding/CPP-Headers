#ifndef UE4SS_SDK_BriefcaseButtonMapping_HPP
#define UE4SS_SDK_BriefcaseButtonMapping_HPP

class UBriefcaseButtonMapping_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_82;                                                           // 0x0268 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_BriefcaseButtonMapping(int32 EntryPoint);
}; // Size: 0x270

#endif
