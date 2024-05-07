#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "AI/RVOAvoidanceInterface.h"
#include "AI/Navigation/NavigationAvoidanceTypes.h"
#include "TresGimmickObstacleComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGimmickObstacleComponent : public UPrimitiveComponent, public IRVOAvoidanceInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bManual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AvoidanceConsiderationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavAvoidanceMask m_AvoidanceGroup;
    
public:
    UTresGimmickObstacleComponent();
    
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

