#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackLinearColorBase.h"
#include "UObject/NoExportTypes.h"
#include "TresInterpTrackVectorMaterialParameterCollectionParam.generated.h"

class UMaterialParameterCollectionInstance;
class UMaterialParameterCollection;

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackVectorMaterialParameterCollectionParam : public UInterpTrackLinearColorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* m_Collection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_RestoreWhenTerminated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialParameterCollectionInstance*> m_CollectionInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor m_DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> m_InstanceBackupValues;
    
    UTresInterpTrackVectorMaterialParameterCollectionParam();
};

