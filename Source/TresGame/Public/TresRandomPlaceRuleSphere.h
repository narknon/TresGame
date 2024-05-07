#pragma once
#include "CoreMinimal.h"
#include "TresRandomPlaceRuleBase.h"
#include "TresLotterySpawnActorData.h"
#include "TresSnapData.h"
#include "TresRandomPlaceRuleSphere.generated.h"

class UTresRotatorRuleBase;

UCLASS(Blueprintable, EditInlineNew)
class UTresRandomPlaceRuleSphere : public UTresRandomPlaceRuleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresLotterySpawnActorData> SpawnActorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObjectSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresRotatorRuleBase* RotatorRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresSnapData SnapData;
    
    UTresRandomPlaceRuleSphere();
};

