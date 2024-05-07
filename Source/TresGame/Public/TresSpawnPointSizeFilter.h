#pragma once
#include "CoreMinimal.h"
#include "TresSpawnPointFilter.h"
#include "ETresSpawnPointRadiusFilterType.h"
#include "ETresSpawnPointHeightFilterType.h"
#include "TresSpawnPointSizeFilter.generated.h"

UCLASS(Blueprintable, NonTransient)
class TRESGAME_API UTresSpawnPointSizeFilter : public UTresSpawnPointFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresSpawnPointRadiusFilterType> m_RadiusFilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresSpawnPointHeightFilterType> m_HeightFilterType;
    
    UTresSpawnPointSizeFilter();
};

