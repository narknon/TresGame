#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipCollisionAttachParam.h"
#include "ETresGumiShipCollisionShape.h"
#include "TresGumiShipCollisionSizeParam.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipCollisionParam.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipCollisionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipCollisionShape m_eShapeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipCollisionSizeParam m_SizeParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipCollisionAttachParam m_AttachParam;
    
    TRESGAME_API FTresGumiShipCollisionParam();
};

