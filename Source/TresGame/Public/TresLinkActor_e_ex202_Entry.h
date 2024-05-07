#pragma once
#include "CoreMinimal.h"
#include "TresLinkActor_e_ex202_Base.h"
#include "TresLinkActor_e_ex202_Entry.generated.h"

class USplineComponent;
class ATresLinkActor_e_ex202_Exit;

UCLASS(Blueprintable)
class ATresLinkActor_e_ex202_Entry : public ATresLinkActor_e_ex202_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<ATresLinkActor_e_ex202_Exit> m_ExitActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Angle;
    
public:
    ATresLinkActor_e_ex202_Entry(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUse() const;
    
};

