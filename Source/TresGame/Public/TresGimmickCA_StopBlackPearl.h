#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSkeletalBase.h"
#include "TresGimmickCA_StopBlackPearl.generated.h"

class UTresCAShipComponent;

UCLASS(Abstract, Blueprintable)
class ATresGimmickCA_StopBlackPearl : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresCAShipComponent* TresCAShipComponent;
    
public:
    ATresGimmickCA_StopBlackPearl(const FObjectInitializer& ObjectInitializer);
};

