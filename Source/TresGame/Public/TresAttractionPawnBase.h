#pragma once
#include "CoreMinimal.h"
#include "TresAccompanyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresAttractionPawnBase.generated.h"

class ATresCameraFirstPerson;

UCLASS(Abstract, Blueprintable)
class ATresAttractionPawnBase : public ATresAccompanyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_Param_FCameraLocalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_Param_FCameraRotMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_Param_FCameraRotMax;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCameraFirstPerson* m_FCamera;
    
public:
    ATresAttractionPawnBase(const FObjectInitializer& ObjectInitializer);
};

