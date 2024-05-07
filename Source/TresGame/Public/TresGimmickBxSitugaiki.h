#pragma once
#include "CoreMinimal.h"
#include "TresGimmickLauncher.h"
#include "TresGimmickBxSitugaiki.generated.h"

class UTresStaticMeshComponent;

UCLASS(Blueprintable)
class ATresGimmickBxSitugaiki : public ATresGimmickLauncher {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* m_PropellerMesh;
    
    ATresGimmickBxSitugaiki(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetDisableLaunch(bool DisableLaunch);
    
};

