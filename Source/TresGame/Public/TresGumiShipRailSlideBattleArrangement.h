#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipRailSlideArrangement.h"
#include "TresGumiShipRailSlideBattleArrangement.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGumiShipRailSlideBattleArrangement : public ATresGumiShipRailSlideArrangement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_MissionParamName;
    
public:
    ATresGumiShipRailSlideBattleArrangement(const FObjectInitializer& ObjectInitializer);
};

