#pragma once
#include "CoreMinimal.h"
#include "TresUIP_MobilePortalApp.h"
#include "TresUIP_MobileRecipe.generated.h"

class UTresASProxyTresControlsList;
class UGFxObject;
class UTresASProxyTresControlsIcon;

UCLASS(Blueprintable)
class UTresUIP_MobileRecipe : public UTresUIP_MobilePortalApp {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsList* m_CuisineList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ThumbnailAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsIcon* m_ThumbnailIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_SuccessCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_GreatSuccessCount;
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_FoodSet[7];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_FoodText[7];
    
public:
    UTresUIP_MobileRecipe();
};

