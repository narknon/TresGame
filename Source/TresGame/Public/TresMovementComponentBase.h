#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PawnMovementComponent.h"
#include "TresMovementComponentPostPhysicsTickFunction.h"
#include "TresMovementComponentBase.generated.h"

class ATresPawnBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UTresMovementComponentBase : public UPawnMovementComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresPawnBase* CharacterOwner;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresMovementComponentPostPhysicsTickFunction m_PostPhysicsTickFunction;
    
    UTresMovementComponentBase();
};

