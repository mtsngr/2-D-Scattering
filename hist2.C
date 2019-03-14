{
    h = new TH1F("h", "dN; Degrees; Number of Shots", 9, 10, 190);


     /*

    while(file>>datum) {
     h->Fill(datum);
     }


     */

int data[200]; // toplam verı sayısı
int i;

for(i=0;i<33;i++){		
data[i]=rand()%20+10;		// 10 dahil 30 dahil değil 
h->Fill(data[i]);
}


for(i=0;i<42;i++){		
data[i]=rand()%20+30;		// 30 dahil 50 dahil değil 
h->Fill(data[i]);
}

for(i=0;i<64;i++){		
data[i]=rand()%20+50;		// 50 dahil 70 dahil değil 
h->Fill(data[i]);
}

for(i=0;i<97;i++){		
data[i]=rand()%20+70;		// 70 dahil 90 dahil değil 
h->Fill(data[i]);
}

for(i=0;i<112;i++){		
data[i]=rand()%20+90;		// 90 dahil 110 dahil değil 
h->Fill(data[i]);
}

for(i=0;i<127;i++){		
data[i]=rand()%20+110;		// 110 dahil 130 dahil değil 
h->Fill(data[i]);
}

for(i=0;i<130;i++){		
data[i]=rand()%20+130;		// 130 dahil 150 dahil değil 
h->Fill(data[i]);
}

for(i=0;i<165;i++){		
data[i]=rand()%20+150;		// 150 dahil 170 dahil değil 
h->Fill(data[i]);
}

for(i=0;i<138;i++){		
data[i]=rand()%20+170;		// 170 dahil 190 dahil değil 
h->Fill(data[i]);
}





/*
int x=rand()%20+1;

while(x<20){

h->Fill(x);
x++;
}
*/



h->SetFillColor(kRed+2);
h->SetMaximum(180);

gStyle->SetOptStat(111110);
gStyle->SetOptFit(1111);



h->Draw();
h->Draw("E1SAME");


}