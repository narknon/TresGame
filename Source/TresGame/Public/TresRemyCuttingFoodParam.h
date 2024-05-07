#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RemyCuttingFoodType.h"
#include "TresRemyCuttingFoodParam.generated.h"

class ATresRemyPawnBase;
class AStaticMeshActor;
class UParticleSystem;
class UCurveVector;

USTRUCT(BlueprintType)
struct FTresRemyCuttingFoodParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    RemyCuttingFoodType FoodType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresRemyPawnBase> FoodPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AStaticMeshActor> FoodMassStaticMeshActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FoodSliceBending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FoodSliceJumpWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FoodSliceJumpWaitTimeLagRangeStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FoodSliceJumpWaitTimeLagRangeEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FoodSliceJumpSpeedCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* FoodClusterParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* FoodClusterParticleCurveVector;
    
    TRESGAME_API FTresRemyCuttingFoodParam();
};

