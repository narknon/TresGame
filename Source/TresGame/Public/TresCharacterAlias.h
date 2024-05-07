#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresCharacterAlias.generated.h"

UCLASS(Blueprintable)
class UTresCharacterAlias : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> m_AliasMap;
    
public:
    UTresCharacterAlias();
};

