#pragma once
#include "CoreMinimal.h"
#include "Animation/SkeletalMeshActor.h"
#include "WinniePuzzleBucketType.h"
#include "TresWinniePuzzleBucket.generated.h"

UCLASS(Blueprintable)
class ATresWinniePuzzleBucket : public ASkeletalMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    WinniePuzzleBucketType BucketType;
    
    ATresWinniePuzzleBucket(const FObjectInitializer& ObjectInitializer);
};

