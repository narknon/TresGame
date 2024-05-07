#pragma once
#include "CoreMinimal.h"
#include "TresGimmickBrickStaticBase.h"
#include "TresGimmickBrickStaticExBase.generated.h"

class UTresStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class ATresGimmickBrickStaticExBase : public ATresGimmickBrickStaticBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* MyBreak;
    
public:
    ATresGimmickBrickStaticExBase(const FObjectInitializer& ObjectInitializer);
};

