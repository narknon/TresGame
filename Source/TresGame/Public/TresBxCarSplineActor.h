#pragma once
#include "CoreMinimal.h"
#include "EGimmickBX_CarSplineBlinker.h"
#include "SQEX_SplineActor.h"

#include "TresBxCarSplineActor.generated.h"

UCLASS(Blueprintable)
class ATresBxCarSplineActor : public ASQEX_SplineActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EGimmickBX_CarSplineBlinker> m_eBlinkerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bConnection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bNoRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHighSpeed;
    
    ATresBxCarSplineActor(const FObjectInitializer& ObjectInitializer);
};

