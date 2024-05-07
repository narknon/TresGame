#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipCollisionSetCompo.h"
#include "TresGumiShipDefCollisionParam.h"
#include "TresGumiShipDefCollisionSetCompo.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipDefCollisionSetCompo : public UTresGumiShipCollisionSetCompo {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresGumiShipRefreshedBarrier, const int32, dIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresGumiShipBrokenBarrier, const int32, dIndex);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresGumiShipDefCollisionParam> m_pDefParams;
    
public:
    UTresGumiShipDefCollisionSetCompo();
};

