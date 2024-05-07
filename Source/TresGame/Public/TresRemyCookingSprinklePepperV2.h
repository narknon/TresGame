#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresRemyCookingBase.h"
#include "UObject/NoExportTypes.h"
#include "SprinklePepperV2InputType.h"
#include "SprinklePepperV2InputJudgementType.h"
#include "UObject/NoExportTypes.h"
#include "RemyCookingGameState.h"
#include "SprinklePepperV2InputTimingEvalution.h"
#include "SprinklePepperV2MainState.h"
#include "TresRemyCookingSprinklePepperV2.generated.h"

class ATresRemyPawnBase;
class AStaticMeshActor;
class USQEX_ParticleAttachDataAsset;
class UParticleSystem;
class AActor;

UCLASS(Blueprintable)
class ATresRemyCookingSprinklePepperV2 : public ATresRemyCookingBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresRemyPawnBase> PepperMillPawnRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AStaticMeshActor> SaucepanStaticMeshActorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AStaticMeshActor> PanStaticMeshActorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresRemyPawnBase> BowlPawnRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> EquipmentLocationRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRotator> EquipmentRotationRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AStaticMeshActor>> ContensActorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> ContensLocationRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* PepperParticleSuccessAttachDataRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* PepperParticleGreatSuccessAttachDataRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PepperSpawningTimeSuccessRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PepperSpawningTimeGreatSuccessRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* VaporParticleRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SaucepanVaporParticleLocationRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PanVaporParticleLocationRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* GlitterParticleRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> GlitterParticleLocationRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlitterParticleSpawningWaitTimeRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    SprinklePepperV2InputJudgementType InputJudgementTypeRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    SprinklePepperV2InputType InitialInputTypeRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* InputGreatSuccessParticleAttachDataRef;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresRemyPawnBase* m_pPepperMillPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_pEquipmentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* m_pContentsActor;
    
public:
    ATresRemyCookingSprinklePepperV2(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void PushState(TEnumAsByte<RemyCookingGameState> State);
    
    UFUNCTION(BlueprintCallable)
    void PopState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaterialMaxAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    SprinklePepperV2MainState GetMainCurrentState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    SprinklePepperV2InputType GetInputType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    SprinklePepperV2InputTimingEvalution GetInputTimingEvalution() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInputTimer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInputGraceTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGameDuration() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeState(TEnumAsByte<RemyCookingGameState> State);
    
};

