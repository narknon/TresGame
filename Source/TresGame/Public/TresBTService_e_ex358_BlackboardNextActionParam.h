#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTService_e_ex358_BlackboardNextActionParam.generated.h"

UCLASS(Blueprintable)
class UTresBTService_e_ex358_BlackboardNextActionParam : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_NextActionBlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_bIsAppearAirBlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_AppearDistanceBlackboardKey;
    
    UTresBTService_e_ex358_BlackboardNextActionParam();
};

