#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipUISubParts.h"
#include "TresGumiShipGuideObjects.h"
#include "TresUIP_HudGummiShipGuide.generated.h"

UCLASS(Blueprintable, NonTransient)
class UTresUIP_HudGummiShipGuide : public UTresGumiShipUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient)
    FTresGumiShipGuideObjects m_WorldGuide[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTresGumiShipGuideObjects m_MarkerGuide;
    
    UPROPERTY(EditAnywhere, Transient)
    FTresGumiShipGuideObjects m_EnemyGuide[10];
    
public:
    UTresUIP_HudGummiShipGuide();
};

