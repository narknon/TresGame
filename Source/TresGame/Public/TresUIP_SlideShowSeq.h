#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresUIP_SlideShowSeq.generated.h"

class UTresASProxyTresControlsIcon;

UCLASS(Blueprintable, NonTransient)
class UTresUIP_SlideShowSeq : public UTresASProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsIcon* m_pPhotoIcon;
    
public:
    UTresUIP_SlideShowSeq();
};

