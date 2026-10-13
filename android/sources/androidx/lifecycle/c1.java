package androidx.lifecycle;

import android.os.Bundle;
import android.view.View;
import android.view.ViewParent;
import com.discord.R;
import java.util.LinkedHashMap;
import java.util.concurrent.atomic.AtomicReference;
import kotlin.jvm.internal.Intrinsics;
import nr.m1;

/* loaded from: classes.dex */
public abstract class c1 {
    public static final lh.f a = new lh.f(2);

    public static o0 a(Bundle source, Bundle bundle) {
        if (source == null) {
            source = bundle;
        }
        if (source == null) {
            o0 o0Var = new o0();
            new LinkedHashMap();
            o0Var.a = new p9.c(kotlin.collections.v0.d());
            return o0Var;
        }
        ClassLoader classLoader = o0.class.getClassLoader();
        Intrinsics.checkNotNull(classLoader);
        source.setClassLoader(classLoader);
        Intrinsics.checkNotNullParameter(source, "source");
        go.i builder = new go.i(source.size());
        for (String str : source.keySet()) {
            Intrinsics.checkNotNull(str);
            builder.put(str, source.get(str));
        }
        Intrinsics.checkNotNullParameter(builder, "builder");
        go.i initialState = builder.b();
        Intrinsics.checkNotNullParameter(initialState, "initialState");
        o0 o0Var2 = new o0();
        new LinkedHashMap();
        o0Var2.a = new p9.c(initialState);
        return o0Var2;
    }

    public static final LifecycleOwner b(View view) {
        Intrinsics.checkNotNullParameter(view, "<this>");
        while (view != null) {
            Object tag = view.getTag(R.id.view_tree_lifecycle_owner);
            LifecycleOwner lifecycleOwner = tag instanceof LifecycleOwner ? (LifecycleOwner) tag : null;
            if (lifecycleOwner != null) {
                return lifecycleOwner;
            }
            Intrinsics.checkNotNullParameter(view, "<this>");
            Object parent = view.getParent();
            if (parent == null) {
                Object tag2 = view.getTag(R.id.view_tree_disjoint_parent);
                parent = tag2 instanceof ViewParent ? (ViewParent) tag2 : null;
            }
            view = parent instanceof View ? (View) parent : null;
        }
        return null;
    }

    public static final q c(LifecycleOwner lifecycleOwner) {
        Intrinsics.checkNotNullParameter(lifecycleOwner, "<this>");
        Lifecycle lifecycle = lifecycleOwner.getLifecycle();
        Intrinsics.checkNotNullParameter(lifecycle, "<this>");
        while (true) {
            q qVar = (q) ((AtomicReference) lifecycle.a.f9613d).get();
            if (qVar != null) {
                return qVar;
            }
            m1 m1Var = new m1();
            ur.e eVar = nr.g0.a;
            q qVar2 = new q(lifecycle, kotlin.coroutines.e.c(m1Var, sr.q.a.f16185w));
            AtomicReference atomicReference = (AtomicReference) lifecycle.a.f9613d;
            while (!atomicReference.compareAndSet(null, qVar2)) {
                if (atomicReference.get() != null) {
                    break;
                }
            }
            ur.e eVar2 = nr.g0.a;
            nr.x.t(qVar2, sr.q.a.f16185w, new p(qVar2, null), 2);
            return qVar2;
        }
    }

    public static final void d(View view, LifecycleOwner lifecycleOwner) {
        Intrinsics.checkNotNullParameter(view, "<this>");
        view.setTag(R.id.view_tree_lifecycle_owner, lifecycleOwner);
    }
}
