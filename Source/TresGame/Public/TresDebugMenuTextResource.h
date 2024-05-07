#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ETresDebugMenuTextAlignment.h"
#include "ETresDebugMenuTextVAlignment.h"
#include "DrawTextFilterParam.h"
#include "TresDebugMenuTextResource.generated.h"

USTRUCT(BlueprintType)
struct FTresDebugMenuTextResource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_FontFace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FontSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor m_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresDebugMenuTextAlignment> m_Alignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresDebugMenuTextVAlignment> m_VAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDrawTextFilterParam> m_Filters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_TextString;
    
    TRESGAME_API FTresDebugMenuTextResource();
};

