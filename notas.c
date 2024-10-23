#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n -------------------------------------------------");
    printf("\n----Seja muito bem vindo ao formulário de notas!----\n");
    printf(" -------------------------------------------------");

    int opcao;
    float cdn, tst, tblh, pv;
    float bm1, bm2;
    float sm1, sm2;
    int nem;
    float nq, nf, nb, na, ne;
    float ns, nfl, ng, nh, ni;
    float pnm, snm, tnm, qnm;
    float pnp, snp, tnp, qnp;
    float pned, sned, tned, qned;
    int nda;

    	printf("\nPara saber a média do aluno, escreva o tipo de divisão.\n");
    
    
    	printf(" 1 - Nota Bimestral.\n 2 - Nota Semestral.\n 3 - Nota Anual.\n 4 - Novo Ensino Médio\n");
    	printf(" Sua escolha: ");
    		scanf("%d", &opcao);

    	switch (opcao) {
        	case 1:
            	printf("\n----Bem-vindo as Notas bimestrais----");
            
            
            	printf("\n Caderno: ");
            		scanf("%f", &cdn);
            	printf(" Teste: ");
            		scanf("%f", &tst);
            	printf(" Trabalho: ");
            		scanf("%f", &tblh);
            	printf(" Prova: ");
            		scanf("%f", &pv);

            	float nf = (cdn + tst + tblh + pv);

            	if (nf >= 7) {
                	printf(" APROVADO com %.2f.", nf);
            	} else if (nf >= 5 && nf < 7) {
               		printf(" RECUPERAÇÂO com %.2f.", nf);
            	} else {
                	printf(" REPROVADO com %.2f.", nf);
            	}
            break;

        	case 2:
            	printf("\n----Bem-vindo as Notas Semestrais----");

            	printf("\n Nota do primeiro Bimestre: ");
            		scanf("%f", &bm1);
            	printf(" Nota do segundo Bimestre: ");
            		scanf("%f", &bm2);

            	float nfbm = (bm1 + bm2) / 2;

            	if (nfbm >= 8) {
            	    printf(" APROVADO com %.2f.", nfbm);
            	} else if (nfbm >= 7 && nfbm < 8) {
            	    printf(" RECUPERAÇÂO com %.2f.", nfbm);
            	} else {
            	    printf(" REPROVADO com %.2f.", nfbm);
            	}
        	break;

        	case 3:
           		printf("\n----Bem-vindo as Nota Anual----");

            	printf("\n Nota do primeiro Semestre: ");
            		scanf("%f", &sm1);
           		printf(" Nota do segundo Semestre: ");
            		scanf("%f", &sm2);

            	float an = sm1 + sm2;

            	if (an >= 28) {
            	    printf(" APROVADO com %.2f.", an);
            	} else if (an >= 20 && an < 28) {
            	    printf(" RECUPERAÇÂO com %.2f.", an);
            	} else {
            	    printf(" REPROVADO com %.2f.", an);
            	}
            break;

        	case 4:
            	printf("\n----Bem-vindo ao Novo Ensino Médio----");

            	printf("\n 1 - Exatas \n 2 - Humanas \n 3 - disciplinas anuais");
            	printf("\n Escolha sua opção: ");
            		scanf("%d", &nem);

            	switch (nem) {
            	    case 1:
            	        printf("\n----Bem-vindo as notas de Exatas---- ");
                    

            	        printf("\n Nota de Química: ");
           		         	scanf("%f", &nq);
               		    printf(" Nota de Física: ");
                   			scanf("%f", &nf);
                    	printf(" Nota de Biologia: ");
                    		scanf("%f", &nb);
                    	printf(" Nota de Artes: ");
                    		scanf("%f", &na);
                    	printf(" Nota de Espanhol: ");
                    		scanf("%f", &ne);

                    	float nfe = (nq + nf + nb + na + ne) / 5;

                    	if (nfe >= 7) {
                    	    printf(" APROVADO com %.2f.", nfe);
                    	} else if (nfe >= 5 && nfe < 7) {
                    	    printf(" RECUPERAÇÂO com %.2f.", nfe);
                    	} else {
                   		    printf(" REPROVADO com %.2f.", nfe);
                    	}
                    break;

               		case 2:
                	    printf("\n----Bem-vindo as notas de Humanas---- ");
                    

                	    printf("\n Nota de Sociologia: ");
               		    	scanf("%f", &ns);
                    	printf(" Nota de Filosofia: ");
                    		scanf("%f", &nfl);
                    	printf(" Nota de Geografia: ");
                    		scanf("%f", &ng);
                    	printf(" Nota de História: ");
                    		scanf("%f", &nh);
                    	printf(" Nota de Inglês: ");
                    		scanf("%f", &ni);

                	    float nfh = (ns + nfl + ng + nh + ni) / 5;

                	    if (nfh >= 8) {
                	        printf(" APROVADO com %.2f.", nfh);
                	    } else if (nfh >= 5 && nfh < 8) {
                	        printf(" RECUPERAÇÂO com %.2f.", nfh);
                    	} else {
                        	printf(" REPROVADO com %.2f.", nfh);
                    	}
                    break;

                	case 3:
                    	printf("\n ----Bem-vindo as notas de Disciplinas Anuais---- ");
                    
                    
                    	printf("\n 1 - Matemática\n 2 - Português\n 3 - Educação Física");
                    	printf("\n Sua escolha: ");
                    		scanf("%d", &nda);

                    	switch (nda) {
                        	case 1:
                            	printf("\n ----Bem-vindo as notas de Matemática---- ");
                            
                            
                            	printf("\n Primeira nota: ");
                            		scanf("%f", &pnm);
                            	printf(" Segunda nota: ");
                            		scanf("%f", &snm);
                            	printf(" Terceira nota: ");
                            		scanf("%f", &tnm);
                            	printf(" Quarta nota: ");
                            		scanf("%f", &qnm);

                            	float nam = pnm + snm + tnm + qnm;

                            	if (nam >= 28) {
                            	    printf(" APROVADO com %.2f.", nam);
                            	} else if (nam >= 20 && nam < 28) {
                            	    printf(" RECUPERAÇÂO com %.2f.", nam);
                            	} else {
                            	    printf(" REPROVADO com %.2f.", nam);
                            	}
                            break;

                        	case 2:
                            	printf("\n ----Bem-vindo as notas de Português---- ");
                            
                            
                            	printf("\n Primeira nota: ");
                            		scanf("%f", &pnp);
                            	printf(" Segunda nota: ");
                            		scanf("%f", &snp);
                           		printf(" Terceira nota: ");
                           			scanf("%f", &tnp);
                            	printf(" Quarta nota: ");
                           		 	scanf("%f", &qnp);

                            	float nap = pnp + snp + tnp + qnp;

                            	if (nap >= 28) {
                            	    printf(" APROVADO com %.2f.", nap);
                            	} else if (nap >= 20 && nap < 28) {
                            	    printf(" RECUPERAÇÂO com %.2f.", nap);
                            	} else {
                            	    printf(" REPROVADO com %.2f.", nap);
                            	}
                            break;

                        	case 3:
                            	printf("\n ----Bem-vindo às notas de Educação Física---- ");
                            
                            
                            	printf("\n Primeira nota: ");
                            		scanf("%f", &pned);
                            	printf(" Segunda nota: ");
                            		scanf("%f", &sned);
                            	printf(" Terceira nota: ");
                           		 	scanf("%f", &tned);
                            	printf(" Quarta nota: ");
                            		scanf("%f", &qned);

                            	float naed = pned + sned + tned + qned;

                            	if (naed >= 28) {
                            	    printf(" APROVADO com %.2f.", naed);
                            	} else if (naed >= 20 && naed < 28) {
                            	    printf(" RECUPERAÇÃO com %.2f.", naed);
                            	} else {
                            	    printf(" REPROVADO com %.2f.", naed);
                            	}
                            break;

                        	default:
                        	    printf(" Opção inválida.\n");
                        	break;
                    	}
                    break;

                	default:
                	    printf(" Opção inválida.\n");
               		 break;
        	}
        break;

        	default:
        	    printf(" Opção inválida.\n");
        	break;
    }

    return 0;
}

