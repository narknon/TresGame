#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SQEXSEADPhysObjSeComponentSetting.generated.h"

class USoundBase;

UCLASS()
class SQEXSEAD_API USQEXSEADPhysObjSeComponentSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    USoundBase* HitSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 bEnableSwithHitSE: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    USoundBase* VelocitySE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float HitImpulseThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float HitDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float VelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float VelocityAudioFadeOutTime;
    
    USQEXSEADPhysObjSeComponentSetting();
};

