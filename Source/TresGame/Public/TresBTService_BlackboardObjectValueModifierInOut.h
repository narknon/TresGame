#pragma once
#include "CoreMinimal.h"
#include "TresBTService_BlackboardValueModifierInOutBase.h"
#include "TresBlackboardObjectValueModifierInOutParam.h"
#include "TresBTService_BlackboardObjectValueModifierInOut.generated.h"

UCLASS(Blueprintable)
class UTresBTService_BlackboardObjectValueModifierInOut : public UTresBTService_BlackboardValueModifierInOutBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresBlackboardObjectValueModifierInOutParam> m_InParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresBlackboardObjectValueModifierInOutParam> m_OutParamList;
    
public:
    UTresBTService_BlackboardObjectValueModifierInOut();
};

