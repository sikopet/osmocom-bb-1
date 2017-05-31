#pragma once

#define GEN_MASK(state) (0x01 << state)

enum trxcon_fsm_states {
	TRXCON_STATE_IDLE = 0,
	TRXCON_STATE_MANAGED,
};

enum trxcon_fsm_events {
	/* L1CTL specific events */
	L1CTL_EVENT_CONNECT,
	L1CTL_EVENT_DISCONNECT,

	/* TRX specific events */
	TRX_EVENT_RESET_IND,
	TRX_EVENT_RSP_ERROR,
	TRX_EVENT_OFFLINE,
};
