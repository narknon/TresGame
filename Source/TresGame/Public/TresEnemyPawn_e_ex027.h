#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex027.generated.h"

class UParticleSystem;
class AActor;
class UCurveFloat;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex027 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<TWeakObjectPtr<AActor>> m_ProjectileGeneratorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_WheelRotSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCurveFloat*> m_pro_WheelRotRateCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_PlayerBindReleaseEffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_PlayerBindReleaseEff;
    
public:
    ATresEnemyPawn_e_ex027(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWheelRotAlpha() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWheelRot() const;
    
    UFUNCTION(BlueprintCallable)
    FRotator GetSweepOutRot();
    
    UFUNCTION(BlueprintCallable)
    FVector GetSweepOutPos();
    
    UFUNCTION(BlueprintCallable)
    void BP_DebugSetDefaultPos();
    
};

