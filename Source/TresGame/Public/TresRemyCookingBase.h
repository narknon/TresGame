#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "RemyFPSMode.h"
#include "RemyStickControlType.h"
#include "UObject/NoExportTypes.h"
#include "RemyShowFinishOperationUITiming.h"
#include "RemyCookingEvalution.h"
#include "RemyCookingGameState.h"
#include "RemyCookingEvaluationResult.h"
#include "TresRemyCookingBase.generated.h"

class UForceFeedbackEffect;
class UParticleSystem;
class ATresCameraEmitterLensEffect;
class UTresRemyTaskBase;
class ATresRemyPawnBase;

UCLASS(Abstract, Blueprintable)
class ATresRemyCookingBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    RemyFPSMode FPSModeRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    RemyStickControlType StickControlTypeRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* InputSuccessParticleRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InputSuccessParticleOffsetRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* GasStoveFireEffectRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ATresCameraEmitterLensEffect>> SuccessLensEffectsRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCameraEmitterLensEffect> GreatSuccessLensEffectRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* GreatSuccessBGEffectRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GreatSuccessBGFrontEffectAlphaRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* SuccessForceFeedbackEffectRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* GreatSuccessForceFeedbackEffectRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    RemyShowFinishOperationUITiming ShowFinishOperationUITiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresRemyTaskBase> TaskClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresRemyTaskBase* m_pTaskByPC;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresRemyPawnBase* m_pHourglassPawn;
    
public:
    ATresRemyCookingBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void TT_PrintStringVector(const FString& Name, const FVector& Value);
    
    UFUNCTION(BlueprintCallable)
    void TT_PrintStringInt(const FString& Name, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void TT_PrintStringFloat(const FString& Name, float Value);
    
    UFUNCTION(BlueprintCallable)
    void PushState(TEnumAsByte<RemyCookingGameState> State);
    
    UFUNCTION(BlueprintCallable)
    void PopState();
    
    UFUNCTION(BlueprintCallable)
    RemyStickControlType GetStickControlType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMouseY();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMouseX();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaterialPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaterialMaxAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaterialAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGameDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    RemyCookingEvaluationResult GetEvaluationResult() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<RemyCookingEvalution> GetEvaluation() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<RemyCookingGameState> GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeState(TEnumAsByte<RemyCookingGameState> State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIE_Tick(float DeltaSeconds);
    
};

