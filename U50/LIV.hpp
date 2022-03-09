#ifndef UE4SS_SDK_LIV_HPP
#define UE4SS_SDK_LIV_HPP

class ULivBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

    float GetRenderTargetMaxPixelAlphaValue(class UObject* WorldContext, class UTextureRenderTarget2D* TextureRenderTarget);
    float GetRenderTargetMaxDepthValue(class UObject* WorldContext, class UTextureRenderTarget2D* TextureRenderTarget);
    float GetMaxPixelAlphaValue(const class UObject* WorldContext, class UTexture2D* Texture);
}; // Size: 0x28

class ULivCaptureBase : public USceneCaptureComponent2D
{
    FLivCaptureBaseOnLivCaptureActivated OnLivCaptureActivated;                       // 0x08A8 (size: 0x10)
    void LivActivationDelegate();
    FLivCaptureBaseOnLivCaptureDeactivated OnLivCaptureDeactivated;                   // 0x08B8 (size: 0x10)
    void LivActivationDelegate();

    bool IsLivCapturing();
    FMatrix GetClipPlaneTransform();
    FVector GetClipPlaneLocation();
    FVector GetClipPlaneForward();
    FRotator GetCameraRotation();
    FVector GetCameraLocation();
}; // Size: 0x8F0

class ULivCaptureGlobalClipPlaneNoPostProcess : public ULivCaptureBase
{
    class UTextureRenderTarget2D* BackgroundRenderTarget;                             // 0x08F0 (size: 0x8)
    class UTextureRenderTarget2D* ForegroundRenderTarget;                             // 0x08F8 (size: 0x8)
    class UTextureRenderTarget2D* ForegroundMaskedRenderTarget;                       // 0x0900 (size: 0x8)

}; // Size: 0x910

class ULivCaptureGlobalClipPlanePostProcess : public ULivCaptureBase
{
    class USceneCaptureComponent2D* SceneCaptureComponent;                            // 0x08F0 (size: 0x8)
    class UTextureRenderTarget2D* PostProcessedBackgroundRenderTarget;                // 0x08F8 (size: 0x8)
    class UTextureRenderTarget2D* PostProcessedForegroundRenderTarget;                // 0x0900 (size: 0x8)
    class UTextureRenderTarget2D* ForegroundInverseOpacityRenderTarget;               // 0x0908 (size: 0x8)
    class UTextureRenderTarget2D* ForegroundOutputRenderTarget;                       // 0x0910 (size: 0x8)

}; // Size: 0x920

class ULivCaptureMeshClipPlaneNoPostProcess : public ULivCaptureBase
{
    class ULivClipPlane* CameraClipPlane;                                             // 0x08F0 (size: 0x8)
    class ULivClipPlane* FloorClipPlane;                                              // 0x08F8 (size: 0x8)
    class UTextureRenderTarget2D* BackgroundRenderTarget;                             // 0x0900 (size: 0x8)
    class UTextureRenderTarget2D* ForegroundRenderTarget;                             // 0x0908 (size: 0x8)
    class UTextureRenderTarget2D* BackgroundOutputRenderTarget;                       // 0x0910 (size: 0x8)
    class UTextureRenderTarget2D* ForegroundOutputRenderTarget;                       // 0x0918 (size: 0x8)

}; // Size: 0x920

class ULivCaptureMeshClipPlanePostProcess : public ULivCaptureBase
{
    class USceneCaptureComponent2D* SceneCaptureComponent;                            // 0x08F0 (size: 0x8)
    class ULivClipPlane* CameraClipPlane;                                             // 0x08F8 (size: 0x8)
    class ULivClipPlane* FloorClipPlane;                                              // 0x0900 (size: 0x8)
    class UTextureRenderTarget2D* PostProcessedSceneRenderTarget;                     // 0x0908 (size: 0x8)
    class UTextureRenderTarget2D* BackgroundDepthRenderTarget;                        // 0x0910 (size: 0x8)
    class UTextureRenderTarget2D* ForegroundDepthRenderTarget;                        // 0x0918 (size: 0x8)
    class UTextureRenderTarget2D* BackgroundOutputRenderTarget;                       // 0x0920 (size: 0x8)
    class UTextureRenderTarget2D* ForegroundOutputRenderTarget;                       // 0x0928 (size: 0x8)

}; // Size: 0x930

class ULivClipPlane : public UStaticMeshComponent
{
    class UMaterialInterface* ClipPlaneMaterial;                                      // 0x04D0 (size: 0x8)
    class UMaterialInterface* ClipPlaneDebugMaterial;                                 // 0x04D8 (size: 0x8)

    void SetDebugEnabled(bool bDebugEnabled);
    bool GetDebugEnabled();
}; // Size: 0x4E0

struct FLivCaptureContext
{
    TArray<TWeakObjectPtr<UPrimitiveComponent>> HiddenComponents;                     // 0x0000 (size: 0x10)
    TArray<TWeakObjectPtr<AActor>> HiddenActors;                                      // 0x0010 (size: 0x10)

}; // Size: 0x20

class ULivLocalPlayerSubsystem : public ULocalPlayerSubsystem
{
    FLivLocalPlayerSubsystemOnCaptureActivated OnCaptureActivated;                    // 0x0030 (size: 0x10)
    void LivLocalPlayerActivationDelegate();
    FLivLocalPlayerSubsystemOnCaptureDeactivated OnCaptureDeactivated;                // 0x0040 (size: 0x10)
    void LivLocalPlayerActivationDelegate();
    FLivCaptureContext CaptureContext;                                                // 0x0050 (size: 0x20)

    void ShowComponent(class UPrimitiveComponent* InComponent);
    void ShowActor(class AActor* InActor);
    void ResetCapture();
    bool IsCaptureActive();
    void HideComponent(class UPrimitiveComponent* InComponent);
    void HideActor(class AActor* InActor);
    FTransform GetTrackingOriginTransform();
    class ULocalPlayer* GetLocalPlayerBP();
    class ULivWorldSubsystem* GetLivWorldSubsystem();
    TSubclassOf<class ULivCaptureBase> GetCaptureComponentClass();
    void ClearHiddenComponents();
    void ClearHiddenActors();
}; // Size: 0x98

class ULivPluginSettings : public UObject
{
    TSubclassOf<class ULivCaptureBase> CaptureMethod;                                 // 0x0028 (size: 0x8)
    FPostProcessSettings PostProcessSettings;                                         // 0x0030 (size: 0x550)

}; // Size: 0x580

class ALivTestActor : public AActor
{
}; // Size: 0x220

class ULivWorldSubsystem : public UWorldSubsystem
{
    class USceneComponent* CameraRoot;                                                // 0x0030 (size: 0x8)
    class ULivCaptureBase* CaptureComponent;                                          // 0x0038 (size: 0x8)

    FTransform GetTrackingOriginTransform();
    TSubclassOf<class ULivCaptureBase> GetCaptureComponentClass();
    class ULivCaptureBase* GetCaptureComponent();
    class USceneComponent* GetCameraRoot();
}; // Size: 0x40

struct FLivIdentifier
{
    FString EngineName;                                                               // 0x0000 (size: 0x10)
    FString EngineVersion;                                                            // 0x0010 (size: 0x10)
    FString ClientVersion;                                                            // 0x0020 (size: 0x10)
    FString NativeClientVersion;                                                      // 0x0030 (size: 0x10)

}; // Size: 0x40

#endif
