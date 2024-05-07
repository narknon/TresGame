#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_fz903.generated.h"

class UTresActionDefinitionBase;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_fz903 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresActionDefinitionBase> m_ReleaseArmorActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresActionDefinitionBase> m_ShakeOffActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresActionDefinitionBase> m_SnowCoverSwingActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresActionDefinitionBase> m_AgonizeActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ArmorStateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RecastReactionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_BlowDamageTurnRate;
    
public:
    ATresEnemyPawn_e_fz903(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    bool IsArmour() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_StopUserAI(bool Switch);
    
    UFUNCTION(BlueprintCallable)
    void BP_StartSnowCoverSwing();
    
    UFUNCTION(BlueprintCallable)
    void BP_StartShakeOffDonald();
    
    UFUNCTION(BlueprintCallable)
    void BP_SetArmorMorphWeight(float Value);
    
    UFUNCTION(BlueprintCallable)
    void BP_RunEndSnowCoverSwing();
    
    UFUNCTION(BlueprintCallable)
    void BP_ReleaseArmorParam();
    
    UFUNCTION(BlueprintCallable)
    void BP_ProgressSnowCoverSwingStep();
    
    UFUNCTION(BlueprintCallable)
    void BP_InstallingArmorParam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator BP_GetAnimOffsetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BP_GetAnimOffsetAlpha() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_ForcedTerminationSnowCoverSwing();
    
    UFUNCTION(BlueprintCallable)
    void BP_DebugSetBT();
    
    UFUNCTION(BlueprintCallable)
    void BP_AttackEndSnowCoverSwing();
    
};

