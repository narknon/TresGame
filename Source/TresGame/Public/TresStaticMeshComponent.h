#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETresKHSMaterialParameterIDScalarType -FallbackName=ETresKHSMaterialParameterIDScalarType
#include "TresDecoPartsComponent.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETresKHSMaterialParameterIDVectorType -FallbackName=ETresKHSMaterialParameterIDVectorType
#include "TresStaticMeshComponent.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UTresStaticMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDisableAutoMaterialInstanceDynamics: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> m_MaterialInstanceDynamics;
    
public:
    UTresStaticMeshComponent();
    UFUNCTION(BlueprintCallable)
    void BP_MaterialSetVectorParamAll(TEnumAsByte<ETresKHSMaterialParameterIDVectorType> InParamType, FLinearColor InVector);
    
    UFUNCTION(BlueprintCallable)
    void BP_MaterialSetVectorParam(int32 InMaterialIndex, TEnumAsByte<ETresKHSMaterialParameterIDVectorType> InParamType, FLinearColor InVector);
    
    UFUNCTION(BlueprintCallable)
    void BP_MaterialSetScalarParamAll(TEnumAsByte<ETresKHSMaterialParameterIDScalarType> InParamType, float InScalar);
    
    UFUNCTION(BlueprintCallable)
    void BP_MaterialSetScalarParam(int32 InMaterialIndex, TEnumAsByte<ETresKHSMaterialParameterIDScalarType> InParamType, float InScalar);
    
};

