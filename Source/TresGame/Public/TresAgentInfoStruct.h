#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAgentInfoStruct.generated.h"

class APawn;
class AActor;

USTRUCT(BlueprintType)
struct FTresAgentInfoStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APawn> AgentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AgentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AgentRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AgentHeight;
    
    TRESGAME_API FTresAgentInfoStruct();
};

