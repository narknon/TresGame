#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresGimmickSimpleMovementProgressInterface.h"
#include "TresGimmickSimpleMovementProgressStraight.generated.h"

UCLASS(Blueprintable, Transient)
class UTresGimmickSimpleMovementProgressStraight : public UObject, public ITresGimmickSimpleMovementProgressInterface {
    GENERATED_BODY()
public:
    UTresGimmickSimpleMovementProgressStraight();
    
    // Fix for true pure virtual functions not being implemented
};

