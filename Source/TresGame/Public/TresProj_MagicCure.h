#pragma once
#include "CoreMinimal.h"
#include "TresProj_MagicBase.h"
#include "ETresCmnCureEffectGrpID.h"
#include "TresProj_MagicCure.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class ATresProj_MagicCure : public ATresProj_MagicBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DetectRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AppendCure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_BonusAppendCure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresCmnCureEffectGrpID m_CureEffectType;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_pTargetActor;
    
public:
    ATresProj_MagicCure(const FObjectInitializer& ObjectInitializer);
};

