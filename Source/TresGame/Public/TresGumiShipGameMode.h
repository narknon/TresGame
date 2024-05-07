#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresGameModeBase.h"
#include "TresGumiShipGameMode.generated.h"

class USoundBase;
class UTresGummiEditorDataTableSet;
class ATresGummiMenuManager;
class UTresGumiShipAtkCollisionMgr;
class ATresEventGameOverPawnBase;
class ATresWorldMapCameraActor;
class UTresGumiShipBodyCollisionMgr;
class UTresGumiShipDefCollisionMgr;
class UTresGameTimerManagerComponent;
class UTresGumiShipWeaponManager;
class UTresGumiShipProjectileFactory;
class UTresGumiShipLockonPrimitiveManager;
class UTresDistanceCalculateManagerComponent;
class UTresGumiShipGlobalEnemyManager;
class UTresGumiShipGlobalGameDataSet;
class ATresGumiShipBattleVolume;
class ATresGumiShipPrizeItem;
class ATresGumiShipEnemyBattleStarter;
class UTresGumiShipMissionMgr;
class UTresGumiShipGumiMissionManager;
class UTresGumiShipRaderEntityManager;

UCLASS(Blueprintable, NonTransient)
class ATresGumiShipGameMode : public ATresGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_pFieldBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_pNormalBattleBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_pBossBattleBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_pBattleResultBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_pHudSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresGummiEditorDataTableSet* m_pEditorDataSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageMaterialIntensityParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageMaterialBlinkSpeedParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageMaterialApplyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresGummiMenuManager> GummiMenuManagerRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresWorldMapCameraActor> WorldMapCameraActorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresEventGameOverPawnBase> m_GameOverPawn;
    
private:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresGumiShipAtkCollisionMgr* m_pAtkCollisionMgr;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresGumiShipBodyCollisionMgr* m_pBodyCollisionMgr;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresGumiShipDefCollisionMgr* m_pDefCollisionMgr;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresGumiShipWeaponManager* m_pWeaponMgr;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresGumiShipProjectileFactory* m_pProjectileMgr;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresGumiShipLockonPrimitiveManager* m_pLockonPrimitiveMgr;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresGameTimerManagerComponent* m_pGenericTimerManager;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresGameTimerManagerComponent* m_pTimerManagerForLevelOnly;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresDistanceCalculateManagerComponent* m_pDistanceCalculateManager;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresGumiShipGlobalEnemyManager* m_pGlobalEnemyManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresGumiShipGlobalGameDataSet* m_pGlobalGameDataSet;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresGumiShipBattleVolume* m_pActiveBattleVolume;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresGumiShipPrizeItem* m_pGlobalPrizeManager;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresGumiShipEnemyBattleStarter* m_pCurrentEnemyBattleStarter;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresGumiShipMissionMgr* m_pMissionMgr;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresGumiShipGumiMissionManager* m_pGumiMissionMgr;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresGumiShipRaderEntityManager* m_pRaderEntityMgr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresGummiMenuManager* m_pGummiMenuManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresWorldMapCameraActor* m_pWorldMapCameraActor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LoadComplete;
    
    ATresGumiShipGameMode(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void RefleshGuideMarkerArea();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresWorldMapCameraActor* GetWorldMapCameraActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresGummiMenuManager* GetGummiMenuManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTresGumiShipGumiMissionManager* GetGumiMissionMgr() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresGumiShipPrizeItem* GetGlobalPrizeManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresGumiShipEnemyBattleStarter* GetCurrentEnemyBattleStarter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresGumiShipBattleVolume* GetActiveBattleVolume() const;
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void _OnOverlapedGuideVolume();
    
};

