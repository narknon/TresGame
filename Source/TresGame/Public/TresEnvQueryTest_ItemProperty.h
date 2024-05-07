#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "ETresEnvQueryTestItemPropertySource.h"
#include "TresEnvQueryTest_ItemProperty.generated.h"

UCLASS(Blueprintable)
class UTresEnvQueryTest_ItemProperty : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEnvQueryTestItemPropertySource::Type> m_ValueType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_PropertyName;
    
    UTresEnvQueryTest_ItemProperty();
};

