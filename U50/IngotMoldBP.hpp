#ifndef UE4SS_SDK_IngotMoldBP_HPP
#define UE4SS_SDK_IngotMoldBP_HPP

class AIngotMoldBP_C : public AMeshObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* Furnace_IngotMold_GameRes_Edit;                       // 0x02B0 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void CheckFurnace();
    void ExecuteUbergraph_IngotMoldBP(int32 EntryPoint);
}; // Size: 0x2B8

#endif
