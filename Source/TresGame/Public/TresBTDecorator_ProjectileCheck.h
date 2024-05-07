#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_ProjectileCheck.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_ProjectileCheck : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsReflected;
    
    UTresBTDecorator_ProjectileCheck();
};

