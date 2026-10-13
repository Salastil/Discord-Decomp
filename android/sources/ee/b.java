package ee;

import java.util.Collections;
import java.util.List;
import wd.e;

/* loaded from: classes3.dex */
public final class b implements e {

    /* renamed from: e, reason: collision with root package name */
    public static final b f8081e = new b();

    /* renamed from: d, reason: collision with root package name */
    public final List f8082d;

    public b(wd.b bVar) {
        this.f8082d = Collections.singletonList(bVar);
    }

    @Override // wd.e
    public final int A() {
        return 1;
    }

    @Override // wd.e
    public final int d(long j) {
        return j < 0 ? 0 : -1;
    }

    @Override // wd.e
    public final long i(int i5) {
        ke.b.g(i5 == 0);
        return 0L;
    }

    @Override // wd.e
    public final List q(long j) {
        return j >= 0 ? this.f8082d : Collections.EMPTY_LIST;
    }

    public b() {
        this.f8082d = Collections.EMPTY_LIST;
    }
}
