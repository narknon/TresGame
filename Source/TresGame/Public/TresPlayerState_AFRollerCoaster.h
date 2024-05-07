#pragma once
#include "CoreMinimal.h"
#include "TresCharState_AFRollerCoaster.h"
#include "TresPlayerState_AFRollerCoaster.generated.h"

class ATresCameraBase;
class ATresCharPawnBase;
class ATresRailSlideActor;
class ATresAttractionPawnRollerCoaster;
class ATresPawnBase;
class ATresAttractionPawnBase;

UCLASS(Blueprintable)
class UTresPlayerState_AFRollerCoaster : public UTresCharState_AFRollerCoaster {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_TargetPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresRailSlideActor* m_StartRailActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresAttractionPawnRollerCoaster* m_pLeadCar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresAttractionPawnBase* m_pTailCar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresAttractionPawnBase* m_pRideCar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_pRailEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_pMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresPawnBase* m_pGateEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ATresAttractionPawnBase*> m_Cars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresCameraBase* m_Camera;
    
    UTresPlayerState_AFRollerCoaster();
};

