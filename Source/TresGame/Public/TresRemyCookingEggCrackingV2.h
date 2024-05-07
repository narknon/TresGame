#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresRemyCookingBase.h"
#include "EggCrackingV2MainState.h"
#include "EggCrackingV2AnimationType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EggCrackingV2MaterialAmountIncreaseType.h"
#include "RemyCookingGameState.h"
#include "TresRemyCookingEggCrackingV2.generated.h"

class ATresCameraEmitterLensEffect;
class ATresRemyPawnBase;
class AStaticMeshActor;
class USQEX_ParticleAttachDataAsset;
class UForceFeedbackEffect;

UCLASS(Blueprintable)
class ATresRemyCookingEggCrackingV2 : public ATresRemyCookingBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EggCrackingV2AnimationType AnimationTypeRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresRemyPawnBase> EggUpPawnRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresRemyPawnBase> EggDownPawnRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresRemyPawnBase> EggInnerPawnRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresRemyPawnBase> EggBowlPawnRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AStaticMeshActor> EggBowlStaticMeshActorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EggBowlStaticMeshActorLocationRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator EggBowlStaticMeshActorRotationRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCameraEmitterLensEffect> TooManyLensEffectRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* TooManyEggParticleAttachDataRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* TooManyForceFeedbackEffectRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCrackTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EggCrackingV2MaterialAmountIncreaseType MaterialAmountIncreaseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsObserveTooManyEvalution;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresRemyPawnBase* m_pEggUpPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresRemyPawnBase* m_pEggDownPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresRemyPawnBase* m_pEggInnerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresRemyPawnBase* m_pEggBowlPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* m_pEggBowlActor;
    
public:
    ATresRemyCookingEggCrackingV2(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void PushState(TEnumAsByte<RemyCookingGameState> State);
    
    UFUNCTION(BlueprintCallable)
    void PopState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxCrackTimes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaterialMaxAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EggCrackingV2MainState GetMainCurrentState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGameDuration() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeState(TEnumAsByte<RemyCookingGameState> State);
    
};

