#pragma once
#include "CoreMinimal.h"
#include "ETresDropItemID.h"
#include "BX901_RailSlideProjDropInfo.generated.h"

USTRUCT(BlueprintType)
struct FBX901_RailSlideProjDropInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresDropItemID m_DropPrize1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NumDropPrize1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresDropItemID m_DropPrize2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NumDropPrize2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresDropItemID m_DropItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DropItemRate;
    
    TRESGAME_API FBX901_RailSlideProjDropInfo();
};

