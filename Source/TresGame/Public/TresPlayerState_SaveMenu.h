#pragma once
#include "CoreMinimal.h"
#include "TresCharState_SaveMenu.h"
#include "TresPlayerState_SaveMenu.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UTresPlayerState_SaveMenu : public UTresCharState_SaveMenu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_pTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* m_pComponent;
    
    UTresPlayerState_SaveMenu();
};

