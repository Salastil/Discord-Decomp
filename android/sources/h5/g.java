package h5;

import android.view.SurfaceHolder;
import com.budiyev.android.codescanner.CodeScanner;

/* loaded from: classes.dex */
public final class g implements SurfaceHolder.Callback {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ CodeScanner f9531d;

    public g(CodeScanner codeScanner) {
        this.f9531d = codeScanner;
    }

    @Override // android.view.SurfaceHolder.Callback
    public final void surfaceChanged(SurfaceHolder surfaceHolder, int i5, int i6, int i10) {
        CodeScanner codeScanner = this.f9531d;
        if (surfaceHolder.getSurface() == null) {
            codeScanner.f3716y = false;
            return;
        }
        if (codeScanner.f3710s && codeScanner.f3716y) {
            codeScanner.j(true);
        }
        if (!codeScanner.f3710s || codeScanner.f3716y) {
            return;
        }
        codeScanner.i(true);
    }

    @Override // android.view.SurfaceHolder.Callback
    public final void surfaceCreated(SurfaceHolder surfaceHolder) {
        CodeScanner codeScanner = this.f9531d;
        if (!codeScanner.f3710s || codeScanner.f3716y) {
            return;
        }
        codeScanner.i(true);
    }

    @Override // android.view.SurfaceHolder.Callback
    public final void surfaceDestroyed(SurfaceHolder surfaceHolder) {
        CodeScanner codeScanner = this.f9531d;
        if (codeScanner.f3710s && codeScanner.f3716y) {
            codeScanner.j(true);
        }
    }
}
