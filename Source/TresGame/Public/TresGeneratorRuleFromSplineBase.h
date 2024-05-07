#pragma once
#include "CoreMinimal.h"
#include "TresSpawnActorDataForGenerator.h"
#include "UObject/Object.h"
#include "TresGeneratorRuleFromSplineBase.generated.h"

class ATresStaticActorGeneratorFromSplineSimple;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UTresGeneratorRuleFromSplineBase : public UObject {
    GENERATED_BODY()
public:
    UTresGeneratorRuleFromSplineBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FTresSpawnActorDataForGenerator> GetDataArray(ATresStaticActorGeneratorFromSplineSimple* Parent);
    
};

