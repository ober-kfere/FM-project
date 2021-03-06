


struct 2op_ch16{
	uint8_t regflag = 1;
	
	op1[5][2] = {
		{ addr, val }, // AM, VIB, EGT, KSR, MULT 
		{ addr, val }, // KSL, TL
		{ addr, val }, // AR, DR
		{ addr, val }, // SL, RR
		{ addr, val }, // WS
	};

	op2[5][2] = {
		{ addr, val }, // AM, VIB, EGT, KSR, MULT 
		{ addr, val }, // KSL, TL
		{ addr, val }, // AR, DR
		{ addr, val }, // SL, RR
		{ addr, val }, // WS
	};

	set[3][2] = {
		{ addr, val }, // F NUMBER LOW
		{ addr, val }, // KON, BLOCK, F NUMBER HIGH
		{ addr, val }, // FEEDBACK, CONNECTION
	};
};




struct 4op{
	uint8_t regflag = 0;

	op1[5][2] = {
		{ addr, val }, // AM, VIB, EGT, KSR, MULT 
		{ addr, val }, // KSL, TL
		{ addr, val }, // AR, DR
		{ addr, val }, // SL, RR
		{ addr, val }, // WS
	};

	op2[5][2] = {
		{ addr, val }, // AM, VIB, EGT, KSR, MULT 
		{ addr, val }, // KSL, TL
		{ addr, val }, // AR, DR
		{ addr, val }, // SL, RR
		{ addr, val }, // WS
	};

	op3[5][2] = {
		{ addr, val }, // AM, VIB, EGT, KSR, MULT 
		{ addr, val }, // KSL, TL
		{ addr, val }, // AR, DR
		{ addr, val }, // SL, RR
		{ addr, val }, // WS
	};

	op4[5][2] = {
		{ addr, val }, // AM, VIB, EGT, KSR, MULT 
		{ addr, val }, // KSL, TL
		{ addr, val }, // AR, DR
		{ addr, val }, // SL, RR
		{ addr, val }, // WS
	};

	set[3][2] = {
		{ addr, val }, // F NUMBER LOW
		{ addr, val }, // KON, BLOCK, F NUMBER HIGH
		{ addr, val }, // FEEDBACK, CONNECTION
		{ addr, val }, // FEEDBACK, CONNECTION 2	
	};
};





