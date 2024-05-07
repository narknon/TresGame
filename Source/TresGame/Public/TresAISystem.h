#pragma once
#include "CoreMinimal.h"
#include "AISystem.h"
#include "TresAISystem.generated.h"

class UTresInfluenceMapManager;
class UTresStaticEQSItemManager;

UCLASS(Blueprintable)
class UTresAISystem : public UAISystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresInfluenceMapManager* m_InfluenceMapManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresStaticEQSItemManager* m_StaticEQSItemManager;
    
public:
    UTresAISystem(const FObjectInitializer& ObjectInitializer);
};

