#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickEwRotationActor.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class ATresGimmickEwRotationActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRoot;
    
public:
    ATresGimmickEwRotationActor(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetRotationEx(const FRotator& Rotator);
    
    UFUNCTION(BlueprintCallable)
    void DisableUpdateMoveNavOctTree();
    
};

