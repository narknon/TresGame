#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyAvatarAttackAppearLocation_e_ex358.h"
#include "TresAvatarAttackLocationTypeParam_e_ex358.generated.h"

USTRUCT(BlueprintType)
struct FTresAvatarAttackLocationTypeParam_e_ex358 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEnemyAvatarAttackAppearLocation_e_ex358::Type> LocationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    TRESGAME_API FTresAvatarAttackLocationTypeParam_e_ex358();
};

