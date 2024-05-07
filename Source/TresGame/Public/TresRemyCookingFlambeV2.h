#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresRemyCookingBase.h"
#include "RemyCookingGameState.h"
#include "TresRemyCookingFlambeV2.generated.h"

class ATresRemyPawnBase;
class USQEX_ParticleAttachDataAsset;

UCLASS(Blueprintable)
class ATresRemyCookingFlambeV2 : public ATresRemyCookingBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresRemyPawnBase> PanPawnRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresRemyPawnBase> BottlePawnRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ATresRemyPawnBase>> FoodPawnRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* BrandyParticleAttachDataRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* FireParticleAttachDataRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* VaporParticleAttachDataRef;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresRemyPawnBase* m_pPanPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresRemyPawnBase* m_pBottlePawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresRemyPawnBase* m_pFoodPawn;
    
public:
    ATresRemyCookingFlambeV2(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void PushState(TEnumAsByte<RemyCookingGameState> State);
    
    UFUNCTION(BlueprintCallable)
    void PopState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaterialMaxAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGameDuration() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeState(TEnumAsByte<RemyCookingGameState> State);
    
};

