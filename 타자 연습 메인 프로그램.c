#include<stdio.h>
#include<windows.h>
#define MAX_LANKER 20
typedef struct lanking *lankptr;
typedef struct lanking
{
	char name[10];
	int lank;
	int score;
	int accuracy;
}Lanking;
lankptr *lanklist = NULL;

//void long_chat();
//void code_chat();
//void go_game();
//void gotoxy(int x, int y);
//void go_lanking();
void main()
{
	int select=0;
	while (1)
	{
		printf("............................................................................................,............................................\n");
		printf("............................................................................................,............................................\n");
		printf(".......................................................................................,+7$?:.,..........................................\n");
		printf("..................................................................................,., 7DNNNNN8,..........................................\n");
		printf(".....................................................................................+NNDZZONNNO:........................................\n");
		printf(".....................................................................................OMN7777IDMND=,......................................\n");
		printf("..............................................................,..:=?+=:.,,..,.....,..7MNZ77777ZMNN=..,...................................\n");
		printf("..............................................................,ONNNNDDND7.............ONNMMDZIIZND8......................................\n");
		printf("...........................................................,.=8NN87=+IONN8:...........~8DNNNNN87$NN=.....................................\n");
		printf(".............,,.......,.................,,................,..8ND~......=NNO,..........~DNZ.,?NNNODNO....,,............,..................\n");
		printf("..............................,.........,....,...............DNO.......,NND,..........:8NO,..:7NNNNN:...,................................\n");
		printf("................:+7O8NNNNDDOI=...........:IZDNNNNNNND8$+:....8NO.......,NN8,..,=7ODNND8NNO.....~8NNM~....~?O8DNNNNNN8O$=,................\n");
		printf(".............,=8NNNNNNMNNNNNNND$: ....,INNMNNNNMMNNMNNDNNZ: .8NO.......,NND,.IDNDNNNNNNNNZ......~NNM+..$DDNNNNNNNNNMNNNNNZ~.,............\n");
		printf("............:8NNN8$+~,...,~?ZNNNN$...+DNNNZ?:,. .. .:=$DDNNZ,DNO.......,DNO=DNDNZ+:,.,~IDZ.......INM+?NDNNO?~,......~?7NNNN$.............\n");
		printf("........,..7NNN=.. ...........:INND?ZMN8:... ............$NNNNNO.......,DNDND8:........... ......:DNNNN7,...............:$MNO~,..........\n");
		printf("..........~ND8~................ +NNNNNO,...  ... ....... ,INNNNO.......,NNNND:....... ............DNNN$..........,.... ..,+NN$...........\n");
		printf(".........,$NN=.......~8NNO, .....:8DDDNZ$ODNNNMMNND~,.  .  INNNO.......,NNNN=.......7NNNZ.........DNN8,.... .,$NMNI....... 7ND=..,.......\n");
		printf("........,:8ND,.... .,NNNNN$.......?NNNNNNNNNNNNNNNNM=......~NNNO.......,DNN8. .....=NDNDNI .......DNN=.......7NNNNN+.. ....~NN$..........\n");
		printf(".........=DNO.......,NNNNND,... ..~DNNDNDZ+:,.........     ,8NNO...... ,NNDZ..... .?NNNNNO........NND,..    .ZDDNNN7...   .,NNO,.........\n");
		printf(".........=NNZ.......,NNNNND,..... ,DDNDI........ .....    ..8NNO...... ,NNN$ .... .?NNNNNO........NND,...   .ZDDNNN7...   .,NND,.........\n");
		printf(".........=NNZ..... .,NNNNND,......,DNN+... ...?8DN8I,......,8NNO...... ,NNDO.. ....?NNNNNO........NND,.......ZNNNNN7.......,NN8.,........\n");
		printf(".........=NNZ........MNNDNZ.......~NND,..... ,NNDNNM? .....~NNNO...... ,NNDN:.... .~NNNDMI.......:DNN?.......7MDNDM?.......=NN$..........\n");
		printf(".........~DNO.........    .......+NNNN$,......... .. .....+MDNNO.......,NNDNN$..................+MNDNN$..................,?MNO...........\n");
		printf(".........~DN8,... ..............INND8NN8:...............,$NNDDNO.......,NN8OMN8~...............$NDD:8NN7:...............:ZMNO~,..........\n");
		printf(".........:8ND~..... :NZ=,..,~?DMNMO,.?NNNN8$=~,,,.,~+IONNDM$.ZNND?:..:I8NMI.~8NNDD7=,....,~?ONNNMZ,..=DNNN87+~,.,.,~?78NNDMI,............\n");
		printf(".........,ONNZ,... .,NNNNNMNNNND8+.,,,.IDNNDNNNNMNNNNNDNN$:.,,$NNNNMMNDND$.,,.IDNNNNNMNNNNNNDNNZ:....,,$DNNNNNNNNMNNNNDMD$:.,............\n");
		printf(".........,$NDNZ.....,NNN8NNNDZ?:.,,......,=7ODDNNDD8O$+~.......:IZDNDDOI,.......:+Z8DNDNNDDZI~...........:+$O8DNNDD8O7+:.................\n");
		printf("..........INNNN8~...,NNZ......,,..,...................,,...,..........,...........................,...................,,.................\n");
		printf("..........=NN8DNNZ=.:NNZ..,....................................,....,,.,,,...................,,.........,................................\n");
		printf("..........,DNDZODDNNDNM$.,...............,.,......,....,,...,,.............................,.,.,...,.,...................................\n");
		printf("...........IMNDZ$Z8DDNDN?.............................................,,,........,...............,.......................................\n");
		printf("........,.,,7NN8ZZZZZODDN:..........,. _______          _               _____                _   _          ,............................\n");
		printf(".............IMNDZZZZZ8NN+...........,|__   __|        (_)             |  __ Y              | | (_)         .............................\n");
		printf("........,,,.,.=MNDDOO8NDM:...........    | |_   _ _ __  _ _ __   __ _  | |__) | __ __ _  ___| |_ _  ___ ___ .............................\n");
		printf("............,,.,$NNDNDND~............    | | | | | '_ Y| | '_ Y / _` | |  ___/ '__/ _` |/ __| __| |/ __/ _ Y,,...........................\n");
		printf("............,,.,...DNDND~..............  | | |_| | |_) | | | | | (_| | | |   | | | (_| | (__| |_| | (_|  __/,,...........................\n");
		printf(".......................................  |_|Y__, | .__/|_|_| |_|Y__, | |_|   |_|  Y__,_|Y___|Y__|_|Y___Y___|.............................\n");
		printf(".....................................        __/ | |             __/ |                                      .............................\n");
		printf(".....................................       |___/|_|            |___/                                       .............................\n");


		printf("                                      ====================================================================\n");
		printf("                                                                1 . 긴 글 연습\n");
		printf("                                                                2 . 코딩 연습\n");
		printf("                                                                3 . 미니 게임\n");
		printf("                                                                4 . 랭킹 확인\n");
		printf("                                                                5 . 프로그램 종료\n");
		printf("                                      ====================================================================\n");
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			printf("긴 글 연습을 시작합니다.\n");
	//		long_chat();
			break;
		case 2:
			printf("코딩 연습을 시작합니다.\n");
	//		code_chat();
			break;
		case 3:
			printf("미니 게임을 시작합니다.\n");
	//		go_game();
			break;
		case 4:
			printf("--------------전체 랭킹--------------");
	//		void go_lanking();
			break;
		case 5:
			return;
		default:
			printf("잘못 입력 하셨습니다.\n");
			break;
		}
	}

}