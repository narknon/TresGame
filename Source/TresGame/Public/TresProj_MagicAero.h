#pragma once
#include "CoreMinimal.h"
#include "ETresDamageKind.h"
#include "TresProj_MagicBase.h"
#include "TresProj_MagicAero.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProj_MagicAero : public ATresProj_MagicBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SwirlLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresDamageKind> m_AfterDamageKind;
    
public:
    ATresProj_MagicAero(const FObjectInitializer& ObjectInitializer);
};

