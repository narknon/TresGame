#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ca901.generated.h"

class ATresEnemyJointActor_e_ca901;
class ASkeletalMeshActor;
class ATresEnemy_e_ex071_ValidateTargetVolume;
class USoundBase;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ca901 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresEnemyJointActor_e_ca901> m_JointActorAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresEnemyJointActor_e_ca901* m_pJointActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresEnemy_e_ex071_ValidateTargetVolume*> m_pValidateVolumes;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASkeletalMeshActor* m_ShipMeshActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_TentacleSummonsSoundData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PlayVoiceTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_RestraintJackSuccessSoundData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_RestraintOtherSuccessSoundData;
    
    ATresEnemyPawn_e_ca901(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void KillAllTentacle();
    
    UFUNCTION(BlueprintCallable)
    bool IsDuringWarp();
    
    UFUNCTION(BlueprintCallable)
    int32 GetExistTentacleNum();
    
    UFUNCTION(BlueprintCallable)
    void BP_DebugAllSpawnTentacle();
    
};

