{
	gStyle->SetTitleY(0.8);
	gStyle->SetOptFit(111);
	gStyle->SetPadLeftMargin(0.11);
	gStyle->SetTitleOffset(0.9,"y");

	const int n=9;
	double z[n] = {0, 2, 4, 6, 8, 10, 12, 14, 16};
	double s[n] = {100, 54.59, 27.15, 12.57, 5.70, 2.48, 1.18, 0.37, 0.22};
	double dz[n]= {0};
	double ds[n]; for (int i=0; i<n; i++) ds[i]=sqrt(s[i]*100)/100;
	TGraphErrors g(n, z, s, dz, ds);
	g.Draw("ap");
	g.SetTitle("Survivability of 2.614 MeV #gamma in Pb"
		 ";Pb thickness [cm];(# of penetrated)/(# of generated) [%]");

	TF1 f("f","expo",0,20);
	g.Fit("f");
}
