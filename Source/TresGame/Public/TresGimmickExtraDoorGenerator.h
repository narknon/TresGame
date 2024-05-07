#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickGeneratorBase.h"
#include "ETresMI_04_DoorGeneratorMoveType.h"
#include "TresGimmickExtraDoorGenerator.generated.h"

class UTresInstancedStaticMeshComponent;
class USplineComponent;
class UStaticMesh;
class USkeletalMesh;
class USkeletalMeshComponent;
class ASQEX_SplineActor;

UCLASS(Abstract, Blueprintable)
class ATresGimmickExtraDoorGenerator : public ATresGimmickGeneratorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresInstancedStaticMeshComponent* InstancedStaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USplineComponent* m_SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStaticMesh* m_StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* AnotherMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* AnotherMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresMI_04_DoorGeneratorMoveType MoveType;
    
public:
    ATresGimmickExtraDoorGenerator(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void Setup(USplineComponent* SplineComponent, UStaticMesh* StaticMesh, int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveType(ETresMI_04_DoorGeneratorMoveType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAnotherMeshLocation();
    
    UFUNCTION(BlueprintCallable)
    void ChangeDoor(FVector pos, bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ASQEX_SplineActor* BPIE_GetSplineActor();
    
};

