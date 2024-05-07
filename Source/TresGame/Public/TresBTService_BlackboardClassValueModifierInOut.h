#pragma once
#include "CoreMinimal.h"
#include "TresBTService_BlackboardValueModifierInOutBase.h"
#include "TresBlackboardClassValueModifierInOutParam.h"
#include "TresBTService_BlackboardClassValueModifierInOut.generated.h"

UCLASS(Blueprintable)
class UTresBTService_BlackboardClassValueModifierInOut : public UTresBTService_BlackboardValueModifierInOutBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresBlackboardClassValueModifierInOutParam> m_InParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresBlackboardClassValueModifierInOutParam> m_OutParamList;
    
public:
    UTresBTService_BlackboardClassValueModifierInOut();
};

