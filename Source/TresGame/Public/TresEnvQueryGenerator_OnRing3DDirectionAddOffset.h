#pragma once
#include "CoreMinimal.h"
#include "TresEnvQueryGenerator_OnRing3D.h"
#include "DataProviders/AIDataProvider.h"
#include "TresEnvQueryGenerator_OnRing3DDirectionAddOffset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTresEnvQueryGenerator_OnRing3DDirectionAddOffset : public UTresEnvQueryGenerator_OnRing3D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue DirectionAddOffsetX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue DirectionAddOffsetY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue DirectionAddOffsetZ;
    
    UTresEnvQueryGenerator_OnRing3DDirectionAddOffset();
};

