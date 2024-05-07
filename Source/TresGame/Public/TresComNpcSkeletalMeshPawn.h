#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "TresComNpcSkeletalMeshPawn.generated.h"

UCLASS(Blueprintable)
class TRESGAME_API ATresComNpcSkeletalMeshPawn : public ATresCharPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fNearCameraRange;
    
    ATresComNpcSkeletalMeshPawn(const FObjectInitializer& ObjectInitializer);
};

