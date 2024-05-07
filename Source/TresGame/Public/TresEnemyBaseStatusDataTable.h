#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresEnemyBaseStatusDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyBaseStatusDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_BaseHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_BaseExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_BaseAttackPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_BaseDefensePower;
    
    TRESGAME_API FTresEnemyBaseStatusDataTable();
};

