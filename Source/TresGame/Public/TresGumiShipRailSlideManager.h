#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipEnemyGroupWipeOutData.h"
#include "TresGumiShipActorCompoBase.h"
#include "ETresGumiShipRailSlideType.h"
#include "TresGMInputResult.h"
#include "TresGumiShipRailSlideManager.generated.h"

class ATresGumiShipPlayerControllerBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipRailSlideManager : public UTresGumiShipActorCompoBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresGumiShipFinishedRailSlide, const ETresGumiShipRailSlideType, eRailSlideType);
    
    UTresGumiShipRailSlideManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTracking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpTracking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRouteRailSliding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRailSliding() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void _OnReraisePlayer();
    
    UFUNCTION(BlueprintCallable)
    void _OnFinishedRailSlideSub();
    
    UFUNCTION(BlueprintCallable)
    void _OnFinishedRailSlideCoolDown();
    
    UFUNCTION(BlueprintCallable)
    void _OnFinishedRailSlideByEnemyGroupWipeOut(const FTresGumiShipEnemyGroupWipeOutData& rEnemyGroupWipeOutData);
    
    UFUNCTION(BlueprintCallable)
    void _OnDeadPlayer();
    
    UFUNCTION(BlueprintCallable)
    void _OnCheckCancelRailSlide(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController);
    
};

