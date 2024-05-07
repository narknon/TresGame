#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETresDebugMenuResourceType.h"
#include "TresDebugMenuCustomPart.generated.h"

class UTresDebugMenuObject;

USTRUCT(BlueprintType)
struct FTresDebugMenuCustomPart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresDebugMenuResourceType> m_ResourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ResourceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresDebugMenuObject> CustomClass;
    
    TRESGAME_API FTresDebugMenuCustomPart();
};

