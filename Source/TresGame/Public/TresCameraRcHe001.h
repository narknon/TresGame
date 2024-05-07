#pragma once
#include "CoreMinimal.h"
#include "TresCameraRc.h"
#include "TresCameraRcHe001.generated.h"

UCLASS(Blueprintable)
class ATresCameraRcHe001 : public ATresCameraRc {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TargetEntityTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TargetEntityBoneName;
    
public:
    ATresCameraRcHe001(const FObjectInitializer& ObjectInitializer);
};

