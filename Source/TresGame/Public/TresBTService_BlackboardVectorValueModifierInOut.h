#pragma once
#include "CoreMinimal.h"
#include "TresBTService_BlackboardValueModifierInOutBase.h"
#include "TresBlackboardVectorValueModifierInOutParam.h"
#include "TresBTService_BlackboardVectorValueModifierInOut.generated.h"

UCLASS(Blueprintable)
class UTresBTService_BlackboardVectorValueModifierInOut : public UTresBTService_BlackboardValueModifierInOutBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresBlackboardVectorValueModifierInOutParam> m_InParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresBlackboardVectorValueModifierInOutParam> m_OutParamList;
    
public:
    UTresBTService_BlackboardVectorValueModifierInOut();
};

