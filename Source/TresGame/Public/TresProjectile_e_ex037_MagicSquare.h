#pragma once
#include "CoreMinimal.h"
#include "TresProjectileSkeletalMeshBase.h"
#include "TresProjectile_e_ex037_MagicSquare.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex037_MagicSquare : public ATresProjectileSkeletalMeshBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MoveRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_HoveringHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_HoveringSpeedRate;
    
    ATresProjectile_e_ex037_MagicSquare(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHoveringZ() const;
    
};

