#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActorCompoBase.h"
#include "TresGumiShipGumiMissionManager.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipGumiMissionManager : public UTresGumiShipActorCompoBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGumiShipGumiMissionClearDispather);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGumiShipGumiMissionClearDispather OnClearGumiMission;
    
    UTresGumiShipGumiMissionManager();
private:
    UFUNCTION(BlueprintCallable)
    void OnStartMissionCheck();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void GumiShip_Debug_SetGumiMissionProgressNum(int32 dIndex, int32 dParam);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GumiShip_Debug_ClearGumiMission(int32 dIndex);
    
};

