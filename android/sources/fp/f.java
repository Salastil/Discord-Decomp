package fp;

import java.util.Arrays;
import java.util.EnumMap;
import java.util.HashMap;
import kotlin.jvm.functions.Function0;
import yq.c0;

/* loaded from: classes3.dex */
public final class f implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8854d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ i f8855e;

    public /* synthetic */ f(i iVar, int i5) {
        this.f8854d = i5;
        this.f8855e = iVar;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        int i5 = this.f8854d;
        i iVar = this.f8855e;
        switch (i5) {
            case 0:
                return Arrays.asList(iVar.l().D(p.f8915l), iVar.l().D(p.f8917n), iVar.l().D(p.f8918o), iVar.l().D(p.f8916m));
            default:
                EnumMap enumMap = new EnumMap(k.class);
                HashMap hashMap = new HashMap();
                HashMap hashMap2 = new HashMap();
                for (k kVar : k.values()) {
                    String b10 = kVar.f8868d.b();
                    if (b10 == null) {
                        i.a(47);
                        throw null;
                    }
                    c0 k = iVar.k(b10).k();
                    if (k == null) {
                        i.a(48);
                        throw null;
                    }
                    String b11 = kVar.f8869e.b();
                    if (b11 == null) {
                        i.a(47);
                        throw null;
                    }
                    c0 k5 = iVar.k(b11).k();
                    if (k5 == null) {
                        i.a(48);
                        throw null;
                    }
                    enumMap.put((EnumMap) kVar, (k) k5);
                    hashMap.put(k, k5);
                    hashMap2.put(k5, k);
                }
                return new h(enumMap, hashMap, hashMap2);
        }
    }
}
