#pragma once
#include "CoreMinimal.h"
#include "TresEnvQueryGenerator_OnRing.h"
#include "DataProviders/AIDataProvider.h"
#include "TresEnvQueryGenerator_OnRing3D.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTresEnvQueryGenerator_OnRing3D : public UTresEnvQueryGenerator_OnRing {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ItemSpacingZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue MinHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue MaxHeight;
    
    UTresEnvQueryGenerator_OnRing3D();
};

