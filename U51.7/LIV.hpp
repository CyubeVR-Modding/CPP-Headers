#ifndef UE4SS_SDK_LIV_HPP
#define UE4SS_SDK_LIV_HPP

class ULivBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

    float GetRenderTargetMaxPixelAlphaValue(class UObject* WorldContext, class UTextureRenderTarget2D* TextureRenderTarget);
    float GetRenderTargetMaxDepthValue(class UObject* WorldContext, class UTextureRenderTarget2D* TextureRenderTarget);
    float GetMaxPixelAlphaValue(const class UObject* WorldContext, class UTexture2D* Texture);
};

class ULivCaptureBase : public USceneCaptureComponent2D
{
    FLivCaptureBaseOnLivCaptureActivated OnLivCaptureActivated;
    void LivActivationDelegate();
    FLivCaptureBaseOnLivCaptureDeactivated OnLivCaptureDeactivated;
    void LivActivationDelegate();

    bool IsLivCapturing();
    FMatrix GetClipPlaneTransform();
    FVector GetClipPlaneLocation();
    FVector GetClipPlaneForward();
    FRotator GetCameraRotation();
    FVector GetCameraLocation();
};

class ULivCaptureGlobalClipPlaneNoPostProcess : public ULivCaptureBase
{
    class UTextureRenderTarget2D* BackgroundRenderTarget;
    class UTextureRenderTarget2D* ForegroundRenderTarget;
    class UTextureRenderTarget2D* ForegroundMaskedRenderTarget;

};

class ULivCaptureGlobalClipPlanePostProcess : public ULivCaptureBase
{
    class USceneCaptureComponent2D* SceneCaptureComponent;
    class UTextureRenderTarget2D* PostProcessedBackgroundRenderTarget;
    class UTextureRenderTarget2D* PostProcessedForegroundRenderTarget;
    class UTextureRenderTarget2D* ForegroundInverseOpacityRenderTarget;
    class UTextureRenderTarget2D* ForegroundOutputRenderTarget;

};

class ULivCaptureMeshClipPlaneNoPostProcess : public ULivCaptureBase
{
    class ULivClipPlane* CameraClipPlane;
    class ULivClipPlane* FloorClipPlane;
    class UTextureRenderTarget2D* BackgroundRenderTarget;
    class UTextureRenderTarget2D* ForegroundRenderTarget;
    class UTextureRenderTarget2D* BackgroundOutputRenderTarget;
    class UTextureRenderTarget2D* ForegroundOutputRenderTarget;

};

class ULivCaptureMeshClipPlanePostProcess : public ULivCaptureBase
{
    class USceneCaptureComponent2D* SceneCaptureComponent;
    class ULivClipPlane* CameraClipPlane;
    class ULivClipPlane* FloorClipPlane;
    class UTextureRenderTarget2D* PostProcessedSceneRenderTarget;
    class UTextureRenderTarget2D* BackgroundDepthRenderTarget;
    class UTextureRenderTarget2D* ForegroundDepthRenderTarget;
    class UTextureRenderTarget2D* BackgroundOutputRenderTarget;
    class UTextureRenderTarget2D* ForegroundOutputRenderTarget;

};

class ULivClipPlane : public UStaticMeshComponent
{
    class UMaterialInterface* ClipPlaneMaterial;
    class UMaterialInterface* ClipPlaneDebugMaterial;

    void SetDebugEnabled(bool bDebugEnabled);
    bool GetDebugEnabled();
};

struct FLivCaptureContext
{
    TArray<TWeakObjectPtr<UPrimitiveComponent>> HiddenComponents;
    TArray<TWeakObjectPtr<AActor>> HiddenActors;

};

class ULivLocalPlayerSubsystem : public ULocalPlayerSubsystem
{
    FLivLocalPlayerSubsystemOnCaptureActivated OnCaptureActivated;
    void LivLocalPlayerActivationDelegate();
    FLivLocalPlayerSubsystemOnCaptureDeactivated OnCaptureDeactivated;
    void LivLocalPlayerActivationDelegate();
    FLivCaptureContext CaptureContext;

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
};

class ULivPluginSettings : public UObject
{
    TSubclassOf<class ULivCaptureBase> CaptureMethod;
    FPostProcessSettings PostProcessSettings;

};

class ALivTestActor : public AActor
{
};

class ULivWorldSubsystem : public UWorldSubsystem
{
    class USceneComponent* CameraRoot;
    class ULivCaptureBase* CaptureComponent;

    FTransform GetTrackingOriginTransform();
    TSubclassOf<class ULivCaptureBase> GetCaptureComponentClass();
    class ULivCaptureBase* GetCaptureComponent();
    class USceneComponent* GetCameraRoot();
};

struct FLivIdentifier
{
    FString EngineName;
    FString EngineVersion;
    FString ClientVersion;
    FString NativeClientVersion;

};

#endif
