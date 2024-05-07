#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActorCompoBase.h"
#include "TresGumiShipLockonCompo.generated.h"

class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipLockonCompo : public UTresGumiShipActorCompoBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresGumiShipChangedLockonTarget, USceneComponent*, pTarget);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDot;
    
public:
    UTresGumiShipLockonCompo();
};

