#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex039.generated.h"

class UParticleSystem;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex039 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_MzlParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NumAttck;
    
public:
    ATresEnemyPawn_e_ex039(const FObjectInitializer& ObjectInitializer);
};

