#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresPoleActor.generated.h"

class UTresPoleComponent;

UCLASS(Blueprintable, Config=Game)
class ATresPoleActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresPoleComponent* MyRoot;
    
public:
    ATresPoleActor(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnable() const;
    
};

