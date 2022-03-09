#ifndef UE4SS_SDK_BlockPreviewRenderActorIngamePreview_HPP
#define UE4SS_SDK_BlockPreviewRenderActorIngamePreview_HPP

class ABlockPreviewRenderActorIngamePreview_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)

    void DoStuff(class UTextureRenderTarget2D* TextureRenderTarget);
    void WriteToDisk();
    void Test();
    void SetBlockType(int32 ID);
    void OnSaveComplete(bool NewParam);
    void ExecuteUbergraph_BlockPreviewRenderActorIngamePreview(int32 EntryPoint);
}; // Size: 0x238

#endif
