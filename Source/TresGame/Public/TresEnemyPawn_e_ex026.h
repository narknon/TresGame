#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "TresCoopColorSmokeInfo.h"
#include "TresEnemyPawn_e_ex026.generated.h"

class UTresReactorComponent;
class USQEX_ParticleAttachDataAsset;
class UParticleSystemComponent;
class ATresVehiclePawnSmallAirplane;
class ATresRailSlideActor;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex026 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_EffDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresRailSlideActor> m_ColorSmokeRailSlideActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresVehiclePawnSmallAirplane> m_SmallAirPlainData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresReactorComponent* m_Reactor;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FTresCoopColorSmokeInfo ColorSmokeInfo[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bAirFrightMission: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpawnCrashEffectTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DieBrake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RailLifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RailDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RailTangentScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RideMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RideAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RideAccelDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RideAccelTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresRailSlideActor* m_PrevPutRailSlideActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_ColorSmokeEffectCmp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresVehiclePawnSmallAirplane* m_SmallAirplane;
    
public:
    ATresEnemyPawn_e_ex026(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRideRailSlideActor() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableLongStunned();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableImmediatelyShakeOff();
    
    UFUNCTION(BlueprintCallable)
    void BP_StartSpread();
    
    UFUNCTION(BlueprintCallable)
    void BP_DebugSetBBDestination();
    
};

