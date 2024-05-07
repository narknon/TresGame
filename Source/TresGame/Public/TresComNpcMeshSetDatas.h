#pragma once
#include "CoreMinimal.h"
#include "TresComNpcReplaceMeshData.h"
#include "TresComNpcMeshSetDatas.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcMeshSetDatas {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_MeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresComNpcReplaceMeshData> m_MeshLists;
    
    TRESGAME_API FTresComNpcMeshSetDatas();
};

