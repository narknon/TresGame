#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresNavMapVolume.generated.h"

UCLASS(Blueprintable)
class ATresNavMapVolume : public ATresVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DataTableKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_EnableNavMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SwitchNavMapTime;
    
public:
    ATresNavMapVolume(const FObjectInitializer& ObjectInitializer);
};

