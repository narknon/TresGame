#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresShootFlowActor.generated.h"

class UTresShootFlowComponent;

UCLASS(Blueprintable, Config=Game)
class ATresShootFlowActor : public ATresGimmickActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresShootFlowComponent* m_Root;
    
public:
    ATresShootFlowActor(const FObjectInitializer& ObjectInitializer);
};

