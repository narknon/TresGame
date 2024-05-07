#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "FestivalDancePawn_friend.generated.h"

class ATresRaFestivalDanceManager;

UCLASS(Blueprintable)
class AFestivalDancePawn_friend : public ATresCharPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Idle_MotionName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresRaFestivalDanceManager* m_pDanceMng;
    
public:
    AFestivalDancePawn_friend(const FObjectInitializer& ObjectInitializer);
};

