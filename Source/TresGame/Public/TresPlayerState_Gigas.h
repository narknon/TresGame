#pragma once
#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresPlayerState_Gigas.generated.h"

class ATresCameraFirstPerson;
class ATresVehiclePawnGigas;

UCLASS(Blueprintable)
class UTresPlayerState_Gigas : public UTresStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresVehiclePawnGigas* m_pObj;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCameraFirstPerson* m_Camera;
    
public:
    UTresPlayerState_Gigas();
};

