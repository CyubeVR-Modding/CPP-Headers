#ifndef UE4SS_SDK_SHadowTestActorLEvel_HPP
#define UE4SS_SDK_SHadowTestActorLEvel_HPP

class ASHadowTestActorLEvel_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void PrintStuff();
    void ExecuteUbergraph_SHadowTestActorLEvel(int32 EntryPoint);
}; // Size: 0x230

#endif
