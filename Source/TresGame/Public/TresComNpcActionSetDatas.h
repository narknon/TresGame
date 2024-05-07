#pragma once
#include "CoreMinimal.h"
#include "TresComNpcActionSetValue.h"
#include "TresComNpcActionSetDatas.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcActionSetDatas {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DataName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDropItem: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bTargetTurn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresComNpcActionSetValue> m_Values;
    
    TRESGAME_API FTresComNpcActionSetDatas();
};

