#pragma once
#include "CoreMinimal.h"
#include "TresUIDataAsset.h"
#include "TresUIDataAssetCodeMenu.generated.h"

class USwfMovie;
class UObject;
class UDataTable;
class UTresUIGumiCheatDataAsset;

UCLASS(Blueprintable)
class UTresUIDataAssetCodeMenu : public UTresUIDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwfMovie* SwfAssetCodeMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwfMovie* SwfAssetCodeMenuInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> CodeMenuSwfRefAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CheatDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ChallengeDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CheatAchievementDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ChallengeScoreDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ChallengeRankDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIGumiCheatDataAsset* GumiCheatData;
    
    UTresUIDataAssetCodeMenu();
};

