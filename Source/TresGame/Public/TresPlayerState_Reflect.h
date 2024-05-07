#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Reflect.h"
#include "TresPlayerState_Reflect.generated.h"

class AActor;

UCLASS(Blueprintable)
class UTresPlayerState_Reflect : public UTresCharState_Reflect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_pTargetActor;
    
    UTresPlayerState_Reflect();
};

