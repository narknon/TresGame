#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresIntervalUpdateComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresIntervalUpdateComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ExecFrame;
    
public:
    UTresIntervalUpdateComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUpdate();
    
};

