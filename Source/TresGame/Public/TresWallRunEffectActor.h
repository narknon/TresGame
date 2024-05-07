#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresWallRunEffectActor.generated.h"

class UTresWallRunEffectComponent;

UCLASS(Blueprintable, Config=Game)
class ATresWallRunEffectActor : public ATresGimmickActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresWallRunEffectComponent* m_Root;
    
public:
    ATresWallRunEffectActor(const FObjectInitializer& ObjectInitializer);
};

