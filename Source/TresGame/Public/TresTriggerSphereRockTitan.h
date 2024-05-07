#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerSphere.h"
#include "TresTriggerSphereRockTitan.generated.h"

class ATresPawnBase;

UCLASS(Blueprintable, Config=Game)
class ATresTriggerSphereRockTitan : public ATriggerSphere {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresPawnBase* m_LinkPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DetectTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TimerInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SendParam1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SendParam2;
    
    ATresTriggerSphereRockTitan(const FObjectInitializer& ObjectInitializer);
};

