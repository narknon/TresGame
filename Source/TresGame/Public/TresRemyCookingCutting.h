#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CuttingMainState.h"
#include "CuttingReloadType.h"
#include "TresRemyCookingBase.h"
#include "UObject/NoExportTypes.h"
#include "TresRemyCuttingFoodParam.h"
#include "RemyCookingGameState.h"
#include "RemyCookingCommand.h"
#include "TresRemyCookingCutting.generated.h"

class UParticleSystem;
class AStaticMeshActor;
class ATresRemyPawnBase;

UCLASS(Blueprintable)
class ATresRemyCookingCutting : public ATresRemyCookingBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ReloadSuccessParticleRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ReloadSuccessParticleOffsetRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresRemyPawnBase> KnifePawnRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FoodMassPawnLocationRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AStaticMeshActor> BowlStaticMeshActorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BowlStaticMeshActorLocationRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowFrameratePadBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowFramerateMouseBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FoodClusterParticleLocationRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FoodClusterParticleSpawningStartTimeRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FoodClusterParticleSpawningEndTimeRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReloadAnimSpeedNormalRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReloadAnimSpeedExcellentRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReloadExcellentEvalutionTimeRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresRemyCuttingFoodParam> FoodParamRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FoodSliceParamNameRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    CuttingReloadType ReloadType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresRemyPawnBase* m_pKnifePawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresRemyPawnBase* m_pFoodPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresRemyPawnBase* m_pPrevFoodPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* m_pFoodMassActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* m_pBowlActor;
    
public:
    ATresRemyCookingCutting(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void PushState(TEnumAsByte<RemyCookingGameState> State);
    
    UFUNCTION(BlueprintCallable)
    void PopState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReloadTimeSpending() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetReloadTimes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReloadJudgeTimer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetReloadCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<RemyCookingCommand> GetPlayerCommand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaterialMaxAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    CuttingMainState GetMainCurrentState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGameDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetFoodSliceNumList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentSliceNum() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeState(TEnumAsByte<RemyCookingGameState> State);
    
};

