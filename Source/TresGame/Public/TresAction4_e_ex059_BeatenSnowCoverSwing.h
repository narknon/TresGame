#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAction4_e_ex059_BeatenSnowCoverSwing.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction4_e_ex059_BeatenSnowCoverSwing : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AccelSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_WarpOffsetLocation;
    
public:
    UTresAction4_e_ex059_BeatenSnowCoverSwing();
};

