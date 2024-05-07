#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpGroupInst.h"
#include "TresKHSInterpGroupInst.generated.h"

class ATresKHShaderController;
class UTresObjectDataBuffer;

UCLASS(Blueprintable)
class TRESGAME_API UTresKHSInterpGroupInst : public UInterpGroupInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresKHShaderController* m_GroupActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresObjectDataBuffer* m_KHSBuffer;
    
    UTresKHSInterpGroupInst();
};

