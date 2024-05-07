#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresComNpcActorInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTresComNpcActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ActorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_BodyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> m_ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MaxActorNum;
    
    TRESGAME_API FTresComNpcActorInfo();
};

