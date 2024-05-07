#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESqEX_BonePoseToMaterialSetParamType -FallbackName=ESqEX_BonePoseToMaterialSetParamType
#include "UObject/NoExportTypes.h"
#include "TresChangeMeshMaterialParamData.generated.h"

USTRUCT(BlueprintType)
struct FTresChangeMeshMaterialParamData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_MaterialParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_MaterialInstanceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESqEX_BonePoseToMaterialSetParamType m_MaterialParamSetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StartScalarParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_EndScalarParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_StartVectorParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_EndVectorParam;
    
    TRESGAME_API FTresChangeMeshMaterialParamData();
};

