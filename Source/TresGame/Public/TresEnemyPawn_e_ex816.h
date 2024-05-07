#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyToyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "ETresPlayerSpecificActionID.h"
#include "EyeLookAtWork_e_ex816.h"
#include "UObject/NoExportTypes.h"
#include "BonePhysicsBlendRateDataList_e_ex816.h"
#include "ETresEnemyEyeType_e_ex816.h"
#include "TresEnemyPawn_e_ex816.generated.h"

class UTresAction1_e_ex816_Down;
class AActor;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex816 : public ATresEnemyToyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresAction1_e_ex816_Down> m_DownActionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_OverrideNavAgentHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpawnPointAvoidRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_SpawnPointAvoidOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DefaultPhysicsBlendRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DownPhysicsBlendRate;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FEyeLookAtWork_e_ex816 m_EyeLookAtWorks[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBonePhysicsBlendRateDataList_e_ex816> m_BonePhysicsBlendRateDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SlowPhysicsRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnablePhysicsAddImpluseAttackHit: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AttackHitPhysicsAddImpluse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnablePhysicsAddImpluseDamage: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DamagePhysicsAddImpluse;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_DebugStampTargetActor;
    
    ATresEnemyPawn_e_ex816(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetPhysicsBodyBlendRate(float InRate, float InterpTime);
    
    UFUNCTION(BlueprintCallable)
    void ResetPhysicsBodyBlendRate(float InterpTime);
    
    UFUNCTION()
    void OnPlayerSpecificAction(TEnumAsByte<ETresPlayerSpecificActionID> InActionID, int32 InSubID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDowned() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetLookAtBoneRot(TEnumAsByte<ETresEnemyEyeType_e_ex816> InEyeType) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetPhysicsBodyBlendRate(float InRate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetDownState();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetBonePhysicsBlendRate(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugResetPhysicsBodyBlendRate();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugResetBonePhysicsBlendRate();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEndDownState();
    
};

