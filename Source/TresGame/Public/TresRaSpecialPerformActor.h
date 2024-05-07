#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ETresCommandKind.h"
#include "TresGimmickSkeletalBase.h"
#include "EDanceSpecialPerformType.h"
#include "UObject/NoExportTypes.h"
#include "TresRaSpecialPerformActor.generated.h"

class ATresRaFestivalDanceManager;
class ATresRaSpecialPerformActor;
class UTresStaticMeshComponent;
class UTresReactorComponent;
class ATresCharPawnBase;

UCLASS(Blueprintable)
class ATresRaSpecialPerformActor : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTresOnSpecialPerform, FName, InActorName, ATresRaSpecialPerformActor*, inActor);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* MyStaticMesh;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresOnSpecialPerform OnSpecialPerformStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresOnSpecialPerform OnSpecialPerformEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TensionUpLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReactionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReactionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClapHandsDistance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PerformActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDanceSpecialPerformType PerformType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Player_PerformMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Gimmick_PerformMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlayerRelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator PlayerRelativeRotation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<ATresRaFestivalDanceManager> m_pDanceMng;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresReactorComponent* m_pReactor;
    
public:
    ATresRaSpecialPerformActor(const FObjectInitializer& ObjectInitializer);
private:
    UFUNCTION()
    void OnReactorCommand(ATresCharPawnBase* CommandCauser, TEnumAsByte<ETresCommandKind> CommandID, UTresReactorComponent* ReactorComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPlayerPerformStart();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerPerformEnd();
    
};

