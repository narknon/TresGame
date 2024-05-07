#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresMBModelElement.generated.h"

USTRUCT(BlueprintType)
struct FTresMBModelElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ModelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ParentIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_Scaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_Translation;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int32 m_CurveIndex[9];
    
    TRESGAME_API FTresMBModelElement();
};

