#pragma once
#include "CoreMinimal.h"
#include "TresNpcLocomotionDefinitionLand.h"
#include "TresMove1_n_mi204_Move.generated.h"

class UEnvQuery;

UCLASS(Blueprintable)
class UTresMove1_n_mi204_Move : public UTresNpcLocomotionDefinitionLand {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_WarpEQSQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WarpStartPathDistance;
    
public:
    UTresMove1_n_mi204_Move();
};

