#pragma once
#include "CoreMinimal.h"
#include "TresAreaEffectData.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "TresAreaEffectCurveData.h"
#include "TresVFXAreaCustomTableData.generated.h"

USTRUCT(BlueprintType)
struct FTresVFXAreaCustomTableData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor AreaBaseColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor AreaBrightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor AreaDarkColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AreaColorSynthesis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresAreaEffectCurveData CurveDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresAreaEffectData> AreaEffectData;
    
    TRESGAME_API FTresVFXAreaCustomTableData();
};

