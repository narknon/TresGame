#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "TresGameState.generated.h"

class ATresPrizeMan;
class ATresSceneManager;
class ATresVFXManager;
class ATresEmitterPool;
class UTresPhysMatEffectAsset;
class ATresCollisionManager;
class ATresPhysObjMan;
class ASQEX_VFXManager;

UCLASS(Blueprintable)
class ATresGameState : public AGameStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresSceneManager* m_SceneManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresVFXManager* m_VFXManager;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresEmitterPool* m_EmitterPool;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresPhysMatEffectAsset* m_PhysMatEffects;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresPrizeMan* m_PrizeMan;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresCollisionManager* m_CollisionManager;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresPhysObjMan* m_PhysObjMan;
    
public:
    ATresGameState(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    ATresVFXManager* GetVFXManager();
    
    UFUNCTION(BlueprintCallable)
    ASQEX_VFXManager* GetSQEX_VFXManager();
    
    UFUNCTION(BlueprintCallable)
    ATresSceneManager* GetSceneManager();
    
};

