package h5;

import android.hardware.Camera;
import com.budiyev.android.codescanner.CodeScanner;

/* loaded from: classes.dex */
public final class f implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f9529d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ CodeScanner f9530e;

    public /* synthetic */ f(CodeScanner codeScanner, int i5) {
        this.f9529d = i5;
        this.f9530e = codeScanner;
    }

    @Override // java.lang.Runnable
    public final void run() {
        o oVar;
        int i5;
        switch (this.f9529d) {
            case 0:
                CodeScanner codeScanner = this.f9530e;
                codeScanner.A = false;
                if (codeScanner.G == 1) {
                    CodeScanner codeScanner2 = this.f9530e;
                    if (codeScanner2.f3710s && codeScanner2.f3716y && (oVar = codeScanner2.f3708q) != null && oVar.f9555h && codeScanner2.f3712u) {
                        if (!codeScanner2.f3717z || (i5 = codeScanner2.C) >= 2) {
                            try {
                                Camera camera = oVar.a;
                                camera.cancelAutoFocus();
                                camera.autoFocus(codeScanner2.f3702i);
                                codeScanner2.C = 0;
                                codeScanner2.f3717z = true;
                            } catch (Exception unused) {
                                codeScanner2.f3717z = false;
                            }
                        } else {
                            codeScanner2.C = i5 + 1;
                        }
                        codeScanner2.d();
                        break;
                    }
                }
                break;
            default:
                CodeScanner codeScanner3 = this.f9530e;
                if (codeScanner3.f3710s && codeScanner3.f3716y) {
                    codeScanner3.f3698e.removeCallback(codeScanner3.f3699f);
                    codeScanner3.j(false);
                    break;
                }
                break;
        }
    }
}
