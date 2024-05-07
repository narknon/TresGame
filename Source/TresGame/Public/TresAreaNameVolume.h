#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresAreaNameVolume.generated.h"

UCLASS(Blueprintable)
class ATresAreaNameVolume : public ATresVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DataTableKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_EnableAreaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_ShowAreaNameUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_EnableNavMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SwitchNavMapTime;
    
public:
    ATresAreaNameVolume(const FObjectInitializer& ObjectInitializer);
};

