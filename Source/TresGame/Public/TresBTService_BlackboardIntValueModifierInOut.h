#pragma once
#include "CoreMinimal.h"
#include "TresBTService_BlackboardValueModifierInOutBase.h"
#include "TresBlackboardIntValueModifierInOutParam.h"
#include "TresBTService_BlackboardIntValueModifierInOut.generated.h"

UCLASS(Blueprintable)
class UTresBTService_BlackboardIntValueModifierInOut : public UTresBTService_BlackboardValueModifierInOutBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresBlackboardIntValueModifierInOutParam> m_InParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresBlackboardIntValueModifierInOutParam> m_OutParamList;
    
public:
    UTresBTService_BlackboardIntValueModifierInOut();
};

