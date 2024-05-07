#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MissionIntervalParam_e_ex082.h"
#include "TresUserDataObject_e_ex082.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UTresUserDataObject_e_ex082 : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ModeChangeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionIntervalParam_e_ex082 m_IntervalParam;
    
    UTresUserDataObject_e_ex082();
};

