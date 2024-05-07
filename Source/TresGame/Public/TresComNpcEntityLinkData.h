#pragma once
#include "CoreMinimal.h"
#include "TresComNpcEntityLinkData.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcEntityLinkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_EntityName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_LinkActors;
    
    TRESGAME_API FTresComNpcEntityLinkData();
};

