#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntityActorData.h"
#include "TresLevelEntityActorData_e_ex044.generated.h"

class ATresGimmickBxStepBanAsset;

UCLASS(Blueprintable, EditInlineNew)
class UTresLevelEntityActorData_e_ex044 : public UTresLevelEntityActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresGimmickBxStepBanAsset*> m_GimmickArray;
    
    UTresLevelEntityActorData_e_ex044();
};

