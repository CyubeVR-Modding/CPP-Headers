#ifndef UE4SS_SDK_CustomBlockPreviewWidgetRenderPreviewIngame_HPP
#define UE4SS_SDK_CustomBlockPreviewWidgetRenderPreviewIngame_HPP

class UCustomBlockPreviewWidgetRenderPreviewIngame_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_AnimatedLayer;                                                // 0x0268 (size: 0x8)
    class UImage* Left;                                                               // 0x0270 (size: 0x8)
    class UImage* Right;                                                              // 0x0278 (size: 0x8)
    class UImage* Top;                                                                // 0x0280 (size: 0x8)

    void SetType(int32 ID);
    void Construct();
    void ExecuteUbergraph_CustomBlockPreviewWidgetRenderPreviewIngame(int32 EntryPoint);
}; // Size: 0x288

#endif
