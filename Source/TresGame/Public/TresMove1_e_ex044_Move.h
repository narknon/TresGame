#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresMove1_e_ex044_Move.generated.h"

class AActor;
class ATresLinkActor_e_ex044_MoveLocation;

UCLASS(Blueprintable, HideDropdown)
class UTresMove1_e_ex044_Move : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxRiseVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseAIPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDestinationMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_DestinationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresLinkActor_e_ex044_MoveLocation* m_pOldAIPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresLinkActor_e_ex044_MoveLocation* m_pNewAIPoint;
    
    UTresMove1_e_ex044_Move();
};

