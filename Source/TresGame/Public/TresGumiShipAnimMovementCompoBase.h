#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipMovementCompoBase.h"
#include "Animation/AnimationAsset.h"
#include "TresGumiShipAnimMovementCompoBase.generated.h"

class ATresGumiShipCharaPawnBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipAnimMovementCompoBase : public UTresGumiShipMovementCompoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresGumiShipCharaPawnBase* m_pCharaPawn;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRootMotionMovementParams m_RootMotionParams;
    
public:
    UTresGumiShipAnimMovementCompoBase();
};

