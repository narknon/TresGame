#pragma once
#include "CoreMinimal.h"
#include "TresCharState_AFTeaCup.h"
#include "TresNpcState_AFTeaCup.generated.h"

class AActor;

UCLASS(Blueprintable)
class UTresNpcState_AFTeaCup : public UTresCharState_AFTeaCup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pAttachActor;
    
    UTresNpcState_AFTeaCup();
};

