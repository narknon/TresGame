#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickBxDarkCube.generated.h"

class UTresSpawnActorManagerComponent;

UCLASS(Blueprintable)
class ATresGimmickBxDarkCube : public ATresCharPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_CheckSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSpawnActorManagerComponent* SpawnActorManager;
    
    ATresGimmickBxDarkCube(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetEnableAttack(bool bEnable, const FName InGroupName, float InAttackInterval);
    
    UFUNCTION(BlueprintCallable)
    void SetBallSize(float fBallSize);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackTeamNo(int32 InTeamNo);
    
    UFUNCTION(BlueprintCallable)
    void NotifyChangeGimmickPause(bool bPause);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DarkcubeCanbeMovable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeGimmickPause(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    FRotator CalcMovementToRot(FRotator BaseRotator, FVector vel, float fRadius);
    
};

