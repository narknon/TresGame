#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresActionDefinitionBase.h"
#include "TresAction6_e_ex367_PlayVoise.generated.h"

class ATresGenerator_e_ex367_PlayVoise;

UCLASS(Blueprintable, HideDropdown)
class UTresAction6_e_ex367_PlayVoise : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresGenerator_e_ex367_PlayVoise> m_Generator;
    
    UTresAction6_e_ex367_PlayVoise();
};

