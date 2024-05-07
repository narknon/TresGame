#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "ASValue.h"
#include "TresASProxyTresControlsFloatTexture.generated.h"

UCLASS(Blueprintable, NonTransient)
class UTresASProxyTresControlsFloatTexture : public UTresASProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FASValue> m_ComponentParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FASValue> m_FloatTextureCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FASValue> m_FloatTextureBGs;
    
public:
    UTresASProxyTresControlsFloatTexture();
};

