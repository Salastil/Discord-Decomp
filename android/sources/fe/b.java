package fe;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class b implements wd.e {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8501d = 0;

    /* renamed from: e, reason: collision with root package name */
    public final List f8502e;

    public b(List list) {
        this.f8502e = list;
    }

    @Override // wd.e
    public final int A() {
        switch (this.f8501d) {
        }
        return 1;
    }

    @Override // wd.e
    public final int d(long j) {
        switch (this.f8501d) {
            case 0:
                if (j < 0) {
                }
                break;
        }
        return -1;
    }

    @Override // wd.e
    public final long i(int i5) {
        switch (this.f8501d) {
            case 0:
                ke.b.g(i5 == 0);
                break;
        }
        return 0L;
    }

    @Override // wd.e
    public final List q(long j) {
        switch (this.f8501d) {
            case 0:
                return j >= 0 ? this.f8502e : Collections.EMPTY_LIST;
            default:
                return this.f8502e;
        }
    }

    public b(ArrayList arrayList) {
        this.f8502e = Collections.unmodifiableList(arrayList);
    }
}
