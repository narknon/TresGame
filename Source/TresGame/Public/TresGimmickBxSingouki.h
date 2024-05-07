#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresGimmickDitherFadeInterface.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "TresDamageInfo.h"
#include "ETresGimmickBxSingoukiColorType.h"
#include "TresGimmickBxSingouki.generated.h"

class ASQEX_SplineActor;
class USceneComponent;
class UTresStaticMeshComponent;
class UTresPoleComponent;
class UParticleSystem;
class ATresGimmickBxSingouki;
class AController;
class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, Config=Game)
class ATresGimmickBxSingouki : public ATresGimmickActor, public ITresGimmickDitherFadeInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SingoukiRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* MyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresPoleComponent* PoleComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresGimmickBxSingouki*> SameSignals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresGimmickBxSingouki*> OppositeSignals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASQEX_SplineActor*> CourseSplineActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASQEX_SplineActor*> CourseOppositeSplineActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BreakEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlueTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnlyVisual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableCollision;
    
    ATresGimmickBxSingouki(const FObjectInitializer& ObjectInitializer);
private:
    UFUNCTION(BlueprintCallable)
    void TresTakeDamageSingouki(float DamagePoint, AController* InstigatedBy, const FHitResult& HitInfo, const FTresDamageInfo& DamageInfo, FVector ShotFromDirection, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetManualColor(bool bManual, ETresGimmickBxSingoukiColorType Color);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PrizeTakeDamage(AActor* Causer, const FHitResult& HitInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBreakSignal();
    
private:
    UFUNCTION(BlueprintCallable)
    void ComponentHitSingouki(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BreakSignal();
    
    
    // Fix for true pure virtual functions not being implemented
};

