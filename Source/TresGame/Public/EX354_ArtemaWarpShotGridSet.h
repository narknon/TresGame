#pragma once
#include "CoreMinimal.h"
#include "EX354_ArtemaWarpShotGrid.h"
#include "EX354_ArtemaWarpShotGridSet.generated.h"

USTRUCT(BlueprintType)
struct FEX354_ArtemaWarpShotGridSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iGridNumX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iGridNumY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AvoidOverrapScale;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEX354_ArtemaWarpShotGrid> m_GridArray;
    
public:
    TRESGAME_API FEX354_ArtemaWarpShotGridSet();
};

