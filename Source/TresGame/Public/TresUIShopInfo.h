#pragma once
#include "CoreMinimal.h"
#include "TresUIShopVoice.h"
#include "TresUIShopInfo.generated.h"

class ATresUIActor;

USTRUCT(BlueprintType)
struct FTresUIShopInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NameTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetSubclassOf<ATresUIActor> Staff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresUIShopVoice> TalkWelcome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresUIShopVoice> TalkNewArrival;
    
    TRESGAME_API FTresUIShopInfo();
};

