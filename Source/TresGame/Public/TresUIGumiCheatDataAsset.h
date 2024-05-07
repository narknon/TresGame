#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ETresItemDefGumiMaterial.h"
#include "ETresItemDefGumiParts.h"
#include "ETresItemDefGumiSticker.h"
#include "ETresItemDefGumiPattern.h"
#include "ETresItemDefGumiEtc.h"
#include "ETresItemDefGumiShipBP.h"
#include "TresUIGumiCheatDataAsset.generated.h"

UCLASS(Blueprintable)
class UTresUIGumiCheatDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresItemDefGumiParts> m_CheatParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresItemDefGumiMaterial> m_CheatMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresItemDefGumiPattern> m_CheatPatterns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresItemDefGumiSticker> m_CheatStickers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresItemDefGumiShipBP> m_CheatDefGumiShips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresItemDefGumiEtc> m_CheatWeapons;
    
    UTresUIGumiCheatDataAsset();
};

