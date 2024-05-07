#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresDebugData.generated.h"

class UPackage;

UCLASS(Blueprintable)
class UTresDebugData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPackage*> m_UPackage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_UObject;
    
    UTresDebugData();
};

