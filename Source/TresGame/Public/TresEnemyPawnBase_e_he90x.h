#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawnBase_e_he90x.generated.h"

class UTresSkeletalMeshComponent;
class ATresPlayerPawnBase;

UCLASS(Abstract, Blueprintable)
class ATresEnemyPawnBase_e_he90x : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDebugDispCollMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForceStrongBodyDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxTargetMountOffTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* MyCollMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresPlayerPawnBase* m_Player;
    
public:
    ATresEnemyPawnBase_e_he90x(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    static void OnReceiveRemoteEvent(FName inEventName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool LineTraceMultiForMap(const FVector Start, const FVector End, TArray<FHitResult>& OutHits) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetOnMountain();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerOnMountain();
    
};

