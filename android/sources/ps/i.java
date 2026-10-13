package ps;

import java.security.cert.Certificate;
import java.security.cert.X509Certificate;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.d0;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;

/* loaded from: classes3.dex */
public final class i extends Lambda implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f16543d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ j f16544e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f16545i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f16546v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ i(j jVar, Object obj, Object obj2, int i5) {
        super(0);
        this.f16543d = i5;
        this.f16544e = jVar;
        this.f16545i = obj;
        this.f16546v = obj2;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f16543d) {
            case 0:
                List list = (List) this.f16545i;
                e4.f fVar = this.f16544e.f16548b;
                List k = fVar == null ? null : fVar.k((String) this.f16546v, list);
                if (k != null) {
                    list = k;
                }
                ArrayList arrayList = new ArrayList(d0.l(list, 10));
                Iterator it = list.iterator();
                while (it.hasNext()) {
                    arrayList.add((X509Certificate) ((Certificate) it.next()));
                }
                return arrayList;
            default:
                e4.f fVar2 = this.f16544e.f16548b;
                Intrinsics.checkNotNull(fVar2);
                return fVar2.k(((a) this.f16546v).f16522h.f16034d, ((q) this.f16545i).a());
        }
    }
}
