#pragma once
#include "CoreMinimal.h"
#include "TresBoneNames_e_ex011.generated.h"

USTRUCT(BlueprintType)
struct FTresBoneNames_e_ex011 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParentConnectBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChildConnectBoneName;
    
    TRESGAME_API FTresBoneNames_e_ex011();
};

