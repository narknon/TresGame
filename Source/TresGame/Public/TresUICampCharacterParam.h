#pragma once
#include "CoreMinimal.h"
#include "TresUICampCharacterParam.generated.h"

class UTresUIDataAssetStatus;
class ATresUIActor;

USTRUCT(BlueprintType)
struct FTresUICampCharacterParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresUIActor* UIActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIDataAssetStatus* UIStatusData;
    
    TRESGAME_API FTresUICampCharacterParam();
};

