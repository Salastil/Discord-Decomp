package ks;

import java.util.Comparator;
import java.util.Map;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import yq.y;

/* loaded from: classes3.dex */
public final class o implements Comparator {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f13670d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f13671e;

    public /* synthetic */ o(int i5, Object obj) {
        this.f13670d = i5;
        this.f13671e = obj;
    }

    @Override // java.util.Comparator
    public final int compare(Object obj, Object obj2) {
        switch (this.f13670d) {
            case 0:
                Map map = (Map) this.f13671e;
                Double d6 = (Double) map.get(obj);
                double d7 = Double.NaN;
                double length = d6 == null ? obj instanceof h ? ((h) h.class.cast(obj)).getLength() : Double.NaN : d6.doubleValue();
                Double d8 = (Double) map.get(obj2);
                if (d8 != null) {
                    d7 = d8.doubleValue();
                } else if (obj2 instanceof h) {
                    d7 = ((h) h.class.cast(obj2)).getLength();
                }
                return Double.compare(length, d7);
            default:
                y yVar = (y) obj;
                Function1 function1 = (Function1) this.f13671e;
                Intrinsics.checkNotNull(yVar);
                String obj3 = function1.invoke(yVar).toString();
                y yVar2 = (y) obj2;
                Intrinsics.checkNotNull(yVar2);
                return ho.a.a(obj3, function1.invoke(yVar2).toString());
        }
    }
}
