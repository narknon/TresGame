#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresComNpcComponent.generated.h"

class ATresNpcPawn_c_npc;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresComNpcComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<TWeakObjectPtr<ATresNpcPawn_c_npc>> m_pComNpcPawn;
    
public:
    UTresComNpcComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresNpcPawn_c_npc* GetComNpc(FName InName);
    
};

