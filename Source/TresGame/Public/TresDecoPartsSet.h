#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ETresDecoPartsAttachPartIdx.h"
#include "TresDecoPartsUnit.h"
#include "TresDecoPartsSet.generated.h"

UCLASS(Blueprintable)
class TRESGAME_API UTresDecoPartsSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresDecoPartsAttachPartIdx> m_AttachPartIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresDecoPartsUnit> m_AssetList;
    
    UTresDecoPartsSet();
};

