#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresGimmick_EX_BattlePortal.generated.h"

class UParticleSystemComponent;
class USceneComponent;
class UTresReactorComponent;
class UTresNavModifierComponent;
class ATresPlayerStart;
class UParticleSystem;

UCLASS(Abstract, Blueprintable, Config=Game)
class ATresGimmick_EX_BattlePortal : public ATresGimmickActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_EffectBodyComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_EffectEscapeComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTresReactorComponent* MyReactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTresNavModifierComponent* NavModifier;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_PortalID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_MapJumpPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_MapJumpPlayerStartTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresPlayerStart* m_AutoSavePlayerStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_GameFlagCheckCleared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_Effect_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_Effect_Escape;
    
    ATresGimmick_EX_BattlePortal(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void OnChangeBattleMode(bool bIsBattleMode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPEV_OnBattlePortalEscapeMode(bool IsEscape);
    
    UFUNCTION(BlueprintCallable)
    void BP_BattlePortalMapjump();
    
};

