#pragma once
#include "CoreMinimal.h"
#include "TresRaFestivalReplaceMeshData.generated.h"

class USkeletalMesh;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FTresRaFestivalReplaceMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* m_MeshData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* m_MatData;
    
    TRESGAME_API FTresRaFestivalReplaceMeshData();
};

