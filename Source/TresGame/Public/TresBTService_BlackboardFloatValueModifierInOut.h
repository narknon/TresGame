#pragma once
#include "CoreMinimal.h"
#include "TresBTService_BlackboardValueModifierInOutBase.h"
#include "TresBlackboardFloatValueModifierInOutParam.h"
#include "TresBTService_BlackboardFloatValueModifierInOut.generated.h"

UCLASS(Blueprintable)
class UTresBTService_BlackboardFloatValueModifierInOut : public UTresBTService_BlackboardValueModifierInOutBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresBlackboardFloatValueModifierInOutParam> m_InParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresBlackboardFloatValueModifierInOutParam> m_OutParamList;
    
public:
    UTresBTService_BlackboardFloatValueModifierInOut();
};

