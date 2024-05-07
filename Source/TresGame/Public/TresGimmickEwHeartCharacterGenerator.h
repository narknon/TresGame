#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresGimmickGeneratorBase.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickEwHeartCharacterGenerator.generated.h"

class USceneComponent;
class ATresGimmickEwHeartCharacter;
class ASQEX_SplineActor;
class AActor;

UCLASS(Abstract, Blueprintable)
class ATresGimmickEwHeartCharacterGenerator : public ATresGimmickGeneratorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CraeteNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresGimmickEwHeartCharacter> GeneratedClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASQEX_SplineActor* splineActor;
    
public:
    ATresGimmickEwHeartCharacterGenerator(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetPreviewActorData(AActor* Actor, USceneComponent* SceneComponent, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPreviewTransformArray(TArray<FTransform>& retTransformArray);
    
};

