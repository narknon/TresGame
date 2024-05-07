#pragma once
#include "CoreMinimal.h"
#include "TresAvatarAttackAppearParam_e_ex358.h"
#include "TresAvatarAttackParam_e_ex358.generated.h"

class UWildDanceActionParamBase_e_ex358;

USTRUCT(BlueprintType)
struct FTresAvatarAttackParam_e_ex358 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWildDanceActionParamBase_e_ex358* ActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresAvatarAttackAppearParam_e_ex358> AppearParamList;
    
    TRESGAME_API FTresAvatarAttackParam_e_ex358();
};

