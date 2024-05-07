#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "TresRaPairDancePawn.generated.h"

class ATresRaFestivalDanceManager;

UCLASS(Blueprintable)
class ATresRaPairDancePawn : public ATresCharPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresRaFestivalDanceManager* m_pDanceMng;
    
public:
    ATresRaPairDancePawn(const FObjectInitializer& ObjectInitializer);
};

