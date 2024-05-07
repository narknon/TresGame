#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex021a.generated.h"

class ATresProjectileBase;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex021a : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_ShotgunFireProjectile;
    
    ATresEnemyPawn_e_ex021a(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator BP_GetAnimOffsetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BP_GetAnimOffsetAlpha() const;
    
};

