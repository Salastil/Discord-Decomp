package w;

import java.util.Iterator;
import java.util.Map;
import kotlin.collections.h;
import kotlin.collections.j;
import kotlin.collections.o;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class c extends o {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f19587e;

    /* renamed from: i, reason: collision with root package name */
    public final j f19588i;

    public /* synthetic */ c(j jVar, int i5) {
        this.f19587e = i5;
        this.f19588i = jVar;
    }

    @Override // kotlin.collections.a
    public final int a() {
        switch (this.f19587e) {
            case 0:
                return 0;
            case 1:
                return 0;
            default:
                return this.f19588i.c();
        }
    }

    @Override // kotlin.collections.a, java.util.Collection, java.util.List
    public final boolean contains(Object obj) {
        switch (this.f19587e) {
            case 0:
                if (obj instanceof Map.Entry) {
                    Map.Entry entry = (Map.Entry) obj;
                    b bVar = (b) this.f19588i;
                    Object obj2 = bVar.get(entry.getKey());
                    if (obj2 != null) {
                        return Intrinsics.areEqual(obj2, entry.getValue());
                    }
                    if (entry.getValue() == null && bVar.containsKey(entry.getKey())) {
                        return true;
                    }
                }
                return false;
            case 1:
                return ((b) this.f19588i).containsKey(obj);
            default:
                return this.f19588i.containsKey(obj);
        }
    }

    @Override // kotlin.collections.o, java.util.Collection, java.lang.Iterable, java.util.Set
    public final Iterator iterator() {
        switch (this.f19587e) {
            case 0:
                e eVar = e.f19592b;
                f[] fVarArr = new f[8];
                for (int i5 = 0; i5 < 8; i5++) {
                    fVarArr[i5] = new f(0);
                }
                return new d(fVarArr);
            case 1:
                e eVar2 = e.f19592b;
                f[] fVarArr2 = new f[8];
                for (int i6 = 0; i6 < 8; i6++) {
                    fVarArr2[i6] = new f(1);
                }
                return new d(fVarArr2);
            default:
                return new h(((c) this.f19588i.a()).iterator(), 0);
        }
    }
}
