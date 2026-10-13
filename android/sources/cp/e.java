package cp;

import java.lang.reflect.Method;
import java.util.Comparator;
import kotlin.text.Regex;

/* loaded from: classes3.dex */
public final class e implements Comparator {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6894d;

    public /* synthetic */ e(int i5) {
        this.f6894d = i5;
    }

    @Override // java.util.Comparator
    public final int compare(Object obj, Object obj2) {
        switch (this.f6894d) {
            case 0:
                return ho.a.a(((Method) obj).getName(), ((Method) obj2).getName());
            case 1:
                return ho.a.a(((y0) ((zo.m) obj)).getName(), ((y0) ((zo.m) obj2)).getName());
            default:
                Regex regex = h0.f6904d;
                Integer b10 = ip.q.b((ip.p) obj, (ip.p) obj2);
                if (b10 != null) {
                    return b10.intValue();
                }
                return 0;
        }
    }
}
