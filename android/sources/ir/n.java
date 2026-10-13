package ir;

import java.util.AbstractCollection;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.collections.b0;
import kotlin.collections.m0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class n {
    public static final l a = new l();

    public static /* synthetic */ void a(int i5) {
        Object[] objArr = new Object[3];
        switch (i5) {
            case 1:
            case 5:
            case 8:
            case 11:
            case 15:
            case 18:
            case 21:
            case 23:
                objArr[0] = "neighbors";
                break;
            case 2:
            case 12:
            case 16:
            case 19:
            case 24:
                objArr[0] = "visited";
                break;
            case 3:
            case 6:
            case 13:
            case 25:
                objArr[0] = "handler";
                break;
            case 4:
            case 7:
            case 17:
            case 20:
            default:
                objArr[0] = "nodes";
                break;
            case 9:
                objArr[0] = "predicate";
                break;
            case 10:
            case 14:
                objArr[0] = "node";
                break;
            case 22:
                objArr[0] = "current";
                break;
        }
        objArr[1] = "kotlin/reflect/jvm/internal/impl/utils/DFS";
        switch (i5) {
            case 7:
            case 8:
            case 9:
                objArr[2] = "ifAny";
                break;
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
                objArr[2] = "dfsFromNode";
                break;
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
                objArr[2] = "topologicalOrder";
                break;
            case 22:
            case 23:
            case 24:
            case 25:
                objArr[2] = "doDfs";
                break;
            default:
                objArr[2] = "dfs";
                break;
        }
        throw new IllegalArgumentException(String.format("Argument for @NotNull parameter '%s' of %s.%s must not be null", objArr));
    }

    public static final void b(AbstractCollection abstractCollection, Object obj) {
        Intrinsics.checkNotNullParameter(abstractCollection, "<this>");
        if (obj != null) {
            abstractCollection.add(obj);
        }
    }

    public static final List e(ArrayList arrayList) {
        Intrinsics.checkNotNullParameter(arrayList, "<this>");
        int size = arrayList.size();
        if (size == 0) {
            return m0.f13512d;
        }
        if (size == 1) {
            return b0.c(CollectionsKt.K(arrayList));
        }
        arrayList.trimToSize();
        return arrayList;
    }

    public static k f() {
        return new k(0);
    }

    public static Object g(Collection collection, b bVar, n nVar) {
        if (collection == null) {
            a(4);
            throw null;
        }
        c cVar = new c(0);
        Iterator it = collection.iterator();
        while (it.hasNext()) {
            h(it.next(), bVar, cVar, nVar);
        }
        return nVar.k();
    }

    public static void h(Object obj, b bVar, c cVar, n nVar) {
        if (obj == null) {
            a(22);
            throw null;
        }
        if (cVar.a.add(obj) && nVar.d(obj)) {
            Iterator it = bVar.c(obj).iterator();
            while (it.hasNext()) {
                h(it.next(), bVar, cVar, nVar);
            }
            nVar.c(obj);
        }
    }

    public static Boolean i(List list, b bVar, Function1 function1) {
        if (list == null) {
            a(7);
            throw null;
        }
        if (function1 != null) {
            return (Boolean) g(list, bVar, new a(function1, new boolean[1]));
        }
        a(9);
        throw null;
    }

    public static final boolean j(Throwable th2) {
        Intrinsics.checkNotNullParameter(th2, "<this>");
        Class<?> cls = th2.getClass();
        while (!Intrinsics.areEqual(cls.getCanonicalName(), "com.intellij.openapi.progress.ProcessCanceledException")) {
            cls = cls.getSuperclass();
            if (cls == null) {
                return false;
            }
        }
        return true;
    }

    public static void l(Object obj) {
        if (obj instanceof m) {
            Throwable e9 = ((m) obj).a;
            Intrinsics.checkNotNullParameter(e9, "e");
            throw e9;
        }
    }

    public abstract boolean d(Object obj);

    public abstract Object k();

    public void c(Object obj) {
    }
}
