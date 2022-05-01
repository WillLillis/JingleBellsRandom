#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cmath>
#include <windows.h> // needed for the beep function
#include "pitches.h" // pitches defined in various keys by Hz

double_t jingleBellsNotes0[] = {
    PITCH_E0, PITCH_E0, PITCH_E0, // Jinge bells
    PITCH_E0, PITCH_E0, PITCH_E0, // Jingle bells
    PITCH_E0, PITCH_G0, PITCH_C0, PITCH_D0, PITCH_E0, // Jingle all the way
    PITCH_F0, PITCH_F0, PITCH_F0, // Oh what fun
    PITCH_F0, PITCH_F0, PITCH_E0, PITCH_E0, // It is to ride
    PITCH_E0, PITCH_E0, PITCH_D0, PITCH_D0, PITCH_E0, PITCH_C0, PITCH_G0, // In a one horse open sleigh
    PITCH_E0, PITCH_E0, PITCH_E0, // Jinge bells
    PITCH_E0, PITCH_E0, PITCH_E0, // Jingle bells
    PITCH_E0, PITCH_G0, PITCH_C0, PITCH_D0, PITCH_E0, // Jingle all the way
    PITCH_F0, PITCH_F0, PITCH_F0, // Oh what fun
    PITCH_F0, PITCH_F0, PITCH_E0, PITCH_E0, // It is to ride
    PITCH_E0, PITCH_G0, PITCH_G0, PITCH_F0, PITCH_D0, PITCH_C0 // In-a one horse open sleigh
};

double_t jingleBellsNotes1[] = {
    PITCH_E1, PITCH_E1, PITCH_E1, // Jinge bells
    PITCH_E1, PITCH_E1, PITCH_E1, // Jingle bells
    PITCH_E1, PITCH_G1, PITCH_C1, PITCH_D1, PITCH_E1, // Jingle all the way
    PITCH_F1, PITCH_F1, PITCH_F1, // Oh what fun
    PITCH_F1, PITCH_F1, PITCH_E1, PITCH_E1, // It is to ride
    PITCH_E1, PITCH_E1, PITCH_D1, PITCH_D1, PITCH_E1, PITCH_C1, PITCH_G1, // In a one horse open sleigh
    PITCH_E1, PITCH_E1, PITCH_E1, // Jinge bells
    PITCH_E1, PITCH_E1, PITCH_E1, // Jingle bells
    PITCH_E1, PITCH_G1, PITCH_C1, PITCH_D1, PITCH_E1, // Jingle all the way
    PITCH_F1, PITCH_F1, PITCH_F1, // Oh what fun
    PITCH_F1, PITCH_F1, PITCH_E1, PITCH_E1, // It is to ride
    PITCH_E1, PITCH_G1, PITCH_G1, PITCH_F1, PITCH_D1, PITCH_C1 // In-a one horse open sleigh
};

double_t jingleBellsNotes2[] = {
    PITCH_E2, PITCH_E2, PITCH_E2, // Jinge bells
    PITCH_E2, PITCH_E2, PITCH_E2, // Jingle bells
    PITCH_E2, PITCH_G2, PITCH_C2, PITCH_D2, PITCH_E2, // Jingle all the way
    PITCH_F2, PITCH_F2, PITCH_F2, // Oh what fun
    PITCH_F2, PITCH_F2, PITCH_E2, PITCH_E2, // It is to ride
    PITCH_E2, PITCH_E2, PITCH_D2, PITCH_D2, PITCH_E2, PITCH_C2, PITCH_G2, // In a one horse open sleigh
    PITCH_E2, PITCH_E2, PITCH_E2, // Jinge bells
    PITCH_E2, PITCH_E2, PITCH_E2, // Jingle bells
    PITCH_E2, PITCH_G2, PITCH_C2, PITCH_D2, PITCH_E2, // Jingle all the way
    PITCH_F2, PITCH_F2, PITCH_F2, // Oh what fun
    PITCH_F2, PITCH_F2, PITCH_E2, PITCH_E2, // It is to ride
    PITCH_E2, PITCH_G2, PITCH_G2, PITCH_F2, PITCH_D2, PITCH_C2 // In-a one horse open sleigh
};

