#pragma once
#include "CoreMinimal.h"
#include "TresEnvQueryGenerator_OnRing.h"
#include "DataProviders/AIDataProvider.h"
#include "TresEnvQueryGenerator_OnRingDirectionAddOffset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTresEnvQueryGenerator_OnRingDirectionAddOffset : public UTresEnvQueryGenerator_OnRing {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue DirectionAddOffsetX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue DirectionAddOffsetY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue DirectionAddOffsetZ;
    
    UTresEnvQueryGenerator_OnRingDirectionAddOffset();
};

