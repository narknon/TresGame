#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETresStateID.h"
#include "TresStateAsset.generated.h"

class UTresStateBase;

USTRUCT(BlueprintType)
struct FTresStateAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresStateBase> MyStateClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MyStateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresStateID> MyStateID;
    
    TRESGAME_API FTresStateAsset();
};

