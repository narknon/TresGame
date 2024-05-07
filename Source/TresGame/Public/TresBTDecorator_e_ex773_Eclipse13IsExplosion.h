#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_e_ex773_Eclipse13IsExplosion.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_e_ex773_Eclipse13IsExplosion : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExplosionIndex;
    
    UTresBTDecorator_e_ex773_Eclipse13IsExplosion();
};

