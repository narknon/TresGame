#pragma once
#include "CoreMinimal.h"
#include "TresShotParam_e_ex701_DarkCloud.generated.h"

USTRUCT(BlueprintType)
struct FTresShotParam_e_ex701_DarkCloud {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SideOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrontOffset;
    
    TRESGAME_API FTresShotParam_e_ex701_DarkCloud();
};

