// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DialogueComponent.generated.h"


UCLASS( ClassGroup=(Custom), BlueprintType, Blueprintable, meta=(BlueprintSpawnableComponent) )
class DIALOGUESYS_API UDialogueComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UDialogueComponent();

	UPROPERTY(BlueprintReadWrite)
	bool bIsDialogueTriggered;

	UPROPERTY(BlueprintReadWrite)
	bool bCanInteract;

	//The data table containing the dialogues for the specific owner actor
	UPROPERTY(BlueprintReadWrite)
	UDataTable* CurrentDialogueDT;

	UPROPERTY(BlueprintReadWrite)
	AActor* DialogueTarget;

	UFUNCTION(BlueprintCallable)
	void GetNextDialogue();

	UFUNCTION(BlueprintImplementableEvent)
	void StartDialogue();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
		
};
