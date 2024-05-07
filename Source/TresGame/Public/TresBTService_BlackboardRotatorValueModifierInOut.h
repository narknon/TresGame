#pragma once
#include "CoreMinimal.h"
#include "TresBTService_BlackboardValueModifierInOutBase.h"
#include "TresBlackboardRotatorValueModifierInOutParam.h"
#include "TresBTService_BlackboardRotatorValueModifierInOut.generated.h"

UCLASS(Blueprintable)
class UTresBTService_BlackboardRotatorValueModifierInOut : public UTresBTService_BlackboardValueModifierInOutBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresBlackboardRotatorValueModifierInOutParam> m_InParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresBlackboardRotatorValueModifierInOutParam> m_OutParamList;
    
public:
    UTresBTService_BlackboardRotatorValueModifierInOut();
};

