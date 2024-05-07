#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/EngineTypes.h"
#include "TresEnemyXIIIEPawnBase.h"
#include "TresEnemyPawn_e_ex316.generated.h"

class UPrimitiveComponent;
class UTresAction1_e_ex316_Warp;
class ATresProjectileGenerator_e_ex313_DarkMine;
class USphereComponent;
class AActor;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex316 : public ATresEnemyXIIIEPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileGenerator_e_ex313_DarkMine> m_pro_DarkMineGeneratorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* MyPullCollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresAction1_e_ex316_Warp> m_WarpActionData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectileGenerator_e_ex313_DarkMine* m_DarkMineManager;
    
public:
    ATresEnemyPawn_e_ex316(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void OnPullCollisionEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnPullCollisionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

