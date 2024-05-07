#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MercunaQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryTest_Mercuna_Project.generated.h"

class UEnvQueryContext;

UCLASS()
class MERCUNA_API UEnvQueryTest_Mercuna_Project : public UMercunaQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FAIDataProviderFloatValue MaxSearchRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TSubclassOf<UEnvQueryContext> Context;
    
    UEnvQueryTest_Mercuna_Project();
};

