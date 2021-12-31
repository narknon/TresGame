// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresAnimNotify_Bonamik_ScaleGroupParams.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotify_Bonamik_ScaleGroupParams : public UAnimNotify
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_Bonamik_ScaleGroupParams")
	TArray<FString> m_Groups;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_Bonamik_ScaleGroupParams")
	bool m_ChangeInnerCone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_Bonamik_ScaleGroupParams")
	float m_InnerConeScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_Bonamik_ScaleGroupParams")
	bool m_ChangeOuterCone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_Bonamik_ScaleGroupParams")
	float m_OuterConeScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_Bonamik_ScaleGroupParams")
	bool m_ChangeLocalForce;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_Bonamik_ScaleGroupParams")
	float m_LocalForceScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_Bonamik_ScaleGroupParams")
	bool m_ChangeWindScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_Bonamik_ScaleGroupParams")
	float m_GroupWindScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_Bonamik_ScaleGroupParams")
	bool m_ChangeMassScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_Bonamik_ScaleGroupParams")
	float m_GroupMassScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_Bonamik_ScaleGroupParams")
	bool m_ApplyToAttachments;
};
