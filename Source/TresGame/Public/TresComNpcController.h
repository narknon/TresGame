#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "TresAIController.h"
#include "TresComNpcController.generated.h"

UCLASS(Blueprintable)
class ATresComNpcController : public ATresAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bNoPawnDestroy: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIRequestID m_MoveRequestID;
    
public:
    ATresComNpcController(const FObjectInitializer& ObjectInitializer);
};

