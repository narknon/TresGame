#pragma once
#include "CoreMinimal.h"
#include "TresComNpcAttachMesh.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcAttachMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_MeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_SoketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bChangeMesh: 1;
    
    TRESGAME_API FTresComNpcAttachMesh();
};

