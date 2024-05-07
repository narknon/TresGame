#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpGroupInst.h"
#include "TresInterpGroupInstExternalActor.generated.h"

class AActor;

UCLASS(Blueprintable)
class TRESGAME_API UTresInterpGroupInstExternalActor : public UInterpGroupInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_Actor;
    
    UTresInterpGroupInstExternalActor();
};

