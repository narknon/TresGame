#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "ETresEnemySetAppearMode.h"
#include "TresEnemyPawn_e_ex004.generated.h"

class USQEX_ParticleAttachDataAsset;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex004 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWaterSummon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bExternalWaterSummon;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Appear2_MoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Appear2_MoveDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Appear2_StopSpeedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Appear3_MoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Appear3_MoveDistMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Appear3_MoveDistMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Appear3_StopSpeedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Appear3_GravityRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ActionSteam_SteamTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_EffDataAsset;
    
    ATresEnemyPawn_e_ex004(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetDebugStateNo(int32 NO);
    
    UFUNCTION(BlueprintCallable)
    bool IsWaterSummon();
    
    UFUNCTION(BlueprintCallable)
    int32 GetWaterSummonNum();
    
    UFUNCTION(BlueprintCallable)
    int32 GetWarpCount();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDebugStateNo();
    
    UFUNCTION(BlueprintCallable)
    void ForcingCancelWaterSummon();
    
    UFUNCTION(BlueprintCallable)
    void DebugSetAppearState(TEnumAsByte<ETresEnemySetAppearMode> mode);
    
};

