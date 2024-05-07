#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex013.generated.h"

class USQEX_ParticleAttachDataAsset;
class UCurveFloat;
class ATresEnemyPawn_e_ex012;

UCLASS(Blueprintable)
class TRESGAME_API ATresEnemyPawn_e_ex013 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFluff;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_InvisibleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_InvisibleTime2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_EffDataAsset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_PropellerRotMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_PropellerStCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_PropellerEndCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_pro_SporePossibleCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_pro_ChildHeadDefRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresEnemyPawn_e_ex012* m_CoopDummyPawn;
    
public:
    ATresEnemyPawn_e_ex013(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void StartCooperationEvent();
    
    UFUNCTION(BlueprintCallable)
    bool IsSpore();
    
    UFUNCTION(BlueprintCallable)
    bool IsFluff();
    
    UFUNCTION(BlueprintCallable)
    bool IsCooperation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPropellerRotRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPropellerRot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPropellerKoshiRot() const;
    
};

