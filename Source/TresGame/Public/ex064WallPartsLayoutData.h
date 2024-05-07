#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "e_ex064_AnimParam.h"
#include "ex064WallPartsLayoutData.generated.h"

USTRUCT(BlueprintType)
struct Fex064WallPartsLayoutData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SelectWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_RandLocationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AnimIdle0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    Fe_ex064_AnimParam m_AnimIdleOptional1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    Fe_ex064_AnimParam m_AnimIdleOptional2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_SpawnList;
    
    TRESGAME_API Fex064WallPartsLayoutData();
};

