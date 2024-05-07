#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIIEPawnBase.h"
#include "TresEnemyPawn_e_ex301a.generated.h"

class USoundBase;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex301a : public ATresEnemyXIIIEPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_AnnihilationStartSoundData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_AnnihilationEndSoundData;
    
public:
    ATresEnemyPawn_e_ex301a(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, Exec)
    bool IsRunningAllOtherEnemiesBT() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsEndAllAnnihilationAttack();
    
    UFUNCTION(BlueprintCallable)
    bool IsAllXIIIEDuringWarp();
    
    UFUNCTION(BlueprintCallable)
    void DebugSetDisableFirstAnnihilation(int32 bDisable);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetDebugAllBlackBoardAnnihilation();
    
    UFUNCTION(BlueprintCallable)
    void DebugSendRemoteEventForFirstAnnihilation();
    
    UFUNCTION(BlueprintCallable)
    void BP_StartMasterLightAnnihilation();
    
    UFUNCTION(BlueprintCallable)
    void BP_SpawnTornado();
    
    UFUNCTION(BlueprintCallable)
    void BP_EndFirstAnnihilationEvent();
    
};

