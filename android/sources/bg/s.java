package bg;

import android.hardware.Camera;
import android.view.View;
import java.util.Comparator;
import java.util.Map;
import java.util.Objects;
import java.util.WeakHashMap;
import kotlin.Pair;

/* loaded from: classes3.dex */
public final /* synthetic */ class s implements Comparator {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2990d;

    public /* synthetic */ s(int i5) {
        this.f2990d = i5;
    }

    @Override // java.util.Comparator
    public final int compare(Object obj, Object obj2) {
        switch (this.f2990d) {
            case 0:
                Map.Entry entry = (Map.Entry) obj;
                Map.Entry entry2 = (Map.Entry) obj2;
                v vVar = v.f2995x;
                Objects.requireNonNull(entry);
                Objects.requireNonNull(entry2);
                Comparable comparable = (Comparable) entry.getKey();
                Comparable comparable2 = (Comparable) entry2.getKey();
                comparable.getClass();
                comparable2.getClass();
                return comparable.compareTo(comparable2);
            case 1:
                return ((View) obj).getTop() - ((View) obj2).getTop();
            case 2:
                return ((byte[]) obj).length - ((byte[]) obj2).length;
            case 3:
                return ho.a.a((Integer) ((Pair) obj).f13474d, (Integer) ((Pair) obj2).f13474d);
            case 4:
                return ho.a.a((Integer) ((Pair) obj).f13474d, (Integer) ((Pair) obj2).f13474d);
            case 5:
                Camera.Size size = (Camera.Size) obj;
                Camera.Size size2 = (Camera.Size) obj2;
                return Integer.compare(size2.height * size2.width, size.height * size.width);
            case 6:
                int[] iArr = (int[]) obj;
                int[] iArr2 = (int[]) obj2;
                int compare = Integer.compare(iArr2[1], iArr[1]);
                return compare == 0 ? Integer.compare(iArr2[0], iArr[0]) : compare;
            case 7:
                long a = ((k8.a) obj).a();
                long a10 = ((k8.a) obj2).a();
                if (a < a10) {
                    return -1;
                }
                return a10 == a ? 0 : 1;
            case 8:
                return ((net.time4j.q0) obj).n((net.time4j.q0) obj2);
            case 9:
                ks.h hVar = (ks.h) ((ks.t) obj).b();
                ks.h hVar2 = (ks.h) ((ks.t) obj2).b();
                int compare2 = Double.compare(hVar2.getLength(), hVar.getLength());
                if (compare2 != 0 || hVar.equals(hVar2)) {
                    return compare2;
                }
                throw new IllegalArgumentException("Mixing different units of same length not allowed.");
            case 10:
                return ((net.time4j.tz.f) obj).a().compareTo(((net.time4j.tz.f) obj2).a());
            case 11:
                return ((p0.e) obj).f16292e - ((p0.e) obj2).f16292e;
            default:
                WeakHashMap weakHashMap = androidx.core.view.s0.a;
                float g6 = androidx.core.view.j0.g((View) obj);
                float g10 = androidx.core.view.j0.g((View) obj2);
                if (g6 > g10) {
                    return -1;
                }
                return g6 < g10 ? 1 : 0;
        }
    }
}
