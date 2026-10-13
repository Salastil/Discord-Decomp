package androidx.appcompat.widget;

import android.view.View;
import android.widget.AbsListView;
import android.widget.AdapterView;
import java.lang.reflect.Method;

/* loaded from: classes.dex */
public abstract class p1 {
    public static final Method a;

    /* renamed from: b, reason: collision with root package name */
    public static final Method f1069b;

    /* renamed from: c, reason: collision with root package name */
    public static final Method f1070c;

    /* renamed from: d, reason: collision with root package name */
    public static final boolean f1071d;

    static {
        try {
            Class cls = Integer.TYPE;
            Class cls2 = Boolean.TYPE;
            Class cls3 = Float.TYPE;
            Method declaredMethod = AbsListView.class.getDeclaredMethod("positionSelector", cls, View.class, cls2, cls3, cls3);
            a = declaredMethod;
            declaredMethod.setAccessible(true);
            Method declaredMethod2 = AdapterView.class.getDeclaredMethod("setSelectedPositionInt", cls);
            f1069b = declaredMethod2;
            declaredMethod2.setAccessible(true);
            Method declaredMethod3 = AdapterView.class.getDeclaredMethod("setNextSelectedPositionInt", cls);
            f1070c = declaredMethod3;
            declaredMethod3.setAccessible(true);
            f1071d = true;
        } catch (NoSuchMethodException e9) {
            e9.printStackTrace();
        }
    }
}
