package androidx.core.view;

import android.os.Build;
import android.view.WindowInsets;
import android.view.WindowInsetsAnimation;
import android.view.WindowInsetsAnimation$Callback;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;

/* loaded from: classes.dex */
public final class j1 extends WindowInsetsAnimation$Callback {
    public final d1 a;

    /* renamed from: b, reason: collision with root package name */
    public List f1604b;

    /* renamed from: c, reason: collision with root package name */
    public ArrayList f1605c;

    /* renamed from: d, reason: collision with root package name */
    public final HashMap f1606d;

    public j1(d1 d1Var) {
        super(d1Var.getDispatchMode());
        this.f1606d = new HashMap();
        this.a = d1Var;
    }

    public final m1 a(WindowInsetsAnimation windowInsetsAnimation) {
        m1 m1Var = (m1) this.f1606d.get(windowInsetsAnimation);
        if (m1Var == null) {
            m1Var = new m1(0, null, 0L);
            if (Build.VERSION.SDK_INT >= 30) {
                m1Var.a = new k1(windowInsetsAnimation);
            }
            this.f1606d.put(windowInsetsAnimation, m1Var);
        }
        return m1Var;
    }

    public final void onEnd(WindowInsetsAnimation windowInsetsAnimation) {
        this.a.onEnd(a(windowInsetsAnimation));
        this.f1606d.remove(windowInsetsAnimation);
    }

    public final void onPrepare(WindowInsetsAnimation windowInsetsAnimation) {
        this.a.onPrepare(a(windowInsetsAnimation));
    }

    public final WindowInsets onProgress(WindowInsets windowInsets, List list) {
        ArrayList arrayList = this.f1605c;
        if (arrayList == null) {
            ArrayList arrayList2 = new ArrayList(list.size());
            this.f1605c = arrayList2;
            this.f1604b = Collections.unmodifiableList(arrayList2);
        } else {
            arrayList.clear();
        }
        for (int size = list.size() - 1; size >= 0; size--) {
            WindowInsetsAnimation windowInsetsAnimation = (WindowInsetsAnimation) list.get(size);
            m1 a = a(windowInsetsAnimation);
            a.a.d(windowInsetsAnimation.getFraction());
            this.f1605c.add(a);
        }
        return this.a.onProgress(WindowInsetsCompat.g(null, windowInsets), this.f1604b).f();
    }

    public final WindowInsetsAnimation.Bounds onStart(WindowInsetsAnimation windowInsetsAnimation, WindowInsetsAnimation.Bounds bounds) {
        c1 onStart = this.a.onStart(a(windowInsetsAnimation), new c1(bounds));
        onStart.getClass();
        i1.c();
        return i1.a(onStart.a.d(), onStart.f1572b.d());
    }
}
