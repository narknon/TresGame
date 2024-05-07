#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "TresBodyCollInterface.h"
#include "ETresBodyCollReactionType.h"
#include "ETresBodyCollision.h"
#include "UObject/NoExportTypes.h"
#include "ETresBodyCollOverlapCameraFunction.h"
#include "TresBodyTakeDamageEffect.h"
#include "TresBodyCollPrimitive.generated.h"

class AActor;
class UStaticMesh;
class UBodySetup;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UTresBodyCollPrimitive : public UPrimitiveComponent, public ITresBodyCollInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FTresBodyEndOverlapSignature, UTresBodyCollPrimitive*, MyPrimitive, AActor*, OtherActor, UPrimitiveComponent*, OtherComp, int32, OtherBodyIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FTresBodyBeginOverlapSignature, UTresBodyCollPrimitive*, MyPrimitive, AActor*, OtherActor, UPrimitiveComponent*, OtherComp, int32, OtherBodyIndex, bool, bFromSweep, const FHitResult&, SweepResult);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MyBodyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MyIgnoreNameNoneGroup: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresBodyCollision::Type> MyShapeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* MyShapeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MyShapeSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresBodyCollReactionType m_BodyReactionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bFixedBodyReactionType: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bEnableDamage: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bEnablePush: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bEnableCamera: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bEnableBlockCamera: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresBodyCollOverlapCameraFunction> m_OverlapCameraFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bIsBodyCollBaseLocationDist3D: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresBodyTakeDamageEffect> m_DamageEffects;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBodySetup* m_pBodySetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBodySetup* m_pSrcBodySetup;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ETresBodyCollReactionType m_DefaultBodyReactionType;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresBodyBeginOverlapSignature OnTresBodyBeginOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresBodyEndOverlapSignature OnTresBodyEndOverlap;
    
    UTresBodyCollPrimitive();
protected:
    UFUNCTION(BlueprintCallable)
    void OnBodyEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBodyBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    
    // Fix for true pure virtual functions not being implemented
};

