#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresPoppingHolyProjectileOverrideParameters.generated.h"

USTRUCT(BlueprintType)
struct FTresPoppingHolyProjectileOverrideParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRisingThresholdHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGravityScaleWhenFalling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vBrakingVelocityScaleWhenFallingStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fInitialSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxSpeed;
    
    TRESGAME_API FTresPoppingHolyProjectileOverrideParameters();
};

