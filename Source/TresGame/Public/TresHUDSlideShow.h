#pragma once
#include "CoreMinimal.h"
#include "TresHUDBase.h"
#include "TresHUDSlideShow.generated.h"

class UTresUIDataAssetSlideShow;
class UTresUIP_SlideShow;
class USoundBase;

UCLASS(Blueprintable, NonTransient)
class ATresHUDSlideShow : public ATresHUDBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIDataAssetSlideShow* m_UIDataAssetSlideShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_SlideShow* m_pSlideShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundBase* m_pSlideBgm;
    
public:
    ATresHUDSlideShow(const FObjectInitializer& ObjectInitializer);
};

