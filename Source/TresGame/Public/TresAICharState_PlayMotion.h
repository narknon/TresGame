#pragma once
#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresAICharState_PlayMotion.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable)
class UTresAICharState_PlayMotion : public UTresStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_AnimData;
    
    UTresAICharState_PlayMotion();
};

