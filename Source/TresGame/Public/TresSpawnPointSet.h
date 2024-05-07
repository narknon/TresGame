#pragma once
#include "CoreMinimal.h"
#include "TresSpawnPointElement.h"
#include "TresSpawnPointSet.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FTresSpawnPointSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresSpawnPointElement> m_Elements;
    
    FTresSpawnPointSet();
};

