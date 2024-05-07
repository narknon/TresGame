#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresNpcPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresNpcPawn_n_ra201.generated.h"

class UTresAtkCollComponent;
class UTresReactorComponent;
class UTresSkeletalMeshComponent;
class ATresNpcPawn_n_ra201_RollHair;
class ATresAccompanyPawnBase;

UCLASS(Blueprintable)
class ATresNpcPawn_n_ra201 : public ATresNpcPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresReactorComponent* HairActionReactor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* m_HairMesh1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresAtkCollComponent* m_HairAtkColl1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresAccompanyPawnBase> m_FRSpinningHoldBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHairUnderVecterOffset3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHairUnderVecterOffset4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHairUnderVecterOffset5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHairUnderVecterOffset0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHairUnderVecterOffset1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHairUnderVecterOffset2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresNpcPawn_n_ra201_RollHair> m_PawnHairBP;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresNpcPawn_n_ra201_RollHair* m_pPawnHair;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vInWaterWarpLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_rInWaterWarpRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fInWaterWarpDepth;
    
    ATresNpcPawn_n_ra201(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAimOffsetAlpha() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetAimOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSetHairSwingPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSetHairRotationPoint() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_SetInWaterWarp(FVector WarpLocation, FRotator WarpRotate);
    
};

