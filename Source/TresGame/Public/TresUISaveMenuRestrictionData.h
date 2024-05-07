#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresUIGameProgressSection.h"
#include "ETresUIDataVersion.h"
#include "TresUISaveMenuRestrictionData.generated.h"

USTRUCT(BlueprintType)
struct FTresUISaveMenuRestrictionData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SavePointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresUIGameProgressSection RestrictionAreaSelectSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresUIGameProgressSection RestrictionWorldMapSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresUIGameProgressSection RestrictionRestaurantSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresUIDataVersion Version;
    
    TRESGAME_API FTresUISaveMenuRestrictionData();
};

