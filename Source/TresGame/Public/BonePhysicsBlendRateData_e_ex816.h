#pragma once
#include "CoreMinimal.h"
#include "BonePhysicsBlendRateData_e_ex816.generated.h"

USTRUCT(BlueprintType)
struct FBonePhysicsBlendRateData_e_ex816 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicsBlendRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartInterpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndInterpTime;
    
    TRESGAME_API FBonePhysicsBlendRateData_e_ex816();
};

