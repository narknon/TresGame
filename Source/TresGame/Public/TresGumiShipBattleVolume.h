#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGimmickActorBase.h"
#include "ETresGumiShipBattleAreaState.h"
#include "TresGumiShipEnemyGroupWipeOutData.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipBattleVolume.generated.h"

class USphereComponent;
class ATresGumiShipEnemyGenerator;
class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable)
class ATresGumiShipBattleVolume : public ATresGumiShipGimmickActorBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyGroupWipeOutSignature, const FTresGumiShipEnemyGroupWipeOutData&, EnemyGroupWipeOutData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FBattleVolumeCollisionSignature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAllEnemyGroupWipeOutSignature);
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleVolumeCollisionSignature _OnBattleAreaBeginOverlap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleVolumeCollisionSignature _OnBattleAreaEndOverlap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleVolumeCollisionSignature _OnEnemySpawnAreaBeginOverlap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleVolumeCollisionSignature _OnEnemySpawnAreaEndOverlap;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyGroupWipeOutSignature OnEnemyGroupWipeOutInBattleArea;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAllEnemyGroupWipeOutSignature OnAllEnemyGroupWipeOutInBattleArea;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEnemySpawnAreaRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEnemyDisappearTriggerRadiusRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fNeedEnemyDisappearTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresGumiShipEnemyGenerator*> m_EnemyGeneratorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* m_pEnemySpawnAreaCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* m_pBattleAreaCollision;
    
public:
    ATresGumiShipBattleVolume(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttachedMercunaNavVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnemySpawnAreaRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETresGumiShipBattleAreaState GetBattleAreaState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBattleAreaRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBattleAreaCenterPosition() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void _OnLeaveEnemySpawnArea(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void _OnLeaveBattleArea(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void _OnEnterEnemySpawnArea(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void _OnEnterBattleArea(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void _OnEnemyGroupWipeOut(const FTresGumiShipEnemyGroupWipeOutData& rEnemyGroupWipeOutData);
    
};

