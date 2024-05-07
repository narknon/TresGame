#pragma once
#include "CoreMinimal.h"
#include "TresBTService_BlackboardValueModifierInOutBase.h"
#include "TresBlackboardBoolValueModifierInOutParam.h"
#include "TresBTService_BlackboardBoolValueModifierInOut.generated.h"

UCLASS(Blueprintable)
class UTresBTService_BlackboardBoolValueModifierInOut : public UTresBTService_BlackboardValueModifierInOutBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresBlackboardBoolValueModifierInOutParam> m_InParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresBlackboardBoolValueModifierInOutParam> m_OutParamList;
    
public:
    UTresBTService_BlackboardBoolValueModifierInOut();
};

