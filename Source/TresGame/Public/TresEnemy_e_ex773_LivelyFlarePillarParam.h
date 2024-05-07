#pragma once
#include "CoreMinimal.h"
#include "TresEnemy_e_ex773_LivelyFlarePillarParam.generated.h"

class AActor;
class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex773_LivelyFlarePillarParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectileBase* m_LivelyFlarePillar;
    
    TRESGAME_API FTresEnemy_e_ex773_LivelyFlarePillarParam();
};

