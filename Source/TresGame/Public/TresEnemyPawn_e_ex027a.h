#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex027a.generated.h"

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex027a : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_KnockUpPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_KnockUpAdditionalGravity;
    
    ATresEnemyPawn_e_ex027a(const FObjectInitializer& ObjectInitializer);
};

