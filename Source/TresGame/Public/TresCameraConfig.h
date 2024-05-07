#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresCameraConfig.generated.h"

UCLASS(Blueprintable, Config=TresCameraConfig)
class UTresCameraConfig : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bAutoMoveRotationYawOnly: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bNoCollision: 1;
    
public:
    UTresCameraConfig();
};

