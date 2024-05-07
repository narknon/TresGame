#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Mercuna3DMovementInterface.h"
#include "UObject/NoExportTypes.h"
#include "Mercuna3DMovementProperties.h"
#include "Mercuna3DMovementComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MERCUNA3DMOVEMENT_API UMercuna3DMovementComponent : public UPawnMovementComponent, public IMercuna3DMovementInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FMercuna3DMovementProperties MovementProperties;
    
    UPROPERTY(Transient)
    uint32 bPositionCorrected: 1;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FVector Acceleration;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FVector AngularVelocity;
    
public:
    UMercuna3DMovementComponent();
    UFUNCTION(BlueprintPure)
    FVector GetLocalVelocity() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

