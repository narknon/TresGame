#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresDlcCheatAchievementID.h"
#include "TresUIGameFlagData.h"
#include "ETresWorldCode.h"
#include "TresCodeMenuCheatAchievementData.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FTresCodeMenuCheatAchievementData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresDlcCheatAchievementID m_Code;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_NameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_DetailId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<UTexture> m_IconAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresUIGameFlagData GameFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresWorldCode> WorldCode;
    
    TRESGAME_API FTresCodeMenuCheatAchievementData();
};

