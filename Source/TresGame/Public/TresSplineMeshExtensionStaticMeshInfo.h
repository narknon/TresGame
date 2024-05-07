#pragma once
#include "CoreMinimal.h"
#include "TresSplineMeshExtensionStaticMeshInfo.generated.h"

class UStaticMesh;
class ASQEX_SplineActor;

USTRUCT(BlueprintType)
struct FTresSplineMeshExtensionStaticMeshInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASQEX_SplineActor* spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isReverseMeshFront;
    
    TRESGAME_API FTresSplineMeshExtensionStaticMeshInfo();
};