double_t jingleBellsNotes3[] = {
    PITCH_E3, PITCH_E3, PITCH_E3, // Jinge bells
    PITCH_E3, PITCH_E3, PITCH_E3, // Jingle bells
    PITCH_E3, PITCH_G3, PITCH_C3, PITCH_D3, PITCH_E3, // Jingle all the way
    PITCH_F3, PITCH_F3, PITCH_F3, // Oh what fun
    PITCH_F3, PITCH_F3, PITCH_E3, PITCH_E3, // It is to ride
    PITCH_E3, PITCH_E3, PITCH_D3, PITCH_D3, PITCH_E3, PITCH_C3, PITCH_G3, // In a one horse open sleigh
    PITCH_E3, PITCH_E3, PITCH_E3, // Jinge bells
    PITCH_E3, PITCH_E3, PITCH_E3, // Jingle bells
    PITCH_E3, PITCH_G3, PITCH_C3, PITCH_D3, PITCH_E3, // Jingle all the way
    PITCH_F3, PITCH_F3, PITCH_F3, // Oh what fun
    PITCH_F3, PITCH_F3, PITCH_E3, PITCH_E3, // It is to ride
    PITCH_E3, PITCH_G3, PITCH_G3, PITCH_F3, PITCH_D3, PITCH_C3 // In-a one horse open sleigh
};

double_t jingleBellsNotes4[] = {
    PITCH_E4, PITCH_E4, PITCH_E4, // Jinge bells
    PITCH_E4, PITCH_E4, PITCH_E4, // Jingle bells
    PITCH_E4, PITCH_G4, PITCH_C4, PITCH_D4, PITCH_E4, // Jingle all the way
    PITCH_F4, PITCH_F4, PITCH_F4, // Oh what fun
    PITCH_F4, PITCH_F4, PITCH_E4, PITCH_E4, // It is to ride
    PITCH_E4, PITCH_E4, PITCH_D4, PITCH_D4, PITCH_E4, PITCH_C4, PITCH_G4, // In a one horse open sleigh
    PITCH_E4, PITCH_E4, PITCH_E4, // Jinge bells
    PITCH_E4, PITCH_E4, PITCH_E4, // Jingle bells
    PITCH_E4, PITCH_G4, PITCH_C4, PITCH_D4, PITCH_E4, // Jingle all the way
    PITCH_F4, PITCH_F4, PITCH_F4, // Oh what fun
    PITCH_F4, PITCH_F4, PITCH_E4, PITCH_E4, // It is to ride
    PITCH_E4, PITCH_G4, PITCH_G4, PITCH_F4, PITCH_D4, PITCH_C4 // In-a one horse open sleigh
};

double_t jingleBellsNotes5[] = {
    PITCH_E5, PITCH_E5, PITCH_E5, // Jinge bells
    PITCH_E5, PITCH_E5, PITCH_E5, // Jingle bells
    PITCH_E5, PITCH_G5, PITCH_C5, PITCH_D5, PITCH_E5, // Jingle all the way
    PITCH_F5, PITCH_F5, PITCH_F5, // Oh what fun
    PITCH_F5, PITCH_F5, PITCH_E5, PITCH_E5, // It is to ride
    PITCH_E5, PITCH_E5, PITCH_D5, PITCH_D5, PITCH_E5, PITCH_C5, PITCH_G5, // In a one horse open sleigh
    PITCH_E5, PITCH_E5, PITCH_E5, // Jinge bells
    PITCH_E5, PITCH_E5, PITCH_E5, // Jingle bells
    PITCH_E5, PITCH_G5, PITCH_C5, PITCH_D5, PITCH_E5, // Jingle all the way
    PITCH_F5, PITCH_F5, PITCH_F5, // Oh what fun
    PITCH_F5, PITCH_F5, PITCH_E5, PITCH_E5, // It is to ride
    PITCH_E5, PITCH_G5, PITCH_G5, PITCH_F5, PITCH_D5, PITCH_C5 // In-a one horse open sleigh
};

