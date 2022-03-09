#ifndef UE4SS_SDK_CustomBlockPreviewWidget_HPP
#define UE4SS_SDK_CustomBlockPreviewWidget_HPP

class UCustomBlockPreviewWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Left;                                                               // 0x0268 (size: 0x8)
    class UImage* Right;                                                              // 0x0270 (size: 0x8)
    class UImage* Top;                                                                // 0x0278 (size: 0x8)

    void SetType(int32 ID);
    void Construct();
    void ExecuteUbergraph_CustomBlockPreviewWidget(int32 EntryPoint);
}; // Size: 0x280

#endif
