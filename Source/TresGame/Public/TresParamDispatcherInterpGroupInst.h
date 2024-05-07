#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpGroupInst.h"
#include "TresParamDispatcherInterpGroupInst.generated.h"

class ATresParamDispatcher;

UCLASS(Blueprintable)
class TRESGAME_API UTresParamDispatcherInterpGroupInst : public UInterpGroupInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresParamDispatcher* m_Dispatcher;
    
    UTresParamDispatcherInterpGroupInst();
};

