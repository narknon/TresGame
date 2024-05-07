#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEncountSpawnRequest.generated.h"

class AActor;
class ATresEncountVolume;

USTRUCT(BlueprintType)
struct TRESGAME_API FTresEncountSpawnRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> m_Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresEncountVolume* m_EncountVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_Groups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<AActor> m_Template;
    
    FTresEncountSpawnRequest();
};

