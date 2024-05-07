#pragma once
#include "CoreMinimal.h"
#include "TresUICommandInfoBase.h"
#include "TresUICommandInfoAFRollerCoaster.generated.h"

class ATresRailSlideActor;

UCLASS(Blueprintable)
class UTresUICommandInfoAFRollerCoaster : public UTresUICommandInfoBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresRailSlideActor* m_RailActor;
    
    UTresUICommandInfoAFRollerCoaster();
};

