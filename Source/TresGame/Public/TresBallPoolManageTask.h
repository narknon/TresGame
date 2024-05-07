#pragma once
#include "CoreMinimal.h"
#include "TresTaskBase.h"
#include "TresBallPoolManageTask.generated.h"

class ATresPhysObjStaticMeshActor;

UCLASS(Blueprintable)
class UTresBallPoolManageTask : public UTresTaskBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ATresPhysObjStaticMeshActor*> Balls;
    
    UTresBallPoolManageTask();
    UFUNCTION(BlueprintCallable)
    void SetupBalls();
    
    UFUNCTION(BlueprintCallable)
    void Respawn();
    
};

