#pragma once
#include "CoreMinimal.h"
#include "TresHUDBase.h"
#include "TresHUDMemoryArchive.generated.h"

class UTresUIDataAsset;
class USoundBase;
class UTresUIManager;

UCLASS(Blueprintable, NonTransient)
class ATresHUDMemoryArchive : public ATresHUDBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIDataAsset* m_UIDataAssetMemoryArchive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TitleMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_MemoryArchiveMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<USoundBase> m_BGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIManager* m_UIManager;
    
public:
    ATresHUDMemoryArchive(const FObjectInitializer& ObjectInitializer);
};

