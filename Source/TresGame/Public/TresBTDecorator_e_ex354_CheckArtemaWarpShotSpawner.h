#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_e_ex354_CheckArtemaWarpShotSpawner.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_e_ex354_CheckArtemaWarpShotSpawner : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxProjNum;
    
    UTresBTDecorator_e_ex354_CheckArtemaWarpShotSpawner();
};

