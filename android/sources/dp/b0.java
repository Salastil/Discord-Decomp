package dp;

import cp.c2;
import cp.h0;
import ip.k0;
import java.lang.reflect.Member;
import java.lang.reflect.Method;
import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;
import kotlin.Pair;
import kotlin.collections.d0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* loaded from: classes3.dex */
public final class b0 implements g {
    public final Method a;

    /* renamed from: b, reason: collision with root package name */
    public final Method f7638b;

    /* renamed from: c, reason: collision with root package name */
    public final ArrayList f7639c;

    /* renamed from: d, reason: collision with root package name */
    public final ArrayList f7640d;

    /* renamed from: e, reason: collision with root package name */
    public final ArrayList f7641e;

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v17, types: [java.util.List] */
    /* JADX WARN: Type inference failed for: r0v18, types: [java.lang.Object] */
    /* JADX WARN: Type inference failed for: r0v19, types: [java.util.ArrayList] */
    public b0(ip.v descriptor, h0 container, String constructorDesc, List originalParameters) {
        ?? c6;
        Method l6;
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(constructorDesc, "constructorDesc");
        Intrinsics.checkNotNullParameter(originalParameters, "originalParameters");
        Method c8 = container.c("constructor-impl", constructorDesc);
        Intrinsics.checkNotNull(c8);
        this.a = c8;
        Method c10 = container.c("box-impl", StringsKt.O(constructorDesc, "V") + op.c.b(container.getJClass()));
        Intrinsics.checkNotNull(c10);
        this.f7638b = c10;
        ArrayList arrayList = new ArrayList(d0.l(originalParameters, 10));
        Iterator it = originalParameters.iterator();
        while (true) {
            List list = null;
            if (!it.hasNext()) {
                break;
            }
            yq.y type = ((k0) it.next()).getType();
            Intrinsics.checkNotNullExpressionValue(type, "getType(...)");
            yq.c0 b10 = yq.c.b(type);
            ArrayList m5 = android.support.v4.media.session.b.m(b10);
            if (m5 == null) {
                Class D = android.support.v4.media.session.b.D(b10);
                if (D != null && (l6 = android.support.v4.media.session.b.l(D, descriptor)) != null) {
                    list = kotlin.collections.b0.c(l6);
                }
            } else {
                list = m5;
            }
            arrayList.add(list);
        }
        this.f7639c = arrayList;
        ArrayList arrayList2 = new ArrayList(d0.l(originalParameters, 10));
        int i5 = 0;
        for (Object obj : originalParameters) {
            int i6 = i5 + 1;
            if (i5 < 0) {
                kotlin.collections.c0.k();
                throw null;
            }
            ip.i a = ((k0) obj).getType().r0().a();
            Intrinsics.checkNotNull(a, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.ClassDescriptor");
            ip.f fVar = (ip.f) a;
            List list2 = (List) this.f7639c.get(i5);
            if (list2 != null) {
                c6 = new ArrayList(d0.l(list2, 10));
                Iterator it2 = list2.iterator();
                while (it2.hasNext()) {
                    c6.add(((Method) it2.next()).getReturnType());
                }
            } else {
                Class k = c2.k(fVar);
                Intrinsics.checkNotNull(k);
                c6 = kotlin.collections.b0.c(k);
            }
            arrayList2.add(c6);
            i5 = i6;
        }
        this.f7640d = arrayList2;
        this.f7641e = d0.m(arrayList2);
    }

    @Override // dp.g
    public final List a() {
        return this.f7641e;
    }

    @Override // dp.g
    public final /* bridge */ /* synthetic */ Member b() {
        return null;
    }

    @Override // dp.g
    public final boolean c() {
        return false;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r6v1, types: [java.util.List] */
    /* JADX WARN: Type inference failed for: r6v2, types: [java.lang.Iterable] */
    /* JADX WARN: Type inference failed for: r6v3, types: [java.util.ArrayList] */
    @Override // dp.g
    public final Object call(Object[] args) {
        ?? c6;
        Intrinsics.checkNotNullParameter(args, "args");
        Intrinsics.checkNotNullParameter(args, "<this>");
        ArrayList other = this.f7639c;
        Intrinsics.checkNotNullParameter(other, "other");
        int length = args.length;
        ArrayList arrayList = new ArrayList(Math.min(d0.l(other, 10), length));
        Iterator it = other.iterator();
        int i5 = 0;
        while (it.hasNext()) {
            Object next = it.next();
            if (i5 >= length) {
                break;
            }
            arrayList.add(new Pair(args[i5], next));
            i5++;
        }
        ArrayList arrayList2 = new ArrayList();
        Iterator it2 = arrayList.iterator();
        while (it2.hasNext()) {
            Pair pair = (Pair) it2.next();
            Object obj = pair.f13474d;
            List list = (List) pair.f13475e;
            if (list != null) {
                c6 = new ArrayList(d0.l(list, 10));
                Iterator it3 = list.iterator();
                while (it3.hasNext()) {
                    c6.add(((Method) it3.next()).invoke(obj, null));
                }
            } else {
                c6 = kotlin.collections.b0.c(obj);
            }
            kotlin.collections.h0.o(arrayList2, c6);
        }
        Object[] array = arrayList2.toArray(new Object[0]);
        this.a.invoke(null, Arrays.copyOf(array, array.length));
        return this.f7638b.invoke(null, Arrays.copyOf(array, array.length));
    }

    @Override // dp.g
    public final Type getReturnType() {
        Class<?> returnType = this.f7638b.getReturnType();
        Intrinsics.checkNotNullExpressionValue(returnType, "getReturnType(...)");
        return returnType;
    }
}
