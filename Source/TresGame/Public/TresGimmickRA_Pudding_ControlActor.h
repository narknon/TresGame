#pragma once
#include "CoreMinimal.h"
#include "ETresCommandKind.h"
#include "TresGimmickSkeletalBase.h"
#include "TresRaPuddingEffectRef.h"
#include "TresRaPuddingPosition.h"
#include "TresRaPuddingSchedule.h"
#include "TresGimmickRA_Pudding_ControlActor.generated.h"

class ATresGimmickRA_PuddingManager;
class UTresReactorComponent;
class UTresDebugEditorRaPuddingControllerComponent;
class ATresPlayerControllerBase;
class UTresGimmickRA_Pudding_PhotoComponent;
class ATresRaPuddingSplineActor;
class UParticleSystem;
class ATresCharPawnBase;

UCLASS(Blueprintable)
class ATresGimmickRA_Pudding_ControlActor : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 WanderPudding: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WanderRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WanderReactRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ReactToPlayer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReactDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ResetOnPCLeave: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IgnoreGravity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IgnoreShutter: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresRaPuddingEffectRef> EffectRefList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresRaPuddingPosition> PositionInfoList;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresRaPuddingSchedule> ScheduleList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DebugFlag_DebugDraw: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresDebugEditorRaPuddingControllerComponent* EditorInfoComp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresPlayerControllerBase* m_pPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresReactorComponent* m_pReactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresGimmickRA_PuddingManager* m_pPudMng;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<TWeakObjectPtr<UTresGimmickRA_Pudding_PhotoComponent>> m_NormalCompList;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<TWeakObjectPtr<UTresGimmickRA_Pudding_PhotoComponent>> m_ExtraCompList;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    TMap<FName, TWeakObjectPtr<ATresRaPuddingSplineActor>> m_PositionDic;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    TMap<FName, TWeakObjectPtr<UParticleSystem>> m_EffectDic;
    
public:
    ATresGimmickRA_Pudding_ControlActor(const FObjectInitializer& ObjectInitializer);
private:
    UFUNCTION()
    void OnReactorCommand(ATresCharPawnBase* CommandCauser, TEnumAsByte<ETresCommandKind> CommandID, UTresReactorComponent* ReactorComponent);
    
};

