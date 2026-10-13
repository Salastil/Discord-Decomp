package ls;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class l0 extends j0 {
    public final /* synthetic */ int a = 0;

    /* renamed from: b, reason: collision with root package name */
    public final Object f14241b;

    public l0(String str) {
        this.f14241b = str;
    }

    @Override // ls.j0
    public final int a() {
        switch (this.a) {
            case 0:
                return ((String) this.f14241b).length();
            default:
                return 0;
        }
    }

    @Override // ls.j0
    public final j0 b(int i5) {
        switch (this.a) {
            case 0:
                return new l0((String) this.f14241b);
            default:
                ArrayList arrayList = new ArrayList((List) this.f14241b);
                for (int size = arrayList.size() - 1; size >= 0; size--) {
                    j0 j0Var = (j0) arrayList.get(size);
                    arrayList.set(size, j0Var.b(i5));
                    i5 += j0Var.a();
                }
                return new l0(arrayList);
        }
    }

    public l0(String str, boolean z5) {
        if (!z5 && str.isEmpty()) {
            throw new IllegalArgumentException("Literal is empty.");
        }
        this.f14241b = str;
    }

    public l0(List list) {
        if (!list.isEmpty()) {
            Object obj = list.get(0);
            n0 n0Var = n0.a;
            if (obj != n0Var && k0.d.g(1, list) != n0Var) {
                this.f14241b = Collections.unmodifiableList(list);
                return;
            }
            throw new IllegalArgumentException("Optional section must not start or end with an or-operator.");
        }
        throw new IllegalArgumentException("Optional section is empty.");
    }
}
