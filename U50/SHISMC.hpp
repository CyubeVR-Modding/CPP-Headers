#ifndef UE4SS_SDK_SHISMC_HPP
#define UE4SS_SDK_SHISMC_HPP

class USHISMC_C : public USceneComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0200 (size: 0x8)
    class UStaticMesh* Mesh;                                                          // 0x0208 (size: 0x8)
    int32 InstanceID;                                                                 // 0x0210 (size: 0x4)

    void SetVisibleState(bool Visible);
    void ExecuteUbergraph_SHISMC(int32 EntryPoint);
}; // Size: 0x214

#endif
