#pragma once
#include "CoreMinimal.h"
#include "ESQEX_BreakBlendMode.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Renderer -ObjectName=ESQEX_BreakBlendMode -FallbackName=ESQEX_BreakBlendMode
#include "TresEnemy_e_ex771_CrushingParam.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex771_CrushingParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* m_Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AnimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ESQEX_BreakBlendMode> m_Mode;
    
    TRESGAME_API FTresEnemy_e_ex771_CrushingParam();
};

