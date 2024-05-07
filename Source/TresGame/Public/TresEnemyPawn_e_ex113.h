#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex113.generated.h"

class UTresSkeletalMeshComponent;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex113 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* ThornMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WarpDitherInterpTime;
    
public:
    ATresEnemyPawn_e_ex113(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnChild();
    
    UFUNCTION(BlueprintCallable)
    void DebugSetCoopNumProjectile(int32 Num);
    
};

