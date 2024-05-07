#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "TresBoneNames_e_ex011.h"
#include "TresWheelRotationWork_e_ex011.h"
#include "TresE_ex011ConnectEffectParam.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex011.generated.h"

class USceneComponent;
class ATresEnemyFortressFloorActor_e_ex011;
class UTresAttackDefinitionBase;
class UTresActionDefinitionBase;
class AActor;
class ATresEnemyPawn_e_ex011;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex011 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* CoopJumpLocationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MaxConnect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SpawnNumConnect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresBoneNames_e_ex011 m_ConnectFortressBoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresBoneNames_e_ex011 m_ConnectCarriageBoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresWheelRotationWork_e_ex011> m_WheelRotationWorkList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ConnectBoneDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PassStepHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_HillClimbAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIsAutoCarriageMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresActionDefinitionBase> m_ToCarriageActionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StringConnectPointDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StringConnectPointDistanceInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StringRotationAddConnectPointDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StringRotationAddConnectPointDistanceMaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StringRotationAddConnectPointDistanceRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StringRotationAdjustPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RodConnectPointDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RodConnectPointDistanceInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RodRotationAdjustPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RodConnectPointMaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> m_CoopJumpActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresAttackDefinitionBase> m_CoopAttackDefinitionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresEnemyFortressFloorActor_e_ex011> m_FortressFloorCollisionActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresE_ex011ConnectEffectParam m_ConnectEffectParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 m_NumConnect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 m_bIsEndFortressMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RepelSpeed;
    
public:
    ATresEnemyPawn_e_ex011(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void ResetCarriageStartState();
    
    UFUNCTION(BlueprintCallable)
    bool IsTop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetWheelRotation(FName InBoneName, bool bInverse) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetConnectPawnList(TArray<ATresEnemyPawn_e_ex011*>& OutList) const;
    
    UFUNCTION(BlueprintCallable)
    void DebugToFortressMode();
    
    UFUNCTION(BlueprintCallable)
    void DebugToCarriageMode();
    
    UFUNCTION(BlueprintCallable)
    void DebugSetNumTailSwing(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetNumDash(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetNumBombardment(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetEnableDrawTarget(int32 bEnable);
    
    UFUNCTION(BlueprintCallable)
    void DebugDisappearConnectEffect();
    
    UFUNCTION(BlueprintCallable)
    void DebugDestroyChild(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void DebugCreateChild(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void DebugAppearConnectEffect();
    
    UFUNCTION(BlueprintCallable)
    void BP_OnToCarriageActionSkipBattleStart();
    
    UFUNCTION(BlueprintCallable)
    void BP_OnToCarriageActionSkip();
    
    UFUNCTION(BlueprintCallable)
    void BP_MethdToCarriageAction();
    
    UFUNCTION(BlueprintCallable)
    void BP_IdleToCarriageAction();
    
    UFUNCTION(BlueprintCallable)
    void BP_ApplyCarriageMode();
    
};

