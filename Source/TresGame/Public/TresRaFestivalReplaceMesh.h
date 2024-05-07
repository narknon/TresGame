#pragma once
#include "CoreMinimal.h"
#include "TresRaFestivalReplaceMeshData.h"
#include "TresRaFestivalReplaceMesh.generated.h"

USTRUCT(BlueprintType)
struct FTresRaFestivalReplaceMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_MeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresRaFestivalReplaceMeshData> m_MeshLists;
    
    TRESGAME_API FTresRaFestivalReplaceMesh();
};

