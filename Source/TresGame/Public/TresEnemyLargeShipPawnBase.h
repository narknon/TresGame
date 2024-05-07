#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyShipPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "ETresEnemyUniqueID.h"
#include "UObject/NoExportTypes.h"
#include "EEnemyLargeShipBase.h"
#include "TresEnemyLargeShipPawnBase.generated.h"

class UTresStaticMeshComponent;
class AActor;
class AStaticMeshActor;
class UParticleSystem;
class UParticleSystemComponent;
class UTresReactorComponent;
class ATresEnemyPawnBase;

UCLASS(Blueprintable)
class ATresEnemyLargeShipPawnBase : public ATresEnemyShipPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* m_PropsMeshOnBoard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> m_TemplateForOverlapCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AStaticMeshActor> m_TemplateOfBattleOnBoardCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_FireSparkParticleAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_FireSparkParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* m_CollMeshActorOnBoardBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresReactorComponent* m_ReactorComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableBattleOnBoard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableKillOtherShipsOnDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ShipSinkingStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ShipSinkingHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SuicideTime;
    
public:
    ATresEnemyLargeShipPawnBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TestBGOverlap(const FRotator& Rotation) const;
    
    UFUNCTION(BlueprintCallable)
    void SetEnableBattleOnBoard(bool Value);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnStepStartBattleOnBoard();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnStepSkip();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnStepRide();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnStepAnker();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnEnableRideOnShip();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSuicideTime() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceSetBattleOnBoardMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool EnableBattleOnBoard() const;
    
    UFUNCTION(BlueprintCallable)
    ATresEnemyPawnBase* BP_SpawnOtherShip(ETresEnemyUniqueID EnemyID, FVector Location, TEnumAsByte<EEnemyLargeShipBase::Type> RotType, bool bRequireCoreFacedToPlayer);
    
};

