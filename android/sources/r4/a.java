package r4;

import java.util.List;
import o4.f;
import o4.j;
import o4.n;

/* loaded from: classes.dex */
public final class a extends bq.b {

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ int f17127i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ a(List list, int i5) {
        super(6, list);
        this.f17127i = i5;
    }

    @Override // r4.e
    public final o4.e l0() {
        switch (this.f17127i) {
            case 0:
                return new f((List) this.f3143e, 0);
            case 1:
                return new j((List) this.f3143e, 0);
            case 2:
                return new f((List) this.f3143e, 1);
            case 3:
                return new j((List) this.f3143e, 1);
            case 4:
                return new j((List) this.f3143e, 2);
            case 5:
                return new n((List) this.f3143e);
            default:
                return new f((List) this.f3143e, 2);
        }
    }
}
