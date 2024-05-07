#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "TresCoopDefinitionBase.generated.h"

UCLASS(Abstract, Blueprintable, NotPlaceable)
class UTresCoopDefinitionBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FInt32Interval m_JoinMemberRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ConcurrentExeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CooldownTime;
    
public:
    UTresCoopDefinitionBase();
};

