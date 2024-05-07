#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresShopController.generated.h"

class USoundBase;
class UTresUIManager;
class ATresUIActor;
class UTresUIP_Shop;
class UPackage;
class UTresUIP_Subtitle;
class UTresUIGumiPartsDataAsset;

UCLASS(Blueprintable)
class UTresShopController : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIManager* m_UIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_Shop* m_Shop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_Subtitle* m_Subtitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresUIActor* m_UIActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundBase* m_VoiceAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPackage* m_LoadedActorPackage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIGumiPartsDataAsset* m_GumiPartsData;
    
public:
    UTresShopController();
};

