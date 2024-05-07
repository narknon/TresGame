#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "ETresCampPawnAnimTypeID.h"
#include "TresCampPawnBase.generated.h"

UCLASS(Abstract, Blueprintable)
class TRESGAME_API ATresCampPawnBase : public ATresCharPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bResetBonamikWhenAnimChange: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bPreRollBonamikWhenAnimChange: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_BonamikPreRollNumDefault;
    
    UPROPERTY(EditAnywhere, Transient)
    TEnumAsByte<ETresCampPawnAnimTypeID> m_AnimType;
    
public:
    ATresCampPawnBase(const FObjectInitializer& ObjectInitializer);
};

