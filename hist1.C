{
    h = new TH1F("h", "dN; Degrees; Number of Shots", 17, 10, 350);


int data[100]; // toplam verı sayısı
int i;

for(i=0;i<26;i++){		
data[i]=rand()%20+10;		// 10 dahil 30 dahil değil 
h->Fill(data[i]);
}


for(i=0;i<24;i++){		
data[i]=rand()%20+30;		// 30 dahil 50 dahil değil 
h->Fill(data[i]);
}

for(i=0;i<32;i++){		
data[i]=rand()%20+50;		// 50 dahil 70 dahil değil 
h->Fill(data[i]);
}

for(i=0;i<45;i++){		
data[i]=rand()%20+70;		// 70 dahil 90 dahil değil 
h->Fill(data[i]);
}

for(i=0;i<46;i++){		
data[i]=rand()%20+90;		// 90 dahil 110 dahil değil 
h->Fill(data[i]);
}

for(i=0;i<59;i++){		
data[i]=rand()%20+110;		// 110 dahil 130 dahil değil 
h->Fill(data[i]);
}

for(i=0;i<71;i++){		
data[i]=rand()%20+130;		// 130 dahil 150 dahil değil 
h->Fill(data[i]);
}

for(i=0;i<81;i++){		
data[i]=rand()%20+150;		// 150 dahil 170 dahil değil 
h->Fill(data[i]);
}

for(i=0;i<69;i++){		
data[i]=rand()%20+170;		// 170 dahil 190 dahil değil 
h->Fill(data[i]);
}

for(i=0;i<84;i++){		
data[i]=rand()%20+190;		// 190 dahil 210 dahil değil 
h->Fill(data[i]);
}

for(i=0;i<59;i++){		
data[i]=rand()%20+210;		// 210 dahil 230 dahil değil 
h->Fill(data[i]);
}

for(i=0;i<68;i++){		
data[i]=rand()%20+230;		// 230 dahil 250 dahil değil 
h->Fill(data[i]);
}

for(i=0;i<66;i++){		
data[i]=rand()%20+250;		// 250 dahil 270 dahil değil 
h->Fill(data[i]);
}

for(i=0;i<52;i++){		
data[i]=rand()%20+270;		// 270 dahil 290 dahil değil 
h->Fill(data[i]);
}

for(i=0;i<32;i++){		
data[i]=rand()%20+290;		// 290 dahil 310 dahil değil 
h->Fill(data[i]);
}

for(i=0;i<18;i++){		
data[i]=rand()%20+310;		// 310 dahil 330 dahil değil 
h->Fill(data[i]);
}

for(i=0;i<7;i++){		
data[i]=rand()%20+330;		// 330 dahil 350 dahil değil 
h->Fill(data[i]);
}


h->SetFillColor(kRed+2);
h->SetMaximum(100);

gStyle->SetOptStat(111110);
gStyle->SetOptFit(1111);



h->Draw();
h->Draw("E1SAME");


}