#pragma once
#include "CoreMinimal.h"
#include "ETresPlayerUniqueID.h"
#include "Engine/DataTable.h"
#include "ETresChrUniqueID.h"
#include "ETresUIFaceUniqueID.h"
#include "ETresWorldCode.h"
#include "TresUIGameFlagText.h"
#include "TresUICharacterData.generated.h"

class UTresUIDataAssetStatus;
class UTexture;

USTRUCT(BlueprintType)
struct FTresUICharacterData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresChrUniqueID ChrUniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresPlayerUniqueID PlayerUniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresUIFaceUniqueID FaceUniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresWorldCode> WorldCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<UTresUIDataAssetStatus> StatusData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<UTexture> MenuFaceIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresUIGameFlagText> Names;
    
    TRESGAME_API FTresUICharacterData();
};

