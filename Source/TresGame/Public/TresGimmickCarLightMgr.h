#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGimmickCarLightMgr.generated.h"

class USceneComponent;
class USpotLightComponent;

UCLASS(Blueprintable, Config=Game)
class ATresGimmickCarLightMgr : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USpotLightComponent*> SpotLightComponents;
    
    ATresGimmickCarLightMgr(const FObjectInitializer& ObjectInitializer);
};

