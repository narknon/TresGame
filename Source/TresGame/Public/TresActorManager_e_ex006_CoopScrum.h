#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresActorManager_e_ex006_CoopScrum.generated.h"

class ATresEnemy_e_ex006_CoopScrumVolume;

UCLASS(Blueprintable)
class ATresActorManager_e_ex006_CoopScrum : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresEnemy_e_ex006_CoopScrumVolume*> m_SpawnFilterVolume;
    
    ATresActorManager_e_ex006_CoopScrum(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCoopMode() const;
    
    UFUNCTION(BlueprintCallable)
    void CoopDashEnd();
    
};

