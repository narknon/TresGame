#pragma once
#include "CoreMinimal.h"
#include "TresWildDanceAppearParam_e_ex358.h"
#include "TresWildDanceOneActionParam_e_ex358.h"
#include "TresWildDanceAllActionParam_e_ex358.generated.h"

USTRUCT(BlueprintType)
struct FTresWildDanceAllActionParam_e_ex358 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresWildDanceAppearParam_e_ex358 AppearParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresWildDanceOneActionParam_e_ex358> ActionList;
    
    TRESGAME_API FTresWildDanceAllActionParam_e_ex358();
};

