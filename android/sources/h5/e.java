package h5;

import android.hardware.Camera;
import com.budiyev.android.codescanner.CodeScanner;

/* loaded from: classes.dex */
public final class e implements Camera.AutoFocusCallback {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ CodeScanner f9528b;

    public /* synthetic */ e(CodeScanner codeScanner, int i5) {
        this.a = i5;
        this.f9528b = codeScanner;
    }

    @Override // android.hardware.Camera.AutoFocusCallback
    public final void onAutoFocus(boolean z5, Camera camera) {
        switch (this.a) {
            case 0:
                this.f9528b.f3717z = false;
                break;
            default:
                this.f9528b.f3715x = false;
                break;
        }
    }
}
