#ifndef UE4SS_SDK_ModLoadBP_HPP
#define UE4SS_SDK_ModLoadBP_HPP

class AModLoadBP_C : public AModLoad
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    FString PakFilename;
    FString PakFilename2;
    FString ModActorToLoad;

    void ReceiveBeginPlay();
    void MountPak(FString Filename, FString ModName);
    void SpawnModActor(FString Filename);
    void ExecuteUbergraph_ModLoadBP(int32 EntryPoint);
};

#endif
