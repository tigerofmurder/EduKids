#pragma once
#include <memory>
#include <stack>
#include "State.hpp"

namespace Sergio
{
	typedef std::unique_ptr<State> StateRef;
	//unique pointer to state

	class StateMachine
	{
	public:
		StateMachine() { }
		~StateMachine() { }

		void AddState(StateRef newState, bool isReplacing = true);
		//add a new state in the stack
		void RemoveState();
		// Run at start of each loop in Game.cpp

		void ProcessStateChanges();

		StateRef &GetActiveState();

	private:
		std::stack<StateRef> _states;
		StateRef _newState;
		bool _isRemoving;
		bool _isAdding, _isReplacing;
	};
}
