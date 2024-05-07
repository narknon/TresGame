#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "TresInterpTrackFloatMaterialParameterCollectionParam.generated.h"

class UMaterialParameterCollection;
class UMaterialParameterCollectionInstance;

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackFloatMaterialParameterCollectionParam : public UInterpTrackFloatBase {
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
    float m_DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<float> m_InstanceBackupValues;
    
    UTresInterpTrackFloatMaterialParameterCollectionParam();
};

