package p2;

import android.os.Handler;
import android.os.Looper;
import android.util.Log;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentManager;
import java.util.Set;
import jc.b0;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class d {
    public static final c a = c.f16305c;

    public static c a(Fragment fragment) {
        while (fragment != null) {
            if (fragment.isAdded()) {
                FragmentManager parentFragmentManager = fragment.getParentFragmentManager();
                Intrinsics.checkNotNullExpressionValue(parentFragmentManager, "declaringFragment.parentFragmentManager");
                parentFragmentManager.getClass();
            }
            fragment = fragment.getParentFragment();
        }
        return a;
    }

    public static void b(c cVar, m mVar) {
        Fragment fragment = mVar.f16308d;
        String name = fragment.getClass().getName();
        Set set = cVar.a;
        if (set.contains(b.f16298d)) {
            Log.d("FragmentStrictMode", "Policy violation in ".concat(name), mVar);
        }
        if (set.contains(b.f16299e)) {
            b0 b0Var = new b0(13, name, mVar);
            if (!fragment.isAdded()) {
                b0Var.run();
                throw null;
            }
            Handler handler = fragment.getParentFragmentManager().f1933w.f1912i;
            if (Intrinsics.areEqual(handler.getLooper(), Looper.myLooper())) {
                b0Var.run();
                throw null;
            }
            handler.post(b0Var);
        }
    }

    public static void c(m mVar) {
        if (FragmentManager.M(3)) {
            Log.d("FragmentManager", "StrictMode violation in ".concat(mVar.f16308d.getClass().getName()), mVar);
        }
    }

    public static final void d(Fragment fragment, String previousFragmentId) {
        Intrinsics.checkNotNullParameter(fragment, "fragment");
        Intrinsics.checkNotNullParameter(previousFragmentId, "previousFragmentId");
        Intrinsics.checkNotNullParameter(fragment, "fragment");
        Intrinsics.checkNotNullParameter(previousFragmentId, "previousFragmentId");
        a aVar = new a(fragment, "Attempting to reuse fragment " + fragment + " with previous ID " + previousFragmentId);
        c(aVar);
        c a10 = a(fragment);
        if (a10.a.contains(b.f16300i) && e(a10, fragment.getClass(), a.class)) {
            b(a10, aVar);
        }
    }

    public static boolean e(c cVar, Class cls, Class cls2) {
        Set set = (Set) cVar.f16306b.get(cls.getName());
        if (set == null) {
            return true;
        }
        if (Intrinsics.areEqual(cls2.getSuperclass(), m.class) || !CollectionsKt.E(set, cls2.getSuperclass())) {
            return !set.contains(cls2);
        }
        return false;
    }
}