double_t jingleBellsNotes6[] = {
    PITCH_E6, PITCH_E6, PITCH_E6, // Jinge bells
    PITCH_E6, PITCH_E6, PITCH_E6, // Jingle bells
    PITCH_E6, PITCH_G6, PITCH_C6, PITCH_D6, PITCH_E6, // Jingle all the way
    PITCH_F6, PITCH_F6, PITCH_F6, // Oh what fun
    PITCH_F6, PITCH_F6, PITCH_E6, PITCH_E6, // It is to ride
    PITCH_E6, PITCH_E6, PITCH_D6, PITCH_D6, PITCH_E6, PITCH_C6, PITCH_G6, // In a one horse open sleigh
    PITCH_E6, PITCH_E6, PITCH_E6, // Jinge bells
    PITCH_E6, PITCH_E6, PITCH_E6, // Jingle bells
    PITCH_E6, PITCH_G6, PITCH_C6, PITCH_D6, PITCH_E6, // Jingle all the way
    PITCH_F6, PITCH_F6, PITCH_F6, // Oh what fun
    PITCH_F6, PITCH_F6, PITCH_E6, PITCH_E6, // It is to ride
    PITCH_E6, PITCH_G6, PITCH_G6, PITCH_F6, PITCH_D6, PITCH_C6 // In-a one horse open sleigh
};

double_t jingleBellsNotes7[] = {
    PITCH_E7, PITCH_E7, PITCH_E7, // Jinge bells
    PITCH_E7, PITCH_E7, PITCH_E7, // Jingle bells
    PITCH_E7, PITCH_G7, PITCH_C7, PITCH_D7, PITCH_E7, // Jingle all the way
    PITCH_F7, PITCH_F7, PITCH_F7, // Oh what fun
    PITCH_F7, PITCH_F7, PITCH_E7, PITCH_E7, // It is to ride
    PITCH_E7, PITCH_E7, PITCH_D7, PITCH_D7, PITCH_E7, PITCH_C7, PITCH_G7, // In a one horse open sleigh
    PITCH_E7, PITCH_E7, PITCH_E7, // Jinge bells
    PITCH_E7, PITCH_E7, PITCH_E7, // Jingle bells
    PITCH_E7, PITCH_G7, PITCH_C7, PITCH_D7, PITCH_E7, // Jingle all the way
    PITCH_F7, PITCH_F7, PITCH_F7, // Oh what fun
    PITCH_F7, PITCH_F7, PITCH_E7, PITCH_E7, // It is to ride
    PITCH_E7, PITCH_G7, PITCH_G7, PITCH_F7, PITCH_D7, PITCH_C7 // In-a one horse open sleigh
};

double_t jingleBellsNotes8[] = {
    PITCH_E8, PITCH_E8, PITCH_E8, // Jinge bells
    PITCH_E8, PITCH_E8, PITCH_E8, // Jingle bells
    PITCH_E8, PITCH_G8, PITCH_C8, PITCH_D8, PITCH_E8, // Jingle all the way
    PITCH_F8, PITCH_F8, PITCH_F8, // Oh what fun
    PITCH_F8, PITCH_F8, PITCH_E8, PITCH_E8, // It is to ride
    PITCH_E8, PITCH_E8, PITCH_D8, PITCH_D8, PITCH_E8, PITCH_C8, PITCH_G8, // In a one horse open sleigh
    PITCH_E8, PITCH_E8, PITCH_E8, // Jinge bells
    PITCH_E8, PITCH_E8, PITCH_E8, // Jingle bells
    PITCH_E8, PITCH_G8, PITCH_C8, PITCH_D8, PITCH_E8, // Jingle all the way
    PITCH_F8, PITCH_F8, PITCH_F8, // Oh what fun
    PITCH_F8, PITCH_F8, PITCH_E8, PITCH_E8, // It is to ride
    PITCH_E8, PITCH_G8, PITCH_G8, PITCH_F8, PITCH_D8, PITCH_C8 // In-a one horse open sleigh
};

uint32_t jingleBellsBeats[] = {
    1, 1, 2, // Jinge bells
    1, 1, 2, // Jinge bells
    1, 1, 1, 1, 4, // Jingle all the way
    1, 1, 1, // Oh what fun
    1, 1, 1, 1, // It is to ride
    1, 1, 1, 1, 1, 2, 2, // In a one horse open sleigh
    1, 1, 2, // Jinge bells
    1, 1, 2, // Jinge bells
    1, 1, 1, 1, 4, // Jingle all the way
    1, 1, 1, // Oh what fun
    1, 1, 1, 1, // It is to ride
    1, 1, 1, 1, 1, 4 // In a one horse open sleigh
};

