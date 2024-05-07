#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresComNpcActionPoint.generated.h"

UCLASS(Blueprintable)
class TRESGAME_API ATresComNpcActionPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_PointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_LinkPoints;
    
    ATresComNpcActionPoint(const FObjectInitializer& ObjectInitializer);
};

