#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresActionDefinitionBase.h"
#include "TresAction5_e_ex360_PlayVoise.generated.h"

class ATresGenerator_e_ex360_PlayVoise;

UCLASS(Blueprintable, HideDropdown)
class UTresAction5_e_ex360_PlayVoise : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresGenerator_e_ex360_PlayVoise> m_Generator;
    
    UTresAction5_e_ex360_PlayVoise();
};

