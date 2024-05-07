#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FestivalDance.h"
#include "TresRaDanceSplineInterface.h"
#include "EDancePerformType.h"
#include "TresPlayerState_FestivalDance.generated.h"

class ATresRaFestivalDanceManager;
class ATresCameraFestivalDance;
class UTresPlayerState_FestivalDance;
class ATresCameraFestivalDanceRapunzel;

UCLASS(Blueprintable)
class UTresPlayerState_FestivalDance : public UTresCharState_FestivalDance, public ITresRaDanceSplineInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresOnPlayerPerformEnd, UTresPlayerState_FestivalDance*, PlayerState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTresOnPlayerDancePerform, UTresPlayerState_FestivalDance*, PlayerState, EDancePerformType, Type, int32, performLv);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresOnPlayerDancePerform OnPlayerDancePerform;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCameraFestivalDance* m_pCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCameraFestivalDanceRapunzel* m_pRapunzelCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresRaFestivalDanceManager* m_pDanceMng;
    
public:
    UTresPlayerState_FestivalDance();
    UFUNCTION(BlueprintCallable)
    void OnDanceRhythmBeat();
    
    
    // Fix for true pure virtual functions not being implemented
};

