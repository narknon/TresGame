#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TCHE02WALL_PARAM.generated.h"

class UCameraShake;

USTRUCT(BlueprintType)
struct FTCHE02WALL_PARAM {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShake> CameraShake;
    
    TRESGAME_API FTCHE02WALL_PARAM();
};

