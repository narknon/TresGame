#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresRemyActorBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresSharedFixedCameraParam.h"
#include "RemyCookingGameType.h"
#include "RemyGameState.h"
#include "TresRemyGameManager.generated.h"

class ATresRemyCookingBase;
class UCurveVector;
class UCurveFloat;
class ATresRemyPawnBase;
class USQEX_ParticleAttachDataAsset;
class ATresUIActor;
class ATresEventPawnBase;
class USQEXSEADMusic;
class AStaticMeshActor;
class UParticleSystemComponent;
class AActor;
class ATresRemyPawn;
class ATresRemyHUD;
class UTresRemyData;
class ATresRemyPlayerController;

UCLASS(Blueprintable)
class ATresRemyGameManager : public ATresRemyActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ATresRemyCookingBase>> CookingGameRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GameStartWaitFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresRemyPawnBase> HourglassPawnRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* HourglassSandParticleAttachDataRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* HourglassSandParticleCurveFloatRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* HourglassSandParticleCurveVectorARef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* HourglassSandParticleCurveVectorBRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresUIActor> MenuRemyActorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MenuRemyActorLocationRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RemyRatLocationOffsetRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RemyRatRotationOffsetRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresSharedFixedCameraParam FixedCameraInitialParamRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresSharedFixedCameraParam FixedCameraMenuStateParamRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlackBoxOpacityMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlackBoxDisappearanceSpeedRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LevelNamesForSwitchKitchenGrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CookAmountMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresEventPawnBase> ScroogeEventPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BGMSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USQEXSEADMusic*> BGMRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BGMFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDebugSkip;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName m_selectedRecipeKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_cookingTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresRemyCookingBase* m_pCurrentCooking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresEventPawnBase* m_pScroogeEventPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresUIActor* m_pMenuRemyActor;
    
public:
    ATresRemyGameManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void ShowGetMilestoneRewardUIMsg();
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedRecipeKey(FName Key);
    
    UFUNCTION(BlueprintCallable)
    void SetBlackBox(AStaticMeshActor* blackBoxActor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterStoveFireParicle(int32 KitchenGrade, UParticleSystemComponent* pParticle);
    
    UFUNCTION(BlueprintCallable)
    void RegisterHiddenActorInGame(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterEventPawn(ATresEventPawnBase* pEventPawn);
    
    UFUNCTION(BlueprintCallable)
    void PushState(TEnumAsByte<RemyGameState> State);
    
    UFUNCTION(BlueprintCallable)
    void ProcessWhenSkipMatinee();
    
    UFUNCTION(BlueprintCallable)
    void PopState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSelectedRecipeKey() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    RemyCookingGameType GetSelectedGameType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresRemyPawnBase* GetRemyRatPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresRemyPawn* GetPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresRemyHUD* GetHUD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTresRemyData* GetData() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<RemyGameState> GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresRemyCookingBase* GetCurrentCooking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresRemyPlayerController* GetController() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeState(TEnumAsByte<RemyGameState> State);
    
};

