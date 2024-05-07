#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGimmickActorBase.h"
#include "TresGumiShipTrackingGuide.generated.h"

class UTresGumiShipFSM;

UCLASS(Blueprintable)
class ATresGumiShipTrackingGuide : public ATresGumiShipGimmickActorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTimeOfAddRailSlideActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSpeedOfDefaultMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipFSM* m_pFSM;
    
public:
    ATresGumiShipTrackingGuide(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void GenerateRailSlideActor();
    
};

