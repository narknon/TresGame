#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipGimmickObjectBase.h"
#include "TresGumiShipGimmickMineDebris.generated.h"

class UPrimitiveComponent;
class AActor;

UCLASS(Abstract, Blueprintable)
class ATresGumiShipGimmickMineDebris : public ATresGumiShipGimmickObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DataTableName;
    
public:
    ATresGumiShipGimmickMineDebris(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void _OnOverlapBegin(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 dOtherBodyIndex, bool bFromSweep, const FHitResult& rSweepResult);
    
};

