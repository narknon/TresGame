#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntityControlVolumeData.h"
#include "TresEnemyControlVolumeData_e_ex202.generated.h"

class ATresLinkActor_e_ex202_Exit;

UCLASS(Blueprintable, EditInlineNew)
class UTresEnemyControlVolumeData_e_ex202 : public UTresLevelEntityControlVolumeData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresLinkActor_e_ex202_Exit*> m_LinkActorArray;
    
public:
    UTresEnemyControlVolumeData_e_ex202();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ATresLinkActor_e_ex202_Exit*> GetLinkActorArray() const;
    
};

