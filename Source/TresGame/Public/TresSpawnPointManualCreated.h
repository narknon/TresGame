#pragma once
#include "CoreMinimal.h"
#include "TresSpawnPointElement.h"
#include "TresSpawnPointManualCreated.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FTresSpawnPointManualCreated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresSpawnPointElement m_Element;
    
    FTresSpawnPointManualCreated();
};

