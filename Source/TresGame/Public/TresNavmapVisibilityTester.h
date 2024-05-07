#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresNavmapVisibilityTester.generated.h"

UCLASS(Blueprintable)
class ATresNavmapVisibilityTester : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayHitActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavMeshThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EdgeNormalThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawCollisionConvexMeshes;
    
public:
    ATresNavmapVisibilityTester(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetDisplayHitActors(bool bEnable);
    
};

