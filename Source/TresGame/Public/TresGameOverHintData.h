#pragma once
#include "CoreMinimal.h"
#include "ETresGameOverHintSpecialType.h"
#include "Engine/DataTable.h"
#include "TresUIGameFlagData.h"
#include "EGameOverHintType.h"
#include "ETresWorldCode.h"
#include "TresGameOverHintEnemyInfo.h"
#include "ETresUIDataVersion.h"
#include "TresGameOverHintData.generated.h"

USTRUCT(BlueprintType)
struct FTresGameOverHintData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HintNameLocSpaceKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameOverHintType HintType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresWorldCode> WorldCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresUIGameFlagData StartGameFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresUIGameFlagData EndGameFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresGameOverHintEnemyInfo> EnemyInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGameOverHintSpecialType SpecialType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresUIDataVersion Version;
    
    TRESGAME_API FTresGameOverHintData();
};

