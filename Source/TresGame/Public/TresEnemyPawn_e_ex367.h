#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyXIIILPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex367.generated.h"

class UTresStateBase;
class ATresProjectileBase;
class UParticleSystem;
class ATresCharPawnBase;
class ATresEnemyPawn_e_ex367_Ascension;
class UParticleSystemComponent;
class ATresEnemyPawn_e_ex367;
class UBehaviorTree;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex367 : public ATresEnemyXIIILPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresEnemyXIIILPawnBase> m_Avatar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ATresProjectileBase>> m_SwordWaveProjectileList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_SwordWaveSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_WarpEffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_WarpOutEffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_WarpParticleEffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_SwordParticleEffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresStateBase> m_AscensionAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresStateBase> m_CallXIIIAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresStateBase> m_XIIIAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_BattleeAreaRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_MapCenterPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresEnemyPawn_e_ex367_Ascension> m_AscensionObjectData;
    
private:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    ATresEnemyPawn_e_ex367* m_pAvaterPawn[13];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_AttackedChar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_SwordParticleEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectileBase* m_CheckPillarProj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_WarpOutEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresEnemyPawn_e_ex367_Ascension* m_AscensionObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* m_DefaultBehavior;
    
public:
    ATresEnemyPawn_e_ex367(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    bool IsXIIIAttackMode();
    
    UFUNCTION(BlueprintCallable)
    bool IsShowCharacter();
    
    UFUNCTION(BlueprintCallable)
    bool IsAvatar();
    
    UFUNCTION(BlueprintCallable)
    bool IsAscensionMode();
    
    UFUNCTION(BlueprintCallable)
    bool InBattleField();
    
    UFUNCTION(BlueprintCallable)
    void BP_ChangeGoatMagicCircle();
    
};

