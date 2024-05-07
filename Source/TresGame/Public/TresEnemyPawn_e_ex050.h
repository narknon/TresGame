#pragma once
#include "CoreMinimal.h"
#include "TresEx050EffectInfo.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "ETresEx050PuddingType.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex050.generated.h"

class ATresAttractionPawnTeaCup;
class UParticleSystem;
class ASQEX_SplineActor;
class UTresSkeletalMeshComponent;
class UTresStaticMeshComponent;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex050 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresEx050PuddingType m_Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<ASQEX_SplineActor> m_wpSplineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEx050EffectInfo m_PileSuccessfulEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEx050EffectInfo> m_BallonBreakEffectArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pHitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEx050EffectInfo m_StrawberryApperEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StrawberrySize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StrawberryFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_BallonFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDefaultStopAI;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UTresSkeletalMeshComponent> m_wpBalloon;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UTresStaticMeshComponent> m_wpStrawberry;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ATresAttractionPawnTeaCup> m_wpTeaCup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector m_OldActorLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator m_OldStrawberryRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_TeaCupHitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bRegistered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bRequestDie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_FadeElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_FadeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bDoFade;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<UMaterialInstanceDynamic> m_wpStrawberryDM1;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<UMaterialInstanceDynamic> m_wpStrawberryDM2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bNotifyStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bDisableRailMove;
    
public:
    ATresEnemyPawn_e_ex050(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyDecScore();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyAddScore();
    
    UFUNCTION(BlueprintCallable)
    float GetTeaCupHitTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETresEx050PuddingType GetPuddingType() const;
    
};

