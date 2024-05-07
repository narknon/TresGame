#pragma once
#include "CoreMinimal.h"
#include "TresHUDBase.h"
#include "TresHUDPhilharmonic.generated.h"

class UTresUIDataAsset;
class USoundBase;
class UTresUIManager;

UCLASS(Blueprintable, NonTransient)
class ATresHUDPhilharmonic : public ATresHUDBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIDataAsset* m_UIDataAssetPhilharmonic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TitleMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_PhilharmonicMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<USoundBase> m_BGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIManager* m_UIManager;
    
public:
    ATresHUDPhilharmonic(const FObjectInitializer& ObjectInitializer);
};

