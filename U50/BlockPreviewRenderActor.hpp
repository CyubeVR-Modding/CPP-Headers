#ifndef UE4SS_SDK_BlockPreviewRenderActor_HPP
#define UE4SS_SDK_BlockPreviewRenderActor_HPP

class ABlockPreviewRenderActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)

    void WriteToDisk();
    void OnSaveComplete(bool NewParam);
    void SetBlockType(int32 ID);
    void Test();
    void ExecuteUbergraph_BlockPreviewRenderActor(int32 EntryPoint);
}; // Size: 0x238

#endif
