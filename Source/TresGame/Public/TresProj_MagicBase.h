#pragma once
#include "CoreMinimal.h"
#include "TresProj_MagicReaction.h"
#include "TresProjectileBase.h"
#include "TresProj_MagicBase.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProj_MagicBase : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FTresProj_MagicReaction m_Reaction[8];
    
public:
    ATresProj_MagicBase(const FObjectInitializer& ObjectInitializer);
};

