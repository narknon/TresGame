#pragma once
#include "CoreMinimal.h"
#include "TresPrizeCrab.h"
#include "MovableCrabParam.h"
#include "TresPrizeMovableCrab.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresPrizeMovableCrab : public ATresPrizeCrab {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bStopMovement;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovableCrabParam m_Parameter;
    
public:
    ATresPrizeMovableCrab(const FObjectInitializer& ObjectInitializer);
};

