#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresNpcPawnBase.h"
#include "TresNpcPawn_n_he201.generated.h"

class ATresAccompanyPawnBase;

UCLASS(Blueprintable)
class ATresNpcPawn_n_he201 : public ATresNpcPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresAccompanyPawnBase> m_FRPowerStrikeBP;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fIntervalTime;
    
public:
    ATresNpcPawn_n_he201(const FObjectInitializer& ObjectInitializer);
};

