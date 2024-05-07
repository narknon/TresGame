#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresFieldAttackParamBase_e_ex357.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UTresFieldAttackParamBase_e_ex357 : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeTime;
    
    UTresFieldAttackParamBase_e_ex357();
};

