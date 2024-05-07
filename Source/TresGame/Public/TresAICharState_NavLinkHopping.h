#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Hopping.h"
#include "TresAICharState_NavLinkHopping.generated.h"

class AActor;
class UTresHopComponent;

UCLASS(Blueprintable)
class UTresAICharState_NavLinkHopping : public UTresCharState_Hopping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pHitActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresHopComponent* m_pHitComponent;
    
    UTresAICharState_NavLinkHopping();
};

