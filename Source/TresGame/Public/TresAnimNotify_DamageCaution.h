#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ETresRiskDodgeType.h"
#include "TresAnimNotify_DamageCaution.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UTresAnimNotify_DamageCaution : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresRiskDodgeType> DodgeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_EntryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LimitAngle;
    
public:
    UTresAnimNotify_DamageCaution();
};

