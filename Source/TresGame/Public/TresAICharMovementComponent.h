#pragma once
#include "CoreMinimal.h"
#include "TresCharMovementComponent.h"
#include "Mercuna3DMovementInterface.h"
#include "Mercuna3DMovementProperties.h"
#include "TresAICharMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresAICharMovementComponent : public UTresCharMovementComponent, public IMercuna3DMovementInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMercuna3DMovementProperties MovementProperties;
    
public:
    UTresAICharMovementComponent();
    
    // Fix for true pure virtual functions not being implemented

    void SetRVOAvoidanceUID(int32 UID);

    int32 GetRVOAvoidanceUID();

    void SetRVOAvoidanceWeight(float Weight);

    float GetRVOAvoidanceWeight();

    FVector GetRVOAvoidanceOrigin();

    float GetRVOAvoidanceRadius();

    float GetRVOAvoidanceHeight();

    float GetRVOAvoidanceConsiderationRadius();

    FVector GetVelocityForRVOConsideration();

    int32 GetAvoidanceGroupMask();

    int32 GetGroupsToAvoidMask();

    int32 GetGroupsToIgnoreMask();
};

