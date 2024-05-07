#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESQEXSEADAudioStartTimings.h"
#include "ESQEXSEADZeroOneProperties.h"
#include "SQEXSEADZeroOneSeComponent.generated.h"

class USQEXSEADAudioComponent;
class USoundBase;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SQEXSEAD_API USQEXSEADZeroOneSeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    USoundBase* SoundAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float FadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float FadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    USoundBase* OnStopSoundAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ESQEXSEADAudioStartTimings::Type> AudioStartTiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FName AttachPointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 bEnable_Slot0: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESQEXSEADZeroOneProperties::Type> PropertyType_Slot0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ZeroOneFadeTime_Slot0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ValiableValueThreshold_Slot0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 bEnable_Slot1: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESQEXSEADZeroOneProperties::Type> PropertyType_Slot1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ZeroOneFadeTime_Slot1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ValiableValueThreshold_Slot1;
    
private:
    UPROPERTY(Export, Transient)
    USQEXSEADAudioComponent* MyAudioComponent;
    
public:
    USQEXSEADZeroOneSeComponent();
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetZeroOneValue(int32 Slot, float Value, float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlaying();
    
};

