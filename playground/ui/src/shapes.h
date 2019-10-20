#define BASIC_CUBE 	{				\
				000.0f, 000.0f, 100.0f, \
			        100.0f, 000.0f, 100.0f, \
        			100.0f, 100.0f, 100.0f, \
        			000.0f, 100.0f, 100.0f, \
                       		                        \
        			100.0f, 000.0f, 000.0f, \
        			000.0f, 000.0f, 000.0f, \
        			000.0f, 100.0f, 000.0f, \
	    			100.0f, 100.0f, 000.0f  \
				}                       \
                                            
#define BASIC_CUBE_INDEX 	{\
							0, 1, 2,\
							2, 3, 0,\
\
							4, 5, 6,\
							6, 7, 4,\
\
							3, 2, 6,\
							6, 7, 2,\
\
							4, 5, 0,\
							0, 1, 4,\
\
							1, 2, 4,\
							4, 7, 2,\
\
							0, 5, 6,\
							6, 3, 0 \
							} 
#define BASIC_CUBE_INDEX_SIZE 36

#define BASIC_CUBE_BUFFER_SIZE (sizeof(float) * 24)

#define POS_TEX_NORM_CUBE { \
		000.0f, 000.0f, 000.0f, 1.0f, 0.0f, 0.0f, 0.0f, -1.0f,\
		100.0f, 000.0f, 000.0f, 0.0f, 0.0f, 0.0f, 0.0f, -1.0f,\
		100.0f, 100.0f, 000.0f, 0.0f, 1.0f, 0.0f, 0.0f, -1.0f,\
		000.0f, 100.0f, 000.0f, 1.0f, 1.0f, 0.0f, 0.0f, -1.0f,\
                                                                      \
		100.0f, 000.0f, 100.0f, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f, \
		000.0f, 000.0f, 100.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, \
		000.0f, 100.0f, 100.0f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f, \
		100.0f, 100.0f, 100.0f, 1.0f, 1.0f, 0.0f, 0.0f, 1.0f, \
                                                                      \
		000.0f, 100.0f, 000.0f, 1.0f, 0.0f, 0.0f, 1.0f, 0.0f, \
		100.0f, 100.0f, 000.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, \
		100.0f, 100.0f, 100.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0f, \
		000.0f, 100.0f, 100.0f, 1.0f, 1.0f, 0.0f, 1.0f, 0.0f, \
                                                                      \
		100.0f, 000.0f, 100.0f, 0.0f, 0.0f, 0.0f, -1.0f, 0.0f,\
		000.0f, 000.0f, 100.0f, 1.0f, 0.0f, 0.0f, -1.0f, 0.0f,\
		000.0f, 000.0f, 000.0f, 1.0f, 1.0f, 0.0f, -1.0f, 0.0f,\
		100.0f, 000.0f, 000.0f, 0.0f, 1.0f, 0.0f, -1.0f, 0.0f,\
                                                                      \
		000.0f, 000.0f, 100.0f, 1.0f, 0.0f, -1.0f, 0.0f, 0.0f,\
		000.0f, 000.0f, 000.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f,\
		000.0f, 100.0f, 000.0f, 0.0f, 1.0f, -1.0f, 0.0f, 0.0f,\
		000.0f, 100.0f, 100.0f, 1.0f, 1.0f, -1.0f, 0.0f, 0.0f,\
                                                                      \
		100.0f, 000.0f, 000.0f, 1.0f, 0.0f, 1.0f, 0.0f, 0.0f, \
		100.0f, 000.0f, 100.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, \
		100.0f, 100.0f, 100.0f, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, \
		100.0f, 100.0f, 000.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f  \
	}                                                              

#define POS_TEX_NORM_CUBE_INDEX {     \
		0, 1, 2,       	      \
		2, 3, 0,              \
                                      \
		4, 5, 6,       	      \
		6, 7, 4,              \
                                      \
		8, 9, 10,             \
		10, 11, 8,            \
                                      \
		12, 13, 14,   	      \
		14, 15, 12,           \
                                      \
		16, 17, 18,           \
		18, 19, 16,           \
                                      \
		20, 21, 22,  	      \
		22, 23, 20            \
	};                            

#define POS_TEX_NORM_CUBE_INDEX_SIZE 36

#define POS_TEX_NORM_CUBE_BUFFER_SIZE (sizeof(float) * 192)
