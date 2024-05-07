#pragma once
#include "CoreMinimal.h"
#include "TresRaGimmickBird.generated.h"

class UTresSkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FTresRaGimmickBird {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* m_Mesh;
    
    TRESGAME_API FTresRaGimmickBird();
};

