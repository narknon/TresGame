#pragma once
#include "CoreMinimal.h"
#include "TresEnvQueryGenerator_OnRing.h"
#include "DataProviders/AIDataProvider.h"
#include "TresEnvQueryGenerator_OnRingSurface.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTresEnvQueryGenerator_OnRingSurface : public UTresEnvQueryGenerator_OnRing {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderIntValue NumSamples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSurfaceRefBodyColls;
    
    UTresEnvQueryGenerator_OnRingSurface();
};

