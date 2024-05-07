#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Pawn.h"
#include "TresGumiShipNotifyInterface.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipPawnBase.generated.h"

class UTresRootComponent;

UCLASS(Abstract, Blueprintable)
class ATresGumiShipPawnBase : public APawn, public ITresGumiShipNotifyInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresRootComponent* m_pRootComponent;
    
public:
    ATresGumiShipPawnBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetRootCollisionEnable(const bool bIn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetRotationAmout() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetRelativeRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRelativeLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetOldRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetOldLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMovementAmout() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

