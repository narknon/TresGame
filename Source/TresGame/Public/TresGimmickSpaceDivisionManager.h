#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGimmickSpaceDivisionManager.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGimmickSpaceDivisionManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllAreaSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AreaSize;
    
    ATresGimmickSpaceDivisionManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpawnedObjectNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetObjectNum() const;
    
};

