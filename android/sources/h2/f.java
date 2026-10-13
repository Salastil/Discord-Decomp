package h2;

import androidx.datastore.preferences.protobuf.j;
import androidx.datastore.preferences.protobuf.t;
import androidx.datastore.preferences.protobuf.u;
import androidx.datastore.preferences.protobuf.x;
import e2.k;
import fo.n;
import g2.g;
import java.io.FileInputStream;
import java.util.Arrays;
import java.util.Collections;
import java.util.Map;
import java.util.Set;
import java.util.logging.Logger;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class f {
    public static final f a = new f();

    public final b a(FileInputStream input) {
        Intrinsics.checkNotNullParameter(input, "input");
        try {
            g2.c l6 = g2.c.l(input);
            Intrinsics.checkNotNullExpressionValue(l6, "{\n                PreferencesProto.PreferenceMap.parseFrom(input)\n            }");
            d[] pairs = new d[0];
            Intrinsics.checkNotNullParameter(pairs, "pairs");
            b bVar = new b(false);
            d[] pairs2 = (d[]) Arrays.copyOf(pairs, 0);
            Intrinsics.checkNotNullParameter(pairs2, "pairs");
            if (bVar.f9483b.get()) {
                throw new IllegalStateException("Do mutate preferences once returned to DataStore.");
            }
            if (pairs2.length > 0) {
                d dVar = pairs2[0];
                throw null;
            }
            Map j = l6.j();
            Intrinsics.checkNotNullExpressionValue(j, "preferencesProto.preferencesMap");
            for (Map.Entry entry : j.entrySet()) {
                String name = (String) entry.getKey();
                g value = (g) entry.getValue();
                Intrinsics.checkNotNullExpressionValue(name, "name");
                Intrinsics.checkNotNullExpressionValue(value, "value");
                int x5 = value.x();
                switch (x5 == 0 ? -1 : e.a[f0.e.b(x5)]) {
                    case -1:
                        throw new e2.a("Value case is null.", 0);
                    case 0:
                    default:
                        throw new n();
                    case 1:
                        Intrinsics.checkNotNullParameter(name, "name");
                        c key = new c(name);
                        Boolean valueOf = Boolean.valueOf(value.p());
                        Intrinsics.checkNotNullParameter(key, "key");
                        bVar.a(key, valueOf);
                        break;
                    case 2:
                        Intrinsics.checkNotNullParameter(name, "name");
                        c key2 = new c(name);
                        Float valueOf2 = Float.valueOf(value.s());
                        Intrinsics.checkNotNullParameter(key2, "key");
                        bVar.a(key2, valueOf2);
                        break;
                    case 3:
                        Intrinsics.checkNotNullParameter(name, "name");
                        c key3 = new c(name);
                        Double valueOf3 = Double.valueOf(value.r());
                        Intrinsics.checkNotNullParameter(key3, "key");
                        bVar.a(key3, valueOf3);
                        break;
                    case 4:
                        Intrinsics.checkNotNullParameter(name, "name");
                        c key4 = new c(name);
                        Integer valueOf4 = Integer.valueOf(value.t());
                        Intrinsics.checkNotNullParameter(key4, "key");
                        bVar.a(key4, valueOf4);
                        break;
                    case 5:
                        Intrinsics.checkNotNullParameter(name, "name");
                        c key5 = new c(name);
                        Long valueOf5 = Long.valueOf(value.u());
                        Intrinsics.checkNotNullParameter(key5, "key");
                        bVar.a(key5, valueOf5);
                        break;
                    case 6:
                        Intrinsics.checkNotNullParameter(name, "name");
                        c key6 = new c(name);
                        String v5 = value.v();
                        Intrinsics.checkNotNullExpressionValue(v5, "value.string");
                        Intrinsics.checkNotNullParameter(key6, "key");
                        bVar.a(key6, v5);
                        break;
                    case 7:
                        Intrinsics.checkNotNullParameter(name, "name");
                        c key7 = new c(name);
                        u k = value.w().k();
                        Intrinsics.checkNotNullExpressionValue(k, "value.stringSet.stringsList");
                        Set l02 = CollectionsKt.l0(k);
                        Intrinsics.checkNotNullParameter(key7, "key");
                        bVar.a(key7, l02);
                        break;
                    case 8:
                        throw new e2.a("Value not set.", 0);
                }
            }
            Map unmodifiableMap = Collections.unmodifiableMap(bVar.a);
            Intrinsics.checkNotNullExpressionValue(unmodifiableMap, "unmodifiableMap(preferencesMap)");
            return new b(v0.o(unmodifiableMap), true);
        } catch (x e9) {
            Intrinsics.checkNotNullParameter("Unable to parse preferences proto.", "message");
            throw new e2.a("Unable to parse preferences proto.", e9);
        }
    }

    public final Unit b(Object obj, k kVar) {
        t a10;
        Map unmodifiableMap = Collections.unmodifiableMap(((b) obj).a);
        Intrinsics.checkNotNullExpressionValue(unmodifiableMap, "unmodifiableMap(preferencesMap)");
        g2.a k = g2.c.k();
        for (Map.Entry entry : unmodifiableMap.entrySet()) {
            c cVar = (c) entry.getKey();
            Object value = entry.getValue();
            String str = cVar.a;
            if (value instanceof Boolean) {
                g2.f y5 = g.y();
                boolean booleanValue = ((Boolean) value).booleanValue();
                y5.c();
                g.m((g) y5.f1810e, booleanValue);
                a10 = y5.a();
                Intrinsics.checkNotNullExpressionValue(a10, "newBuilder().setBoolean(value).build()");
            } else if (value instanceof Float) {
                g2.f y6 = g.y();
                float floatValue = ((Number) value).floatValue();
                y6.c();
                g.n((g) y6.f1810e, floatValue);
                a10 = y6.a();
                Intrinsics.checkNotNullExpressionValue(a10, "newBuilder().setFloat(value).build()");
            } else if (value instanceof Double) {
                g2.f y10 = g.y();
                double doubleValue = ((Number) value).doubleValue();
                y10.c();
                g.l((g) y10.f1810e, doubleValue);
                a10 = y10.a();
                Intrinsics.checkNotNullExpressionValue(a10, "newBuilder().setDouble(value).build()");
            } else if (value instanceof Integer) {
                g2.f y11 = g.y();
                int intValue = ((Number) value).intValue();
                y11.c();
                g.o((g) y11.f1810e, intValue);
                a10 = y11.a();
                Intrinsics.checkNotNullExpressionValue(a10, "newBuilder().setInteger(value).build()");
            } else if (value instanceof Long) {
                g2.f y12 = g.y();
                long longValue = ((Number) value).longValue();
                y12.c();
                g.i((g) y12.f1810e, longValue);
                a10 = y12.a();
                Intrinsics.checkNotNullExpressionValue(a10, "newBuilder().setLong(value).build()");
            } else if (value instanceof String) {
                g2.f y13 = g.y();
                y13.c();
                g.j((g) y13.f1810e, (String) value);
                a10 = y13.a();
                Intrinsics.checkNotNullExpressionValue(a10, "newBuilder().setString(value).build()");
            } else {
                if (!(value instanceof Set)) {
                    throw new IllegalStateException(Intrinsics.stringPlus("PreferencesSerializer does not support type: ", value.getClass().getName()));
                }
                g2.f y14 = g.y();
                g2.d l6 = g2.e.l();
                l6.c();
                g2.e.i((g2.e) l6.f1810e, (Set) value);
                y14.c();
                g.k((g) y14.f1810e, l6);
                a10 = y14.a();
                Intrinsics.checkNotNullExpressionValue(a10, "newBuilder().setStringSet(\n                    StringSet.newBuilder().addAllStrings(value as Set<String>)\n                ).build()");
            }
            k.getClass();
            str.getClass();
            k.c();
            g2.c.i((g2.c) k.f1810e).put(str, (g) a10);
        }
        g2.c cVar2 = (g2.c) k.a();
        int a11 = cVar2.a();
        Logger logger = j.f1765h;
        if (a11 > 4096) {
            a11 = 4096;
        }
        j jVar = new j(kVar, a11);
        cVar2.c(jVar);
        if (jVar.f1770f > 0) {
            jVar.B();
        }
        return Unit.a;
    }
}
