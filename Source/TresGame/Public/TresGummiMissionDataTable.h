#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresGummiMissionRarity.h"
#include "ETresGummiMissionReleaseCondition.h"
#include "ETresItemDefGumiParts.h"
#include "ETresItemDefGumiMaterial.h"
#include "ETresItemDefGumiPattern.h"
#include "ETresItemDefGumiSticker.h"
#include "ETresItemDefGumiEtc.h"
#include "ETresItemDefGumiShipBP.h"
#include "TresGummiMissionDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresGummiMissionDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_nMemo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nDispIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGummiMissionRarity m_nRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_nTitleTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGummiMissionReleaseCondition m_nReleaseCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_nAfterConditionTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_nBeforeConditionTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_nAfterGetItemTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_nBeforeGetItemTextID;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_nMissionClearNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isHideClearNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresItemDefGumiParts m_nReward1;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint16 m_nReward1Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresItemDefGumiMaterial> m_nReward2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresItemDefGumiPattern> m_nReward3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresItemDefGumiSticker> m_nReward4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresItemDefGumiShipBP> m_nReward5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresItemDefGumiEtc> m_nReward6;
    
    TRESGAME_API FTresGummiMissionDataTable();
};

