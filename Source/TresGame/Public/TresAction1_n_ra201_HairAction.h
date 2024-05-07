#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAction1_n_ra201_HairAction.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction1_n_ra201_HairAction : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_ActionPointOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ActionCancelDistance;
    
    UTresAction1_n_ra201_HairAction();
};

