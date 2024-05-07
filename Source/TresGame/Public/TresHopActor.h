#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresHopActor.generated.h"

class USceneComponent;
class UTresHopComponent;
class UBoxComponent;

UCLASS(Blueprintable, Config=Game)
class ATresHopActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresHopComponent* MyHop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HopID;
    
public:
    ATresHopActor(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnable() const;
    
};

