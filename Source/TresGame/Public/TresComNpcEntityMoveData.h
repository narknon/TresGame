#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresComNpcEntityMoveData.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcEntityMoveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_EntityName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ReplaceMovePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> m_MovePoints;
    
    TRESGAME_API FTresComNpcEntityMoveData();
};

