#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAdhereObjBase.h"
#include "TresAdhereDischarge.generated.h"

class ATresProj_BadStatDischarge;
class UTresChrDataTableSet;

UCLASS(Blueprintable)
class ATresAdhereDischarge : public ATresAdhereObjBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresChrDataTableSet* m_pDataTableSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CheckRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProj_BadStatDischarge> m_GenerateClass;
    
public:
    ATresAdhereDischarge(const FObjectInitializer& ObjectInitializer);
};

