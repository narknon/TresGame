#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "ETresCommandKind.h"
#include "TresGimmick_e_ex356_Card.generated.h"

class USceneComponent;
class UTresReactorComponent;
class UTresLockonPriorityOverlapComponent_e_ex356;
class UParticleSystem;

UCLASS(Blueprintable)
class ATresGimmick_e_ex356_Card : public ATresCharPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MyTransformControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresLockonPriorityOverlapComponent_e_ex356* MyLockonPriorityOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresReactorComponent* MyBigDealReactorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ExplodeAttackLifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ExplodeAttackCollisionGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ExplodeAttackDataIDName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_SmokeParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_FieldOutCardSmokeParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_ExplodeParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_HideAndSeekExplodeParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_HideAndSeekExplodeCardParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_BigDealAttackCardMoveParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_BigDealCardAuraParticleSystem;
    
public:
    ATresGimmick_e_ex356_Card(const FObjectInitializer& ObjectInitializer);
private:
    UFUNCTION()
    void OnBigDealReactorDoCommand(ATresCharPawnBase* InCommandCauser, TEnumAsByte<ETresCommandKind> InCommandID, UTresReactorComponent* InReactorComponent);
    
};

