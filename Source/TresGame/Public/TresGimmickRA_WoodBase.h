#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSimpleStaticBase.h"
#include "TresGimmickRA_WoodBase.generated.h"

class UTresPoleComponent;

UCLASS(Abstract, Blueprintable)
class ATresGimmickRA_WoodBase : public ATresGimmickSimpleStaticBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresPoleComponent* MyPole;
    
public:
    ATresGimmickRA_WoodBase(const FObjectInitializer& ObjectInitializer);
};

