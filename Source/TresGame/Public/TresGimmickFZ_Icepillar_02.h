#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickSkeletalBase.h"
#include "TresGimmickFZ_Icepillar_Manager_IActor.h"
#include "TresGimmickFZ_Icepillar_02_OnNotifyGimmickEscapeSignatureDelegate.h"
#include "TresGimmickFZ_Icepillar_02.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable, Config=Game)
class ATresGimmickFZ_Icepillar_02 : public ATresGimmickSkeletalBase, public ITresGimmickFZ_Icepillar_Manager_IActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsCinematicMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AttackRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PersonalSpaceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsSearching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_SearchLocation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGimmickFZ_Icepillar_02_OnNotifyGimmickEscapeSignature OnNotifyGimmickEscape;
    
    ATresGimmickFZ_Icepillar_02(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPEV_OnNotifyGimmickEscape();
    
    UFUNCTION(BlueprintCallable)
    void BP_UnRegistAttacker(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void BP_RegistAttacker(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_IsRegistedAttacker() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_CheckRegistingAttacker(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable)
    bool BP_CheckAttackLocationRail(AActor* Attacker, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    bool BP_CheckAttackLocation(AActor* Attacker, FVector Location);
    
    
    // Fix for true pure virtual functions not being implemented
};

