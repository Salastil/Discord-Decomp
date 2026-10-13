package androidx.appcompat.widget;

import android.R;
import android.graphics.Insets;
import android.graphics.PorterDuff;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.os.Build;
import java.lang.reflect.InvocationTargetException;

/* loaded from: classes.dex */
public abstract class n1 {
    public static final int[] a = {R.attr.state_checked};

    /* renamed from: b, reason: collision with root package name */
    public static final int[] f1048b = new int[0];

    /* renamed from: c, reason: collision with root package name */
    public static final Rect f1049c = new Rect();

    public static void a(Drawable drawable) {
        String name = drawable.getClass().getName();
        int i5 = Build.VERSION.SDK_INT;
        if (i5 < 29 || i5 >= 31 || !"android.graphics.drawable.ColorStateListDrawable".equals(name)) {
            return;
        }
        int[] state = drawable.getState();
        if (state == null || state.length == 0) {
            drawable.setState(a);
        } else {
            drawable.setState(f1048b);
        }
        drawable.setState(state);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static Rect b(Drawable drawable) {
        int i5;
        int i6;
        int i10;
        int i11;
        int i12 = Build.VERSION.SDK_INT;
        if (i12 >= 29) {
            Insets a10 = m1.a(drawable);
            i5 = a10.left;
            i6 = a10.top;
            i10 = a10.right;
            i11 = a10.bottom;
            return new Rect(i5, i6, i10, i11);
        }
        boolean z5 = drawable instanceof c1.b;
        Object obj = drawable;
        if (z5) {
            ((c1.c) ((c1.b) drawable)).getClass();
            obj = null;
        }
        if (i12 >= 29) {
            boolean z6 = l1.a;
        } else if (l1.a) {
            try {
                Object invoke = l1.f1028b.invoke(obj, null);
                if (invoke != null) {
                    return new Rect(l1.f1029c.getInt(invoke), l1.f1030d.getInt(invoke), l1.f1031e.getInt(invoke), l1.f1032f.getInt(invoke));
                }
            } catch (IllegalAccessException | InvocationTargetException unused) {
            }
        }
        return f1049c;
    }

    public static PorterDuff.Mode c(int i5, PorterDuff.Mode mode) {
        if (i5 == 3) {
            return PorterDuff.Mode.SRC_OVER;
        }
        if (i5 == 5) {
            return PorterDuff.Mode.SRC_IN;
        }
        if (i5 == 9) {
            return PorterDuff.Mode.SRC_ATOP;
        }
        switch (i5) {
            case 14:
                return PorterDuff.Mode.MULTIPLY;
            case 15:
                return PorterDuff.Mode.SCREEN;
            case 16:
                return PorterDuff.Mode.ADD;
            default:
                return mode;
        }
    }
}
