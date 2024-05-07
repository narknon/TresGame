#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipPrimitiveComponentBase.h"
#include "Engine/EngineTypes.h"
#include "ETresGumiShipCollisionPriority.h"
#include "TresGumiShipCollisionParam.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipCollisionSetCompo.generated.h"

class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipCollisionSetCompo : public UTresGumiShipPrimitiveComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresGumiShipCollisionPriority> m_ePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresGumiShipCollisionParam> m_Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCollideOffWhenGenerated;
    
public:
    UTresGumiShipCollisionSetCompo();
protected:
    UFUNCTION(BlueprintCallable)
    void _OnOverlapBegin(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 dOtherBodyIndex, bool bFromSweep, const FHitResult& rSweepResult);
    
    UFUNCTION(BlueprintCallable)
    void _OnHit(UPrimitiveComponent* pHitComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector vNormalImpulse, const FHitResult& rHit);
    
};

