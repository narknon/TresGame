#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipAtkCollisionParam.h"
#include "TresGumiShipCollisionSetCompo.h"
#include "TresGumiShipAtkCollisionSetCompo.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipAtkCollisionSetCompo : public UTresGumiShipCollisionSetCompo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresGumiShipAtkCollisionParam> m_AtkParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bShareHitActorInfo;
    
public:
    UTresGumiShipAtkCollisionSetCompo();
};

