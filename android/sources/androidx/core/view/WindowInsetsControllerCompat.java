package androidx.core.view;

import android.os.Build;
import android.view.View;
import android.view.Window;
import android.view.WindowInsetsController;

/* loaded from: classes.dex */
public final class WindowInsetsControllerCompat {
    public final zk.a a;

    public WindowInsetsControllerCompat(WindowInsetsController windowInsetsController) {
        if (Build.VERSION.SDK_INT >= 35) {
            this.a = new j2(windowInsetsController, new ve.i(windowInsetsController));
        } else {
            this.a = new i2(windowInsetsController, new ve.i(windowInsetsController));
        }
    }

    public final void a(int i5) {
        this.a.u(i5);
    }

    public final void b(boolean z5) {
        this.a.G(z5);
    }

    public final void c(boolean z5) {
        this.a.H(z5);
    }

    public final void d() {
        this.a.J();
    }

    public final void e(int i5) {
        this.a.L(i5);
    }

    public WindowInsetsControllerCompat(Window window, View view) {
        ve.i iVar = new ve.i(view);
        int i5 = Build.VERSION.SDK_INT;
        if (i5 >= 35) {
            this.a = new j2(window, iVar);
            return;
        }
        if (i5 >= 30) {
            this.a = new i2(window, iVar);
        } else if (i5 >= 26) {
            this.a = new g2(window, iVar);
        } else {
            this.a = new f2(window, iVar);
        }
    }
}
