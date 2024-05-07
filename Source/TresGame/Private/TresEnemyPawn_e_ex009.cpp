#include "TresEnemyPawn_e_ex009.h"

#include "TresBodyCollPrimitive.h"
#include "TresSkeletalMeshComponent.h"

ATresEnemyPawn_e_ex009::ATresEnemyPawn_e_ex009(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	UActorComponent* MeshComponent = GetComponentByClass(UTresSkeletalMeshComponent::StaticClass());
	USceneComponent* TresBodyCollPrimitive = NewObject<UTresBodyCollPrimitive>(this, "TresBodyCollPrimitive1");
	TresBodyCollPrimitive->SetupAttachment(Cast<USceneComponent>(MeshComponent));
	/*TresBodyCollPrimitive->RegisterComponent();*/
}

