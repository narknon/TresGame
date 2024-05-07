#pragma once
#include "CoreMinimal.h"
#include "ETresSoundModes.h"
#include "UObject/Object.h"
#include "Engine/LatentActionManager.h"
#include "ETresWorldStaticBGMTypes.h"
#include "ETresCategoryVolumeLayers.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringAssetReference -FallbackName=StringAssetReference
#include "TresSoundStatics.generated.h"

class USoundBase;
class UAudioComponent;
class USoundConcurrency;
class UTresFieldVoice;

UCLASS(Abstract, Blueprintable, NotPlaceable)
class UTresSoundStatics : public UObject {
    GENERATED_BODY()
public:
    UTresSoundStatics();
    UFUNCTION(BlueprintCallable)
    static void TresWaitForEndOfFieldVoice(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static UAudioComponent* TresSpawnSound2D_BP(const UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable)
    static void TresSoundMode_Start(TEnumAsByte<ETresSoundModes::Type> mode);
    
    UFUNCTION(BlueprintCallable)
    static void TresSoundMode_Reset();
    
    UFUNCTION(BlueprintCallable)
    static void TresSoundMode_End(TEnumAsByte<ETresSoundModes::Type> mode);
    
    UFUNCTION(BlueprintCallable)
    static void TresSound_StopRTSounds();
    
    UFUNCTION(BlueprintCallable)
    static void TresSound_SetEnableAudioVolumeUpdate(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void TresSound_SetBGVolume(TEnumAsByte<ETresCategoryVolumeLayers::Type> Layer, float Volume, float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    static int32 TresSound_GetAudiobleNumSoundsAtLocation(UObject* WorldContextObject, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    static void TresPlaySound2D_BP(const UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings);
    
    UFUNCTION(BlueprintCallable)
    static void TresPlayFieldVoice(UObject* WorldContextObject, UTresFieldVoice* Asset, bool CanSkip);
    
    UFUNCTION(BlueprintCallable)
    static FStringAssetReference TresGetWorldStaticBGMAssetReference(UObject* WorldContextObject, TEnumAsByte<ETresWorldStaticBGMTypes::Type> Type);
    
    UFUNCTION(BlueprintCallable)
    static USoundBase* TresGetWorldStaticBGMAsset(UObject* WorldContextObject, TEnumAsByte<ETresWorldStaticBGMTypes::Type> Type);
    
};

