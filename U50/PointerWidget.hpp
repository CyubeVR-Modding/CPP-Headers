#ifndef UE4SS_SDK_PointerWidget_HPP
#define UE4SS_SDK_PointerWidget_HPP

class UPointerWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0268 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_PointerWidget(int32 EntryPoint);
}; // Size: 0x270

#endif
