// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DialogueComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DIALOGUESYS_API UDialogueComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDialogueComponent();

	//The data table containing the dialogues for the specific owner actor
	UPROPERTY(BlueprintReadWrite)
	UDataTable* DialogueDT;

	UFUNCTION(BlueprintCallable)
	void GetNextDialogue();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
		
};
