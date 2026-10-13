package h5;

import android.hardware.Camera;
import com.budiyev.android.codescanner.CodeScanner;

/* loaded from: classes.dex */
public final class d implements Camera.PreviewCallback {
    public final /* synthetic */ CodeScanner a;

    public d(CodeScanner codeScanner) {
        this.a = codeScanner;
    }

    @Override // android.hardware.Camera.PreviewCallback
    public final void onPreviewFrame(byte[] bArr, Camera camera) {
        o oVar;
        s frameRect;
        if (!this.a.f3710s || this.a.f3711t || this.a.F == 3 || bArr == null || (oVar = this.a.f3708q) == null) {
            return;
        }
        n nVar = oVar.f9549b;
        if (nVar.f9548h == 2 && (frameRect = this.a.f3697d.getFrameRect()) != null && frameRect.f9559c - frameRect.a >= 1 && frameRect.f9560d - frameRect.f9558b >= 1) {
            l lVar = new l(bArr, oVar.f9550c, oVar.f9551d, oVar.f9552e, frameRect, oVar.f9553f, oVar.f9554g);
            synchronized (nVar.f9545e) {
                try {
                    if (nVar.f9548h != 5) {
                        nVar.f9547g = lVar;
                        nVar.f9545e.notify();
                    }
                } catch (Throwable th2) {
                    throw th2;
                }
            }
        }
    }
}
