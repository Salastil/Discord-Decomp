package androidx.appcompat.widget;

import android.content.Context;
import android.os.Build;
import android.util.Log;
import android.view.MenuItem;
import android.widget.PopupWindow;
import java.lang.reflect.Method;

/* loaded from: classes.dex */
public final class l2 extends g2 implements h2 {
    public static final Method a0;
    public u4.c Z;

    static {
        try {
            if (Build.VERSION.SDK_INT <= 28) {
                a0 = PopupWindow.class.getDeclaredMethod("setTouchModal", Boolean.TYPE);
            }
        } catch (NoSuchMethodException unused) {
            Log.i("MenuPopupWindow", "Could not find method setTouchModal() on PopupWindow. Oh well.");
        }
    }

    @Override // androidx.appcompat.widget.h2
    public final void g(n.j jVar, MenuItem menuItem) {
        u4.c cVar = this.Z;
        if (cVar != null) {
            cVar.g(jVar, menuItem);
        }
    }

    @Override // androidx.appcompat.widget.g2
    public final t1 n(Context context, boolean z5) {
        k2 k2Var = new k2(context, z5);
        k2Var.setHoverListener(this);
        return k2Var;
    }

    @Override // androidx.appcompat.widget.h2
    public final void x(n.j jVar, n.l lVar) {
        u4.c cVar = this.Z;
        if (cVar != null) {
            cVar.x(jVar, lVar);
        }
    }
}
