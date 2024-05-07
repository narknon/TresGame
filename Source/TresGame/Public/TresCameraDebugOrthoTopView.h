#pragma once
#include "CoreMinimal.h"
#include "TresCameraDebug.h"
#include "TresCameraDebugOrthoTopView.generated.h"

UCLASS(Blueprintable, Config=TresCameraDebugOrthoTopViewConfig)
class ATresCameraDebugOrthoTopView : public ATresCameraDebug {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_OrthoWidth;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_OrthoYaw;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_OrthoMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_OrthoTall;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_OrthoWidthIncrement;
    
public:
    ATresCameraDebugOrthoTopView(const FObjectInitializer& ObjectInitializer);
};

