#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresUIWorldIconName.h"
#include "TresUIWorldIconNameDataAsset.generated.h"

UCLASS(Blueprintable)
class UTresUIWorldIconNameDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_WorldNameNameSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresUIWorldIconName> m_IconName;
    
public:
    UTresUIWorldIconNameDataAsset();
};

