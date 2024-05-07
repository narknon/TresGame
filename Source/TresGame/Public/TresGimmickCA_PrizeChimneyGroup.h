#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CAPrizeChimneyParam.h"
#include "TresGimmickCA_PrizeChimneyGroup.generated.h"

UCLASS(Blueprintable)
class ATresGimmickCA_PrizeChimneyGroup : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCAPrizeChimneyParam m_Parameter;
    
public:
    ATresGimmickCA_PrizeChimneyGroup(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHitPoint() const;
    
};

