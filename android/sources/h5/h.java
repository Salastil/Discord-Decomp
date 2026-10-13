package h5;

import android.view.View;
import com.budiyev.android.codescanner.CodeScanner;
import com.budiyev.android.codescanner.CodeScannerView;

/* loaded from: classes.dex */
public final class h implements View.OnClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f9532d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ CodeScannerView f9533e;

    public /* synthetic */ h(CodeScannerView codeScannerView, int i5) {
        this.f9532d = i5;
        this.f9533e = codeScannerView;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        switch (this.f9532d) {
            case 0:
                CodeScanner codeScanner = this.f9533e.P;
                if (codeScanner != null) {
                    o oVar = codeScanner.f3708q;
                    if (oVar == null || oVar.f9555h) {
                        boolean z5 = !codeScanner.f3712u;
                        codeScanner.e(z5);
                        this.f9533e.setAutoFocusEnabled(z5);
                        return;
                    }
                    return;
                }
                return;
            default:
                CodeScanner codeScanner2 = this.f9533e.P;
                if (codeScanner2 != null) {
                    o oVar2 = codeScanner2.f3708q;
                    if (oVar2 == null || oVar2.f9556i) {
                        boolean z6 = true;
                        boolean z7 = !codeScanner2.f3713v;
                        synchronized (codeScanner2.a) {
                            try {
                                if (codeScanner2.f3713v == z7) {
                                    z6 = false;
                                }
                                codeScanner2.f3713v = z7;
                                codeScanner2.f3697d.setFlashEnabled(z7);
                                o oVar3 = codeScanner2.f3708q;
                                if (codeScanner2.f3710s && codeScanner2.f3716y && z6 && oVar3 != null && oVar3.f9556i) {
                                    codeScanner2.g(z7);
                                }
                            } catch (Throwable th2) {
                                throw th2;
                            }
                        }
                        this.f9533e.setFlashEnabled(z7);
                        return;
                    }
                    return;
                }
                return;
        }
    }
}
