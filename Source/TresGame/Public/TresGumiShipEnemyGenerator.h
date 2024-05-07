#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipEnemyGroupMoveType.h"
#include "ETresGumiShipEnemyGroupDisappearType.h"
#include "TresGumiShipGimmickActorBase.h"
#include "ETresGumiShipEnemySpawnConditionType.h"
#include "TresGumiShipSplinePathMoveParameter.h"
#include "TresGumiShipEnemyGroupWipeOutData.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipEnemyGenerator.generated.h"

class UDataTable;
class ATresGumiShipEnemyGenerator;
class UPrimitiveComponent;
class ATresGumiShipEnemyMoveRouteSpline;
class UTresGumiShipEnemyGroupManager;
class AActor;

UCLASS(Blueprintable)
class ATresGumiShipEnemyGenerator : public ATresGumiShipGimmickActorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pUsingEnemyPresetDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 m_uMaxAttackPermissionNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipEnemyGroupMoveType m_eEnemyGroupMoveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipEnemySpawnConditionType m_eMainEnemySpawnConditionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresGumiShipEnemyGenerator*> m_MainSpawnConditionOtherEnemyGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableSubEnemySpawnCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipEnemySpawnConditionType m_eSubEnemySpawnConditionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresGumiShipEnemyGenerator*> m_SubSpawnConditionOtherEnemyGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEnemyGroupSpawnDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSpawnEnemyLookAtGumiShip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipEnemyGroupDisappearType m_eEnemyGroupDisappearType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_eEnemyGroupDisappearTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresGumiShipEnemyGenerator* m_pDisappearTriggerOtherEnemyGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipSplinePathMoveParameter m_SplinePathMoveParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresGumiShipEnemyMoveRouteSpline*> m_EnemyMoveRouteSplineList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipEnemyGroupManager* m_pEnemyGroupManager;
    
public:
    ATresGumiShipEnemyGenerator(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETresGumiShipEnemySpawnConditionType GetSubEnemySpawnConditionType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETresGumiShipEnemySpawnConditionType GetMainEnemySpawnConditionType() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void _OnSubSpawnConditionOtherEnemyGroupWipeOut(const FTresGumiShipEnemyGroupWipeOutData& rEnemyGroupWipeOutData);
    
    UFUNCTION(BlueprintCallable)
    void _OnSubSpawnConditionOtherEnemyGroupDisappear();
    
    UFUNCTION(BlueprintCallable)
    void _OnMainSpawnConditionOtherEnemyGroupWipeOut(const FTresGumiShipEnemyGroupWipeOutData& rEnemyGroupWipeOutData);
    
    UFUNCTION(BlueprintCallable)
    void _OnMainSpawnConditionOtherEnemyGroupDisappear();
    
    UFUNCTION(BlueprintCallable)
    void _OnLeaveEnemySpawnTriggerVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void _OnEnterEnemySpawnTriggerVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void _OnDisappearTriggerOtherEnemyGroupAppear();
    
};

