#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraTargetInfo.generated.h"

class AActor;
class UTresLockonTargetComponent;

USTRUCT(BlueprintType)
struct FTresCameraTargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_TargetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_TargetLocalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresLockonTargetComponent* m_TargetComp;
    
    TRESGAME_API FTresCameraTargetInfo();
};

