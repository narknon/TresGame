#pragma once
#include "CoreMinimal.h"
#include "GUMI_SHIP_GIMMICK_TREASURE_STATE.h"
#include "TresGumiShipGimmickObjectBase.h"
#include "GUMI_SHIP_GIMMICK_PLAYER_MODE.h"
#include "TresGumiShipDropPrizeData.h"
#include "ETresGumiShipTreasureSphereID.h"
#include "Engine/LatentActionManager.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "GUMI_SHIP_TREASURE_STATE.h"
#include "TresGumiShipGimmickTreasure.generated.h"

class UCameraComponent;
class ATresGumiShipRailSlideArrangement;
class UDataTable;
class UObject;
class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable)
class TRESGAME_API ATresGumiShipGimmickTreasure : public ATresGumiShipGimmickObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_GimmickTreasureDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresGumiShipRailSlideArrangement* m_Arrangement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* m_pTreasureCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipDropPrizeData m_DropPrizeSettingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipTreasureSphereID m_WorldMapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DataTableName;
    
public:
    ATresGumiShipGimmickTreasure(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void GumiShip_Debug_ForcedTermination_TreasureSphere();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool _SetPlayEventMode(GUMI_SHIP_GIMMICK_PLAYER_MODE _mode);
    
public:
    UFUNCTION(BlueprintCallable)
    bool _SetPlayerPos();
    
protected:
    UFUNCTION(BlueprintCallable)
    void _SetCorePartsLoops(const UObject* worldContextObject_, FLatentActionInfo latentInfo_, float pos);
    
    UFUNCTION(BlueprintCallable)
    void _PlayRailSlid(const UObject* worldContextObject_, FLatentActionInfo latentInfo_);
    
public:
    UFUNCTION(BlueprintCallable)
    void _OnOverlapBegin(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 dOtherBodyIndex, bool bFromSweep, const FHitResult& rSweepResult);
    
    UFUNCTION(BlueprintCallable)
    void _OnHitTreasure(UPrimitiveComponent* pHitComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector vNormalImpulse, const FHitResult& rHit);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool _IsStateEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool _IsShotCore();
    
    UFUNCTION(BlueprintCallable)
    bool _InitRailSlid();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    GUMI_SHIP_TREASURE_STATE _GetState();
    
    UFUNCTION(BlueprintCallable)
    GUMI_SHIP_GIMMICK_TREASURE_STATE _GetRailSlidResult();
    
    UFUNCTION(BlueprintCallable)
    void _ChangeState(GUMI_SHIP_TREASURE_STATE StateID);
    
    UFUNCTION(BlueprintCallable)
    void _AddCorePartsLoops(const UObject* worldContextObject_, FLatentActionInfo latentInfo_, float Speed, float Time);
    
};

