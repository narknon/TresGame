#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyHideAndSeekLocation_e_ex356.h"
#include "TresEnemyHideAndSeekTurnParam_e_ex356.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyHideAndSeekTurnParam_e_ex356 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEnemyHideAndSeekLocation_e_ex356::Type> TurnLocationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialTurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnDecelerationStartDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllPlaneCardDestroySubTurnSpeed;
    
    TRESGAME_API FTresEnemyHideAndSeekTurnParam_e_ex356();
};

