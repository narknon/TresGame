#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase_e_he90y.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_he902.generated.h"

UCLASS(Blueprintable)
class ATresEnemyPawn_e_he902 : public ATresEnemyPawnBase_e_he90y {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_LavaActorBBKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TornadoActorBBKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_LegFixBoneName_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_LegFixBoneName_R;
    
    ATresEnemyPawn_e_he902(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform BP_GetLegFixTransform_R() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform BP_GetLegFixTransform_L() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BP_GetLegFixRate_R() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BP_GetLegFixRate_L() const;
    
};