std::string jingleBellsLyrics[] = {
    "Jin-", "gle ", "Bells",
    "\nJin-", "gle ", "Bells",
    "\nJin-", "gle ", "all ", "the ", "wayyyy",
    "\nOh ", "what ", "fun, ",
    "it ", "is ", "to ", "ride"
    "\nIn-", "a ", "one ", "horse ", "op-", "en ", "sleighhh-", "hhh",
    "\nJin-", "gle ", "Bells",
    "\nJin-", "gle ", "Bells",
    "\nJin-", "gle ", "all ", "the ", "wayyyy",
    "\nOh ", "what ", "fun, ",
    "it ", "is ", "to ", "ride"
    "\nIn-", "a ", "one ", "horse ", "op-", "en ", "sleighhhhhh\n"
};

void getscaledRand(uint32_t* U, uint32_t min, uint32_t max)
{
    *U = (uint32_t)(rand() % (max - min + 1)) + min;
    //printf("New U: %d\n",U);
}

inline SHORT _kbhitinit()
{
    return (GetAsyncKeyState('Q') & (SHORT)0x0001);
}

inline BOOL _kbhitpoll(SHORT init)
{
    if ((GetAsyncKeyState('Q') & (SHORT)0x0001) == (SHORT)init)
    {
        return FALSE;
    }
    return TRUE;
}

void playJingleBells(double_t notes[], uint32_t beats[], uint32_t numnotes, int32_t bpm)
{
    float_t notelengthtemp = (float_t)bpm / 60.0; // beats per second
    notelengthtemp = 1 / notelengthtemp; // seconds per beat
    notelengthtemp = notelengthtemp * 1000; // ms per beat
    uint32_t notelengthms = (uint32_t)notelengthtemp;

    for (uint32_t currnote = 0; currnote < numnotes; currnote++)
    {
        //printf("Note: %d, Duration: %d\n", trunc(notes[currnote]), beats[currnote] * notelengthms);
        printf("%s", jingleBellsLyrics[currnote].c_str());
        Beep(trunc(notes[currnote]), beats[currnote] * notelengthms);
    }
    
}

int main()
{
    uint32_t U1, U2;
    SHORT qinit = _kbhitinit();
    srand(time(NULL));

    printf("Press the \'Q\' key to exit the following the completion of the current song.\n");
    while (!_kbhitpoll(qinit))
    {
        getscaledRand(&U1, 0, 8); // choose which key
        getscaledRand(&U2, 100, 200); // choose BPM
        printf("\n\n");
        printf("Key: %d, BPM: %d\n", U1, U2);
        switch (U1)
        {
        case 0:
            playJingleBells(jingleBellsNotes0, jingleBellsBeats, sizeof(jingleBellsNotes0) / sizeof(PITCH_C0), U2);
            break;
        case 1:
            playJingleBells(jingleBellsNotes1, jingleBellsBeats, sizeof(jingleBellsNotes1) / sizeof(PITCH_C0), U2);
            break;
        case 2:
            playJingleBells(jingleBellsNotes2, jingleBellsBeats, sizeof(jingleBellsNotes2) / sizeof(PITCH_C0), U2);
            break;
        case 3:
            playJingleBells(jingleBellsNotes3, jingleBellsBeats, sizeof(jingleBellsNotes3) / sizeof(PITCH_C0), U2);
            break;
        case 4:
            playJingleBells(jingleBellsNotes4, jingleBellsBeats, sizeof(jingleBellsNotes4) / sizeof(PITCH_C0), U2);
            break;
        case 5:
            playJingleBells(jingleBellsNotes5, jingleBellsBeats, sizeof(jingleBellsNotes5) / sizeof(PITCH_C0), U2);
            break;
        case 6:
            playJingleBells(jingleBellsNotes6, jingleBellsBeats, sizeof(jingleBellsNotes6) / sizeof(PITCH_C0), U2);
            break;
        case 7:
            playJingleBells(jingleBellsNotes7, jingleBellsBeats, sizeof(jingleBellsNotes7) / sizeof(PITCH_C0), U2);
            break;
        case 8:
            playJingleBells(jingleBellsNotes8, jingleBellsBeats, sizeof(jingleBellsNotes8) / sizeof(PITCH_C0), U2);
            break;
        default:
            break;
        }
    }
    return 0;
}