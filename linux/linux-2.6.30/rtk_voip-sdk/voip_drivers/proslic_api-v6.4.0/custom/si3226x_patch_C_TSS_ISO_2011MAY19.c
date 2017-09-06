/*
** Generated from si3226x_patch_C_TSS_ISO_2011MAY19.dsp_prom
** Based on design file si32260C_firmware_1_0_0_4_20110517
** on 05-19-2011 at 15:14:22
** Patch ID = 0x1004C002
*/
#include "si_voice_datatypes.h"
#include "si3226x.h"

static const uInt32 patchData [] = {
141541L,
540867L,
141541L,
543427L,
141541L,
553155L,
141541L,
577731L,
141541L,
579779L,
141541L,
581315L,
141541L,
581827L,
141541L,
582339L,
141541L,
582851L,
141541L,
583363L,
141541L,
583875L,
141541L,
584387L,
141541L,
584899L,
141541L,
585411L,
141541L,
585923L,
141541L,
586435L,
736L,
491712L,
452200L,
141541L,
491200L,
5733L,
524290L,
142565L,
550083L,
3685L,
519266L,
5220L,
144098L,
550083L,
3685L,
524291L,
141541L,
551619L,
5221L,
3682L,
524292L,
5L,
141541L,
135362L,
98021L,
727745L,
474213L,
17637L,
557251L,
101093L,
557251L,
473701L,
515653L,
843365L,
188002L,
843355L,
145125L,
560835L,
524290L,
660069L,
518053L,
517224L,
518244L,
142565L,
564419L,
524288L,
521733L,
843365L,
188002L,
524315L,
145125L,
568003L,
843365L,
522850L,
523387L,
147685L,
573123L,
522363L,
145125L,
575171L,
521826L,
141541L,
575683L,
518757L,
521826L,
141541L,
575683L,
521824L,
522245L,
522338L,
141541L,
716481L,
173669L,
523845L,
141541L,
730304L,
523877L,
141541L,
690368L,
524293L,
524293L,
524293L,
524293L,
524293L,
524293L,
524293L,
524293L,
524293L,
524293L,
524293L,
0L
};

static const uInt16 patchEntries [] = {
950,
4347,
3431,
1425,
1347,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0
};

static const uInt16 patchSupportAddr [] = {
925,
926,
1014,
1020,
1021,
1022,
0
};

static const uInt32 patchSupportData [] = {
0xA00000L,
0x1F00000L,
0x2D8000L,
0x0L,
0x2075F60L,
0x220335BL,
0x0L
};

#ifdef SIVOICE_MULTI_BOM_SUPPORT
const proslicPatch si3226xPatchRevCTssIso = {
#else
const proslicPatch RevCPatch = {
#endif
    patchData,
    patchEntries,
    0x1004C002,
    patchSupportAddr,
    patchSupportData
};
