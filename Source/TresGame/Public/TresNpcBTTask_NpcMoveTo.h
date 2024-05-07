#pragma once
#include "CoreMinimal.h"
#include "TresBTTask_MoveTo.h"
#include "TresNpcBTTask_NpcMoveTo.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTTask_NpcMoveTo : public UTresBTTask_MoveTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWalk;
    
    UTresNpcBTTask_NpcMoveTo();
};

