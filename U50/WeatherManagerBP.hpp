#ifndef UE4SS_SDK_WeatherManagerBP_HPP
#define UE4SS_SDK_WeatherManagerBP_HPP

class AWeatherManagerBP_C : public AWeatherManager
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    class AUltra_Dynamic_Sky_BP_C* Sky;                                               // 0x0238 (size: 0x8)
    class AChunkManager* ChunkManager;                                                // 0x0240 (size: 0x8)
    class ABP_AttachedRain_C* SpawnedWeatherBP;                                       // 0x0248 (size: 0x8)
    class AWindDirectionalSource* WindSource;                                         // 0x0250 (size: 0x8)
    float SnowAmount;                                                                 // 0x0258 (size: 0x4)
    float SnowAmountTarget;                                                           // 0x025C (size: 0x4)
    float RainAmount;                                                                 // 0x0260 (size: 0x4)
    float RainAmountTarget;                                                           // 0x0264 (size: 0x4)
    float NotStartNextTill;                                                           // 0x0268 (size: 0x4)
    EWeather WaitingForWeather;                                                       // 0x026C (size: 0x1)
    EWeatherForceSetting RainForceState;                                              // 0x026D (size: 0x1)
    EWeatherForceSetting SnowForceState;                                              // 0x026E (size: 0x1)
    FTimerHandle NewWeatherTimerHandle;                                               // 0x0270 (size: 0x8)
    EWeather WeatherToSave;                                                           // 0x0278 (size: 0x1)
    float TimeWhenSpawnParticles;                                                     // 0x027C (size: 0x4)
    bool LoadedSomething;                                                             // 0x0280 (size: 0x1)
    bool Dev_ONLYREGULAR;                                                             // 0x0281 (size: 0x1)
    bool Benchmark;                                                                   // 0x0282 (size: 0x1)

    void GetWeatherState(FWeatherStateData& WeatherStateData);
    void LoadWeatherStateBP(float Cloud Density_target, float OverallIntensityTarget, float SaturationTarget, float LightTemperatureTarget, float SunLightWeatherMultiplierTarget, float WindStrengthTarget, float RainStrengthTarget, FLinearColor FogWeatherColorTarget, float Cloud Density, float Overall Intensity, float LightTemperature, FLinearColor FogWeatherColor, float RainStrength, float SunLightWeatherMultiplier, float WindStrength, float DelayTillParticles, float SnowAmount, float SnowAmountTarget, float RainAmount, float RainAmountTarget, EWeather Weather, float WindSpeed, float WindSpeedTarget, float TimeTillNewWeather);
    void SetForceState(EWeather Weather, EWeatherForceSetting NewForceState);
    void ForceNewWeather(EWeather NewWeather);
    void NewRandomWeather(bool Force);
    void StartSnow();
    void StartRain();
    void FadeSnowAmount();
    void ReceiveTick(float DeltaSeconds);
    void FadeRainAmount();
    void ReceiveBeginPlay();
    void SetNewWeather(EWeather NewWeather, bool Force);
    void StartRegular();
    void SpawnedNewWeather(class ABP_AttachedRain_C* SpawnedWeatherBP);
    void StartNewWeather(EWeather Weather, bool Force);
    void NewRandomWeatherEvent();
    void StartWeatherParticlesDelay(EWeather Weather, float Delay);
    void LoadWeatherState(FWeatherStateData WeatherStateData);
    void ExecuteUbergraph_WeatherManagerBP(int32 EntryPoint);
}; // Size: 0x283

#endif
