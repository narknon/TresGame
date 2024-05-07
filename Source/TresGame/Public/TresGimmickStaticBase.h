#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresGimmickStaticBase.generated.h"

class UTresRootComponent;
class UTresStaticMeshComponent;
class UTresEffectAttachComponent;

UCLASS(Abstract, Blueprintable)
class ATresGimmickStaticBase : public ATresGimmickActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresRootComponent* MyRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* MyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresEffectAttachComponent* MyEffectAtt;
    
public:
    ATresGimmickStaticBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetCanEverAffectNavigation(bool bRelevant);
    
};

