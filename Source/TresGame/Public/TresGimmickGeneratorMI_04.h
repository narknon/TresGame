#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickGeneratorMI_04_Base.h"
#include "TresGimmickMI_04Status.h"
#include "TresGimmickMI_04_DoorDamageParam.h"
#include "ETresStateID.h"
#include "ETresPlayerSpecificActionID.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickGeneratorMI_04.generated.h"

class UTresBodyCollComponent;
class UTresBodyCollPrimitive;
class ASQEX_SplineActor;
class UPrimitiveComponent;
class ATriggerBox;
class UStaticMeshComponent;
class AActor;

UCLASS(Abstract, Blueprintable)
class ATresGimmickGeneratorMI_04 : public ATresGimmickGeneratorMI_04_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTresGimmickMI_04Status> m_Statuses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresBodyCollPrimitive* BodyCollPrim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresBodyCollComponent* BodyCollComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SplineLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DoorNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DoorInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObjectLife;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsReverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASQEX_SplineActor* ConfluenceSplineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGimmickMI_04_DoorDamageParam damageParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* m_pRideMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASQEX_SplineActor*> RaildSlideDisconnect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATriggerBox*> TabooRideVolumeArray;
    
public:
    ATresGimmickGeneratorMI_04(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void UpdateTransform(float Delta);
    
    UFUNCTION(BlueprintCallable)
    void SetEventDoor();
    
    UFUNCTION()
    void OnPlayerStateEnd(TEnumAsByte<ETresStateID> ID);
    
    UFUNCTION()
    void OnPlayerSpecificAction(TEnumAsByte<ETresPlayerSpecificActionID> ActionID, int32 SubID);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlapTabooRide(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetNearDoorTransformFromIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNearDoorIndexFromLocation(FVector nearLocation);
    
    UFUNCTION(BlueprintCallable)
    void DecLifeFromBp(int32 dec);
    
    UFUNCTION(BlueprintCallable)
    void DebugBreak(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void CreateDoor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Ride(UStaticMeshComponent* MeshComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UStaticMeshComponent* BP_GenerateMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_BreakObject(UStaticMeshComponent* MeshComponent, int32 breakIndex);
    
};

