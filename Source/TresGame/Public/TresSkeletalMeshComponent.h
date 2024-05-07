#pragma once
#include "CoreMinimal.h"
#include "TresSkeletalFootStepUnit.h"
#include "TresBodyCollInterface.h"
#include "Components/SkeletalMeshComponent.h"
#include "ETresBodyCollReactionType.h"
#include "TresAnimInterface.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETresKHSMaterialParameterIDScalarType -FallbackName=ETresKHSMaterialParameterIDScalarType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETresKHSMaterialParameterIDVectorType -FallbackName=ETresKHSMaterialParameterIDVectorType
#include "TresEnemyPawn_e_ex306.h"
#include "UObject/NoExportTypes.h"
#include "TresSkeletalMeshComponent.generated.h"

class UPhysicalMaterial;
class UParticleSystemComponent;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UTresSkeletalMeshComponent : public USkeletalMeshComponent, public ITresAnimInterface, public ITresBodyCollInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bCanbeDetectAsBodyColl: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_BodyCollGrpName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_BodyCollIgnoreNameNoneGroup: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresBodyCollReactionType m_BodyCollReactionType;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bNeedSnowRenderDepthPrimitive: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_SnowTailAttachName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_SnowTailAttachRelativeOffset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_SnowTailAttachScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bEnableSyncAnimPlay: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bEnableBonamikWhenOwnerHidden: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bEnableCollisionFootStep: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_bDisableCollisionFootStepLOD;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresSkeletalFootStepUnit> m_CheckFootSteps;
    
protected:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* m_pDetectPhysMaterial;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* m_pDetectWaterPhysMaterial;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* m_pDetectInnerWaterPhysMaterial;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHitResult m_WaterSurfaceInfo;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_pSnowTailComp;
    
public:
    UTresSkeletalMeshComponent();
    UFUNCTION(BlueprintCallable)
    void BP_MaterialSetVectorParamAll(TEnumAsByte<ETresKHSMaterialParameterIDVectorType> InParamType, FLinearColor InVector);
    
    UFUNCTION(BlueprintCallable)
    void BP_MaterialSetVectorParam(int32 InMaterialIndex, TEnumAsByte<ETresKHSMaterialParameterIDVectorType> InParamType, FLinearColor InVector);
    
    UFUNCTION(BlueprintCallable)
    void BP_MaterialSetScalarParamAll(TEnumAsByte<ETresKHSMaterialParameterIDScalarType> InParamType, float InScalar);
    
    UFUNCTION(BlueprintCallable)
    void BP_MaterialSetScalarParam(int32 InMaterialIndex, TEnumAsByte<ETresKHSMaterialParameterIDScalarType> InParamType, float InScalar);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BP_GetPredictedLODLevel();
    
    
    // Fix for true pure virtual functions not being implemented
};

