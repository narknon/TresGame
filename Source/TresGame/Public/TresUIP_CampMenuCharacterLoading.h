#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresUIP_CampMenuCharacterLoading.generated.h"

class UGFxObject;
class UTresASProxyTresControlsIcon;

UCLASS(Blueprintable, NonTransient)
class UTresUIP_CampMenuCharacterLoading : public UTresASProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_Chara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsIcon* m_CharaIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_CharaLoadAnm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_CharaLoad;
    
public:
    UTresUIP_CampMenuCharacterLoading();
};

