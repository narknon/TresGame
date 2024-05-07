#pragma once
#include "CoreMinimal.h"
#include "TresEnemyBigDealMoveParam_e_ex356.h"
#include "TresEnemyBigDealAttackParam_e_ex356.h"
#include "TresEnemyBigDealOneStepParam_e_ex356.h"
#include "TresEnemyBigDealActionParam_e_ex356.h"
#include "TresEnemyBigDealParamEx_e_ex356.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyBigDealParamEx_e_ex356 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FailedDamageAttackDataIDName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CenterLocationCheckPlayerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstScondEndExplodeIntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEnemyBigDealMoveParam_e_ex356 MoveParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEnemyBigDealAttackParam_e_ex356 AttackParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEnemyBigDealOneStepParam_e_ex356 FirstOneStepParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEnemyBigDealOneStepParam_e_ex356 SecondOneStepParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEnemyBigDealOneStepParam_e_ex356 LastOneStepParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastContractionStartDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyBigDealActionParam_e_ex356> LastActionParamList;
    
    TRESGAME_API FTresEnemyBigDealParamEx_e_ex356();
};

