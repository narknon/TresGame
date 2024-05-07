#pragma once
#include "CoreMinimal.h"
#include "TresEnemyBigDealContractionSpeedParam_e_ex356.h"
#include "TresEnemyBigDealCardRotationEndParam_e_ex356.h"
#include "TresEnemyBigDealOneStepParam_e_ex356.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyBigDealOneStepParam_e_ex356 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NotCardDesignNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyBigDealContractionSpeedParam_e_ex356> ContractionSpeedParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CardRevolveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlainCardDamageAfterCardRevolveStopTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CardRotationEndIntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyBigDealCardRotationEndParam_e_ex356> CardRotationEndParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> AttackStartTimeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CardShuffleTime;
    
    TRESGAME_API FTresEnemyBigDealOneStepParam_e_ex356();
};

