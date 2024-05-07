#pragma once
#include "CoreMinimal.h"
#include "ERaPuddingCommandType.h"
#include "TresRaPuddingCommand.generated.h"

USTRUCT(BlueprintType)
struct FTresRaPuddingCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaPuddingCommandType CommandType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PositionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastTime;
    
    TRESGAME_API FTresRaPuddingCommand();
};

