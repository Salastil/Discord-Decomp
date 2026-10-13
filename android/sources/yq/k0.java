package yq;

import java.util.Iterator;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.reflect.KClass;

/* loaded from: classes3.dex */
public final class k0 extends fr.d {

    /* renamed from: e, reason: collision with root package name */
    public static final e4.r f21045e = new e4.r(27);

    /* renamed from: i, reason: collision with root package name */
    public static final k0 f21046i = new k0(kotlin.collections.m0.f13512d);

    public k0(List list) {
        fr.k arrayMap = fr.k.f9023d;
        Intrinsics.checkNotNull(arrayMap, "null cannot be cast to non-null type org.jetbrains.kotlin.util.ArrayMap<T of org.jetbrains.kotlin.util.AttributeArrayOwner>");
        Intrinsics.checkNotNullParameter(arrayMap, "arrayMap");
        this.f9009d = arrayMap;
        Iterator it = list.iterator();
        while (it.hasNext()) {
            j value = (j) it.next();
            value.getClass();
            KClass tClass = Reflection.getOrCreateKotlinClass(j.class);
            Intrinsics.checkNotNullParameter(tClass, "tClass");
            Intrinsics.checkNotNullParameter(value, "value");
            String keyQualifiedName = tClass.getQualifiedName();
            Intrinsics.checkNotNull(keyQualifiedName);
            Intrinsics.checkNotNullParameter(keyQualifiedName, "keyQualifiedName");
            Intrinsics.checkNotNullParameter(value, "value");
            int l6 = f21045e.l(keyQualifiedName);
            int a = this.f9009d.a();
            if (a != 0) {
                if (a == 1) {
                    fr.a aVar = this.f9009d;
                    try {
                        Intrinsics.checkNotNull(aVar, "null cannot be cast to non-null type org.jetbrains.kotlin.util.OneElementArrayMap<T of org.jetbrains.kotlin.util.AttributeArrayOwner>");
                        fr.q qVar = (fr.q) aVar;
                        int i5 = qVar.f9033e;
                        if (i5 == l6) {
                            this.f9009d = new fr.q(l6, value);
                        } else {
                            fr.c cVar = new fr.c();
                            cVar.f9007d = new Object[20];
                            cVar.f9008e = 0;
                            cVar.b(i5, qVar.f9032d);
                            this.f9009d = cVar;
                        }
                    } catch (ClassCastException e9) {
                        throw new IllegalStateException(fr.d.a(aVar, 1, "OneElementArrayMap"), e9);
                    }
                }
                this.f9009d.b(l6, value);
            } else {
                fr.a aVar2 = this.f9009d;
                if (!(aVar2 instanceof fr.k)) {
                    throw new IllegalStateException(fr.d.a(aVar2, 0, "EmptyArrayMap"));
                }
                this.f9009d = new fr.q(l6, value);
            }
        }
    }
}
