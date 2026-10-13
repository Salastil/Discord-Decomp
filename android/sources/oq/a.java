package oq;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import kotlin.collections.d0;
import kotlin.collections.m0;
import lp.r0;

/* loaded from: classes3.dex */
public final class a implements ir.b {

    /* renamed from: e, reason: collision with root package name */
    public static final a f16174e = new a(0);

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f16175d;

    public /* synthetic */ a(int i5) {
        this.f16175d = i5;
    }

    @Override // ir.b
    public final Iterable c(Object obj) {
        Collection i5;
        switch (this.f16175d) {
            case 0:
                int i6 = e.a;
                Collection i10 = ((r0) obj).i();
                ArrayList arrayList = new ArrayList(d0.l(i10, 10));
                Iterator it = ((ArrayList) i10).iterator();
                while (it.hasNext()) {
                    arrayList.add(((r0) it.next()).a());
                }
                return arrayList;
            default:
                ip.d dVar = (ip.d) obj;
                return (dVar == null || (i5 = dVar.i()) == null) ? m0.f13512d : i5;
        }
    }
}
