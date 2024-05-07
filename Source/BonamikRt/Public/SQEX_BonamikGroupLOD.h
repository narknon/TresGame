#pragma once
#include "CoreMinimal.h"
#include "SQEX_BonamikGroupLOD.generated.h"

USTRUCT(BlueprintType)
struct BONAMIKRT_API FSQEX_BonamikGroupLOD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> Groups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PrerollTime;
    
    FSQEX_BonamikGroupLOD();
};

